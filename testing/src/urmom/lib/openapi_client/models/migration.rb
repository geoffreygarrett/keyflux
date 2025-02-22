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
  # A migration.
  class Migration
    attr_accessor :id

    attr_accessor :owner

    attr_accessor :guid

    attr_accessor :state

    attr_accessor :lock_repositories

    attr_accessor :exclude_metadata

    attr_accessor :exclude_git_data

    attr_accessor :exclude_attachments

    attr_accessor :exclude_releases

    attr_accessor :exclude_owner_projects

    attr_accessor :org_metadata_only

    # The repositories included in the migration. Only returned for export migrations.
    attr_accessor :repositories

    attr_accessor :url

    attr_accessor :created_at

    attr_accessor :updated_at

    attr_accessor :node_id

    attr_accessor :archive_url

    # Exclude related items from being returned in the response in order to improve performance of the request. The array can include any of: `\"repositories\"`.
    attr_accessor :exclude

    # Attribute mapping from ruby-style variable name to JSON key.
    def self.attribute_map
      {
        :'id' => :'id',
        :'owner' => :'owner',
        :'guid' => :'guid',
        :'state' => :'state',
        :'lock_repositories' => :'lock_repositories',
        :'exclude_metadata' => :'exclude_metadata',
        :'exclude_git_data' => :'exclude_git_data',
        :'exclude_attachments' => :'exclude_attachments',
        :'exclude_releases' => :'exclude_releases',
        :'exclude_owner_projects' => :'exclude_owner_projects',
        :'org_metadata_only' => :'org_metadata_only',
        :'repositories' => :'repositories',
        :'url' => :'url',
        :'created_at' => :'created_at',
        :'updated_at' => :'updated_at',
        :'node_id' => :'node_id',
        :'archive_url' => :'archive_url',
        :'exclude' => :'exclude'
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
        :'owner' => :'NullableSimpleUser',
        :'guid' => :'String',
        :'state' => :'String',
        :'lock_repositories' => :'Boolean',
        :'exclude_metadata' => :'Boolean',
        :'exclude_git_data' => :'Boolean',
        :'exclude_attachments' => :'Boolean',
        :'exclude_releases' => :'Boolean',
        :'exclude_owner_projects' => :'Boolean',
        :'org_metadata_only' => :'Boolean',
        :'repositories' => :'Array<Repository>',
        :'url' => :'String',
        :'created_at' => :'Time',
        :'updated_at' => :'Time',
        :'node_id' => :'String',
        :'archive_url' => :'String',
        :'exclude' => :'Array<String>'
      }
    end

    # List of attributes with nullable: true
    def self.openapi_nullable
      Set.new([
        :'owner',
      ])
    end

    # Initializes the object
    # @param [Hash] attributes Model attributes in the form of hash
    def initialize(attributes = {})
      if (!attributes.is_a?(Hash))
        fail ArgumentError, "The input argument (attributes) must be a hash in `OpenapiClient::Migration` initialize method"
      end

      # check to see if the attribute exists and convert string to symbol for hash key
      attributes = attributes.each_with_object({}) { |(k, v), h|
        if (!self.class.attribute_map.key?(k.to_sym))
          fail ArgumentError, "`#{k}` is not a valid attribute in `OpenapiClient::Migration`. Please check the name to make sure it's valid. List of attributes: " + self.class.attribute_map.keys.inspect
        end
        h[k.to_sym] = v
      }

      if attributes.key?(:'id')
        self.id = attributes[:'id']
      end

      if attributes.key?(:'owner')
        self.owner = attributes[:'owner']
      end

      if attributes.key?(:'guid')
        self.guid = attributes[:'guid']
      end

      if attributes.key?(:'state')
        self.state = attributes[:'state']
      end

      if attributes.key?(:'lock_repositories')
        self.lock_repositories = attributes[:'lock_repositories']
      end

      if attributes.key?(:'exclude_metadata')
        self.exclude_metadata = attributes[:'exclude_metadata']
      end

      if attributes.key?(:'exclude_git_data')
        self.exclude_git_data = attributes[:'exclude_git_data']
      end

      if attributes.key?(:'exclude_attachments')
        self.exclude_attachments = attributes[:'exclude_attachments']
      end

      if attributes.key?(:'exclude_releases')
        self.exclude_releases = attributes[:'exclude_releases']
      end

      if attributes.key?(:'exclude_owner_projects')
        self.exclude_owner_projects = attributes[:'exclude_owner_projects']
      end

      if attributes.key?(:'org_metadata_only')
        self.org_metadata_only = attributes[:'org_metadata_only']
      end

      if attributes.key?(:'repositories')
        if (value = attributes[:'repositories']).is_a?(Array)
          self.repositories = value
        end
      end

      if attributes.key?(:'url')
        self.url = attributes[:'url']
      end

      if attributes.key?(:'created_at')
        self.created_at = attributes[:'created_at']
      end

      if attributes.key?(:'updated_at')
        self.updated_at = attributes[:'updated_at']
      end

      if attributes.key?(:'node_id')
        self.node_id = attributes[:'node_id']
      end

      if attributes.key?(:'archive_url')
        self.archive_url = attributes[:'archive_url']
      end

      if attributes.key?(:'exclude')
        if (value = attributes[:'exclude']).is_a?(Array)
          self.exclude = value
        end
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

      if @state.nil?
        invalid_properties.push('invalid value for "state", state cannot be nil.')
      end

      if @lock_repositories.nil?
        invalid_properties.push('invalid value for "lock_repositories", lock_repositories cannot be nil.')
      end

      if @exclude_metadata.nil?
        invalid_properties.push('invalid value for "exclude_metadata", exclude_metadata cannot be nil.')
      end

      if @exclude_git_data.nil?
        invalid_properties.push('invalid value for "exclude_git_data", exclude_git_data cannot be nil.')
      end

      if @exclude_attachments.nil?
        invalid_properties.push('invalid value for "exclude_attachments", exclude_attachments cannot be nil.')
      end

      if @exclude_releases.nil?
        invalid_properties.push('invalid value for "exclude_releases", exclude_releases cannot be nil.')
      end

      if @exclude_owner_projects.nil?
        invalid_properties.push('invalid value for "exclude_owner_projects", exclude_owner_projects cannot be nil.')
      end

      if @org_metadata_only.nil?
        invalid_properties.push('invalid value for "org_metadata_only", org_metadata_only cannot be nil.')
      end

      if @repositories.nil?
        invalid_properties.push('invalid value for "repositories", repositories cannot be nil.')
      end

      if @url.nil?
        invalid_properties.push('invalid value for "url", url cannot be nil.')
      end

      if @created_at.nil?
        invalid_properties.push('invalid value for "created_at", created_at cannot be nil.')
      end

      if @updated_at.nil?
        invalid_properties.push('invalid value for "updated_at", updated_at cannot be nil.')
      end

      if @node_id.nil?
        invalid_properties.push('invalid value for "node_id", node_id cannot be nil.')
      end

      invalid_properties
    end

    # Check to see if the all the properties in the model are valid
    # @return true if the model is valid
    def valid?
      return false if @id.nil?
      return false if @guid.nil?
      return false if @state.nil?
      return false if @lock_repositories.nil?
      return false if @exclude_metadata.nil?
      return false if @exclude_git_data.nil?
      return false if @exclude_attachments.nil?
      return false if @exclude_releases.nil?
      return false if @exclude_owner_projects.nil?
      return false if @org_metadata_only.nil?
      return false if @repositories.nil?
      return false if @url.nil?
      return false if @created_at.nil?
      return false if @updated_at.nil?
      return false if @node_id.nil?
      true
    end

    # Checks equality by comparing each attribute.
    # @param [Object] Object to be compared
    def ==(o)
      return true if self.equal?(o)
      self.class == o.class &&
          id == o.id &&
          owner == o.owner &&
          guid == o.guid &&
          state == o.state &&
          lock_repositories == o.lock_repositories &&
          exclude_metadata == o.exclude_metadata &&
          exclude_git_data == o.exclude_git_data &&
          exclude_attachments == o.exclude_attachments &&
          exclude_releases == o.exclude_releases &&
          exclude_owner_projects == o.exclude_owner_projects &&
          org_metadata_only == o.org_metadata_only &&
          repositories == o.repositories &&
          url == o.url &&
          created_at == o.created_at &&
          updated_at == o.updated_at &&
          node_id == o.node_id &&
          archive_url == o.archive_url &&
          exclude == o.exclude
    end

    # @see the `==` method
    # @param [Object] Object to be compared
    def eql?(o)
      self == o
    end

    # Calculates hash code according to all attributes.
    # @return [Integer] Hash code
    def hash
      [id, owner, guid, state, lock_repositories, exclude_metadata, exclude_git_data, exclude_attachments, exclude_releases, exclude_owner_projects, org_metadata_only, repositories, url, created_at, updated_at, node_id, archive_url, exclude].hash
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
