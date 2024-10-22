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
  # Installation
  class Installation
    # The ID of the installation.
    attr_accessor :id

    attr_accessor :account

    # Describe whether all repositories have been selected or there's a selection involved
    attr_accessor :repository_selection

    attr_accessor :access_tokens_url

    attr_accessor :repositories_url

    attr_accessor :html_url

    attr_accessor :app_id

    # The ID of the user or organization this token is being scoped to.
    attr_accessor :target_id

    attr_accessor :target_type

    attr_accessor :permissions

    attr_accessor :events

    attr_accessor :created_at

    attr_accessor :updated_at

    attr_accessor :single_file_name

    attr_accessor :has_multiple_single_files

    attr_accessor :single_file_paths

    attr_accessor :app_slug

    attr_accessor :suspended_by

    attr_accessor :suspended_at

    attr_accessor :contact_email

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
        :'id' => :'id',
        :'account' => :'account',
        :'repository_selection' => :'repository_selection',
        :'access_tokens_url' => :'access_tokens_url',
        :'repositories_url' => :'repositories_url',
        :'html_url' => :'html_url',
        :'app_id' => :'app_id',
        :'target_id' => :'target_id',
        :'target_type' => :'target_type',
        :'permissions' => :'permissions',
        :'events' => :'events',
        :'created_at' => :'created_at',
        :'updated_at' => :'updated_at',
        :'single_file_name' => :'single_file_name',
        :'has_multiple_single_files' => :'has_multiple_single_files',
        :'single_file_paths' => :'single_file_paths',
        :'app_slug' => :'app_slug',
        :'suspended_by' => :'suspended_by',
        :'suspended_at' => :'suspended_at',
        :'contact_email' => :'contact_email'
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
        :'account' => :'InstallationAccount',
        :'repository_selection' => :'String',
        :'access_tokens_url' => :'String',
        :'repositories_url' => :'String',
        :'html_url' => :'String',
        :'app_id' => :'Integer',
        :'target_id' => :'Integer',
        :'target_type' => :'String',
        :'permissions' => :'AppPermissions',
        :'events' => :'Array<String>',
        :'created_at' => :'Time',
        :'updated_at' => :'Time',
        :'single_file_name' => :'String',
        :'has_multiple_single_files' => :'Boolean',
        :'single_file_paths' => :'Array<String>',
        :'app_slug' => :'String',
        :'suspended_by' => :'NullableSimpleUser',
        :'suspended_at' => :'Time',
        :'contact_email' => :'String'
      }
    end

    # List of attributes with nullable: true
    def self.openapi_nullable
      Set.new([
        :'account',
        :'single_file_name',
        :'suspended_by',
        :'suspended_at',
        :'contact_email'
      ])
    end

    # Initializes the object
    # @param [Hash] attributes Model attributes in the form of hash
    def initialize(attributes = {})
      if (!attributes.is_a?(Hash))
        fail ArgumentError, "The input argument (attributes) must be a hash in `OpenapiClient::Installation` initialize method"
      end

      # check to see if the attribute exists and convert string to symbol for hash key
      attributes = attributes.each_with_object({}) { |(k, v), h|
        if (!self.class.attribute_map.key?(k.to_sym))
          fail ArgumentError, "`#{k}` is not a valid attribute in `OpenapiClient::Installation`. Please check the name to make sure it's valid. List of attributes: " + self.class.attribute_map.keys.inspect
        end
        h[k.to_sym] = v
      }

      if attributes.key?(:'id')
        self.id = attributes[:'id']
      end

      if attributes.key?(:'account')
        self.account = attributes[:'account']
      end

      if attributes.key?(:'repository_selection')
        self.repository_selection = attributes[:'repository_selection']
      end

      if attributes.key?(:'access_tokens_url')
        self.access_tokens_url = attributes[:'access_tokens_url']
      end

      if attributes.key?(:'repositories_url')
        self.repositories_url = attributes[:'repositories_url']
      end

      if attributes.key?(:'html_url')
        self.html_url = attributes[:'html_url']
      end

      if attributes.key?(:'app_id')
        self.app_id = attributes[:'app_id']
      end

      if attributes.key?(:'target_id')
        self.target_id = attributes[:'target_id']
      end

      if attributes.key?(:'target_type')
        self.target_type = attributes[:'target_type']
      end

      if attributes.key?(:'permissions')
        self.permissions = attributes[:'permissions']
      end

      if attributes.key?(:'events')
        if (value = attributes[:'events']).is_a?(Array)
          self.events = value
        end
      end

      if attributes.key?(:'created_at')
        self.created_at = attributes[:'created_at']
      end

      if attributes.key?(:'updated_at')
        self.updated_at = attributes[:'updated_at']
      end

      if attributes.key?(:'single_file_name')
        self.single_file_name = attributes[:'single_file_name']
      end

      if attributes.key?(:'has_multiple_single_files')
        self.has_multiple_single_files = attributes[:'has_multiple_single_files']
      end

      if attributes.key?(:'single_file_paths')
        if (value = attributes[:'single_file_paths']).is_a?(Array)
          self.single_file_paths = value
        end
      end

      if attributes.key?(:'app_slug')
        self.app_slug = attributes[:'app_slug']
      end

      if attributes.key?(:'suspended_by')
        self.suspended_by = attributes[:'suspended_by']
      end

      if attributes.key?(:'suspended_at')
        self.suspended_at = attributes[:'suspended_at']
      end

      if attributes.key?(:'contact_email')
        self.contact_email = attributes[:'contact_email']
      end
    end

    # Show invalid properties with the reasons. Usually used together with valid?
    # @return Array for valid properties with the reasons
    def list_invalid_properties
      invalid_properties = Array.new
      if @id.nil?
        invalid_properties.push('invalid value for "id", id cannot be nil.')
      end

      if @repository_selection.nil?
        invalid_properties.push('invalid value for "repository_selection", repository_selection cannot be nil.')
      end

      if @access_tokens_url.nil?
        invalid_properties.push('invalid value for "access_tokens_url", access_tokens_url cannot be nil.')
      end

      if @repositories_url.nil?
        invalid_properties.push('invalid value for "repositories_url", repositories_url cannot be nil.')
      end

      if @html_url.nil?
        invalid_properties.push('invalid value for "html_url", html_url cannot be nil.')
      end

      if @app_id.nil?
        invalid_properties.push('invalid value for "app_id", app_id cannot be nil.')
      end

      if @target_id.nil?
        invalid_properties.push('invalid value for "target_id", target_id cannot be nil.')
      end

      if @target_type.nil?
        invalid_properties.push('invalid value for "target_type", target_type cannot be nil.')
      end

      if @permissions.nil?
        invalid_properties.push('invalid value for "permissions", permissions cannot be nil.')
      end

      if @events.nil?
        invalid_properties.push('invalid value for "events", events cannot be nil.')
      end

      if @created_at.nil?
        invalid_properties.push('invalid value for "created_at", created_at cannot be nil.')
      end

      if @updated_at.nil?
        invalid_properties.push('invalid value for "updated_at", updated_at cannot be nil.')
      end

      if @app_slug.nil?
        invalid_properties.push('invalid value for "app_slug", app_slug cannot be nil.')
      end

      invalid_properties
    end

    # Check to see if the all the properties in the model are valid
    # @return true if the model is valid
    def valid?
      return false if @id.nil?
      return false if @repository_selection.nil?
      repository_selection_validator = EnumAttributeValidator.new('String', ["all", "selected"])
      return false unless repository_selection_validator.valid?(@repository_selection)
      return false if @access_tokens_url.nil?
      return false if @repositories_url.nil?
      return false if @html_url.nil?
      return false if @app_id.nil?
      return false if @target_id.nil?
      return false if @target_type.nil?
      return false if @permissions.nil?
      return false if @events.nil?
      return false if @created_at.nil?
      return false if @updated_at.nil?
      return false if @app_slug.nil?
      true
    end

    # Custom attribute writer method checking allowed values (enum).
    # @param [Object] repository_selection Object to be assigned
    def repository_selection=(repository_selection)
      validator = EnumAttributeValidator.new('String', ["all", "selected"])
      unless validator.valid?(repository_selection)
        fail ArgumentError, "invalid value for \"repository_selection\", must be one of #{validator.allowable_values}."
      end
      @repository_selection = repository_selection
    end

    # Checks equality by comparing each attribute.
    # @param [Object] Object to be compared
    def ==(o)
      return true if self.equal?(o)
      self.class == o.class &&
          id == o.id &&
          account == o.account &&
          repository_selection == o.repository_selection &&
          access_tokens_url == o.access_tokens_url &&
          repositories_url == o.repositories_url &&
          html_url == o.html_url &&
          app_id == o.app_id &&
          target_id == o.target_id &&
          target_type == o.target_type &&
          permissions == o.permissions &&
          events == o.events &&
          created_at == o.created_at &&
          updated_at == o.updated_at &&
          single_file_name == o.single_file_name &&
          has_multiple_single_files == o.has_multiple_single_files &&
          single_file_paths == o.single_file_paths &&
          app_slug == o.app_slug &&
          suspended_by == o.suspended_by &&
          suspended_at == o.suspended_at &&
          contact_email == o.contact_email
    end

    # @see the `==` method
    # @param [Object] Object to be compared
    def eql?(o)
      self == o
    end

    # Calculates hash code according to all attributes.
    # @return [Integer] Hash code
    def hash
      [id, account, repository_selection, access_tokens_url, repositories_url, html_url, app_id, target_id, target_type, permissions, events, created_at, updated_at, single_file_name, has_multiple_single_files, single_file_paths, app_slug, suspended_by, suspended_at, contact_email].hash
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
