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
  class InteractionGroup
    EXISTING_USERS = "existing_users".freeze
    CONTRIBUTORS_ONLY = "contributors_only".freeze
    COLLABORATORS_ONLY = "collaborators_only".freeze

    def self.all_vars
      @all_vars ||= [EXISTING_USERS, CONTRIBUTORS_ONLY, COLLABORATORS_ONLY].freeze
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
      return value if InteractionGroup.all_vars.include?(value)
      raise "Invalid ENUM value #{value} for class #InteractionGroup"
    end
  end
end
