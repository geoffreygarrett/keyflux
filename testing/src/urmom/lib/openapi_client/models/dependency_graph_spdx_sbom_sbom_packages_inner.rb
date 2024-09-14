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
  class DependencyGraphSpdxSbomSbomPackagesInner
    # A unique SPDX identifier for the package.
    attr_accessor :spdxid

    # The name of the package.
    attr_accessor :name

    # The version of the package. If the package does not have an exact version specified, a version range is given.
    attr_accessor :version_info

    # The location where the package can be downloaded, or NOASSERTION if this has not been determined.
    attr_accessor :download_location

    # Whether the package's file content has been subjected to analysis during the creation of the SPDX document.
    attr_accessor :files_analyzed

    # The license of the package as determined while creating the SPDX document.
    attr_accessor :license_concluded

    # The license of the package as declared by its author, or NOASSERTION if this information was not available when the SPDX document was created.
    attr_accessor :license_declared

    # The distribution source of this package, or NOASSERTION if this was not determined.
    attr_accessor :supplier

    # The copyright holders of the package, and any dates present with those notices, if available.
    attr_accessor :copyright_text

    attr_accessor :external_refs

    # Attribute mapping from ruby-style variable name to JSON key.
    def self.attribute_map
      {
        :'spdxid' => :'SPDXID',
        :'name' => :'name',
        :'version_info' => :'versionInfo',
        :'download_location' => :'downloadLocation',
        :'files_analyzed' => :'filesAnalyzed',
        :'license_concluded' => :'licenseConcluded',
        :'license_declared' => :'licenseDeclared',
        :'supplier' => :'supplier',
        :'copyright_text' => :'copyrightText',
        :'external_refs' => :'externalRefs'
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
        :'name' => :'String',
        :'version_info' => :'String',
        :'download_location' => :'String',
        :'files_analyzed' => :'Boolean',
        :'license_concluded' => :'String',
        :'license_declared' => :'String',
        :'supplier' => :'String',
        :'copyright_text' => :'String',
        :'external_refs' => :'Array<DependencyGraphSpdxSbomSbomPackagesInnerExternalRefsInner>'
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
        fail ArgumentError, "The input argument (attributes) must be a hash in `OpenapiClient::DependencyGraphSpdxSbomSbomPackagesInner` initialize method"
      end

      # check to see if the attribute exists and convert string to symbol for hash key
      attributes = attributes.each_with_object({}) { |(k, v), h|
        if (!self.class.attribute_map.key?(k.to_sym))
          fail ArgumentError, "`#{k}` is not a valid attribute in `OpenapiClient::DependencyGraphSpdxSbomSbomPackagesInner`. Please check the name to make sure it's valid. List of attributes: " + self.class.attribute_map.keys.inspect
        end
        h[k.to_sym] = v
      }

      if attributes.key?(:'spdxid')
        self.spdxid = attributes[:'spdxid']
      end

      if attributes.key?(:'name')
        self.name = attributes[:'name']
      end

      if attributes.key?(:'version_info')
        self.version_info = attributes[:'version_info']
      end

      if attributes.key?(:'download_location')
        self.download_location = attributes[:'download_location']
      end

      if attributes.key?(:'files_analyzed')
        self.files_analyzed = attributes[:'files_analyzed']
      end

      if attributes.key?(:'license_concluded')
        self.license_concluded = attributes[:'license_concluded']
      end

      if attributes.key?(:'license_declared')
        self.license_declared = attributes[:'license_declared']
      end

      if attributes.key?(:'supplier')
        self.supplier = attributes[:'supplier']
      end

      if attributes.key?(:'copyright_text')
        self.copyright_text = attributes[:'copyright_text']
      end

      if attributes.key?(:'external_refs')
        if (value = attributes[:'external_refs']).is_a?(Array)
          self.external_refs = value
        end
      end
    end

    # Show invalid properties with the reasons. Usually used together with valid?
    # @return Array for valid properties with the reasons
    def list_invalid_properties
      invalid_properties = Array.new
      invalid_properties
    end

    # Check to see if the all the properties in the model are valid
    # @return true if the model is valid
    def valid?
      true
    end

    # Checks equality by comparing each attribute.
    # @param [Object] Object to be compared
    def ==(o)
      return true if self.equal?(o)
      self.class == o.class &&
          spdxid == o.spdxid &&
          name == o.name &&
          version_info == o.version_info &&
          download_location == o.download_location &&
          files_analyzed == o.files_analyzed &&
          license_concluded == o.license_concluded &&
          license_declared == o.license_declared &&
          supplier == o.supplier &&
          copyright_text == o.copyright_text &&
          external_refs == o.external_refs
    end

    # @see the `==` method
    # @param [Object] Object to be compared
    def eql?(o)
      self == o
    end

    # Calculates hash code according to all attributes.
    # @return [Integer] Hash code
    def hash
      [spdxid, name, version_info, download_location, files_analyzed, license_concluded, license_declared, supplier, copyright_text, external_refs].hash
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