# Manifest

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**name** | **String** | The name of the manifest. | 
**file** | Option<[**crate::models::ManifestFile**](manifest_file.md)> |  | [optional]
**metadata** | Option<[**::std::collections::HashMap<String, crate::models::Metadata1>**](metadata_1.md)> | User-defined metadata to store domain-specific information limited to 8 keys with scalar values. | [optional]
**resolved** | Option<[**::std::collections::HashMap<String, crate::models::Dependency>**](dependency.md)> | A collection of resolved package dependencies. | [optional]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


