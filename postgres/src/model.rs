extern crate pest;

#[derive(Parser)]
#[grammar = "query.pest"]
pub struct EntityViewParser;

#[derive(Debug)]
pub struct SqlQuery {
    pub selects: Vec<Select>,
    pub from: Option<Source>,
    pub joins: Vec<Join>,
    pub where_clause: Option<String>,
}

#[derive(Debug)]
pub struct Select {
    pub columns: Vec<String>,
    pub table_alias: Option<String>,
}

#[derive(Debug)]
pub struct TableDef {
    pub table_name: String,
    pub alias: Option<String>,
    pub body: Vec<Item>,
}

#[derive(Debug)]
pub struct Source {
    pub table_name: String,
    pub alias: Option<String>,
}

#[derive(Debug)]
pub struct Join {
    pub table_name: String,
    pub alias: Option<String>,
    pub on: String,
}

#[derive(Debug)]
pub struct Item {
    pub column: String,
    pub alias: Option<String>,
}

impl Default for SqlQuery {
    fn default() -> Self {
        SqlQuery {
            selects: vec![],
            from: None,
            joins: vec![],
            where_clause: None,
        }
    }
}
