use serde::{Deserialize, Serialize};
use crate::file::key::{Key, KeyTransform};

/// `KeyCollectionTransform` is a trait for transforming collections of keys between different representations.
pub trait KeyCollectionTransform {
    /// Transforms the implementor into a collection of `KeyDetail` mapped by key names.
    fn to_key_detail_collection(&self) -> KeyCollection;
    /// Transforms the implementor into a collection of `KeyValue` mapped by key names.
    fn to_key_value_collection(&self) -> KeyCollection;
    /// Transforms the implementor into a collection of simple string values mapped by key names.
    fn to_value_collection(&self) -> KeyCollection;
}

use indexmap::IndexMap;

/// `KeyCollectionMap` is a type alias for a `HashMap` where the key is a `String` and the value is a `Key`.
pub type KeyCollectionMap = IndexMap<String, Key>;
//
// impl Serialize for KeyCollectionMap {
//     fn serialize<S>(&self, serializer: S) -> Result<S::Ok, S::Error>
//     where
//         S: serde::ser::Serializer,
//     {
//         self.serialize(serializer)
//     }
// }

// // Assuming `Key` is already defined and implements Deserialize
// #[derive(Debug, Clone, Eq, PartialEq, Deserialize, Serialize)]
// pub struct KeyCollectionMap(pub IndexMap<String, Key>);

// impl<'de> Deserialize<'de> for KeyCollectionMap {
//     fn deserialize<D>(deserializer: D) -> Result<Self, D::Error>
//     where
//         D: Deserializer<'de>,
//     {
//         // Use a deserialization pattern that serde recognizes
//         let map = IndexMap::<String, Key>::deserialize(deserializer)?;
//         Ok(KeyCollectionMap(map))
//     }
// }


/// `KeyCollectionList` is a type alias for a `Vec` of `Key`.
///
///
///
// #[derive(Debug, Clone, Serialize, Deserialize, Eq, PartialEq)]
// pub struct KeyCollectionList(Vec<Key>);
pub type KeyCollectionList = Vec<Key>;

// impl Sort for KeyCollection {
//     fn sort(&mut self) {
//         match self {
//             KeyCollection::Map(map) => {
//                 let sorted_map: BTreeMap<_, _> = map.iter().collect();
//                 *map = sorted_map.into_iter().map(|(k, v)| (k.clone(), v.clone())).collect();
//             },
//             KeyCollection::List(list) => {
//                 list.sort();
//             }
//         }
//     }
// }


impl IntoIterator for KeyCollection {
    type Item = (String, Key);
    type IntoIter = Box<dyn Iterator<Item=(String, Key)>>;

    fn into_iter(self) -> Self::IntoIter {
        match self {
            KeyCollection::Map(map) => {
                let map_iter = map.into_iter().map(|(k, v)| (k.clone(), v));
                Box::new(map_iter)
            }
            KeyCollection::List(list) => {
                let list_iter = list.into_iter().enumerate().map(|(index, key)| {
                    let key_str = index.to_string();
                    (key_str, key)
                });
                Box::new(list_iter)
            }
        }
    }
}

pub struct KeyCollectionIter<'a> {
    inner: Box<dyn Iterator<Item=(String, &'a Key)> + 'a>,
}

impl<'a> Iterator for KeyCollectionIter<'a> {
    type Item = (String, &'a Key);

    fn next(&mut self) -> Option<Self::Item> {
        self.inner.next()
    }
}

impl<'a> KeyCollection {
    pub fn iter(&'a self) -> KeyCollectionIter<'a> {
        match self {
            KeyCollection::Map(map) => {
                let map_iter = map.iter().map(|(k, v)| (k.clone(), v));
                KeyCollectionIter {
                    inner: Box::new(map_iter),
                }
            }
            KeyCollection::List(list) => {
                let list_iter = list.iter().enumerate().map(|(index, key)| {
                    let key_str = index.to_string();
                    (key_str, key)
                });
                KeyCollectionIter {
                    inner: Box::new(list_iter),
                }
            }
        }
    }
}

// impl PartialEq for KeyCollectionMap {
//     fn eq(&self, other: &Self) -> bool {
//         self.iter().eq(other.iter())
//     }
// }

// impl PartialEq for KeyCollection {
//     fn eq(&self, other: &Self) -> bool {
//         match (self, other) {
//             (KeyCollection::Map(map1), KeyCollection::Map(map2)) => map1 == map2,
//             (KeyCollection::List(list1), KeyCollection::List(list2)) => list1 == list2,
//             _ => false,
//         }
//     }
// }

// impl Serialize and Deserialize for IndexMap


/// `KeyCollection` is an enum that can hold different types of key collections.
#[derive(Debug, Serialize, Deserialize, Eq, PartialEq)]
// flatten
#[serde(untagged)]
pub enum KeyCollection {
    /// A collection represented as a `HashMap`.
    Map(KeyCollectionMap),
    /// A collection represented as a `Vec`.
    List(KeyCollectionList),
}


impl KeyCollection {
    pub fn sort_by(&mut self) {
        match self {
            KeyCollection::List(list) => list.sort_by(|a, b| a.key().cmp(&b.key())),
            KeyCollection::Map(map) => map.sort_by(|a, _b, c, _d| a.cmp(c))
        }
    }

