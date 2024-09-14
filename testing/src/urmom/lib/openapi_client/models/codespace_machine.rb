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
  # A description of the machine powering a codespace.
  class CodespaceMachine
    # The name of the machine.
    attr_accessor :name

    # The display name of the machine includes cores, memory, and storage.
    attr_accessor :display_name

    # The operating system of the machine.
    attr_accessor :operating_system

    # How much storage is available to the codespace.
    attr_accessor :storage_in_bytes

    # How much memory is available to the codespace.
    attr_accessor :memory_in_bytes

    # How many cores are available to the codespace.
    attr_accessor :cpus

    # Whether a prebuild is currently available when creating a codespace for this machine and repository. If a branch was not specified as a ref, the default branch will be assumed. Value will be \"null\" if prebuilds are not supported or prebuild availability could not be determined. Value will be \"none\" if no prebuild is available. Latest values \"ready\" and \"in_progress\" indicate the prebuild availability status.
    attr_accessor :prebuild_availability

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
        :'name' => :'name',
        :'display_name' => :'display_name',
        :'operating_system' => :'operating_system',
        :'storage_in_bytes' => :'storage_in_bytes',
        :'memory_in_bytes' => :'memory_in_bytes',
        :'cpus' => :'cpus',
        :'prebuild_availability' => :'prebuild_availability'
      }
    end

    # Returns all the JSON keys this model knows about
    def self.acceptable_attributes
      attribute_map.values
    end

    # Attribute type mapping.
    def self.openapi_types
      {
        :'name' => :'String',
        :'display_name' => :'String',
        :'operating_system' => :'String',
        :'storage_in_bytes' => :'Integer',
        :'memory_in_bytes' => :'Integer',
        :'cpus' => :'Integer',
        :'prebuild_availability' => :'String'
      }
    end

    # List of attributes with nullable: true
    def self.openapi_nullable
      Set.new([
        :'prebuild_availability'
      ])
    end

    # Initializes the object
    # @param [Hash] attributes Model attributes in the form of hash
    def initialize(attributes = {})
      if (!attributes.is_a?(Hash))
        fail ArgumentError, "The input argument (attributes) must be a hash in `OpenapiClient::CodespaceMachine` initialize method"
      end

      # check to see if the attribute exists and convert string to symbol for hash key
      attributes = attributes.each_with_object({}) { |(k, v), h|
        if (!self.class.attribute_map.key?(k.to_sym))
          fail ArgumentError, "`#{k}` is not a valid attribute in `OpenapiClient::CodespaceMachine`. Please check the name to make sure it's valid. List of attributes: " + self.class.attribute_map.keys.inspect
        end
        h[k.to_sym] = v
      }

      if attributes.key?(:'name')
        self.name = attributes[:'name']
      end

      if attributes.key?(:'display_name')
        self.display_name = attributes[:'display_name']
      end

      if attributes.key?(:'operating_system')
        self.operating_system = attributes[:'operating_system']
      end

      if attributes.key?(:'storage_in_bytes')
        self.storage_in_bytes = attributes[:'storage_in_bytes']
      end

      if attributes.key?(:'memory_in_bytes')
        self.memory_in_bytes = attributes[:'memory_in_bytes']
      end

      if attributes.key?(:'cpus')
        self.cpus = attributes[:'cpus']
      end

      if attributes.key?(:'prebuild_availability')
        self.prebuild_availability = attributes[:'prebuild_availability']
      end
    end

    # Show invalid properties with the reasons. Usually used together with valid?
    # @return Array for valid properties with the reasons
    def list_invalid_properties
      invalid_properties = Array.new
      if @name.nil?
        invalid_properties.push('invalid value for "name", name cannot be nil.')
      end

      if @display_name.nil?
        invalid_properties.push('invalid value for "display_name", display_name cannot be nil.')
      end

      if @operating_system.nil?
        invalid_properties.push('invalid value for "operating_system", operating_system cannot be nil.')
      end

      if @storage_in_bytes.nil?
        invalid_properties.push('invalid value for "storage_in_bytes", storage_in_bytes cannot be nil.')
      end

      if @memory_in_bytes.nil?
        invalid_properties.push('invalid value for "memory_in_bytes", memory_in_bytes cannot be nil.')
      end

      if @cpus.nil?
        invalid_properties.push('invalid value for "cpus", cpus cannot be nil.')
      end

      invalid_properties
    end

    # Check to see if the all the properties in the model are valid
    # @return true if the model is valid
    def valid?
      return false if @name.nil?
      return false if @display_name.nil?
      return false if @operating_system.nil?
      return false if @storage_in_bytes.nil?
      return false if @memory_in_bytes.nil?
      return false if @cpus.nil?
      prebuild_availability_validator = EnumAttributeValidator.new('String', ["none", "ready", "in_progress"])
      return false unless prebuild_availability_validator.valid?(@prebuild_availability)
      true
    end

    # Custom attribute writer method checking allowed values (enum).
    # @param [Object] prebuild_availability Object to be assigned
    def prebuild_availability=(prebuild_availability)
      validator = EnumAttributeValidator.new('String', ["none", "ready", "in_progress"])
      unless validator.valid?(prebuild_availability)
        fail ArgumentError, "invalid value for \"prebuild_availability\", must be one of #{validator.allowable_values}."
      end
      @prebuild_availability = prebuild_availability
    end

    # Checks equality by comparing each attribute.
    # @param [Object] Object to be compared
    def ==(o)
      return true if self.equal?(o)
      self.class == o.class &&
          name == o.name &&
          display_name == o.display_name &&
          operating_system == o.operating_system &&
          storage_in_bytes == o.storage_in_bytes &&
          memory_in_bytes == o.memory_in_bytes &&
          cpus == o.cpus &&
          prebuild_availability == o.prebuild_availability
    end

    # @see the `==` method
    # @param [Object] Object to be compared
    def eql?(o)
      self == o
    end

    # Calculates hash code according to all attributes.
    # @return [Integer] Hash code
    def hash
      [name, display_name, operating_system, storage_in_bytes, memory_in_bytes, cpus, prebuild_availability].hash
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