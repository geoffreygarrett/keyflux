/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// DependencyGraphSpdxSbom : A schema for the SPDX JSON format returned by the Dependency Graph.



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct DependencyGraphSpdxSbom {
    #[serde(rename = "sbom")]
    pub sbom: Box<crate::models::DependencyGraphSpdxSbomSbom>,
}

impl DependencyGraphSpdxSbom {
    /// A schema for the SPDX JSON format returned by the Dependency Graph.
    pub fn new(sbom: crate::models::DependencyGraphSpdxSbomSbom) -> DependencyGraphSpdxSbom {
        DependencyGraphSpdxSbom {
            sbom: Box::new(sbom),
        }
    }
}

