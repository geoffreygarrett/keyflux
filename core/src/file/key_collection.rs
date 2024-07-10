use std::ops::Index;
use indexmap::IndexMap;
use serde::{Deserialize, Serialize};

// use diff::Diff;
use crate::key::{Key, KeyTransform};

/// `KeyCollectionTransform` is a trait for transforming collections of keys between different representations.
pub trait KeyCollectionTransform {
    /// Transforms the implementor into a collection of `KeyDetail` mapped by key names.
    fn to_key_detail_collection(&self) -> KeyCollection;
    /// Transforms the implementor into a collection of `KeyValue` mapped by key names.
    fn to_key_value_collection(&self) -> KeyCollection;
    /// Transforms the implementor into a collection of simple string values mapped by key names.
    fn to_value_collection(&self) -> KeyCollection;
}

/// `KeyCollectionMap` is a type alias for a `HashMap` where the key is a `String` and the value is a `Key`.
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

pub type KeyCollectionMap = IndexMap<String, Key>;

pub type KeyCollectionList = Vec<Key>;

impl IntoIterator for KeyCollection {
    type Item = Key;
    type IntoIter = Box<dyn Iterator<Item=Key>>;

    fn into_iter(self) -> Self::IntoIter {
        match self {
            KeyCollection::Map(map) => Box::new(map.into_iter().map(|(_, v)| v)),
            KeyCollection::List(list) => Box::new(list.into_iter()),
        }
    }
}

impl<'a> IntoIterator for &'a KeyCollection {
    type Item = &'a Key;
    type IntoIter = Box<dyn Iterator<Item=&'a Key> + 'a>;

    fn into_iter(self) -> Self::IntoIter {
        match self {
            KeyCollection::Map(map) => Box::new(map.values()),
            KeyCollection::List(list) => Box::new(list.iter()),
        }
    }
}

pub struct KeyCollectionIter<'a> {
    inner: Box<dyn Iterator<Item=&'a Key> + 'a>,
}

impl<'a> Iterator for KeyCollectionIter<'a> {
    type Item = &'a Key;

    fn next(&mut self) -> Option<Self::Item> {
        self.inner.next()
    }
}

// impl<'a> Index<usize> for KeyCollectionIter<'a> {
//     type Output = &'a Key;
//
//     fn index(&self, index: usize) -> &Self::Output {
//         let (_, key) = self.inner
//             .clone()  // Cloning to avoid consuming the iterator
//             .nth(index)
//             .expect("Index out of bounds or key not found");
//
//         key
//     }
// }

impl<'a> KeyCollection {
    pub fn iter(&'a self) -> KeyCollectionIter<'a> {
        match self {
            KeyCollection::Map(map) => KeyCollectionIter {
                inner: Box::new(map.values()),
            },
            KeyCollection::List(list) => KeyCollectionIter {
                inner: Box::new(list.iter()),
            },
        }
    }
}

impl From<KeyCollectionMap> for KeyCollection {
    fn from(map: KeyCollectionMap) -> Self {
        KeyCollection::Map(map)
    }
}

impl From<KeyCollectionList> for KeyCollection {
    fn from(list: KeyCollectionList) -> Self {
        KeyCollection::List(list)
    }
}

impl FromIterator<Key> for KeyCollection {
    fn from_iter<T: IntoIterator<Item=Key>>(iter: T) -> Self {
        let keys: Vec<Key> = iter.into_iter().collect();
        KeyCollection::List(keys.into())
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
            KeyCollection::List(list) => list.sort_by(|a, b| a.name().cmp(&b.name())),
            KeyCollection::Map(map) => map.sort_by(|a, _b, c, _d| a.cmp(c)),
        }
    }

    pub fn new() -> Self {
        KeyCollection::List(Vec::new())
    }

    pub fn keys(&self) -> Vec<String> {
        match self {
            KeyCollection::List(list) => list.iter().map(|kv| kv.name()).collect(),
            KeyCollection::Map(map) => map.keys().cloned().collect(),
        }
    }

    pub fn get(&self, key: &str) -> Option<&Key> {
        match self {
            KeyCollection::List(list) => list.iter().find(|kv| kv.name() == key),
            KeyCollection::Map(map) => map.get(key),
        }
    }

    pub fn insert(&mut self, key: Key) {
        match self {
            KeyCollection::List(list) => list.push(key),
            KeyCollection::Map(map) => {
                map.insert(key.name(), key);
            }
        }
    }

    pub fn upsert(&mut self, key: Key) {
        match self {
            KeyCollection::List(list) => {
                if let Some(index) = list.iter().position(|kv| kv.name() == key.name()) {
                    list[index] = key;
                } else {
                    list.push(key);
                }
            }
            KeyCollection::Map(map) => {
                map.insert(key.name(), key);
            }
        }
    }

    pub fn merge(&mut self, other: KeyCollection) {
        match (self, other) {
            (KeyCollection::List(list1), KeyCollection::List(list2)) => list1.extend(list2),
            (KeyCollection::Map(map1), KeyCollection::Map(map2)) => map1.extend(map2.into_iter()),
            (KeyCollection::List(list), KeyCollection::Map(map)) => {
                let map_list: Vec<Key> = map.into_iter().map(|(_, key)| key).collect();
                list.extend(map_list);
            }
            (KeyCollection::Map(map), KeyCollection::List(list)) => {
                for key in list {
                    map.insert(key.name(), key.clone());
                }
            }
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

// Implement Index trait for KeyCollectionIter<'_>

// Eq , PartialEq , Ord and PartialOrd
// impl

impl<'a> IntoIterator for &'a mut KeyCollection {
    type Item = &'a mut Key;
    type IntoIter = Box<dyn Iterator<Item=Self::Item> + 'a>;

    fn into_iter(self) -> Self::IntoIter {
        match self {
            KeyCollection::Map(map) => Box::new(map.values_mut()),
            KeyCollection::List(list) => Box::new(list.iter_mut()),
        }
    }
}

pub struct KeyCollectionIterMut<'a> {
    inner: Box<dyn Iterator<Item=&'a mut Key> + 'a>,
}

impl<'a> Iterator for KeyCollectionIterMut<'a> {
    type Item = &'a mut Key;

    fn next(&mut self) -> Option<Self::Item> {
        self.inner.next()
    }
}

impl<'a> KeyCollection {
    /// Returns a mutable iterator over the keys.
    pub fn iter_mut(&'a mut self) -> KeyCollectionIterMut<'a> {
        match self {
            KeyCollection::Map(map) => KeyCollectionIterMut {
                inner: Box::new(map.values_mut()),
            },
            KeyCollection::List(list) => KeyCollectionIterMut {
                inner: Box::new(list.iter_mut()),
            },
        }
    }
}

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
        KeyCollection::List(self.iter().map(|key| Key::Value(key.to_value())).collect())
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
