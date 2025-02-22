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
  class SecretScanningAlertResolutionWebhook
    FALSE_POSITIVE = "false_positive".freeze
    WONT_FIX = "wont_fix".freeze
    REVOKED = "revoked".freeze
    USED_IN_TESTS = "used_in_tests".freeze
    PATTERN_DELETED = "pattern_deleted".freeze
    PATTERN_EDITED = "pattern_edited".freeze

    def self.all_vars
      @all_vars ||= [FALSE_POSITIVE, WONT_FIX, REVOKED, USED_IN_TESTS, PATTERN_DELETED, PATTERN_EDITED].freeze
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
      return value if SecretScanningAlertResolutionWebhook.all_vars.include?(value)
      raise "Invalid ENUM value #{value} for class #SecretScanningAlertResolutionWebhook"
    end
  end
end
