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

# Unit tests for OpenapiClient::PullsRequestReviewersRequest
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe OpenapiClient::PullsRequestReviewersRequest do
  let(:instance) { OpenapiClient::PullsRequestReviewersRequest.new }

  describe 'test an instance of PullsRequestReviewersRequest' do
    it 'should create an instance of PullsRequestReviewersRequest' do
      expect(instance).to be_instance_of(OpenapiClient::PullsRequestReviewersRequest)
    end
  end
  describe 'test attribute "reviewers"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  describe 'test attribute "team_reviewers"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

end
