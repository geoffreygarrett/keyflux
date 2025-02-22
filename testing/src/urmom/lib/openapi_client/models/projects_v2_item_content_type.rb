=begin
#GitHub v3 REST API

#GitHub's v3 REST API.

The version of the OpenAPI document: 1.1.4

Generated by: https://openapi-generator.tech
OpenAPI Generator version: 6.2.0

=end

require 'date'
require 'time'

module OpenapiClient
  class ProjectsV2ItemContentType
    ISSUE = "Issue".freeze
    PULL_REQUEST = "PullRequest".freeze
    DRAFT_ISSUE = "DraftIssue".freeze

    def self.all_vars
      @all_vars ||= [ISSUE, PULL_REQUEST, DRAFT_ISSUE].freeze
    end

    # Builds the enum from string
    # @param [String] The enum value in the form of the string
    # @return [String] The enum value
    def self.build_from_hash(value)
      new.build_from_hash(value)
    end

    # Builds the enum from string
    # @param [String] The enum value in the form of the string
    # @return [String] The enum value
    def build_from_hash(value)
      return value if ProjectsV2ItemContentType.all_vars.include?(value)
      raise "Invalid ENUM value #{value} for class #ProjectsV2ItemContentType"
    end
  end
end
