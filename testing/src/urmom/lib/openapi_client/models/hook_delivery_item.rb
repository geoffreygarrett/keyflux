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
  # Delivery made by a webhook, without request and response information.
  class HookDeliveryItem
    # Unique identifier of the webhook delivery.
    attr_accessor :id

    # Unique identifier for the event (shared with all deliveries for all webhooks that subscribe to this event).
    attr_accessor :guid

    # Time when the webhook delivery occurred.
    attr_accessor :delivered_at

    # Whether the webhook delivery is a redelivery.
    attr_accessor :redelivery

    # Time spent delivering.
    attr_accessor :duration

    # Describes the response returned after attempting the delivery.
    attr_accessor :status

    # Status code received when delivery was made.
    attr_accessor :status_code

    # The event that triggered the delivery.
    attr_accessor :event

    # The type of activity for the event that triggered the delivery.
    attr_accessor :action

    # The id of the GitHub App installation associated with this event.
    attr_accessor :installation_id

    # The id of the repository associated with this event.
    attr_accessor :repository_id

    # Time when the webhook delivery was throttled.
    attr_accessor :throttled_at

    # Attribute mapping from ruby-style variable name to JSON key.
    def self.attribute_map
      {
        :'id' => :'id',
        :'guid' => :'guid',
        :'delivered_at' => :'delivered_at',
        :'redelivery' => :'redelivery',
        :'duration' => :'duration',
        :'status' => :'status',
        :'status_code' => :'status_code',
        :'event' => :'event',
        :'action' => :'action',
        :'installation_id' => :'installation_id',
        :'repository_id' => :'repository_id',
        :'throttled_at' => :'throttled_at'
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
        :'guid' => :'String',
        :'delivered_at' => :'Time',
        :'redelivery' => :'Boolean',
        :'duration' => :'Float',
        :'status' => :'String',
        :'status_code' => :'Integer',
        :'event' => :'String',
        :'action' => :'String',
        :'installation_id' => :'Integer',
        :'repository_id' => :'Integer',
        :'throttled_at' => :'Time'
      }
    end

    # List of attributes with nullable: true
    def self.openapi_nullable
      Set.new([
        :'action',
        :'installation_id',
        :'repository_id',
        :'throttled_at'
      ])
    end

    # Initializes the object
    # @param [Hash] attributes Model attributes in the form of hash
    def initialize(attributes = {})
      if (!attributes.is_a?(Hash))
        fail ArgumentError, "The input argument (attributes) must be a hash in `OpenapiClient::HookDeliveryItem` initialize method"
      end

      # check to see if the attribute exists and convert string to symbol for hash key
      attributes = attributes.each_with_object({}) { |(k, v), h|
        if (!self.class.attribute_map.key?(k.to_sym))
          fail ArgumentError, "`#{k}` is not a valid attribute in `OpenapiClient::HookDeliveryItem`. Please check the name to make sure it's valid. List of attributes: " + self.class.attribute_map.keys.inspect
        end
        h[k.to_sym] = v
      }

      if attributes.key?(:'id')
        self.id = attributes[:'id']
      end

      if attributes.key?(:'guid')
        self.guid = attributes[:'guid']
      end

      if attributes.key?(:'delivered_at')
        self.delivered_at = attributes[:'delivered_at']
      end

      if attributes.key?(:'redelivery')
        self.redelivery = attributes[:'redelivery']
      end

      if attributes.key?(:'duration')
        self.duration = attributes[:'duration']
      end

      if attributes.key?(:'status')
        self.status = attributes[:'status']
      end

      if attributes.key?(:'status_code')
        self.status_code = attributes[:'status_code']
      end

      if attributes.key?(:'event')
        self.event = attributes[:'event']
      end

      if attributes.key?(:'action')
        self.action = attributes[:'action']
      end

      if attributes.key?(:'installation_id')
        self.installation_id = attributes[:'installation_id']
      end

      if attributes.key?(:'repository_id')
        self.repository_id = attributes[:'repository_id']
      end

      if attributes.key?(:'throttled_at')
        self.throttled_at = attributes[:'throttled_at']
      end
    end

    # Show invalid properties with the reasons. Usually used together with valid?
    # @return Array for valid properties with the reasons
    def list_invalid_properties
      invalid_properties = Array.new
      if @id.nil?
        invalid_properties.push('invalid value for "id", id cannot be nil.')
      end

      if @guid.nil?
        invalid_properties.push('invalid value for "guid", guid cannot be nil.')
      end

      if @delivered_at.nil?
        invalid_properties.push('invalid value for "delivered_at", delivered_at cannot be nil.')
      end

      if @redelivery.nil?
        invalid_properties.push('invalid value for "redelivery", redelivery cannot be nil.')
      end

      if @duration.nil?
        invalid_properties.push('invalid value for "duration", duration cannot be nil.')
      end

      if @status.nil?
        invalid_properties.push('invalid value for "status", status cannot be nil.')
      end

      if @status_code.nil?
        invalid_properties.push('invalid value for "status_code", status_code cannot be nil.')
      end

      if @event.nil?
        invalid_properties.push('invalid value for "event", event cannot be nil.')
      end

      invalid_properties
    end

    # Check to see if the all the properties in the model are valid
    # @return true if the model is valid
    def valid?
      return false if @id.nil?
      return false if @guid.nil?
      return false if @delivered_at.nil?
      return false if @redelivery.nil?
      return false if @duration.nil?
      return false if @status.nil?
      return false if @status_code.nil?
      return false if @event.nil?
      true
    end

    # Checks equality by comparing each attribute.
    # @param [Object] Object to be compared
    def ==(o)
      return true if self.equal?(o)
      self.class == o.class &&
          id == o.id &&
          guid == o.guid &&
          delivered_at == o.delivered_at &&
          redelivery == o.redelivery &&
          duration == o.duration &&
          status == o.status &&
          status_code == o.status_code &&
          event == o.event &&
          action == o.action &&
          installation_id == o.installation_id &&
          repository_id == o.repository_id &&
          throttled_at == o.throttled_at
    end

    # @see the `==` method
    # @param [Object] Object to be compared
    def eql?(o)
      self == o
    end

    # Calculates hash code according to all attributes.
    # @return [Integer] Hash code
    def hash
      [id, guid, delivered_at, redelivery, duration, status, status_code, event, action, installation_id, repository_id, throttled_at].hash
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