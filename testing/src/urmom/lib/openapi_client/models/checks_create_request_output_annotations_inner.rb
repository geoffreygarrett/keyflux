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
  class ChecksCreateRequestOutputAnnotationsInner
    # The path of the file to add an annotation to. For example, `assets/css/main.css`.
    attr_accessor :path

    # The start line of the annotation. Line numbers start at 1.
    attr_accessor :start_line

    # The end line of the annotation.
    attr_accessor :end_line

    # The start column of the annotation. Annotations only support `start_column` and `end_column` on the same line. Omit this parameter if `start_line` and `end_line` have different values. Column numbers start at 1.
    attr_accessor :start_column

    # The end column of the annotation. Annotations only support `start_column` and `end_column` on the same line. Omit this parameter if `start_line` and `end_line` have different values.
    attr_accessor :end_column

    # The level of the annotation.
    attr_accessor :annotation_level

    # A short description of the feedback for these lines of code. The maximum size is 64 KB.
    attr_accessor :message

    # The title that represents the annotation. The maximum size is 255 characters.
    attr_accessor :title

    # Details about this annotation. The maximum size is 64 KB.
    attr_accessor :raw_details

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
        :'path' => :'path',
        :'start_line' => :'start_line',
        :'end_line' => :'end_line',
        :'start_column' => :'start_column',
        :'end_column' => :'end_column',
        :'annotation_level' => :'annotation_level',
        :'message' => :'message',
        :'title' => :'title',
        :'raw_details' => :'raw_details'
      }
    end

    # Returns all the JSON keys this model knows about
    def self.acceptable_attributes
      attribute_map.values
    end

    # Attribute type mapping.
    def self.openapi_types
      {
        :'path' => :'String',
        :'start_line' => :'Integer',
        :'end_line' => :'Integer',
        :'start_column' => :'Integer',
        :'end_column' => :'Integer',
        :'annotation_level' => :'String',
        :'message' => :'String',
        :'title' => :'String',
        :'raw_details' => :'String'
      }
    end

    # List of attributes with nullable: true
    def self.openapi_nullable
      Set.new([
      ])
    end

    # Initializes the object
    # @param [Hash] attributes Model attributes in the form of hash
    def initialize(attributes = {})
      if (!attributes.is_a?(Hash))
        fail ArgumentError, "The input argument (attributes) must be a hash in `OpenapiClient::ChecksCreateRequestOutputAnnotationsInner` initialize method"
      end

      # check to see if the attribute exists and convert string to symbol for hash key
      attributes = attributes.each_with_object({}) { |(k, v), h|
        if (!self.class.attribute_map.key?(k.to_sym))
          fail ArgumentError, "`#{k}` is not a valid attribute in `OpenapiClient::ChecksCreateRequestOutputAnnotationsInner`. Please check the name to make sure it's valid. List of attributes: " + self.class.attribute_map.keys.inspect
        end
        h[k.to_sym] = v
      }

      if attributes.key?(:'path')
        self.path = attributes[:'path']
      end

      if attributes.key?(:'start_line')
        self.start_line = attributes[:'start_line']
      end

      if attributes.key?(:'end_line')
        self.end_line = attributes[:'end_line']
      end

      if attributes.key?(:'start_column')
        self.start_column = attributes[:'start_column']
      end

      if attributes.key?(:'end_column')
        self.end_column = attributes[:'end_column']
      end

      if attributes.key?(:'annotation_level')
        self.annotation_level = attributes[:'annotation_level']
      end

      if attributes.key?(:'message')
        self.message = attributes[:'message']
      end

      if attributes.key?(:'title')
        self.title = attributes[:'title']
      end

      if attributes.key?(:'raw_details')
        self.raw_details = attributes[:'raw_details']
      end
    end

    # Show invalid properties with the reasons. Usually used together with valid?
    # @return Array for valid properties with the reasons
    def list_invalid_properties
      invalid_properties = Array.new
      if @path.nil?
        invalid_properties.push('invalid value for "path", path cannot be nil.')
      end

      if @start_line.nil?
        invalid_properties.push('invalid value for "start_line", start_line cannot be nil.')
      end

      if @end_line.nil?
        invalid_properties.push('invalid value for "end_line", end_line cannot be nil.')
      end

      if @annotation_level.nil?
        invalid_properties.push('invalid value for "annotation_level", annotation_level cannot be nil.')
      end

      if @message.nil?
        invalid_properties.push('invalid value for "message", message cannot be nil.')
      end

      invalid_properties
    end

    # Check to see if the all the properties in the model are valid
    # @return true if the model is valid
    def valid?
      return false if @path.nil?
      return false if @start_line.nil?
      return false if @end_line.nil?
      return false if @annotation_level.nil?
      annotation_level_validator = EnumAttributeValidator.new('String', ["notice", "warning", "failure"])
      return false unless annotation_level_validator.valid?(@annotation_level)
      return false if @message.nil?
      true
    end

    # Custom attribute writer method checking allowed values (enum).
    # @param [Object] annotation_level Object to be assigned
    def annotation_level=(annotation_level)
      validator = EnumAttributeValidator.new('String', ["notice", "warning", "failure"])
      unless validator.valid?(annotation_level)
        fail ArgumentError, "invalid value for \"annotation_level\", must be one of #{validator.allowable_values}."
      end
      @annotation_level = annotation_level
    end

    # Checks equality by comparing each attribute.
    # @param [Object] Object to be compared
    def ==(o)
      return true if self.equal?(o)
      self.class == o.class &&
          path == o.path &&
          start_line == o.start_line &&
          end_line == o.end_line &&
          start_column == o.start_column &&
          end_column == o.end_column &&
          annotation_level == o.annotation_level &&
          message == o.message &&
          title == o.title &&
          raw_details == o.raw_details
    end

    # @see the `==` method
    # @param [Object] Object to be compared
    def eql?(o)
      self == o
    end

    # Calculates hash code according to all attributes.
    # @return [Integer] Hash code
    def hash
      [path, start_line, end_line, start_column, end_column, annotation_level, message, title, raw_details].hash
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
