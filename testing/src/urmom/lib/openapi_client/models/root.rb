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
  class Root
    attr_accessor :current_user_url

    attr_accessor :current_user_authorizations_html_url

    attr_accessor :authorizations_url

    attr_accessor :code_search_url

    attr_accessor :commit_search_url

    attr_accessor :emails_url

    attr_accessor :emojis_url

    attr_accessor :events_url

    attr_accessor :feeds_url

    attr_accessor :followers_url

    attr_accessor :following_url

    attr_accessor :gists_url

    attr_accessor :hub_url

    attr_accessor :issue_search_url

    attr_accessor :issues_url

    attr_accessor :keys_url

    attr_accessor :label_search_url

    attr_accessor :notifications_url

    attr_accessor :organization_url

    attr_accessor :organization_repositories_url

    attr_accessor :organization_teams_url

    attr_accessor :public_gists_url

    attr_accessor :rate_limit_url

    attr_accessor :repository_url

    attr_accessor :repository_search_url

    attr_accessor :current_user_repositories_url

    attr_accessor :starred_url

    attr_accessor :starred_gists_url

    attr_accessor :topic_search_url

    attr_accessor :user_url

    attr_accessor :user_organizations_url

    attr_accessor :user_repositories_url

    attr_accessor :user_search_url

    # Attribute mapping from ruby-style variable name to JSON key.
    def self.attribute_map
      {
        :'current_user_url' => :'current_user_url',
        :'current_user_authorizations_html_url' => :'current_user_authorizations_html_url',
        :'authorizations_url' => :'authorizations_url',
        :'code_search_url' => :'code_search_url',
        :'commit_search_url' => :'commit_search_url',
        :'emails_url' => :'emails_url',
        :'emojis_url' => :'emojis_url',
        :'events_url' => :'events_url',
        :'feeds_url' => :'feeds_url',
        :'followers_url' => :'followers_url',
        :'following_url' => :'following_url',
        :'gists_url' => :'gists_url',
        :'hub_url' => :'hub_url',
        :'issue_search_url' => :'issue_search_url',
        :'issues_url' => :'issues_url',
        :'keys_url' => :'keys_url',
        :'label_search_url' => :'label_search_url',
        :'notifications_url' => :'notifications_url',
        :'organization_url' => :'organization_url',
        :'organization_repositories_url' => :'organization_repositories_url',
        :'organization_teams_url' => :'organization_teams_url',
        :'public_gists_url' => :'public_gists_url',
        :'rate_limit_url' => :'rate_limit_url',
        :'repository_url' => :'repository_url',
        :'repository_search_url' => :'repository_search_url',
        :'current_user_repositories_url' => :'current_user_repositories_url',
        :'starred_url' => :'starred_url',
        :'starred_gists_url' => :'starred_gists_url',
        :'topic_search_url' => :'topic_search_url',
        :'user_url' => :'user_url',
        :'user_organizations_url' => :'user_organizations_url',
        :'user_repositories_url' => :'user_repositories_url',
        :'user_search_url' => :'user_search_url'
      }
    end

    # Returns all the JSON keys this model knows about
    def self.acceptable_attributes
      attribute_map.values
    end

    # Attribute type mapping.
    def self.openapi_types
      {
        :'current_user_url' => :'String',
        :'current_user_authorizations_html_url' => :'String',
        :'authorizations_url' => :'String',
        :'code_search_url' => :'String',
        :'commit_search_url' => :'String',
        :'emails_url' => :'String',
        :'emojis_url' => :'String',
        :'events_url' => :'String',
        :'feeds_url' => :'String',
        :'followers_url' => :'String',
        :'following_url' => :'String',
        :'gists_url' => :'String',
        :'hub_url' => :'String',
        :'issue_search_url' => :'String',
        :'issues_url' => :'String',
        :'keys_url' => :'String',
        :'label_search_url' => :'String',
        :'notifications_url' => :'String',
        :'organization_url' => :'String',
        :'organization_repositories_url' => :'String',
        :'organization_teams_url' => :'String',
        :'public_gists_url' => :'String',
        :'rate_limit_url' => :'String',
        :'repository_url' => :'String',
        :'repository_search_url' => :'String',
        :'current_user_repositories_url' => :'String',
        :'starred_url' => :'String',
        :'starred_gists_url' => :'String',
        :'topic_search_url' => :'String',
        :'user_url' => :'String',
        :'user_organizations_url' => :'String',
        :'user_repositories_url' => :'String',
        :'user_search_url' => :'String'
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
        fail ArgumentError, "The input argument (attributes) must be a hash in `OpenapiClient::Root` initialize method"
      end

      # check to see if the attribute exists and convert string to symbol for hash key
      attributes = attributes.each_with_object({}) { |(k, v), h|
        if (!self.class.attribute_map.key?(k.to_sym))
          fail ArgumentError, "`#{k}` is not a valid attribute in `OpenapiClient::Root`. Please check the name to make sure it's valid. List of attributes: " + self.class.attribute_map.keys.inspect
        end
        h[k.to_sym] = v
      }

      if attributes.key?(:'current_user_url')
        self.current_user_url = attributes[:'current_user_url']
      end

      if attributes.key?(:'current_user_authorizations_html_url')
        self.current_user_authorizations_html_url = attributes[:'current_user_authorizations_html_url']
      end

      if attributes.key?(:'authorizations_url')
        self.authorizations_url = attributes[:'authorizations_url']
      end

      if attributes.key?(:'code_search_url')
        self.code_search_url = attributes[:'code_search_url']
      end

      if attributes.key?(:'commit_search_url')
        self.commit_search_url = attributes[:'commit_search_url']
      end

      if attributes.key?(:'emails_url')
        self.emails_url = attributes[:'emails_url']
      end

      if attributes.key?(:'emojis_url')
        self.emojis_url = attributes[:'emojis_url']
      end

      if attributes.key?(:'events_url')
        self.events_url = attributes[:'events_url']
      end

      if attributes.key?(:'feeds_url')
        self.feeds_url = attributes[:'feeds_url']
      end

      if attributes.key?(:'followers_url')
        self.followers_url = attributes[:'followers_url']
      end

      if attributes.key?(:'following_url')
        self.following_url = attributes[:'following_url']
      end

      if attributes.key?(:'gists_url')
        self.gists_url = attributes[:'gists_url']
      end

      if attributes.key?(:'hub_url')
        self.hub_url = attributes[:'hub_url']
      end

      if attributes.key?(:'issue_search_url')
        self.issue_search_url = attributes[:'issue_search_url']
      end

      if attributes.key?(:'issues_url')
        self.issues_url = attributes[:'issues_url']
      end

      if attributes.key?(:'keys_url')
        self.keys_url = attributes[:'keys_url']
      end

      if attributes.key?(:'label_search_url')
        self.label_search_url = attributes[:'label_search_url']
      end

      if attributes.key?(:'notifications_url')
        self.notifications_url = attributes[:'notifications_url']
      end

      if attributes.key?(:'organization_url')
        self.organization_url = attributes[:'organization_url']
      end

      if attributes.key?(:'organization_repositories_url')
        self.organization_repositories_url = attributes[:'organization_repositories_url']
      end

      if attributes.key?(:'organization_teams_url')
        self.organization_teams_url = attributes[:'organization_teams_url']
      end

      if attributes.key?(:'public_gists_url')
        self.public_gists_url = attributes[:'public_gists_url']
      end

      if attributes.key?(:'rate_limit_url')
        self.rate_limit_url = attributes[:'rate_limit_url']
      end

      if attributes.key?(:'repository_url')
        self.repository_url = attributes[:'repository_url']
      end

      if attributes.key?(:'repository_search_url')
        self.repository_search_url = attributes[:'repository_search_url']
      end

      if attributes.key?(:'current_user_repositories_url')
        self.current_user_repositories_url = attributes[:'current_user_repositories_url']
      end

      if attributes.key?(:'starred_url')
        self.starred_url = attributes[:'starred_url']
      end

      if attributes.key?(:'starred_gists_url')
        self.starred_gists_url = attributes[:'starred_gists_url']
      end

      if attributes.key?(:'topic_search_url')
        self.topic_search_url = attributes[:'topic_search_url']
      end

      if attributes.key?(:'user_url')
        self.user_url = attributes[:'user_url']
      end

      if attributes.key?(:'user_organizations_url')
        self.user_organizations_url = attributes[:'user_organizations_url']
      end

      if attributes.key?(:'user_repositories_url')
        self.user_repositories_url = attributes[:'user_repositories_url']
      end

      if attributes.key?(:'user_search_url')
        self.user_search_url = attributes[:'user_search_url']
      end
    end

    # Show invalid properties with the reasons. Usually used together with valid?
    # @return Array for valid properties with the reasons
    def list_invalid_properties
      invalid_properties = Array.new
      if @current_user_url.nil?
        invalid_properties.push('invalid value for "current_user_url", current_user_url cannot be nil.')
      end

      if @current_user_authorizations_html_url.nil?
        invalid_properties.push('invalid value for "current_user_authorizations_html_url", current_user_authorizations_html_url cannot be nil.')
      end

      if @authorizations_url.nil?
        invalid_properties.push('invalid value for "authorizations_url", authorizations_url cannot be nil.')
      end

      if @code_search_url.nil?
        invalid_properties.push('invalid value for "code_search_url", code_search_url cannot be nil.')
      end

      if @commit_search_url.nil?
        invalid_properties.push('invalid value for "commit_search_url", commit_search_url cannot be nil.')
      end

      if @emails_url.nil?
        invalid_properties.push('invalid value for "emails_url", emails_url cannot be nil.')
      end

      if @emojis_url.nil?
        invalid_properties.push('invalid value for "emojis_url", emojis_url cannot be nil.')
      end

      if @events_url.nil?
        invalid_properties.push('invalid value for "events_url", events_url cannot be nil.')
      end

      if @feeds_url.nil?
        invalid_properties.push('invalid value for "feeds_url", feeds_url cannot be nil.')
      end

      if @followers_url.nil?
        invalid_properties.push('invalid value for "followers_url", followers_url cannot be nil.')
      end

      if @following_url.nil?
        invalid_properties.push('invalid value for "following_url", following_url cannot be nil.')
      end

      if @gists_url.nil?
        invalid_properties.push('invalid value for "gists_url", gists_url cannot be nil.')
      end

      if @issue_search_url.nil?
        invalid_properties.push('invalid value for "issue_search_url", issue_search_url cannot be nil.')
      end

      if @issues_url.nil?
        invalid_properties.push('invalid value for "issues_url", issues_url cannot be nil.')
      end

      if @keys_url.nil?
        invalid_properties.push('invalid value for "keys_url", keys_url cannot be nil.')
      end

      if @label_search_url.nil?
        invalid_properties.push('invalid value for "label_search_url", label_search_url cannot be nil.')
      end

      if @notifications_url.nil?
        invalid_properties.push('invalid value for "notifications_url", notifications_url cannot be nil.')
      end

      if @organization_url.nil?
        invalid_properties.push('invalid value for "organization_url", organization_url cannot be nil.')
      end

      if @organization_repositories_url.nil?
        invalid_properties.push('invalid value for "organization_repositories_url", organization_repositories_url cannot be nil.')
      end

      if @organization_teams_url.nil?
        invalid_properties.push('invalid value for "organization_teams_url", organization_teams_url cannot be nil.')
      end

      if @public_gists_url.nil?
        invalid_properties.push('invalid value for "public_gists_url", public_gists_url cannot be nil.')
      end

      if @rate_limit_url.nil?
        invalid_properties.push('invalid value for "rate_limit_url", rate_limit_url cannot be nil.')
      end

      if @repository_url.nil?
        invalid_properties.push('invalid value for "repository_url", repository_url cannot be nil.')
      end

      if @repository_search_url.nil?
        invalid_properties.push('invalid value for "repository_search_url", repository_search_url cannot be nil.')
      end

      if @current_user_repositories_url.nil?
        invalid_properties.push('invalid value for "current_user_repositories_url", current_user_repositories_url cannot be nil.')
      end

      if @starred_url.nil?
        invalid_properties.push('invalid value for "starred_url", starred_url cannot be nil.')
      end

      if @starred_gists_url.nil?
        invalid_properties.push('invalid value for "starred_gists_url", starred_gists_url cannot be nil.')
      end

      if @user_url.nil?
        invalid_properties.push('invalid value for "user_url", user_url cannot be nil.')
      end

      if @user_organizations_url.nil?
        invalid_properties.push('invalid value for "user_organizations_url", user_organizations_url cannot be nil.')
      end

      if @user_repositories_url.nil?
        invalid_properties.push('invalid value for "user_repositories_url", user_repositories_url cannot be nil.')
      end

      if @user_search_url.nil?
        invalid_properties.push('invalid value for "user_search_url", user_search_url cannot be nil.')
      end

      invalid_properties
    end

    # Check to see if the all the properties in the model are valid
    # @return true if the model is valid
    def valid?
      return false if @current_user_url.nil?
      return false if @current_user_authorizations_html_url.nil?
      return false if @authorizations_url.nil?
      return false if @code_search_url.nil?
      return false if @commit_search_url.nil?
      return false if @emails_url.nil?
      return false if @emojis_url.nil?
      return false if @events_url.nil?
      return false if @feeds_url.nil?
      return false if @followers_url.nil?
      return false if @following_url.nil?
      return false if @gists_url.nil?
      return false if @issue_search_url.nil?
      return false if @issues_url.nil?
      return false if @keys_url.nil?
      return false if @label_search_url.nil?
      return false if @notifications_url.nil?
      return false if @organization_url.nil?
      return false if @organization_repositories_url.nil?
      return false if @organization_teams_url.nil?
      return false if @public_gists_url.nil?
      return false if @rate_limit_url.nil?
      return false if @repository_url.nil?
      return false if @repository_search_url.nil?
      return false if @current_user_repositories_url.nil?
      return false if @starred_url.nil?
      return false if @starred_gists_url.nil?
      return false if @user_url.nil?
      return false if @user_organizations_url.nil?
      return false if @user_repositories_url.nil?
      return false if @user_search_url.nil?
      true
    end

    # Checks equality by comparing each attribute.
    # @param [Object] Object to be compared
    def ==(o)
      return true if self.equal?(o)
      self.class == o.class &&
          current_user_url == o.current_user_url &&
          current_user_authorizations_html_url == o.current_user_authorizations_html_url &&
          authorizations_url == o.authorizations_url &&
          code_search_url == o.code_search_url &&
          commit_search_url == o.commit_search_url &&
          emails_url == o.emails_url &&
          emojis_url == o.emojis_url &&
          events_url == o.events_url &&
          feeds_url == o.feeds_url &&
          followers_url == o.followers_url &&
          following_url == o.following_url &&
          gists_url == o.gists_url &&
          hub_url == o.hub_url &&
          issue_search_url == o.issue_search_url &&
          issues_url == o.issues_url &&
          keys_url == o.keys_url &&
          label_search_url == o.label_search_url &&
          notifications_url == o.notifications_url &&
          organization_url == o.organization_url &&
          organization_repositories_url == o.organization_repositories_url &&
          organization_teams_url == o.organization_teams_url &&
          public_gists_url == o.public_gists_url &&
          rate_limit_url == o.rate_limit_url &&
          repository_url == o.repository_url &&
          repository_search_url == o.repository_search_url &&
          current_user_repositories_url == o.current_user_repositories_url &&
          starred_url == o.starred_url &&
          starred_gists_url == o.starred_gists_url &&
          topic_search_url == o.topic_search_url &&
          user_url == o.user_url &&
          user_organizations_url == o.user_organizations_url &&
          user_repositories_url == o.user_repositories_url &&
          user_search_url == o.user_search_url
    end

    # @see the `==` method
    # @param [Object] Object to be compared
    def eql?(o)
      self == o
    end

    # Calculates hash code according to all attributes.
    # @return [Integer] Hash code
    def hash
      [current_user_url, current_user_authorizations_html_url, authorizations_url, code_search_url, commit_search_url, emails_url, emojis_url, events_url, feeds_url, followers_url, following_url, gists_url, hub_url, issue_search_url, issues_url, keys_url, label_search_url, notifications_url, organization_url, organization_repositories_url, organization_teams_url, public_gists_url, rate_limit_url, repository_url, repository_search_url, current_user_repositories_url, starred_url, starred_gists_url, topic_search_url, user_url, user_organizations_url, user_repositories_url, user_search_url].hash
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
