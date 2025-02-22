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
  # The [deployment status](https://docs.github.com/rest/deployments/statuses#list-deployment-statuses).
  class WebhookDeploymentStatusCreatedDeploymentStatus
    attr_accessor :created_at

    attr_accessor :creator

    attr_accessor :deployment_url

    # The optional human-readable description added to the status.
    attr_accessor :description

    attr_accessor :environment

    attr_accessor :environment_url

    attr_accessor :id

    attr_accessor :log_url

    attr_accessor :node_id

    attr_accessor :performed_via_github_app

    attr_accessor :repository_url

    # The new state. Can be `pending`, `success`, `failure`, or `error`.
    attr_accessor :state

    # The optional link added to the status.
    attr_accessor :target_url

    attr_accessor :updated_at

    attr_accessor :url

    # Attribute mapping from ruby-style variable name to JSON key.
    def self.attribute_map
      {
        :'created_at' => :'created_at',
        :'creator' => :'creator',
        :'deployment_url' => :'deployment_url',
        :'description' => :'description',
        :'environment' => :'environment',
        :'environment_url' => :'environment_url',
        :'id' => :'id',
        :'log_url' => :'log_url',
        :'node_id' => :'node_id',
        :'performed_via_github_app' => :'performed_via_github_app',
        :'repository_url' => :'repository_url',
        :'state' => :'state',
        :'target_url' => :'target_url',
        :'updated_at' => :'updated_at',
        :'url' => :'url'
      }
    end

    # Returns all the JSON keys this model knows about
    def self.acceptable_attributes
      attribute_map.values
    end

    # Attribute type mapping.
    def self.openapi_types
      {
        :'created_at' => :'String',
        :'creator' => :'User',
        :'deployment_url' => :'String',
        :'description' => :'String',
        :'environment' => :'String',
        :'environment_url' => :'String',
        :'id' => :'Integer',
        :'log_url' => :'String',
        :'node_id' => :'String',
        :'performed_via_github_app' => :'App7',
        :'repository_url' => :'String',
        :'state' => :'String',
        :'target_url' => :'String',
        :'updated_at' => :'String',
        :'url' => :'String'
      }
    end

    # List of attributes with nullable: true
    def self.openapi_nullable
      Set.new([
        :'creator',
        :'performed_via_github_app',
      ])
    end

    # Initializes the object
    # @param [Hash] attributes Model attributes in the form of hash
    def initialize(attributes = {})
      if (!attributes.is_a?(Hash))
        fail ArgumentError, "The input argument (attributes) must be a hash in `OpenapiClient::WebhookDeploymentStatusCreatedDeploymentStatus` initialize method"
      end

      # check to see if the attribute exists and convert string to symbol for hash key
      attributes = attributes.each_with_object({}) { |(k, v), h|
        if (!self.class.attribute_map.key?(k.to_sym))
          fail ArgumentError, "`#{k}` is not a valid attribute in `OpenapiClient::WebhookDeploymentStatusCreatedDeploymentStatus`. Please check the name to make sure it's valid. List of attributes: " + self.class.attribute_map.keys.inspect
        end
        h[k.to_sym] = v
      }

      if attributes.key?(:'created_at')
        self.created_at = attributes[:'created_at']
      end

      if attributes.key?(:'creator')
        self.creator = attributes[:'creator']
      end

      if attributes.key?(:'deployment_url')
        self.deployment_url = attributes[:'deployment_url']
      end

      if attributes.key?(:'description')
        self.description = attributes[:'description']
      end

      if attributes.key?(:'environment')
        self.environment = attributes[:'environment']
      end

      if attributes.key?(:'environment_url')
        self.environment_url = attributes[:'environment_url']
      end

      if attributes.key?(:'id')
        self.id = attributes[:'id']
      end

      if attributes.key?(:'log_url')
        self.log_url = attributes[:'log_url']
      end

      if attributes.key?(:'node_id')
        self.node_id = attributes[:'node_id']
      end

      if attributes.key?(:'performed_via_github_app')
        self.performed_via_github_app = attributes[:'performed_via_github_app']
      end

      if attributes.key?(:'repository_url')
        self.repository_url = attributes[:'repository_url']
      end

      if attributes.key?(:'state')
        self.state = attributes[:'state']
      end

      if attributes.key?(:'target_url')
        self.target_url = attributes[:'target_url']
      end

      if attributes.key?(:'updated_at')
        self.updated_at = attributes[:'updated_at']
      end

      if attributes.key?(:'url')
        self.url = attributes[:'url']
      end
    end

    # Show invalid properties with the reasons. Usually used together with valid?
    # @return Array for valid properties with the reasons
    def list_invalid_properties
      invalid_properties = Array.new
      if @created_at.nil?
        invalid_properties.push('invalid value for "created_at", created_at cannot be nil.')
      end

      if @deployment_url.nil?
        invalid_properties.push('invalid value for "deployment_url", deployment_url cannot be nil.')
      end

      if @description.nil?
        invalid_properties.push('invalid value for "description", description cannot be nil.')
      end

      if @environment.nil?
        invalid_properties.push('invalid value for "environment", environment cannot be nil.')
      end

      if @id.nil?
        invalid_properties.push('invalid value for "id", id cannot be nil.')
      end

      if @node_id.nil?
        invalid_properties.push('invalid value for "node_id", node_id cannot be nil.')
      end

      if @repository_url.nil?
        invalid_properties.push('invalid value for "repository_url", repository_url cannot be nil.')
      end

      if @state.nil?
        invalid_properties.push('invalid value for "state", state cannot be nil.')
      end

      if @target_url.nil?
        invalid_properties.push('invalid value for "target_url", target_url cannot be nil.')
      end

      if @updated_at.nil?
        invalid_properties.push('invalid value for "updated_at", updated_at cannot be nil.')
      end

      if @url.nil?
        invalid_properties.push('invalid value for "url", url cannot be nil.')
      end

      invalid_properties
    end

    # Check to see if the all the properties in the model are valid
    # @return true if the model is valid
    def valid?
      return false if @created_at.nil?
      return false if @deployment_url.nil?
      return false if @description.nil?
      return false if @environment.nil?
      return false if @id.nil?
      return false if @node_id.nil?
      return false if @repository_url.nil?
      return false if @state.nil?
      return false if @target_url.nil?
      return false if @updated_at.nil?
      return false if @url.nil?
      true
    end

    # Checks equality by comparing each attribute.
    # @param [Object] Object to be compared
    def ==(o)
      return true if self.equal?(o)
      self.class == o.class &&
          created_at == o.created_at &&
          creator == o.creator &&
          deployment_url == o.deployment_url &&
          description == o.description &&
          environment == o.environment &&
          environment_url == o.environment_url &&
          id == o.id &&
          log_url == o.log_url &&
          node_id == o.node_id &&
          performed_via_github_app == o.performed_via_github_app &&
          repository_url == o.repository_url &&
          state == o.state &&
          target_url == o.target_url &&
          updated_at == o.updated_at &&
          url == o.url
    end

    # @see the `==` method
    # @param [Object] Object to be compared
    def eql?(o)
      self == o
    end

    # Calculates hash code according to all attributes.
    # @return [Integer] Hash code
    def hash
      [created_at, creator, deployment_url, description, environment, environment_url, id, log_url, node_id, performed_via_github_app, repository_url, state, target_url, updated_at, url].hash
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
