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

# Unit tests for OpenapiClient::CodeSecurityAttachConfigurationRequest
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe OpenapiClient::CodeSecurityAttachConfigurationRequest do
  let(:instance) { OpenapiClient::CodeSecurityAttachConfigurationRequest.new }

  describe 'test an instance of CodeSecurityAttachConfigurationRequest' do
    it 'should create an instance of CodeSecurityAttachConfigurationRequest' do
      expect(instance).to be_instance_of(OpenapiClient::CodeSecurityAttachConfigurationRequest)
    end
  end
  describe 'test attribute "scope"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
      # validator = Petstore::EnumTest::EnumAttributeValidator.new('String', ["all", "public", "private_or_internal", "selected"])
      # validator.allowable_values.each do |value|
      #   expect { instance.scope = value }.not_to raise_error
      # end
    end
  end

  describe 'test attribute "selected_repository_ids"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

end
