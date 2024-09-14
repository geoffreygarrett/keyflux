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

# Unit tests for OpenapiClient::ActionsSetSelectedReposForOrgVariableRequest
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe OpenapiClient::ActionsSetSelectedReposForOrgVariableRequest do
  let(:instance) { OpenapiClient::ActionsSetSelectedReposForOrgVariableRequest.new }

  describe 'test an instance of ActionsSetSelectedReposForOrgVariableRequest' do
    it 'should create an instance of ActionsSetSelectedReposForOrgVariableRequest' do
      expect(instance).to be_instance_of(OpenapiClient::ActionsSetSelectedReposForOrgVariableRequest)
    end
  end
  describe 'test attribute "selected_repository_ids"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

end