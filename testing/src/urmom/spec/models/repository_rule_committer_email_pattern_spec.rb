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

# Unit tests for OpenapiClient::RepositoryRuleCommitterEmailPattern
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe OpenapiClient::RepositoryRuleCommitterEmailPattern do
  let(:instance) { OpenapiClient::RepositoryRuleCommitterEmailPattern.new }

  describe 'test an instance of RepositoryRuleCommitterEmailPattern' do
    it 'should create an instance of RepositoryRuleCommitterEmailPattern' do
      expect(instance).to be_instance_of(OpenapiClient::RepositoryRuleCommitterEmailPattern)
    end
  end
  describe 'test attribute "type"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
      # validator = Petstore::EnumTest::EnumAttributeValidator.new('String', ["committer_email_pattern"])
      # validator.allowable_values.each do |value|
      #   expect { instance.type = value }.not_to raise_error
      # end
    end
  end

  describe 'test attribute "parameters"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

end