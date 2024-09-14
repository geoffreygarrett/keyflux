=begin
#GitHub v3 REST API

#GitHub's v3 REST API.

The version of the OpenAPI document: 1.1.4

Generated by: https://openapi-generator.tech
OpenAPI Generator version: 6.2.0

=end

require 'spec_helper'
require 'json'

# Unit tests for OpenapiClient::OidcApi
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe 'OidcApi' do
  before do
    # run before each test
    @api_instance = OpenapiClient::OidcApi.new
  end

  after do
    # run after each test
  end

  describe 'test an instance of OidcApi' do
    it 'should create an instance of OidcApi' do
      expect(@api_instance).to be_instance_of(OpenapiClient::OidcApi)
    end
  end

  # unit tests for oidc_get_oidc_custom_sub_template_for_org
  # Get the customization template for an OIDC subject claim for an organization
  # Gets the customization template for an OpenID Connect (OIDC) subject claim.  OAuth app tokens and personal access tokens (classic) need the &#x60;read:org&#x60; scope to use this endpoint.
  # @param org The organization name. The name is not case sensitive.
  # @param [Hash] opts the optional parameters
  # @return [OidcCustomSub]
  describe 'oidc_get_oidc_custom_sub_template_for_org test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for oidc_update_oidc_custom_sub_template_for_org
  # Set the customization template for an OIDC subject claim for an organization
  # Creates or updates the customization template for an OpenID Connect (OIDC) subject claim.  OAuth app tokens and personal access tokens (classic) need the &#x60;write:org&#x60; scope to use this endpoint.
  # @param org The organization name. The name is not case sensitive.
  # @param oidc_custom_sub 
  # @param [Hash] opts the optional parameters
  # @return [Object]
  describe 'oidc_update_oidc_custom_sub_template_for_org test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

end