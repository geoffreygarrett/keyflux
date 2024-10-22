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
  class CodeScanningUploadSarifRequest
    # The SHA of the commit to which the analysis you are uploading relates.
    attr_accessor :commit_sha

    # The full Git reference, formatted as `refs/heads/<branch name>`, `refs/tags/<tag>`, `refs/pull/<number>/merge`, or `refs/pull/<number>/head`.
    attr_accessor :ref

    # A Base64 string representing the SARIF file to upload. You must first compress your SARIF file using [`gzip`](http://www.gnu.org/software/gzip/manual/gzip.html) and then translate the contents of the file into a Base64 encoding string. For more information, see \"[SARIF support for code scanning](https://docs.github.com/code-security/secure-coding/sarif-support-for-code-scanning).\"
    attr_accessor :sarif

    # The base directory used in the analysis, as it appears in the SARIF file. This property is used to convert file paths from absolute to relative, so that alerts can be mapped to their correct location in the repository.
    attr_accessor :checkout_uri

    # The time that the analysis run began. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format: `YYYY-MM-DDTHH:MM:SSZ`.
    attr_accessor :started_at

    # The name of the tool used to generate the code scanning analysis. If this parameter is not used, the tool name defaults to \"API\". If the uploaded SARIF contains a tool GUID, this will be available for filtering using the `tool_guid` parameter of operations such as `GET /repos/{owner}/{repo}/code-scanning/alerts`.
    attr_accessor :tool_name

    # Whether the SARIF file will be validated according to the code scanning specifications. This parameter is intended to help integrators ensure that the uploaded SARIF files are correctly rendered by code scanning.
    attr_accessor :validate

    # Attribute mapping from ruby-style variable name to JSON key.
    def self.attribute_map
      {
        :'commit_sha' => :'commit_sha',
        :'ref' => :'ref',
        :'sarif' => :'sarif',
        :'checkout_uri' => :'checkout_uri',
        :'started_at' => :'started_at',
        :'tool_name' => :'tool_name',
        :'validate' => :'validate'
      }
    end

    # Returns all the JSON keys this model knows about
    def self.acceptable_attributes
      attribute_map.values
    end

    # Attribute type mapping.
    def self.openapi_types
      {
        :'commit_sha' => :'String',
        :'ref' => :'String',
        :'sarif' => :'String',
        :'checkout_uri' => :'String',
        :'started_at' => :'Time',
        :'tool_name' => :'String',
        :'validate' => :'Boolean'
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
        fail ArgumentError, "The input argument (attributes) must be a hash in `OpenapiClient::CodeScanningUploadSarifRequest` initialize method"
      end

      # check to see if the attribute exists and convert string to symbol for hash key
      attributes = attributes.each_with_object({}) { |(k, v), h|
        if (!self.class.attribute_map.key?(k.to_sym))
          fail ArgumentError, "`#{k}` is not a valid attribute in `OpenapiClient::CodeScanningUploadSarifRequest`. Please check the name to make sure it's valid. List of attributes: " + self.class.attribute_map.keys.inspect
        end
        h[k.to_sym] = v
      }

      if attributes.key?(:'commit_sha')
        self.commit_sha = attributes[:'commit_sha']
      end

      if attributes.key?(:'ref')
        self.ref = attributes[:'ref']
      end

      if attributes.key?(:'sarif')
        self.sarif = attributes[:'sarif']
      end

      if attributes.key?(:'checkout_uri')
        self.checkout_uri = attributes[:'checkout_uri']
      end

      if attributes.key?(:'started_at')
        self.started_at = attributes[:'started_at']
      end

      if attributes.key?(:'tool_name')
        self.tool_name = attributes[:'tool_name']
      end

      if attributes.key?(:'validate')
        self.validate = attributes[:'validate']
      end
    end

    # Show invalid properties with the reasons. Usually used together with valid?
    # @return Array for valid properties with the reasons
    def list_invalid_properties
      invalid_properties = Array.new
      if @commit_sha.nil?
        invalid_properties.push('invalid value for "commit_sha", commit_sha cannot be nil.')
      end

      if @commit_sha.to_s.length > 40
        invalid_properties.push('invalid value for "commit_sha", the character length must be smaller than or equal to 40.')
      end

      if @commit_sha.to_s.length < 40
        invalid_properties.push('invalid value for "commit_sha", the character length must be great than or equal to 40.')
      end

      pattern = Regexp.new(/^[0-9a-fA-F]+$/)
      if @commit_sha !~ pattern
        invalid_properties.push("invalid value for \"commit_sha\", must conform to the pattern #{pattern}.")
      end

      if @ref.nil?
        invalid_properties.push('invalid value for "ref", ref cannot be nil.')
      end

      pattern = Regexp.new(/^refs\/(heads|tags|pull)\/.*$/)
      if @ref !~ pattern
        invalid_properties.push("invalid value for \"ref\", must conform to the pattern #{pattern}.")
      end

      if @sarif.nil?
        invalid_properties.push('invalid value for "sarif", sarif cannot be nil.')
      end

      invalid_properties
    end

    # Check to see if the all the properties in the model are valid
    # @return true if the model is valid
    def valid?
      return false if @commit_sha.nil?
      return false if @commit_sha.to_s.length > 40
      return false if @commit_sha.to_s.length < 40
      return false if @commit_sha !~ Regexp.new(/^[0-9a-fA-F]+$/)
      return false if @ref.nil?
      return false if @ref !~ Regexp.new(/^refs\/(heads|tags|pull)\/.*$/)
      return false if @sarif.nil?
      true
    end

    # Custom attribute writer method with validation
    # @param [Object] commit_sha Value to be assigned
    def commit_sha=(commit_sha)
      if commit_sha.nil?
        fail ArgumentError, 'commit_sha cannot be nil'
      end

      if commit_sha.to_s.length > 40
        fail ArgumentError, 'invalid value for "commit_sha", the character length must be smaller than or equal to 40.'
      end

      if commit_sha.to_s.length < 40
        fail ArgumentError, 'invalid value for "commit_sha", the character length must be great than or equal to 40.'
      end

      pattern = Regexp.new(/^[0-9a-fA-F]+$/)
      if commit_sha !~ pattern
        fail ArgumentError, "invalid value for \"commit_sha\", must conform to the pattern #{pattern}."
      end

      @commit_sha = commit_sha
    end

    # Custom attribute writer method with validation
    # @param [Object] ref Value to be assigned
    def ref=(ref)
      if ref.nil?
        fail ArgumentError, 'ref cannot be nil'
      end

      pattern = Regexp.new(/^refs\/(heads|tags|pull)\/.*$/)
      if ref !~ pattern
        fail ArgumentError, "invalid value for \"ref\", must conform to the pattern #{pattern}."
      end

      @ref = ref
    end

    # Checks equality by comparing each attribute.
    # @param [Object] Object to be compared
    def ==(o)
      return true if self.equal?(o)
      self.class == o.class &&
          commit_sha == o.commit_sha &&
          ref == o.ref &&
          sarif == o.sarif &&
          checkout_uri == o.checkout_uri &&
          started_at == o.started_at &&
          tool_name == o.tool_name &&
          validate == o.validate
    end

    # @see the `==` method
    # @param [Object] Object to be compared
    def eql?(o)
      self == o
    end

    # Calculates hash code according to all attributes.
    # @return [Integer] Hash code
    def hash
      [commit_sha, ref, sarif, checkout_uri, started_at, tool_name, validate].hash
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
