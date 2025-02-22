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

# Unit tests for OpenapiClient::AppPermissions
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe OpenapiClient::AppPermissions do
  let(:instance) { OpenapiClient::AppPermissions.new }

  describe 'test an instance of AppPermissions' do
    it 'should create an instance of AppPermissions' do
      expect(instance).to be_instance_of(OpenapiClient::AppPermissions)
    end
  end
  describe 'test attribute "actions"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
      # validator = Petstore::EnumTest::EnumAttributeValidator.new('String', ["read", "write"])
      # validator.allowable_values.each do |value|
      #   expect { instance.actions = value }.not_to raise_error
      # end
    end
  end

  describe 'test attribute "administration"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
      # validator = Petstore::EnumTest::EnumAttributeValidator.new('String', ["read", "write"])
      # validator.allowable_values.each do |value|
      #   expect { instance.administration = value }.not_to raise_error
      # end
    end
  end

  describe 'test attribute "checks"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
      # validator = Petstore::EnumTest::EnumAttributeValidator.new('String', ["read", "write"])
      # validator.allowable_values.each do |value|
      #   expect { instance.checks = value }.not_to raise_error
      # end
    end
  end

  describe 'test attribute "content_references"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
      # validator = Petstore::EnumTest::EnumAttributeValidator.new('String', ["read", "write"])
      # validator.allowable_values.each do |value|
      #   expect { instance.content_references = value }.not_to raise_error
      # end
    end
  end

  describe 'test attribute "contents"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
      # validator = Petstore::EnumTest::EnumAttributeValidator.new('String', ["read", "write"])
      # validator.allowable_values.each do |value|
      #   expect { instance.contents = value }.not_to raise_error
      # end
    end
  end

  describe 'test attribute "deployments"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
      # validator = Petstore::EnumTest::EnumAttributeValidator.new('String', ["read", "write"])
      # validator.allowable_values.each do |value|
      #   expect { instance.deployments = value }.not_to raise_error
      # end
    end
  end

  describe 'test attribute "discussions"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
      # validator = Petstore::EnumTest::EnumAttributeValidator.new('String', ["read", "write"])
      # validator.allowable_values.each do |value|
      #   expect { instance.discussions = value }.not_to raise_error
      # end
    end
  end

  describe 'test attribute "emails"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
      # validator = Petstore::EnumTest::EnumAttributeValidator.new('String', ["read", "write"])
      # validator.allowable_values.each do |value|
      #   expect { instance.emails = value }.not_to raise_error
      # end
    end
  end

  describe 'test attribute "environments"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
      # validator = Petstore::EnumTest::EnumAttributeValidator.new('String', ["read", "write"])
      # validator.allowable_values.each do |value|
      #   expect { instance.environments = value }.not_to raise_error
      # end
    end
  end

  describe 'test attribute "issues"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
      # validator = Petstore::EnumTest::EnumAttributeValidator.new('String', ["read", "write"])
      # validator.allowable_values.each do |value|
      #   expect { instance.issues = value }.not_to raise_error
      # end
    end
  end

  describe 'test attribute "keys"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
      # validator = Petstore::EnumTest::EnumAttributeValidator.new('String', ["read", "write"])
      # validator.allowable_values.each do |value|
      #   expect { instance.keys = value }.not_to raise_error
      # end
    end
  end

  describe 'test attribute "members"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
      # validator = Petstore::EnumTest::EnumAttributeValidator.new('String', ["read", "write"])
      # validator.allowable_values.each do |value|
      #   expect { instance.members = value }.not_to raise_error
      # end
    end
  end

  describe 'test attribute "metadata"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
      # validator = Petstore::EnumTest::EnumAttributeValidator.new('String', ["read", "write"])
      # validator.allowable_values.each do |value|
      #   expect { instance.metadata = value }.not_to raise_error
      # end
    end
  end

  describe 'test attribute "organization_administration"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
      # validator = Petstore::EnumTest::EnumAttributeValidator.new('String', ["read", "write"])
      # validator.allowable_values.each do |value|
      #   expect { instance.organization_administration = value }.not_to raise_error
      # end
    end
  end

  describe 'test attribute "organization_hooks"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
      # validator = Petstore::EnumTest::EnumAttributeValidator.new('String', ["read", "write"])
      # validator.allowable_values.each do |value|
      #   expect { instance.organization_hooks = value }.not_to raise_error
      # end
    end
  end

  describe 'test attribute "organization_packages"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
      # validator = Petstore::EnumTest::EnumAttributeValidator.new('String', ["read", "write"])
      # validator.allowable_values.each do |value|
      #   expect { instance.organization_packages = value }.not_to raise_error
      # end
    end
  end

  describe 'test attribute "organization_plan"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
      # validator = Petstore::EnumTest::EnumAttributeValidator.new('String', ["read", "write"])
      # validator.allowable_values.each do |value|
      #   expect { instance.organization_plan = value }.not_to raise_error
      # end
    end
  end

  describe 'test attribute "organization_projects"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
      # validator = Petstore::EnumTest::EnumAttributeValidator.new('String', ["read", "write", "admin"])
      # validator.allowable_values.each do |value|
      #   expect { instance.organization_projects = value }.not_to raise_error
      # end
    end
  end

  describe 'test attribute "organization_secrets"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
      # validator = Petstore::EnumTest::EnumAttributeValidator.new('String', ["read", "write"])
      # validator.allowable_values.each do |value|
      #   expect { instance.organization_secrets = value }.not_to raise_error
      # end
    end
  end

  describe 'test attribute "organization_self_hosted_runners"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
      # validator = Petstore::EnumTest::EnumAttributeValidator.new('String', ["read", "write"])
      # validator.allowable_values.each do |value|
      #   expect { instance.organization_self_hosted_runners = value }.not_to raise_error
      # end
    end
  end

  describe 'test attribute "organization_user_blocking"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
      # validator = Petstore::EnumTest::EnumAttributeValidator.new('String', ["read", "write"])
      # validator.allowable_values.each do |value|
      #   expect { instance.organization_user_blocking = value }.not_to raise_error
      # end
    end
  end

  describe 'test attribute "packages"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
      # validator = Petstore::EnumTest::EnumAttributeValidator.new('String', ["read", "write"])
      # validator.allowable_values.each do |value|
      #   expect { instance.packages = value }.not_to raise_error
      # end
    end
  end

  describe 'test attribute "pages"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
      # validator = Petstore::EnumTest::EnumAttributeValidator.new('String', ["read", "write"])
      # validator.allowable_values.each do |value|
      #   expect { instance.pages = value }.not_to raise_error
      # end
    end
  end

  describe 'test attribute "pull_requests"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
      # validator = Petstore::EnumTest::EnumAttributeValidator.new('String', ["read", "write"])
      # validator.allowable_values.each do |value|
      #   expect { instance.pull_requests = value }.not_to raise_error
      # end
    end
  end

  describe 'test attribute "repository_hooks"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
      # validator = Petstore::EnumTest::EnumAttributeValidator.new('String', ["read", "write"])
      # validator.allowable_values.each do |value|
      #   expect { instance.repository_hooks = value }.not_to raise_error
      # end
    end
  end

  describe 'test attribute "repository_projects"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
      # validator = Petstore::EnumTest::EnumAttributeValidator.new('String', ["read", "write"])
      # validator.allowable_values.each do |value|
      #   expect { instance.repository_projects = value }.not_to raise_error
      # end
    end
  end

  describe 'test attribute "secret_scanning_alerts"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
      # validator = Petstore::EnumTest::EnumAttributeValidator.new('String', ["read", "write"])
      # validator.allowable_values.each do |value|
      #   expect { instance.secret_scanning_alerts = value }.not_to raise_error
      # end
    end
  end

  describe 'test attribute "secrets"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
      # validator = Petstore::EnumTest::EnumAttributeValidator.new('String', ["read", "write"])
      # validator.allowable_values.each do |value|
      #   expect { instance.secrets = value }.not_to raise_error
      # end
    end
  end

  describe 'test attribute "security_events"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
      # validator = Petstore::EnumTest::EnumAttributeValidator.new('String', ["read", "write"])
      # validator.allowable_values.each do |value|
      #   expect { instance.security_events = value }.not_to raise_error
      # end
    end
  end

  describe 'test attribute "security_scanning_alert"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
      # validator = Petstore::EnumTest::EnumAttributeValidator.new('String', ["read", "write"])
      # validator.allowable_values.each do |value|
      #   expect { instance.security_scanning_alert = value }.not_to raise_error
      # end
    end
  end

  describe 'test attribute "single_file"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
      # validator = Petstore::EnumTest::EnumAttributeValidator.new('String', ["read", "write"])
      # validator.allowable_values.each do |value|
      #   expect { instance.single_file = value }.not_to raise_error
      # end
    end
  end

  describe 'test attribute "statuses"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
      # validator = Petstore::EnumTest::EnumAttributeValidator.new('String', ["read", "write"])
      # validator.allowable_values.each do |value|
      #   expect { instance.statuses = value }.not_to raise_error
      # end
    end
  end

  describe 'test attribute "team_discussions"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
      # validator = Petstore::EnumTest::EnumAttributeValidator.new('String', ["read", "write"])
      # validator.allowable_values.each do |value|
      #   expect { instance.team_discussions = value }.not_to raise_error
      # end
    end
  end

  describe 'test attribute "vulnerability_alerts"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
      # validator = Petstore::EnumTest::EnumAttributeValidator.new('String', ["read", "write"])
      # validator.allowable_values.each do |value|
      #   expect { instance.vulnerability_alerts = value }.not_to raise_error
      # end
    end
  end

  describe 'test attribute "workflows"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
      # validator = Petstore::EnumTest::EnumAttributeValidator.new('String', ["read", "write"])
      # validator.allowable_values.each do |value|
      #   expect { instance.workflows = value }.not_to raise_error
      # end
    end
  end

end
