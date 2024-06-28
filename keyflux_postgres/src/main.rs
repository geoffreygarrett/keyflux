mod parse;
mod model;

extern crate pest;
#[macro_use]
extern crate pest_derive;

use pest::Parser;
use crate::parse::{EntityViewParser, parse_query, Rule};


fn main() {
    let input = "asset:asset_id(*, asset_name)";
    println!("Parsing input: {}", input);

    let mut parsed = EntityViewParser::parse(Rule::query, input).expect("Failed to parse input");
    if let Some(first_pair) = parsed.next() {
        let sql_query = parse_query(first_pair);
        println!("{:#?}", sql_query);
    } else {
        println!("No valid parsed elements found.");
    }
}
