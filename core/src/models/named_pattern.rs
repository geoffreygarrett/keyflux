use regex::Regex;

pub(crate) struct NamedPattern {
    name: &'static str,
    pub(crate) pattern: &'static Regex,
}

impl NamedPattern {
    pub(crate) fn new(name: &'static str, pattern: &'static str) -> NamedPattern {
        NamedPattern { name, pattern: &Regex::new(pattern).unwrap() }
    }
}