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

# Unit tests for OpenapiClient::CombinedBillingUsage
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe OpenapiClient::CombinedBillingUsage do
  let(:instance) { OpenapiClient::CombinedBillingUsage.new }

  describe 'test an instance of CombinedBillingUsage' do
    it 'should create an instance of CombinedBillingUsage' do
      expect(instance).to be_instance_of(OpenapiClient::CombinedBillingUsage)
    end
  end
  describe 'test attribute "days_left_in_billing_cycle"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  describe 'test attribute "estimated_paid_storage_for_month"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  describe 'test attribute "estimated_storage_for_month"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

end