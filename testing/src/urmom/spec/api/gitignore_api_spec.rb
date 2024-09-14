=begin
#GitHub v3 REST API

#GitHub's v3 REST API.

The version of the OpenAPI document: 1.1.4

Generated by: https://openapi-generator.tech
OpenAPI Generator version: 6.2.0

=end

require 'spec_helper'
require 'json'

# Unit tests for OpenapiClient::GitignoreApi
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe 'GitignoreApi' do
  before do
    # run before each test
    @api_instance = OpenapiClient::GitignoreApi.new
  end

  after do
    # run after each test
  end

  describe 'test an instance of GitignoreApi' do
    it 'should create an instance of GitignoreApi' do
      expect(@api_instance).to be_instance_of(OpenapiClient::GitignoreApi)
    end
  end

  # unit tests for gitignore_get_all_templates
  # Get all gitignore templates
  # List all templates available to pass as an option when [creating a repository](https://docs.github.com/rest/repos/repos#create-a-repository-for-the-authenticated-user).
  # @param [Hash] opts the optional parameters
  # @return [Array<String>]
  describe 'gitignore_get_all_templates test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for gitignore_get_template
  # Get a gitignore template
  # Get the content of a gitignore template.  This endpoint supports the following custom media types. For more information, see \&quot;[Media types](https://docs.github.com/rest/using-the-rest-api/getting-started-with-the-rest-api#media-types).\&quot;  - **&#x60;application/vnd.github.raw+json&#x60;**: Returns the raw .gitignore contents.
  # @param name 
  # @param [Hash] opts the optional parameters
  # @return [GitignoreTemplate]
  describe 'gitignore_get_template test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

end