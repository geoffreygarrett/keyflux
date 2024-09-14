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

# Unit tests for OpenapiClient::ActionsSetDefaultWorkflowPermissions
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe OpenapiClient::ActionsSetDefaultWorkflowPermissions do
  let(:instance) { OpenapiClient::ActionsSetDefaultWorkflowPermissions.new }

  describe 'test an instance of ActionsSetDefaultWorkflowPermissions' do
    it 'should create an instance of ActionsSetDefaultWorkflowPermissions' do
      expect(instance).to be_instance_of(OpenapiClient::ActionsSetDefaultWorkflowPermissions)
    end
  end
  describe 'test attribute "default_workflow_permissions"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  describe 'test attribute "can_approve_pull_request_reviews"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

end