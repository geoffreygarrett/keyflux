=begin
#GitHub v3 REST API

#GitHub's v3 REST API.

The version of the OpenAPI document: 1.1.4

Generated by: https://openapi-generator.tech
OpenAPI Generator version: 6.2.0

=end

require 'spec_helper'
require 'json'

# Unit tests for OpenapiClient::BillingApi
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe 'BillingApi' do
  before do
    # run before each test
    @api_instance = OpenapiClient::BillingApi.new
  end

  after do
    # run after each test
  end

  describe 'test an instance of BillingApi' do
    it 'should create an instance of BillingApi' do
      expect(@api_instance).to be_instance_of(OpenapiClient::BillingApi)
    end
  end

  # unit tests for billing_get_github_actions_billing_org
  # Get GitHub Actions billing for an organization
  # Gets the summary of the free and paid GitHub Actions minutes used.  Paid minutes only apply to workflows in private repositories that use GitHub-hosted runners. Minutes used is listed for each GitHub-hosted runner operating system. Any job re-runs are also included in the usage. The usage returned includes any minute multipliers for macOS and Windows runners, and is rounded up to the nearest whole minute. For more information, see \&quot;[Managing billing for GitHub Actions](https://docs.github.com/github/setting-up-and-managing-billing-and-payments-on-github/managing-billing-for-github-actions)\&quot;.  OAuth app tokens and personal access tokens (classic) need the &#x60;repo&#x60; or &#x60;admin:org&#x60; scope to use this endpoint.
  # @param org The organization name. The name is not case sensitive.
  # @param [Hash] opts the optional parameters
  # @return [ActionsBillingUsage]
  describe 'billing_get_github_actions_billing_org test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for billing_get_github_actions_billing_user
  # Get GitHub Actions billing for a user
  # Gets the summary of the free and paid GitHub Actions minutes used.  Paid minutes only apply to workflows in private repositories that use GitHub-hosted runners. Minutes used is listed for each GitHub-hosted runner operating system. Any job re-runs are also included in the usage. The usage returned includes any minute multipliers for macOS and Windows runners, and is rounded up to the nearest whole minute. For more information, see \&quot;[Managing billing for GitHub Actions](https://docs.github.com/github/setting-up-and-managing-billing-and-payments-on-github/managing-billing-for-github-actions)\&quot;.  OAuth app tokens and personal access tokens (classic) need the &#x60;user&#x60; scope to use this endpoint.
  # @param username The handle for the GitHub user account.
  # @param [Hash] opts the optional parameters
  # @return [ActionsBillingUsage]
  describe 'billing_get_github_actions_billing_user test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for billing_get_github_packages_billing_org
  # Get GitHub Packages billing for an organization
  # Gets the free and paid storage used for GitHub Packages in gigabytes.  Paid minutes only apply to packages stored for private repositories. For more information, see \&quot;[Managing billing for GitHub Packages](https://docs.github.com/github/setting-up-and-managing-billing-and-payments-on-github/managing-billing-for-github-packages).\&quot;  OAuth app tokens and personal access tokens (classic) need the &#x60;repo&#x60; or &#x60;admin:org&#x60; scope to use this endpoint.
  # @param org The organization name. The name is not case sensitive.
  # @param [Hash] opts the optional parameters
  # @return [PackagesBillingUsage]
  describe 'billing_get_github_packages_billing_org test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for billing_get_github_packages_billing_user
  # Get GitHub Packages billing for a user
  # Gets the free and paid storage used for GitHub Packages in gigabytes.  Paid minutes only apply to packages stored for private repositories. For more information, see \&quot;[Managing billing for GitHub Packages](https://docs.github.com/github/setting-up-and-managing-billing-and-payments-on-github/managing-billing-for-github-packages).\&quot;  OAuth app tokens and personal access tokens (classic) need the &#x60;user&#x60; scope to use this endpoint.
  # @param username The handle for the GitHub user account.
  # @param [Hash] opts the optional parameters
  # @return [PackagesBillingUsage]
  describe 'billing_get_github_packages_billing_user test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for billing_get_shared_storage_billing_org
  # Get shared storage billing for an organization
  # Gets the estimated paid and estimated total storage used for GitHub Actions and GitHub Packages.  Paid minutes only apply to packages stored for private repositories. For more information, see \&quot;[Managing billing for GitHub Packages](https://docs.github.com/github/setting-up-and-managing-billing-and-payments-on-github/managing-billing-for-github-packages).\&quot;  OAuth app tokens and personal access tokens (classic) need the &#x60;repo&#x60; or &#x60;admin:org&#x60; scope to use this endpoint.
  # @param org The organization name. The name is not case sensitive.
  # @param [Hash] opts the optional parameters
  # @return [CombinedBillingUsage]
  describe 'billing_get_shared_storage_billing_org test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for billing_get_shared_storage_billing_user
  # Get shared storage billing for a user
  # Gets the estimated paid and estimated total storage used for GitHub Actions and GitHub Packages.  Paid minutes only apply to packages stored for private repositories. For more information, see \&quot;[Managing billing for GitHub Packages](https://docs.github.com/github/setting-up-and-managing-billing-and-payments-on-github/managing-billing-for-github-packages).\&quot;  OAuth app tokens and personal access tokens (classic) need the &#x60;user&#x60; scope to use this endpoint.
  # @param username The handle for the GitHub user account.
  # @param [Hash] opts the optional parameters
  # @return [CombinedBillingUsage]
  describe 'billing_get_shared_storage_billing_user test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

end