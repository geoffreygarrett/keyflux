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

# Unit tests for OpenapiClient::SecretScanningAlertResolution
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe OpenapiClient::SecretScanningAlertResolution do
  let(:instance) { OpenapiClient::SecretScanningAlertResolution.new }

  describe 'test an instance of SecretScanningAlertResolution' do
    it 'should create an instance of SecretScanningAlertResolution' do
      expect(instance).to be_instance_of(OpenapiClient::SecretScanningAlertResolution)
    end
  end
end
