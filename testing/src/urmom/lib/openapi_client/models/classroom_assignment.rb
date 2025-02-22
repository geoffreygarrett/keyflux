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
  # A GitHub Classroom assignment
  class ClassroomAssignment
    # Unique identifier of the repository.
    attr_accessor :id

    # Whether an accepted assignment creates a public repository.
    attr_accessor :public_repo

    # Assignment title.
    attr_accessor :title

    # Whether it's a group assignment or individual assignment.
    attr_accessor :type

    # The link that a student can use to accept the assignment.
    attr_accessor :invite_link

    # Whether the invitation link is enabled. Visiting an enabled invitation link will accept the assignment.
    attr_accessor :invitations_enabled

    # Sluggified name of the assignment.
    attr_accessor :slug

    # Whether students are admins on created repository when a student accepts the assignment.
    attr_accessor :students_are_repo_admins

    # Whether feedback pull request will be created when a student accepts the assignment.
    attr_accessor :feedback_pull_requests_enabled

    # The maximum allowable teams for the assignment.
    attr_accessor :max_teams

    # The maximum allowable members per team.
    attr_accessor :max_members

    # The selected editor for the assignment.
    attr_accessor :editor

    # The number of students that have accepted the assignment.
    attr_accessor :accepted

    # The number of students that have submitted the assignment.
    attr_accessor :submitted

    # The number of students that have passed the assignment.
    attr_accessor :passing

    # The programming language used in the assignment.
    attr_accessor :language

    # The time at which the assignment is due.
    attr_accessor :deadline

    attr_accessor :starter_code_repository

    attr_accessor :classroom

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
        :'public_repo' => :'public_repo',
        :'title' => :'title',
        :'type' => :'type',
        :'invite_link' => :'invite_link',
        :'invitations_enabled' => :'invitations_enabled',
        :'slug' => :'slug',
        :'students_are_repo_admins' => :'students_are_repo_admins',
        :'feedback_pull_requests_enabled' => :'feedback_pull_requests_enabled',
        :'max_teams' => :'max_teams',
        :'max_members' => :'max_members',
        :'editor' => :'editor',
        :'accepted' => :'accepted',
        :'submitted' => :'submitted',
        :'passing' => :'passing',
        :'language' => :'language',
        :'deadline' => :'deadline',
        :'starter_code_repository' => :'starter_code_repository',
        :'classroom' => :'classroom'
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
        :'public_repo' => :'Boolean',
        :'title' => :'String',
        :'type' => :'String',
        :'invite_link' => :'String',
        :'invitations_enabled' => :'Boolean',
        :'slug' => :'String',
        :'students_are_repo_admins' => :'Boolean',
        :'feedback_pull_requests_enabled' => :'Boolean',
        :'max_teams' => :'Integer',
        :'max_members' => :'Integer',
        :'editor' => :'String',
        :'accepted' => :'Integer',
        :'submitted' => :'Integer',
        :'passing' => :'Integer',
        :'language' => :'String',
        :'deadline' => :'Time',
        :'starter_code_repository' => :'SimpleClassroomRepository',
        :'classroom' => :'Classroom'
      }
    end

    # List of attributes with nullable: true
    def self.openapi_nullable
      Set.new([
        :'max_teams',
        :'max_members',
        :'deadline',
      ])
    end

    # Initializes the object
    # @param [Hash] attributes Model attributes in the form of hash
    def initialize(attributes = {})
      if (!attributes.is_a?(Hash))
        fail ArgumentError, "The input argument (attributes) must be a hash in `OpenapiClient::ClassroomAssignment` initialize method"
      end

      # check to see if the attribute exists and convert string to symbol for hash key
      attributes = attributes.each_with_object({}) { |(k, v), h|
        if (!self.class.attribute_map.key?(k.to_sym))
          fail ArgumentError, "`#{k}` is not a valid attribute in `OpenapiClient::ClassroomAssignment`. Please check the name to make sure it's valid. List of attributes: " + self.class.attribute_map.keys.inspect
        end
        h[k.to_sym] = v
      }

      if attributes.key?(:'id')
        self.id = attributes[:'id']
      end

      if attributes.key?(:'public_repo')
        self.public_repo = attributes[:'public_repo']
      end

      if attributes.key?(:'title')
        self.title = attributes[:'title']
      end

      if attributes.key?(:'type')
        self.type = attributes[:'type']
      end

      if attributes.key?(:'invite_link')
        self.invite_link = attributes[:'invite_link']
      end

      if attributes.key?(:'invitations_enabled')
        self.invitations_enabled = attributes[:'invitations_enabled']
      end

      if attributes.key?(:'slug')
        self.slug = attributes[:'slug']
      end

      if attributes.key?(:'students_are_repo_admins')
        self.students_are_repo_admins = attributes[:'students_are_repo_admins']
      end

      if attributes.key?(:'feedback_pull_requests_enabled')
        self.feedback_pull_requests_enabled = attributes[:'feedback_pull_requests_enabled']
      end

      if attributes.key?(:'max_teams')
        self.max_teams = attributes[:'max_teams']
      end

      if attributes.key?(:'max_members')
        self.max_members = attributes[:'max_members']
      end

      if attributes.key?(:'editor')
        self.editor = attributes[:'editor']
      end

      if attributes.key?(:'accepted')
        self.accepted = attributes[:'accepted']
      end

      if attributes.key?(:'submitted')
        self.submitted = attributes[:'submitted']
      end

      if attributes.key?(:'passing')
        self.passing = attributes[:'passing']
      end

      if attributes.key?(:'language')
        self.language = attributes[:'language']
      end

      if attributes.key?(:'deadline')
        self.deadline = attributes[:'deadline']
      end

      if attributes.key?(:'starter_code_repository')
        self.starter_code_repository = attributes[:'starter_code_repository']
      end

      if attributes.key?(:'classroom')
        self.classroom = attributes[:'classroom']
      end
    end

    # Show invalid properties with the reasons. Usually used together with valid?
    # @return Array for valid properties with the reasons
    def list_invalid_properties
      invalid_properties = Array.new
      if @id.nil?
        invalid_properties.push('invalid value for "id", id cannot be nil.')
      end

      if @public_repo.nil?
        invalid_properties.push('invalid value for "public_repo", public_repo cannot be nil.')
      end

      if @title.nil?
        invalid_properties.push('invalid value for "title", title cannot be nil.')
      end

      if @type.nil?
        invalid_properties.push('invalid value for "type", type cannot be nil.')
      end

      if @invite_link.nil?
        invalid_properties.push('invalid value for "invite_link", invite_link cannot be nil.')
      end

      if @invitations_enabled.nil?
        invalid_properties.push('invalid value for "invitations_enabled", invitations_enabled cannot be nil.')
      end

      if @slug.nil?
        invalid_properties.push('invalid value for "slug", slug cannot be nil.')
      end

      if @students_are_repo_admins.nil?
        invalid_properties.push('invalid value for "students_are_repo_admins", students_are_repo_admins cannot be nil.')
      end

      if @feedback_pull_requests_enabled.nil?
        invalid_properties.push('invalid value for "feedback_pull_requests_enabled", feedback_pull_requests_enabled cannot be nil.')
      end

      if @editor.nil?
        invalid_properties.push('invalid value for "editor", editor cannot be nil.')
      end

      if @accepted.nil?
        invalid_properties.push('invalid value for "accepted", accepted cannot be nil.')
      end

      if @submitted.nil?
        invalid_properties.push('invalid value for "submitted", submitted cannot be nil.')
      end

      if @passing.nil?
        invalid_properties.push('invalid value for "passing", passing cannot be nil.')
      end

      if @language.nil?
        invalid_properties.push('invalid value for "language", language cannot be nil.')
      end

      if @starter_code_repository.nil?
        invalid_properties.push('invalid value for "starter_code_repository", starter_code_repository cannot be nil.')
      end

      if @classroom.nil?
        invalid_properties.push('invalid value for "classroom", classroom cannot be nil.')
      end

      invalid_properties
    end

    # Check to see if the all the properties in the model are valid
    # @return true if the model is valid
    def valid?
      return false if @id.nil?
      return false if @public_repo.nil?
      return false if @title.nil?
      return false if @type.nil?
      type_validator = EnumAttributeValidator.new('String', ["individual", "group"])
      return false unless type_validator.valid?(@type)
      return false if @invite_link.nil?
      return false if @invitations_enabled.nil?
      return false if @slug.nil?
      return false if @students_are_repo_admins.nil?
      return false if @feedback_pull_requests_enabled.nil?
      return false if @editor.nil?
      return false if @accepted.nil?
      return false if @submitted.nil?
      return false if @passing.nil?
      return false if @language.nil?
      return false if @starter_code_repository.nil?
      return false if @classroom.nil?
      true
    end

    # Custom attribute writer method checking allowed values (enum).
    # @param [Object] type Object to be assigned
    def type=(type)
      validator = EnumAttributeValidator.new('String', ["individual", "group"])
      unless validator.valid?(type)
        fail ArgumentError, "invalid value for \"type\", must be one of #{validator.allowable_values}."
      end
      @type = type
    end

    # Checks equality by comparing each attribute.
    # @param [Object] Object to be compared
    def ==(o)
      return true if self.equal?(o)
      self.class == o.class &&
          id == o.id &&
          public_repo == o.public_repo &&
          title == o.title &&
          type == o.type &&
          invite_link == o.invite_link &&
          invitations_enabled == o.invitations_enabled &&
          slug == o.slug &&
          students_are_repo_admins == o.students_are_repo_admins &&
          feedback_pull_requests_enabled == o.feedback_pull_requests_enabled &&
          max_teams == o.max_teams &&
          max_members == o.max_members &&
          editor == o.editor &&
          accepted == o.accepted &&
          submitted == o.submitted &&
          passing == o.passing &&
          language == o.language &&
          deadline == o.deadline &&
          starter_code_repository == o.starter_code_repository &&
          classroom == o.classroom
    end

    # @see the `==` method
    # @param [Object] Object to be compared
    def eql?(o)
      self == o
    end

    # Calculates hash code according to all attributes.
    # @return [Integer] Hash code
    def hash
      [id, public_repo, title, type, invite_link, invitations_enabled, slug, students_are_repo_admins, feedback_pull_requests_enabled, max_teams, max_members, editor, accepted, submitted, passing, language, deadline, starter_code_repository, classroom].hash
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