    pub fn keys(&self) -> Vec<String> {
        match self {
            KeyCollection::List(list) => list.iter().map(|kv| kv.key()).collect(),
            KeyCollection::Map(map) => map.keys().cloned().collect(),
        }
    }

    pub fn get(&self, key: &str) -> Option<&Key> {
        match self {
            KeyCollection::List(list) => list.iter().find(|kv| kv.key() == key),
            KeyCollection::Map(map) => map.get(key),
        }
    }
}

//     pub fn to_list(&self) -> KeyCollectionList {
//         match self {
//             KeyCollection::List(list) => list.clone(),
//             KeyCollection::Map(map) => map.iter().map(|(_, key)| key.clone()).collect(),
//         }
//     }
//
//     pub fn to_map(&self) -> KeyCollectionMap {
//         match self {
//             KeyCollection::List(list) => list.iter().map(|key| (key.key(), key.clone())).collect(),
//             KeyCollection::Map(map) => map.clone(),
//         }
//     }
// }


// Eq , PartialEq , Ord and PartialOrd
// impl

impl KeyCollectionTransform for KeyCollectionMap {
    fn to_key_detail_collection(&self) -> KeyCollection {
        KeyCollection::Map(
            self.iter()
                .map(|(name, key)| (name.clone(), Key::KeyDetail(key.to_key_detail(Some(name)))))
                .collect(),
        )
    }

    fn to_key_value_collection(&self) -> KeyCollection {
        KeyCollection::Map(
            self.iter()
                .map(|(name, key)| (name.clone(), Key::KeyValue(key.to_key_value())))
                .collect(),
        )
    }

    fn to_value_collection(&self) -> KeyCollection {
        KeyCollection::Map(
            self.iter()
                .map(|(name, key)| (name.clone(), Key::Value(key.to_value())))
                .collect(),
        )
    }
}

impl KeyCollectionTransform for KeyCollectionList {
    fn to_key_detail_collection(&self) -> KeyCollection {
        KeyCollection::List(
            self.iter()
                .map(|key| Key::KeyDetail(key.to_key_detail(None)))
                .collect(),
        )
    }

    fn to_key_value_collection(&self) -> KeyCollection {
        KeyCollection::List(
            self.iter()
                .map(|key| Key::KeyValue(key.to_key_value()))
                .collect(),
        )
    }

    fn to_value_collection(&self) -> KeyCollection {
        KeyCollection::List(
            self.iter()
                .map(|key| Key::Value(key.to_value()))
                .collect(),
        )
    }
}

impl KeyCollectionTransform for KeyCollection {
    fn to_key_detail_collection(&self) -> KeyCollection {
        match self {
            KeyCollection::Map(map) => map.to_key_detail_collection(),
            KeyCollection::List(list) => list.to_key_detail_collection(),
        }
    }

    fn to_key_value_collection(&self) -> KeyCollection {
        match self {
            KeyCollection::Map(map) => map.to_key_value_collection(),
            KeyCollection::List(list) => list.to_key_value_collection(),
        }
    }

    fn to_value_collection(&self) -> KeyCollection {
        match self {
            KeyCollection::Map(map) => map.to_value_collection(),
            KeyCollection::List(list) => list.to_value_collection(),
        }
    }
}
