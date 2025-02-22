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
  # Issue Search Result Item
  class IssueSearchResultItem
    attr_accessor :url

    attr_accessor :repository_url

    attr_accessor :labels_url

    attr_accessor :comments_url

    attr_accessor :events_url

    attr_accessor :html_url

    attr_accessor :id

    attr_accessor :node_id

    attr_accessor :number

    attr_accessor :title

    attr_accessor :locked

    attr_accessor :active_lock_reason

    attr_accessor :assignees

    attr_accessor :user

    attr_accessor :labels

    attr_accessor :state

    attr_accessor :state_reason

    attr_accessor :assignee

    attr_accessor :milestone

    attr_accessor :comments

    attr_accessor :created_at

    attr_accessor :updated_at

    attr_accessor :closed_at

    attr_accessor :text_matches

    attr_accessor :pull_request

    attr_accessor :body

    attr_accessor :score

    attr_accessor :author_association

    attr_accessor :draft

    attr_accessor :repository

    attr_accessor :body_html

    attr_accessor :body_text

    attr_accessor :timeline_url

    attr_accessor :performed_via_github_app

    attr_accessor :reactions

    # Attribute mapping from ruby-style variable name to JSON key.
    def self.attribute_map
      {
        :'url' => :'url',
        :'repository_url' => :'repository_url',
        :'labels_url' => :'labels_url',
        :'comments_url' => :'comments_url',
        :'events_url' => :'events_url',
        :'html_url' => :'html_url',
        :'id' => :'id',
        :'node_id' => :'node_id',
        :'number' => :'number',
        :'title' => :'title',
        :'locked' => :'locked',
        :'active_lock_reason' => :'active_lock_reason',
        :'assignees' => :'assignees',
        :'user' => :'user',
        :'labels' => :'labels',
        :'state' => :'state',
        :'state_reason' => :'state_reason',
        :'assignee' => :'assignee',
        :'milestone' => :'milestone',
        :'comments' => :'comments',
        :'created_at' => :'created_at',
        :'updated_at' => :'updated_at',
        :'closed_at' => :'closed_at',
        :'text_matches' => :'text_matches',
        :'pull_request' => :'pull_request',
        :'body' => :'body',
        :'score' => :'score',
        :'author_association' => :'author_association',
        :'draft' => :'draft',
        :'repository' => :'repository',
        :'body_html' => :'body_html',
        :'body_text' => :'body_text',
        :'timeline_url' => :'timeline_url',
        :'performed_via_github_app' => :'performed_via_github_app',
        :'reactions' => :'reactions'
      }
    end

    # Returns all the JSON keys this model knows about
    def self.acceptable_attributes
      attribute_map.values
    end

    # Attribute type mapping.
    def self.openapi_types
      {
        :'url' => :'String',
        :'repository_url' => :'String',
        :'labels_url' => :'String',
        :'comments_url' => :'String',
        :'events_url' => :'String',
        :'html_url' => :'String',
        :'id' => :'Integer',
        :'node_id' => :'String',
        :'number' => :'Integer',
        :'title' => :'String',
        :'locked' => :'Boolean',
        :'active_lock_reason' => :'String',
        :'assignees' => :'Array<SimpleUser>',
        :'user' => :'NullableSimpleUser',
        :'labels' => :'Array<IssueSearchResultItemLabelsInner>',
        :'state' => :'String',
        :'state_reason' => :'String',
        :'assignee' => :'NullableSimpleUser',
        :'milestone' => :'NullableMilestone',
        :'comments' => :'Integer',
        :'created_at' => :'Time',
        :'updated_at' => :'Time',
        :'closed_at' => :'Time',
        :'text_matches' => :'Array<SearchResultTextMatchesInner>',
        :'pull_request' => :'IssuePullRequest',
        :'body' => :'String',
        :'score' => :'Float',
        :'author_association' => :'AuthorAssociation',
        :'draft' => :'Boolean',
        :'repository' => :'Repository',
        :'body_html' => :'String',
        :'body_text' => :'String',
        :'timeline_url' => :'String',
        :'performed_via_github_app' => :'NullableIntegration',
        :'reactions' => :'ReactionRollup'
      }
    end

    # List of attributes with nullable: true
    def self.openapi_nullable
      Set.new([
        :'active_lock_reason',
        :'assignees',
        :'user',
        :'state_reason',
        :'assignee',
        :'milestone',
        :'closed_at',
        :'performed_via_github_app',
      ])
    end

    # Initializes the object
    # @param [Hash] attributes Model attributes in the form of hash
    def initialize(attributes = {})
      if (!attributes.is_a?(Hash))
        fail ArgumentError, "The input argument (attributes) must be a hash in `OpenapiClient::IssueSearchResultItem` initialize method"
      end

      # check to see if the attribute exists and convert string to symbol for hash key
      attributes = attributes.each_with_object({}) { |(k, v), h|
        if (!self.class.attribute_map.key?(k.to_sym))
          fail ArgumentError, "`#{k}` is not a valid attribute in `OpenapiClient::IssueSearchResultItem`. Please check the name to make sure it's valid. List of attributes: " + self.class.attribute_map.keys.inspect
        end
        h[k.to_sym] = v
      }

      if attributes.key?(:'url')
        self.url = attributes[:'url']
      end

      if attributes.key?(:'repository_url')
        self.repository_url = attributes[:'repository_url']
      end

      if attributes.key?(:'labels_url')
        self.labels_url = attributes[:'labels_url']
      end

      if attributes.key?(:'comments_url')
        self.comments_url = attributes[:'comments_url']
      end

      if attributes.key?(:'events_url')
        self.events_url = attributes[:'events_url']
      end

      if attributes.key?(:'html_url')
        self.html_url = attributes[:'html_url']
      end

      if attributes.key?(:'id')
        self.id = attributes[:'id']
      end

      if attributes.key?(:'node_id')
        self.node_id = attributes[:'node_id']
      end

      if attributes.key?(:'number')
        self.number = attributes[:'number']
      end

      if attributes.key?(:'title')
        self.title = attributes[:'title']
      end

      if attributes.key?(:'locked')
        self.locked = attributes[:'locked']
      end

      if attributes.key?(:'active_lock_reason')
        self.active_lock_reason = attributes[:'active_lock_reason']
      end

      if attributes.key?(:'assignees')
        if (value = attributes[:'assignees']).is_a?(Array)
          self.assignees = value
        end
      end

      if attributes.key?(:'user')
        self.user = attributes[:'user']
      end

      if attributes.key?(:'labels')
        if (value = attributes[:'labels']).is_a?(Array)
          self.labels = value
        end
      end

      if attributes.key?(:'state')
        self.state = attributes[:'state']
      end

      if attributes.key?(:'state_reason')
        self.state_reason = attributes[:'state_reason']
      end

      if attributes.key?(:'assignee')
        self.assignee = attributes[:'assignee']
      end

      if attributes.key?(:'milestone')
        self.milestone = attributes[:'milestone']
      end

      if attributes.key?(:'comments')
        self.comments = attributes[:'comments']
      end

      if attributes.key?(:'created_at')
        self.created_at = attributes[:'created_at']
      end

      if attributes.key?(:'updated_at')
        self.updated_at = attributes[:'updated_at']
      end

      if attributes.key?(:'closed_at')
        self.closed_at = attributes[:'closed_at']
      end

      if attributes.key?(:'text_matches')
        if (value = attributes[:'text_matches']).is_a?(Array)
          self.text_matches = value
        end
      end

      if attributes.key?(:'pull_request')
        self.pull_request = attributes[:'pull_request']
      end

      if attributes.key?(:'body')
        self.body = attributes[:'body']
      end

      if attributes.key?(:'score')
        self.score = attributes[:'score']
      end

      if attributes.key?(:'author_association')
        self.author_association = attributes[:'author_association']
      end

      if attributes.key?(:'draft')
        self.draft = attributes[:'draft']
      end

      if attributes.key?(:'repository')
        self.repository = attributes[:'repository']
      end

      if attributes.key?(:'body_html')
        self.body_html = attributes[:'body_html']
      end

      if attributes.key?(:'body_text')
        self.body_text = attributes[:'body_text']
      end

      if attributes.key?(:'timeline_url')
        self.timeline_url = attributes[:'timeline_url']
      end

      if attributes.key?(:'performed_via_github_app')
        self.performed_via_github_app = attributes[:'performed_via_github_app']
      end

      if attributes.key?(:'reactions')
        self.reactions = attributes[:'reactions']
      end
    end

    # Show invalid properties with the reasons. Usually used together with valid?
    # @return Array for valid properties with the reasons
    def list_invalid_properties
      invalid_properties = Array.new
      if @url.nil?
        invalid_properties.push('invalid value for "url", url cannot be nil.')
      end

      if @repository_url.nil?
        invalid_properties.push('invalid value for "repository_url", repository_url cannot be nil.')
      end

      if @labels_url.nil?
        invalid_properties.push('invalid value for "labels_url", labels_url cannot be nil.')
      end

      if @comments_url.nil?
        invalid_properties.push('invalid value for "comments_url", comments_url cannot be nil.')
      end

      if @events_url.nil?
        invalid_properties.push('invalid value for "events_url", events_url cannot be nil.')
      end

      if @html_url.nil?
        invalid_properties.push('invalid value for "html_url", html_url cannot be nil.')
      end

      if @id.nil?
        invalid_properties.push('invalid value for "id", id cannot be nil.')
      end

      if @node_id.nil?
        invalid_properties.push('invalid value for "node_id", node_id cannot be nil.')
      end

      if @number.nil?
        invalid_properties.push('invalid value for "number", number cannot be nil.')
      end

      if @title.nil?
        invalid_properties.push('invalid value for "title", title cannot be nil.')
      end

      if @locked.nil?
        invalid_properties.push('invalid value for "locked", locked cannot be nil.')
      end

      if @labels.nil?
        invalid_properties.push('invalid value for "labels", labels cannot be nil.')
      end

      if @state.nil?
        invalid_properties.push('invalid value for "state", state cannot be nil.')
      end

      if @comments.nil?
        invalid_properties.push('invalid value for "comments", comments cannot be nil.')
      end

      if @created_at.nil?
        invalid_properties.push('invalid value for "created_at", created_at cannot be nil.')
      end

      if @updated_at.nil?
        invalid_properties.push('invalid value for "updated_at", updated_at cannot be nil.')
      end

      if @score.nil?
        invalid_properties.push('invalid value for "score", score cannot be nil.')
      end

      if @author_association.nil?
        invalid_properties.push('invalid value for "author_association", author_association cannot be nil.')
      end

      invalid_properties
    end

    # Check to see if the all the properties in the model are valid
    # @return true if the model is valid
    def valid?
      return false if @url.nil?
      return false if @repository_url.nil?
      return false if @labels_url.nil?
      return false if @comments_url.nil?
      return false if @events_url.nil?
      return false if @html_url.nil?
      return false if @id.nil?
      return false if @node_id.nil?
      return false if @number.nil?
      return false if @title.nil?
      return false if @locked.nil?
      return false if @labels.nil?
      return false if @state.nil?
      return false if @comments.nil?
      return false if @created_at.nil?
      return false if @updated_at.nil?
      return false if @score.nil?
      return false if @author_association.nil?
      true
    end

    # Checks equality by comparing each attribute.
    # @param [Object] Object to be compared
    def ==(o)
      return true if self.equal?(o)
      self.class == o.class &&
          url == o.url &&
          repository_url == o.repository_url &&
          labels_url == o.labels_url &&
          comments_url == o.comments_url &&
          events_url == o.events_url &&
          html_url == o.html_url &&
          id == o.id &&
          node_id == o.node_id &&
          number == o.number &&
          title == o.title &&
          locked == o.locked &&
          active_lock_reason == o.active_lock_reason &&
          assignees == o.assignees &&
          user == o.user &&
          labels == o.labels &&
          state == o.state &&
          state_reason == o.state_reason &&
          assignee == o.assignee &&
          milestone == o.milestone &&
          comments == o.comments &&
          created_at == o.created_at &&
          updated_at == o.updated_at &&
          closed_at == o.closed_at &&
          text_matches == o.text_matches &&
          pull_request == o.pull_request &&
          body == o.body &&
          score == o.score &&
          author_association == o.author_association &&
          draft == o.draft &&
          repository == o.repository &&
          body_html == o.body_html &&
          body_text == o.body_text &&
          timeline_url == o.timeline_url &&
          performed_via_github_app == o.performed_via_github_app &&
          reactions == o.reactions
    end

    # @see the `==` method
    # @param [Object] Object to be compared
    def eql?(o)
      self == o
    end

    # Calculates hash code according to all attributes.
    # @return [Integer] Hash code
    def hash
      [url, repository_url, labels_url, comments_url, events_url, html_url, id, node_id, number, title, locked, active_lock_reason, assignees, user, labels, state, state_reason, assignee, milestone, comments, created_at, updated_at, closed_at, text_matches, pull_request, body, score, author_association, draft, repository, body_html, body_text, timeline_url, performed_via_github_app, reactions].hash
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
