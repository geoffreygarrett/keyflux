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

# Unit tests for OpenapiClient::ChecksCreateRequestOneOf1
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe OpenapiClient::ChecksCreateRequestOneOf1 do
  let(:instance) { OpenapiClient::ChecksCreateRequestOneOf1.new }

  describe 'test an instance of ChecksCreateRequestOneOf1' do
    it 'should create an instance of ChecksCreateRequestOneOf1' do
      expect(instance).to be_instance_of(OpenapiClient::ChecksCreateRequestOneOf1)
    end
  end
  describe 'test attribute "status"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
      # validator = Petstore::EnumTest::EnumAttributeValidator.new('String', ["queued", "in_progress"])
      # validator.allowable_values.each do |value|
      #   expect { instance.status = value }.not_to raise_error
      # end
    end
  end

end
