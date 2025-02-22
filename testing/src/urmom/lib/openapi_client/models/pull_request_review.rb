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
  # Pull Request Reviews are reviews on pull requests.
  class PullRequestReview
    # Unique identifier of the review
    attr_accessor :id

    attr_accessor :node_id

    attr_accessor :user

    # The text of the review.
    attr_accessor :body

    attr_accessor :state

    attr_accessor :html_url

    attr_accessor :pull_request_url

    attr_accessor :_links

    attr_accessor :submitted_at

    # A commit SHA for the review. If the commit object was garbage collected or forcibly deleted, then it no longer exists in Git and this value will be `null`.
    attr_accessor :commit_id

    attr_accessor :body_html

    attr_accessor :body_text

    attr_accessor :author_association

    # Attribute mapping from ruby-style variable name to JSON key.
    def self.attribute_map
      {
        :'id' => :'id',
        :'node_id' => :'node_id',
        :'user' => :'user',
        :'body' => :'body',
        :'state' => :'state',
        :'html_url' => :'html_url',
        :'pull_request_url' => :'pull_request_url',
        :'_links' => :'_links',
        :'submitted_at' => :'submitted_at',
        :'commit_id' => :'commit_id',
        :'body_html' => :'body_html',
        :'body_text' => :'body_text',
        :'author_association' => :'author_association'
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
        :'node_id' => :'String',
        :'user' => :'NullableSimpleUser',
        :'body' => :'String',
        :'state' => :'String',
        :'html_url' => :'String',
        :'pull_request_url' => :'String',
        :'_links' => :'TimelineReviewedEventLinks',
        :'submitted_at' => :'Time',
        :'commit_id' => :'String',
        :'body_html' => :'String',
        :'body_text' => :'String',
        :'author_association' => :'AuthorAssociation'
      }
    end

    # List of attributes with nullable: true
    def self.openapi_nullable
      Set.new([
        :'user',
        :'commit_id',
      ])
    end

    # Initializes the object
    # @param [Hash] attributes Model attributes in the form of hash
    def initialize(attributes = {})
      if (!attributes.is_a?(Hash))
        fail ArgumentError, "The input argument (attributes) must be a hash in `OpenapiClient::PullRequestReview` initialize method"
      end

      # check to see if the attribute exists and convert string to symbol for hash key
      attributes = attributes.each_with_object({}) { |(k, v), h|
        if (!self.class.attribute_map.key?(k.to_sym))
          fail ArgumentError, "`#{k}` is not a valid attribute in `OpenapiClient::PullRequestReview`. Please check the name to make sure it's valid. List of attributes: " + self.class.attribute_map.keys.inspect
        end
        h[k.to_sym] = v
      }

      if attributes.key?(:'id')
        self.id = attributes[:'id']
      end

      if attributes.key?(:'node_id')
        self.node_id = attributes[:'node_id']
      end

      if attributes.key?(:'user')
        self.user = attributes[:'user']
      end

      if attributes.key?(:'body')
        self.body = attributes[:'body']
      end

      if attributes.key?(:'state')
        self.state = attributes[:'state']
      end

      if attributes.key?(:'html_url')
        self.html_url = attributes[:'html_url']
      end

      if attributes.key?(:'pull_request_url')
        self.pull_request_url = attributes[:'pull_request_url']
      end

      if attributes.key?(:'_links')
        self._links = attributes[:'_links']
      end

      if attributes.key?(:'submitted_at')
        self.submitted_at = attributes[:'submitted_at']
      end

      if attributes.key?(:'commit_id')
        self.commit_id = attributes[:'commit_id']
      end

      if attributes.key?(:'body_html')
        self.body_html = attributes[:'body_html']
      end

      if attributes.key?(:'body_text')
        self.body_text = attributes[:'body_text']
      end

      if attributes.key?(:'author_association')
        self.author_association = attributes[:'author_association']
      end
    end

    # Show invalid properties with the reasons. Usually used together with valid?
    # @return Array for valid properties with the reasons
    def list_invalid_properties
      invalid_properties = Array.new
      if @id.nil?
        invalid_properties.push('invalid value for "id", id cannot be nil.')
      end

      if @node_id.nil?
        invalid_properties.push('invalid value for "node_id", node_id cannot be nil.')
      end

      if @body.nil?
        invalid_properties.push('invalid value for "body", body cannot be nil.')
      end

      if @state.nil?
        invalid_properties.push('invalid value for "state", state cannot be nil.')
      end

      if @html_url.nil?
        invalid_properties.push('invalid value for "html_url", html_url cannot be nil.')
      end

      if @pull_request_url.nil?
        invalid_properties.push('invalid value for "pull_request_url", pull_request_url cannot be nil.')
      end

      if @_links.nil?
        invalid_properties.push('invalid value for "_links", _links cannot be nil.')
      end

      if @author_association.nil?
        invalid_properties.push('invalid value for "author_association", author_association cannot be nil.')
      end

      invalid_properties
    end

    # Check to see if the all the properties in the model are valid
    # @return true if the model is valid
    def valid?
      return false if @id.nil?
      return false if @node_id.nil?
      return false if @body.nil?
      return false if @state.nil?
      return false if @html_url.nil?
      return false if @pull_request_url.nil?
      return false if @_links.nil?
      return false if @author_association.nil?
      true
    end

    # Checks equality by comparing each attribute.
    # @param [Object] Object to be compared
    def ==(o)
      return true if self.equal?(o)
      self.class == o.class &&
          id == o.id &&
          node_id == o.node_id &&
          user == o.user &&
          body == o.body &&
          state == o.state &&
          html_url == o.html_url &&
          pull_request_url == o.pull_request_url &&
          _links == o._links &&
          submitted_at == o.submitted_at &&
          commit_id == o.commit_id &&
          body_html == o.body_html &&
          body_text == o.body_text &&
          author_association == o.author_association
    end

    # @see the `==` method
    # @param [Object] Object to be compared
    def eql?(o)
      self == o
    end

    # Calculates hash code according to all attributes.
    # @return [Integer] Hash code
    def hash
      [id, node_id, user, body, state, html_url, pull_request_url, _links, submitted_at, commit_id, body_html, body_text, author_association].hash
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
