=begin
#GitHub v3 REST API

#GitHub's v3 REST API.

The version of the OpenAPI document: 1.1.4

Generated by: https://openapi-generator.tech
OpenAPI Generator version: 6.2.0

=end

require 'spec_helper'
require 'json'
require 'date'

# Unit tests for OpenapiClient::CodeScanningVariantAnalysisSkippedRepositories
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe OpenapiClient::CodeScanningVariantAnalysisSkippedRepositories do
  let(:instance) { OpenapiClient::CodeScanningVariantAnalysisSkippedRepositories.new }

  describe 'test an instance of CodeScanningVariantAnalysisSkippedRepositories' do
    it 'should create an instance of CodeScanningVariantAnalysisSkippedRepositories' do
      expect(instance).to be_instance_of(OpenapiClient::CodeScanningVariantAnalysisSkippedRepositories)
    end
  end
  describe 'test attribute "access_mismatch_repos"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  describe 'test attribute "not_found_repos"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  describe 'test attribute "no_codeql_db_repos"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  describe 'test attribute "over_limit_repos"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

end
