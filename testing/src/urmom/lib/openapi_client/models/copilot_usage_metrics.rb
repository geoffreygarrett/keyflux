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
  # Summary of Copilot usage.
  class CopilotUsageMetrics
    # The date for which the usage metrics are reported, in `YYYY-MM-DD` format.
    attr_accessor :day

    # The total number of Copilot code completion suggestions shown to users.
    attr_accessor :total_suggestions_count

    # The total number of Copilot code completion suggestions accepted by users.
    attr_accessor :total_acceptances_count

    # The total number of lines of code completions suggested by Copilot.
    attr_accessor :total_lines_suggested

    # The total number of lines of code completions accepted by users.
    attr_accessor :total_lines_accepted

    # The total number of users who were shown Copilot code completion suggestions during the day specified.
    attr_accessor :total_active_users

    # The total instances of users who accepted code suggested by Copilot Chat in the IDE (panel and inline).
    attr_accessor :total_chat_acceptances

    # The total number of chat turns (prompt and response pairs) sent between users and Copilot Chat in the IDE.
    attr_accessor :total_chat_turns

    # The total number of users who interacted with Copilot Chat in the IDE during the day specified.
    attr_accessor :total_active_chat_users

    # Breakdown of Copilot code completions usage by language and editor
    attr_accessor :breakdown

    # Attribute mapping from ruby-style variable name to JSON key.
    def self.attribute_map
      {
        :'day' => :'day',
        :'total_suggestions_count' => :'total_suggestions_count',
        :'total_acceptances_count' => :'total_acceptances_count',
        :'total_lines_suggested' => :'total_lines_suggested',
        :'total_lines_accepted' => :'total_lines_accepted',
        :'total_active_users' => :'total_active_users',
        :'total_chat_acceptances' => :'total_chat_acceptances',
        :'total_chat_turns' => :'total_chat_turns',
        :'total_active_chat_users' => :'total_active_chat_users',
        :'breakdown' => :'breakdown'
      }
    end

    # Returns all the JSON keys this model knows about
    def self.acceptable_attributes
      attribute_map.values
    end

    # Attribute type mapping.
    def self.openapi_types
      {
        :'day' => :'Date',
        :'total_suggestions_count' => :'Integer',
        :'total_acceptances_count' => :'Integer',
        :'total_lines_suggested' => :'Integer',
        :'total_lines_accepted' => :'Integer',
        :'total_active_users' => :'Integer',
        :'total_chat_acceptances' => :'Integer',
        :'total_chat_turns' => :'Integer',
        :'total_active_chat_users' => :'Integer',
        :'breakdown' => :'Array<CopilotUsageMetricsBreakdownInner>'
      }
    end

    # List of attributes with nullable: true
    def self.openapi_nullable
      Set.new([
        :'breakdown'
      ])
    end

    # Initializes the object
    # @param [Hash] attributes Model attributes in the form of hash
    def initialize(attributes = {})
      if (!attributes.is_a?(Hash))
        fail ArgumentError, "The input argument (attributes) must be a hash in `OpenapiClient::CopilotUsageMetrics` initialize method"
      end

      # check to see if the attribute exists and convert string to symbol for hash key
      attributes = attributes.each_with_object({}) { |(k, v), h|
        if (!self.class.attribute_map.key?(k.to_sym))
          fail ArgumentError, "`#{k}` is not a valid attribute in `OpenapiClient::CopilotUsageMetrics`. Please check the name to make sure it's valid. List of attributes: " + self.class.attribute_map.keys.inspect
        end
        h[k.to_sym] = v
      }

      if attributes.key?(:'day')
        self.day = attributes[:'day']
      end

      if attributes.key?(:'total_suggestions_count')
        self.total_suggestions_count = attributes[:'total_suggestions_count']
      end

      if attributes.key?(:'total_acceptances_count')
        self.total_acceptances_count = attributes[:'total_acceptances_count']
      end

      if attributes.key?(:'total_lines_suggested')
        self.total_lines_suggested = attributes[:'total_lines_suggested']
      end

      if attributes.key?(:'total_lines_accepted')
        self.total_lines_accepted = attributes[:'total_lines_accepted']
      end

      if attributes.key?(:'total_active_users')
        self.total_active_users = attributes[:'total_active_users']
      end

      if attributes.key?(:'total_chat_acceptances')
        self.total_chat_acceptances = attributes[:'total_chat_acceptances']
      end

      if attributes.key?(:'total_chat_turns')
        self.total_chat_turns = attributes[:'total_chat_turns']
      end

      if attributes.key?(:'total_active_chat_users')
        self.total_active_chat_users = attributes[:'total_active_chat_users']
      end

      if attributes.key?(:'breakdown')
        if (value = attributes[:'breakdown']).is_a?(Array)
          self.breakdown = value
        end
      end
    end

    # Show invalid properties with the reasons. Usually used together with valid?
    # @return Array for valid properties with the reasons
    def list_invalid_properties
      invalid_properties = Array.new
      if @day.nil?
        invalid_properties.push('invalid value for "day", day cannot be nil.')
      end

      invalid_properties
    end

    # Check to see if the all the properties in the model are valid
    # @return true if the model is valid
    def valid?
      return false if @day.nil?
      true
    end

    # Checks equality by comparing each attribute.
    # @param [Object] Object to be compared
    def ==(o)
      return true if self.equal?(o)
      self.class == o.class &&
          day == o.day &&
          total_suggestions_count == o.total_suggestions_count &&
          total_acceptances_count == o.total_acceptances_count &&
          total_lines_suggested == o.total_lines_suggested &&
          total_lines_accepted == o.total_lines_accepted &&
          total_active_users == o.total_active_users &&
          total_chat_acceptances == o.total_chat_acceptances &&
          total_chat_turns == o.total_chat_turns &&
          total_active_chat_users == o.total_active_chat_users &&
          breakdown == o.breakdown
    end

    # @see the `==` method
    # @param [Object] Object to be compared
    def eql?(o)
      self == o
    end

    # Calculates hash code according to all attributes.
    # @return [Integer] Hash code
    def hash
      [day, total_suggestions_count, total_acceptances_count, total_lines_suggested, total_lines_accepted, total_active_users, total_chat_acceptances, total_chat_turns, total_active_chat_users, breakdown].hash
    end

    # Builds the object from hash
    # @param [Hash] attributes Model attributes in the form of hash
    # @return [Object] Returns the model itself
    def self.build_from_hash(attributes)
      new.build_from_hash(attributes)
    end

    # Builds the object from hash
    # @param [Hash] attributes Model attributes in the form of hash
    # @return [Object] Returns the model itself
    def build_from_hash(attributes)
      return nil unless attributes.is_a?(Hash)
      attributes = attributes.transform_keys(&:to_sym)
      self.class.openapi_types.each_pair do |key, type|
        if attributes[self.class.attribute_map[key]].nil? && self.class.openapi_nullable.include?(key)
          self.send("#{key}=", nil)
        elsif type =~ /\AArray<(.*)>/i
          # check to ensure the input is an array given that the attribute
          # is documented as an array but the input is not
          if attributes[self.class.attribute_map[key]].is_a?(Array)
            self.send("#{key}=", attributes[self.class.attribute_map[key]].map { |v| _deserialize($1, v) })
          end
        elsif !attributes[self.class.attribute_map[key]].nil?
          self.send("#{key}=", _deserialize(type, attributes[self.class.attribute_map[key]]))
        end
      end

      self
    end

    # Deserializes the data based on type
    # @param string type Data type
    # @param string value Value to be deserialized
    # @return [Object] Deserialized data
    def _deserialize(type, value)
      case type.to_sym
      when :Time
        Time.parse(value)
      when :Date
        Date.parse(value)
      when :String
        value.to_s
      when :Integer
        value.to_i
      when :Float
        value.to_f
      when :Boolean
        if value.to_s =~ /\A(true|t|yes|y|1)\z/i
          true
        else
          false
        end
      when :Object
        # generic object (usually a Hash), return directly
        value
      when /\AArray<(?<inner_type>.+)>\z/
        inner_type = Regexp.last_match[:inner_type]
        value.map { |v| _deserialize(inner_type, v) }
      when /\AHash<(?<k_type>.+?), (?<v_type>.+)>\z/
        k_type = Regexp.last_match[:k_type]
        v_type = Regexp.last_match[:v_type]
        {}.tap do |hash|
          value.each do |k, v|
            hash[_deserialize(k_type, k)] = _deserialize(v_type, v)
          end
        end
      else # model
        # models (e.g. Pet) or oneOf
        klass = OpenapiClient.const_get(type)
        klass.respond_to?(:openapi_one_of) ? klass.build(value) : klass.build_from_hash(value)
      end
    end

    # Returns the string representation of the object
    # @return [String] String presentation of the object
    def to_s
      to_hash.to_s
    end

    # to_body is an alias to to_hash (backward compatibility)
    # @return [Hash] Returns the object in the form of hash
    def to_body
      to_hash
    end

    # Returns the object in the form of hash
    # @return [Hash] Returns the object in the form of hash
    def to_hash
      hash = {}
      self.class.attribute_map.each_pair do |attr, param|
        value = self.send(attr)
        if value.nil?
          is_nullable = self.class.openapi_nullable.include?(attr)
          next if !is_nullable || (is_nullable && !instance_variable_defined?(:"@#{attr}"))
        end

        hash[param] = _to_hash(value)
      end
      hash
    end

    # Outputs non-array value in the form of hash
    # For object, use to_hash. Otherwise, just return the value
    # @param [Object] value Any valid value
    # @return [Hash] Returns the value in the form of hash
    def _to_hash(value)
      if value.is_a?(Array)
        value.compact.map { |v| _to_hash(v) }
      elsif value.is_a?(Hash)
        {}.tap do |hash|
          value.each { |k, v| hash[k] = _to_hash(v) }
        end
      elsif value.respond_to? :to_hash
        value.to_hash
      else
        value
      end
    end

  end

end
