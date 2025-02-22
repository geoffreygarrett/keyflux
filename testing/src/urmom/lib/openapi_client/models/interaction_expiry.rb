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
  class InteractionExpiry
    ONE_DAY = "one_day".freeze
    THREE_DAYS = "three_days".freeze
    ONE_WEEK = "one_week".freeze
    ONE_MONTH = "one_month".freeze
    SIX_MONTHS = "six_months".freeze

    def self.all_vars
      @all_vars ||= [ONE_DAY, THREE_DAYS, ONE_WEEK, ONE_MONTH, SIX_MONTHS].freeze
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
      return value if InteractionExpiry.all_vars.include?(value)
      raise "Invalid ENUM value #{value} for class #InteractionExpiry"
    end
  end
end
