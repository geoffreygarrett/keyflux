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

# Unit tests for OpenapiClient::OrgsReviewPatGrantRequestsInBulkRequest
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe OpenapiClient::OrgsReviewPatGrantRequestsInBulkRequest do
  let(:instance) { OpenapiClient::OrgsReviewPatGrantRequestsInBulkRequest.new }

  describe 'test an instance of OrgsReviewPatGrantRequestsInBulkRequest' do
    it 'should create an instance of OrgsReviewPatGrantRequestsInBulkRequest' do
      expect(instance).to be_instance_of(OpenapiClient::OrgsReviewPatGrantRequestsInBulkRequest)
    end
  end
  describe 'test attribute "pat_request_ids"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  describe 'test attribute "action"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
      # validator = Petstore::EnumTest::EnumAttributeValidator.new('String', ["approve", "deny"])
      # validator.allowable_values.each do |value|
      #   expect { instance.action = value }.not_to raise_error
      # end
    end
  end

  describe 'test attribute "reason"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

end