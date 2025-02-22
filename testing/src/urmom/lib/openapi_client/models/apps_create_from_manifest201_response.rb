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
  class AppsCreateFromManifest201Response
    # Unique identifier of the GitHub app
    attr_accessor :id

    # The slug name of the GitHub app
    attr_accessor :slug

    attr_accessor :node_id

    attr_accessor :owner

    # The name of the GitHub app
    attr_accessor :name

    attr_accessor :description

    attr_accessor :external_url

    attr_accessor :html_url

    attr_accessor :created_at

    attr_accessor :updated_at

    attr_accessor :permissions

    # The list of events for the GitHub app
    attr_accessor :events

    # The number of installations associated with the GitHub app
    attr_accessor :installations_count

    attr_accessor :client_id

    attr_accessor :client_secret

    attr_accessor :webhook_secret

    attr_accessor :pem

    # Attribute mapping from ruby-style variable name to JSON key.
    def self.attribute_map
      {
        :'id' => :'id',
        :'slug' => :'slug',
        :'node_id' => :'node_id',
        :'owner' => :'owner',
        :'name' => :'name',
        :'description' => :'description',
        :'external_url' => :'external_url',
        :'html_url' => :'html_url',
        :'created_at' => :'created_at',
        :'updated_at' => :'updated_at',
        :'permissions' => :'permissions',
        :'events' => :'events',
        :'installations_count' => :'installations_count',
        :'client_id' => :'client_id',
        :'client_secret' => :'client_secret',
        :'webhook_secret' => :'webhook_secret',
        :'pem' => :'pem'
      }
    end

    # Returns all the JSON keys this model knows about
    def self.acceptable_attributes
      attribute_map.values
    end

    # Attribute type mapping.
    def self.openapi_types
      {
        :'id' => :'Integer',
        :'slug' => :'String',
        :'node_id' => :'String',
        :'owner' => :'NullableSimpleUser',
        :'name' => :'String',
        :'description' => :'String',
        :'external_url' => :'String',
        :'html_url' => :'String',
        :'created_at' => :'Time',
        :'updated_at' => :'Time',
        :'permissions' => :'IntegrationPermissions',
        :'events' => :'Array<String>',
        :'installations_count' => :'Integer',
        :'client_id' => :'String',
        :'client_secret' => :'String',
        :'webhook_secret' => :'String',
        :'pem' => :'String'
      }
    end

    # List of attributes with nullable: true
    def self.openapi_nullable
      Set.new([
        :'owner',
        :'description',
        :'webhook_secret',
      ])
    end

    # List of class defined in allOf (OpenAPI v3)
    def self.openapi_all_of
      [
      :'AppsCreateFromManifest201ResponseAllOf',
      :'Integration'
      ]
    end

    # Initializes the object
    # @param [Hash] attributes Model attributes in the form of hash
    def initialize(attributes = {})
      if (!attributes.is_a?(Hash))
        fail ArgumentError, "The input argument (attributes) must be a hash in `OpenapiClient::AppsCreateFromManifest201Response` initialize method"
      end

      # check to see if the attribute exists and convert string to symbol for hash key
      attributes = attributes.each_with_object({}) { |(k, v), h|
        if (!self.class.attribute_map.key?(k.to_sym))
          fail ArgumentError, "`#{k}` is not a valid attribute in `OpenapiClient::AppsCreateFromManifest201Response`. Please check the name to make sure it's valid. List of attributes: " + self.class.attribute_map.keys.inspect
        end
        h[k.to_sym] = v
      }

      if attributes.key?(:'id')
        self.id = attributes[:'id']
      end

      if attributes.key?(:'slug')
        self.slug = attributes[:'slug']
      end

      if attributes.key?(:'node_id')
        self.node_id = attributes[:'node_id']
      end

      if attributes.key?(:'owner')
        self.owner = attributes[:'owner']
      end

      if attributes.key?(:'name')
        self.name = attributes[:'name']
      end

      if attributes.key?(:'description')
        self.description = attributes[:'description']
      end

      if attributes.key?(:'external_url')
        self.external_url = attributes[:'external_url']
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

      if attributes.key?(:'permissions')
        self.permissions = attributes[:'permissions']
      end

      if attributes.key?(:'events')
        if (value = attributes[:'events']).is_a?(Array)
          self.events = value
        end
      end

      if attributes.key?(:'installations_count')
        self.installations_count = attributes[:'installations_count']
      end

      if attributes.key?(:'client_id')
        self.client_id = attributes[:'client_id']
      end

      if attributes.key?(:'client_secret')
        self.client_secret = attributes[:'client_secret']
      end

      if attributes.key?(:'webhook_secret')
        self.webhook_secret = attributes[:'webhook_secret']
      end

      if attributes.key?(:'pem')
        self.pem = attributes[:'pem']
      end
    end

    # Show invalid properties with the reasons. Usually used together with valid?
    # @return Array for valid properties with the reasons
    def list_invalid_properties
      invalid_properties = Array.new
      if @id.nil?
        invalid_properties.push('invalid value for "id", id cannot be nil.')
      end

      if @node_id.nil?
        invalid_properties.push('invalid value for "node_id", node_id cannot be nil.')
      end

      if @name.nil?
        invalid_properties.push('invalid value for "name", name cannot be nil.')
      end

      if @external_url.nil?
        invalid_properties.push('invalid value for "external_url", external_url cannot be nil.')
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

      if @permissions.nil?
        invalid_properties.push('invalid value for "permissions", permissions cannot be nil.')
      end

      if @events.nil?
        invalid_properties.push('invalid value for "events", events cannot be nil.')
      end

      if @client_id.nil?
        invalid_properties.push('invalid value for "client_id", client_id cannot be nil.')
      end

      if @client_secret.nil?
        invalid_properties.push('invalid value for "client_secret", client_secret cannot be nil.')
      end

      if @pem.nil?
        invalid_properties.push('invalid value for "pem", pem cannot be nil.')
      end

      invalid_properties
    end

    # Check to see if the all the properties in the model are valid
    # @return true if the model is valid
    def valid?
      return false if @id.nil?
      return false if @node_id.nil?
      return false if @name.nil?
      return false if @external_url.nil?
      return false if @html_url.nil?
      return false if @created_at.nil?
      return false if @updated_at.nil?
      return false if @permissions.nil?
      return false if @events.nil?
      return false if @client_id.nil?
      return false if @client_secret.nil?
      return false if @pem.nil?
      true
    end

    # Checks equality by comparing each attribute.
    # @param [Object] Object to be compared
    def ==(o)
      return true if self.equal?(o)
      self.class == o.class &&
          id == o.id &&
          slug == o.slug &&
          node_id == o.node_id &&
          owner == o.owner &&
          name == o.name &&
          description == o.description &&
          external_url == o.external_url &&
          html_url == o.html_url &&
          created_at == o.created_at &&
          updated_at == o.updated_at &&
          permissions == o.permissions &&
          events == o.events &&
          installations_count == o.installations_count &&
          client_id == o.client_id &&
          client_secret == o.client_secret &&
          webhook_secret == o.webhook_secret &&
          pem == o.pem
    end

    # @see the `==` method
    # @param [Object] Object to be compared
    def eql?(o)
      self == o
    end

    # Calculates hash code according to all attributes.
    # @return [Integer] Hash code
    def hash
      [id, slug, node_id, owner, name, description, external_url, html_url, created_at, updated_at, permissions, events, installations_count, client_id, client_secret, webhook_secret, pem].hash
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
