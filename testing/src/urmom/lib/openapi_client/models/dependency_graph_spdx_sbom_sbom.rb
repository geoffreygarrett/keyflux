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
  class DependencyGraphSpdxSbomSbom
    # The SPDX identifier for the SPDX document.
    attr_accessor :spdxid

    # The version of the SPDX specification that this document conforms to.
    attr_accessor :spdx_version

    attr_accessor :creation_info

    # The name of the SPDX document.
    attr_accessor :name

    # The license under which the SPDX document is licensed.
    attr_accessor :data_license

    # The name of the repository that the SPDX document describes.
    attr_accessor :document_describes

    # The namespace for the SPDX document.
    attr_accessor :document_namespace

    attr_accessor :packages

    # Attribute mapping from ruby-style variable name to JSON key.
    def self.attribute_map
      {
        :'spdxid' => :'SPDXID',
        :'spdx_version' => :'spdxVersion',
        :'creation_info' => :'creationInfo',
        :'name' => :'name',
        :'data_license' => :'dataLicense',
        :'document_describes' => :'documentDescribes',
        :'document_namespace' => :'documentNamespace',
        :'packages' => :'packages'
      }
    end

    # Returns all the JSON keys this model knows about
    def self.acceptable_attributes
      attribute_map.values
    end

    # Attribute type mapping.
    def self.openapi_types
      {
        :'spdxid' => :'String',
        :'spdx_version' => :'String',
        :'creation_info' => :'DependencyGraphSpdxSbomSbomCreationInfo',
        :'name' => :'String',
        :'data_license' => :'String',
        :'document_describes' => :'Array<String>',
        :'document_namespace' => :'String',
        :'packages' => :'Array<DependencyGraphSpdxSbomSbomPackagesInner>'
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
        fail ArgumentError, "The input argument (attributes) must be a hash in `OpenapiClient::DependencyGraphSpdxSbomSbom` initialize method"
      end

      # check to see if the attribute exists and convert string to symbol for hash key
      attributes = attributes.each_with_object({}) { |(k, v), h|
        if (!self.class.attribute_map.key?(k.to_sym))
          fail ArgumentError, "`#{k}` is not a valid attribute in `OpenapiClient::DependencyGraphSpdxSbomSbom`. Please check the name to make sure it's valid. List of attributes: " + self.class.attribute_map.keys.inspect
        end
        h[k.to_sym] = v
      }

      if attributes.key?(:'spdxid')
        self.spdxid = attributes[:'spdxid']
      end

      if attributes.key?(:'spdx_version')
        self.spdx_version = attributes[:'spdx_version']
      end

      if attributes.key?(:'creation_info')
        self.creation_info = attributes[:'creation_info']
      end

      if attributes.key?(:'name')
        self.name = attributes[:'name']
      end

      if attributes.key?(:'data_license')
        self.data_license = attributes[:'data_license']
      end

      if attributes.key?(:'document_describes')
        if (value = attributes[:'document_describes']).is_a?(Array)
          self.document_describes = value
        end
      end

      if attributes.key?(:'document_namespace')
        self.document_namespace = attributes[:'document_namespace']
      end

      if attributes.key?(:'packages')
        if (value = attributes[:'packages']).is_a?(Array)
          self.packages = value
        end
      end
    end

    # Show invalid properties with the reasons. Usually used together with valid?
    # @return Array for valid properties with the reasons
    def list_invalid_properties
      invalid_properties = Array.new
      if @spdxid.nil?
        invalid_properties.push('invalid value for "spdxid", spdxid cannot be nil.')
      end

      if @spdx_version.nil?
        invalid_properties.push('invalid value for "spdx_version", spdx_version cannot be nil.')
      end

      if @creation_info.nil?
        invalid_properties.push('invalid value for "creation_info", creation_info cannot be nil.')
      end

      if @name.nil?
        invalid_properties.push('invalid value for "name", name cannot be nil.')
      end

      if @data_license.nil?
        invalid_properties.push('invalid value for "data_license", data_license cannot be nil.')
      end

      if @document_describes.nil?
        invalid_properties.push('invalid value for "document_describes", document_describes cannot be nil.')
      end

      if @document_namespace.nil?
        invalid_properties.push('invalid value for "document_namespace", document_namespace cannot be nil.')
      end

      if @packages.nil?
        invalid_properties.push('invalid value for "packages", packages cannot be nil.')
      end

      invalid_properties
    end

    # Check to see if the all the properties in the model are valid
    # @return true if the model is valid
    def valid?
      return false if @spdxid.nil?
      return false if @spdx_version.nil?
      return false if @creation_info.nil?
      return false if @name.nil?
      return false if @data_license.nil?
      return false if @document_describes.nil?
      return false if @document_namespace.nil?
      return false if @packages.nil?
      true
    end

    # Checks equality by comparing each attribute.
    # @param [Object] Object to be compared
    def ==(o)
      return true if self.equal?(o)
      self.class == o.class &&
          spdxid == o.spdxid &&
          spdx_version == o.spdx_version &&
          creation_info == o.creation_info &&
          name == o.name &&
          data_license == o.data_license &&
          document_describes == o.document_describes &&
          document_namespace == o.document_namespace &&
          packages == o.packages
    end

    # @see the `==` method
    # @param [Object] Object to be compared
    def eql?(o)
      self == o
    end

    # Calculates hash code according to all attributes.
    # @return [Integer] Hash code
    def hash
      [spdxid, spdx_version, creation_info, name, data_license, document_describes, document_namespace, packages].hash
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
