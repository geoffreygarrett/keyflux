use pest::iterators::Pair;

// Assuming the following structs are defined correctly elsewhere in your code
use crate::model::{Select, SqlQuery, Join, TableDef, Source, Item};

#[derive(Parser)]
#[grammar = "query.pest"]
pub struct EntityViewParser;

fn parse_table_def(pair: Pair<Rule>) -> TableDef {
    let mut pairs = pair.into_inner();
    let table_name = pairs.next().unwrap().as_str().to_string();
    let alias = if let Some(inner_pair) = pairs.next() {
        if inner_pair.as_rule() == Rule::identifier {
            Some(inner_pair.as_str().to_string())
        } else {
            None
        }
    } else {
        None
    };
    let body = parse_body(pairs.next().unwrap());

    TableDef { table_name, alias, body }
}

fn parse_item(pair: Pair<Rule>) -> Item {
    match pair.as_rule() {
        Rule::table_def => {
            let table_def = parse_table_def(pair);
            Item {
                column: table_def.table_name,
                alias: table_def.alias,
            }
        },
        Rule::identifier => {
            let column = pair.as_str().to_string();
            Item {
                column,
                alias: None,
            }
        },
        Rule::item => match pair.into_inner().next() {
            Some(inner_pair) => parse_item(inner_pair),
            None => Item {
                column: "".to_string(),
                alias: None,
            },
        },
        _ => panic!("Unexpected rule in parse_item: {:?}", pair.as_rule()),
    }
}

fn parse_select(pair: Pair<Rule>) -> Select {
    let item = parse_item(pair);
    Select {
        columns: vec![item.column],
        table_alias: item.alias,
    }
}

pub(crate) fn parse_query(pair: Pair<Rule>) -> SqlQuery {
    let mut query = SqlQuery::default();

    for inner_pair in pair.into_inner() {
        match inner_pair.as_rule() {
            Rule::item => {
                let select = parse_select(inner_pair);
                query.selects.push(select);
            },
            Rule::source => {
                query.from = Some(parse_source(inner_pair));
            },
            Rule::join_clause => {
                query.joins.push(parse_join(inner_pair));
            },
            Rule::where_clause => {
                query.where_clause = Some(inner_pair.as_str().to_string());
            },
            _ => panic!("Unexpected rule: {:?}", inner_pair.as_rule()),
        }
    }

    query
}

fn parse_source(pair: Pair<Rule>) -> Source {
    let mut pairs = pair.into_inner();
    let table_name = pairs.next().unwrap().as_str().to_string();
    let alias = pairs.next().map(|p| p.as_str().to_string());

    Source { table_name, alias }
}

fn parse_join(pair: Pair<Rule>) -> Join {
    let mut pairs = pair.into_inner();
    let table_name = pairs.next().unwrap().as_str().to_string();
    let alias = pairs.next().map(|p| p.as_str().to_string());
    let on_left = pairs.next().unwrap().as_str().to_string();
    let on_right = pairs.next().unwrap().as_str().to_string();

    Join { table_name, alias, on: format!("{} = {}", on_left, on_right) }
}

fn parse_body(pair: Pair<Rule>) -> Vec<Item> {
    let mut items = vec![];

    for inner_pair in pair.into_inner() {
        match inner_pair.as_rule() {
            Rule::item => {
                let item = parse_item(inner_pair);
                items.push(item);
            }
            _ => panic!("Unexpected rule in parse_body: {:?}", inner_pair.as_rule()),
        }
    }

    items
}
