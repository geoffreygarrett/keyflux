/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// ActionsCacheUsageByRepository : GitHub Actions Cache Usage by repository.



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct ActionsCacheUsageByRepository {
    /// The repository owner and name for the cache usage being shown.
    #[serde(rename = "full_name")]
    pub full_name: String,
    /// The sum of the size in bytes of all the active cache items in the repository.
    #[serde(rename = "active_caches_size_in_bytes")]
    pub active_caches_size_in_bytes: i32,
    /// The number of active caches in the repository.
    #[serde(rename = "active_caches_count")]
    pub active_caches_count: i32,
}

impl ActionsCacheUsageByRepository {
    /// GitHub Actions Cache Usage by repository.
    pub fn new(full_name: String, active_caches_size_in_bytes: i32, active_caches_count: i32) -> ActionsCacheUsageByRepository {
        ActionsCacheUsageByRepository {
            full_name,
            active_caches_size_in_bytes,
            active_caches_count,
        }
    }
}

