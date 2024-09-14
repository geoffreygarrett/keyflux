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
  # A Dependabot alert.
  class DependabotAlert
    # The security alert number.
    attr_accessor :number

    # The state of the Dependabot alert.
    attr_accessor :state

    attr_accessor :dependency

    attr_accessor :security_advisory

    attr_accessor :security_vulnerability

    # The REST API URL of the alert resource.
    attr_accessor :url

    # The GitHub URL of the alert resource.
    attr_accessor :html_url

    # The time that the alert was created in ISO 8601 format: `YYYY-MM-DDTHH:MM:SSZ`.
    attr_accessor :created_at

    # The time that the alert was last updated in ISO 8601 format: `YYYY-MM-DDTHH:MM:SSZ`.
    attr_accessor :updated_at

    # The time that the alert was dismissed in ISO 8601 format: `YYYY-MM-DDTHH:MM:SSZ`.
    attr_accessor :dismissed_at

    attr_accessor :dismissed_by

    # The reason that the alert was dismissed.
    attr_accessor :dismissed_reason

    # An optional comment associated with the alert's dismissal.
    attr_accessor :dismissed_comment

    # The time that the alert was no longer detected and was considered fixed in ISO 8601 format: `YYYY-MM-DDTHH:MM:SSZ`.
    attr_accessor :fixed_at

    # The time that the alert was auto-dismissed in ISO 8601 format: `YYYY-MM-DDTHH:MM:SSZ`.
    attr_accessor :auto_dismissed_at

    class EnumAttributeValidator
      attr_reader :datatype
      attr_reader :allowable_values

      def initialize(datatype, allowable_values)
        @allowable_values = allowable_values.map do |value|
          case datatype.to_s
          when /Integer/i
            value.to_i
          when /Float/i
            value.to_f
          else
            value
          end
        end
      end

      def valid?(value)
        !value || allowable_values.include?(value)
      end
    end

    # Attribute mapping from ruby-style variable name to JSON key.
    def self.attribute_map
      {
        :'number' => :'number',
        :'state' => :'state',
        :'dependency' => :'dependency',
        :'security_advisory' => :'security_advisory',
        :'security_vulnerability' => :'security_vulnerability',
        :'url' => :'url',
        :'html_url' => :'html_url',
        :'created_at' => :'created_at',
        :'updated_at' => :'updated_at',
        :'dismissed_at' => :'dismissed_at',
        :'dismissed_by' => :'dismissed_by',
        :'dismissed_reason' => :'dismissed_reason',
        :'dismissed_comment' => :'dismissed_comment',
        :'fixed_at' => :'fixed_at',
        :'auto_dismissed_at' => :'auto_dismissed_at'
      }
    end

    # Returns all the JSON keys this model knows about
    def self.acceptable_attributes
      attribute_map.values
    end

    # Attribute type mapping.
    def self.openapi_types
      {
        :'number' => :'Integer',
        :'state' => :'String',
        :'dependency' => :'DependabotAlertWithRepositoryDependency',
        :'security_advisory' => :'DependabotAlertSecurityAdvisory',
        :'security_vulnerability' => :'DependabotAlertSecurityVulnerability',
        :'url' => :'String',
        :'html_url' => :'String',
        :'created_at' => :'Time',
        :'updated_at' => :'Time',
        :'dismissed_at' => :'Time',
        :'dismissed_by' => :'NullableSimpleUser',
        :'dismissed_reason' => :'String',
        :'dismissed_comment' => :'String',
        :'fixed_at' => :'Time',
        :'auto_dismissed_at' => :'Time'
      }
    end

    # List of attributes with nullable: true
    def self.openapi_nullable
      Set.new([
        :'dismissed_at',
        :'dismissed_by',
        :'dismissed_reason',
        :'dismissed_comment',
        :'fixed_at',
        :'auto_dismissed_at'
      ])
    end

    # Initializes the object
    # @param [Hash] attributes Model attributes in the form of hash
    def initialize(attributes = {})
      if (!attributes.is_a?(Hash))
        fail ArgumentError, "The input argument (attributes) must be a hash in `OpenapiClient::DependabotAlert` initialize method"
      end

      # check to see if the attribute exists and convert string to symbol for hash key
      attributes = attributes.each_with_object({}) { |(k, v), h|
        if (!self.class.attribute_map.key?(k.to_sym))
          fail ArgumentError, "`#{k}` is not a valid attribute in `OpenapiClient::DependabotAlert`. Please check the name to make sure it's valid. List of attributes: " + self.class.attribute_map.keys.inspect
        end
        h[k.to_sym] = v
      }

      if attributes.key?(:'number')
        self.number = attributes[:'number']
      end

      if attributes.key?(:'state')
        self.state = attributes[:'state']
      end

      if attributes.key?(:'dependency')
        self.dependency = attributes[:'dependency']
      end

      if attributes.key?(:'security_advisory')
        self.security_advisory = attributes[:'security_advisory']
      end

      if attributes.key?(:'security_vulnerability')
        self.security_vulnerability = attributes[:'security_vulnerability']
      end

      if attributes.key?(:'url')
        self.url = attributes[:'url']
      end

      if attributes.key?(:'html_url')
        self.html_url = attributes[:'html_url']
      end

      if attributes.key?(:'created_at')
        self.created_at = attributes[:'created_at']
      end

      if attributes.key?(:'updated_at')
        self.updated_at = attributes[:'updated_at']
      end

      if attributes.key?(:'dismissed_at')
        self.dismissed_at = attributes[:'dismissed_at']
      end

      if attributes.key?(:'dismissed_by')
        self.dismissed_by = attributes[:'dismissed_by']
      end

      if attributes.key?(:'dismissed_reason')
        self.dismissed_reason = attributes[:'dismissed_reason']
      end

      if attributes.key?(:'dismissed_comment')
        self.dismissed_comment = attributes[:'dismissed_comment']
      end

      if attributes.key?(:'fixed_at')
        self.fixed_at = attributes[:'fixed_at']
      end

      if attributes.key?(:'auto_dismissed_at')
        self.auto_dismissed_at = attributes[:'auto_dismissed_at']
      end
    end

    # Show invalid properties with the reasons. Usually used together with valid?
    # @return Array for valid properties with the reasons
    def list_invalid_properties
      invalid_properties = Array.new
      if @number.nil?
        invalid_properties.push('invalid value for "number", number cannot be nil.')
      end

      if @state.nil?
        invalid_properties.push('invalid value for "state", state cannot be nil.')
      end

      if @dependency.nil?
        invalid_properties.push('invalid value for "dependency", dependency cannot be nil.')
      end

      if @security_advisory.nil?
        invalid_properties.push('invalid value for "security_advisory", security_advisory cannot be nil.')
      end

      if @security_vulnerability.nil?
        invalid_properties.push('invalid value for "security_vulnerability", security_vulnerability cannot be nil.')
      end

      if @url.nil?
        invalid_properties.push('invalid value for "url", url cannot be nil.')
      end

      if @html_url.nil?
        invalid_properties.push('invalid value for "html_url", html_url cannot be nil.')
      end

      if @created_at.nil?
        invalid_properties.push('invalid value for "created_at", created_at cannot be nil.')
      end

      if @updated_at.nil?
        invalid_properties.push('invalid value for "updated_at", updated_at cannot be nil.')
      end

      if @dismissed_comment.to_s.length > 280
        invalid_properties.push('invalid value for "dismissed_comment", the character length must be smaller than or equal to 280.')
      end

      invalid_properties
    end

    # Check to see if the all the properties in the model are valid
    # @return true if the model is valid
    def valid?
      return false if @number.nil?
      return false if @state.nil?
      state_validator = EnumAttributeValidator.new('String', ["auto_dismissed", "dismissed", "fixed", "open"])
      return false unless state_validator.valid?(@state)
      return false if @dependency.nil?
      return false if @security_advisory.nil?
      return false if @security_vulnerability.nil?
      return false if @url.nil?
      return false if @html_url.nil?
      return false if @created_at.nil?
      return false if @updated_at.nil?
      dismissed_reason_validator = EnumAttributeValidator.new('String', ["fix_started", "inaccurate", "no_bandwidth", "not_used", "tolerable_risk"])
      return false unless dismissed_reason_validator.valid?(@dismissed_reason)
      return false if @dismissed_comment.to_s.length > 280
      true
    end

    # Custom attribute writer method checking allowed values (enum).
    # @param [Object] state Object to be assigned
    def state=(state)
      validator = EnumAttributeValidator.new('String', ["auto_dismissed", "dismissed", "fixed", "open"])
      unless validator.valid?(state)
        fail ArgumentError, "invalid value for \"state\", must be one of #{validator.allowable_values}."
      end
      @state = state
    end

    # Custom attribute writer method checking allowed values (enum).
    # @param [Object] dismissed_reason Object to be assigned
    def dismissed_reason=(dismissed_reason)
      validator = EnumAttributeValidator.new('String', ["fix_started", "inaccurate", "no_bandwidth", "not_used", "tolerable_risk"])
      unless validator.valid?(dismissed_reason)
        fail ArgumentError, "invalid value for \"dismissed_reason\", must be one of #{validator.allowable_values}."
      end
      @dismissed_reason = dismissed_reason
    end

    # Custom attribute writer method with validation
    # @param [Object] dismissed_comment Value to be assigned
    def dismissed_comment=(dismissed_comment)
      if dismissed_comment.to_s.length > 280
        fail ArgumentError, 'invalid value for "dismissed_comment", the character length must be smaller than or equal to 280.'
      end

      @dismissed_comment = dismissed_comment
    end

    # Checks equality by comparing each attribute.
    # @param [Object] Object to be compared
    def ==(o)
      return true if self.equal?(o)
      self.class == o.class &&
          number == o.number &&
          state == o.state &&
          dependency == o.dependency &&
          security_advisory == o.security_advisory &&
          security_vulnerability == o.security_vulnerability &&
          url == o.url &&
          html_url == o.html_url &&
          created_at == o.created_at &&
          updated_at == o.updated_at &&
          dismissed_at == o.dismissed_at &&
          dismissed_by == o.dismissed_by &&
          dismissed_reason == o.dismissed_reason &&
          dismissed_comment == o.dismissed_comment &&
          fixed_at == o.fixed_at &&
          auto_dismissed_at == o.auto_dismissed_at
    end

    # @see the `==` method
    # @param [Object] Object to be compared
    def eql?(o)
      self == o
    end

    # Calculates hash code according to all attributes.
    # @return [Integer] Hash code
    def hash
      [number, state, dependency, security_advisory, security_vulnerability, url, html_url, created_at, updated_at, dismissed_at, dismissed_by, dismissed_reason, dismissed_comment, fixed_at, auto_dismissed_at].hash
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