// use std::collections::HashMap;
// use std::sync::{Arc, Mutex};
//
// use handlebars::Handlebars;
// use serde_json::Value;
//
// #[derive(Clone)]
// pub struct FluxContext {
//     handlebars: Arc<Handlebars<'static>>,
//     data: Arc<Mutex<HashMap<String, String>>>,
// }
//
// impl FluxContext {
//     pub fn new() -> Self {
//         let handlebars = Handlebars::new();
//         Self {
//             handlebars: Arc::new(handlebars),
//             data: Arc::new(Mutex::new(HashMap::new())),
//         }
//     }
//
//     pub async fn render(&self, template: &str, data: &Value) -> Result<String, handlebars::RenderError> {
//         self.handlebars.render_template(template, data)
//     }
//
//     pub async fn set_data(&self, key: &str, value: &str) {
//         let mut data = self.data.lock().await;
//         data.insert(key.to_string(), value.to_string());
//     }
// }