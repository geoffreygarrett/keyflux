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

# Unit tests for OpenapiClient::ReposUpdateInvitationRequest
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe OpenapiClient::ReposUpdateInvitationRequest do
  let(:instance) { OpenapiClient::ReposUpdateInvitationRequest.new }

  describe 'test an instance of ReposUpdateInvitationRequest' do
    it 'should create an instance of ReposUpdateInvitationRequest' do
      expect(instance).to be_instance_of(OpenapiClient::ReposUpdateInvitationRequest)
    end
  end
  describe 'test attribute "permissions"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
      # validator = Petstore::EnumTest::EnumAttributeValidator.new('String', ["read", "write", "maintain", "triage", "admin"])
      # validator.allowable_values.each do |value|
      #   expect { instance.permissions = value }.not_to raise_error
      # end
    end
  end

end