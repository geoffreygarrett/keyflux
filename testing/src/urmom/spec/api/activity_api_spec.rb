=begin
#GitHub v3 REST API

#GitHub's v3 REST API.

The version of the OpenAPI document: 1.1.4

Generated by: https://openapi-generator.tech
OpenAPI Generator version: 6.2.0

=end

require 'spec_helper'
require 'json'

# Unit tests for OpenapiClient::ActivityApi
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe 'ActivityApi' do
  before do
    # run before each test
    @api_instance = OpenapiClient::ActivityApi.new
  end

  after do
    # run after each test
  end

  describe 'test an instance of ActivityApi' do
    it 'should create an instance of ActivityApi' do
      expect(@api_instance).to be_instance_of(OpenapiClient::ActivityApi)
    end
  end

  # unit tests for activity_check_repo_is_starred_by_authenticated_user
  # Check if a repository is starred by the authenticated user
  # Whether the authenticated user has starred the repository.
  # @param owner The account owner of the repository. The name is not case sensitive.
  # @param repo The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive.
  # @param [Hash] opts the optional parameters
  # @return [nil]
  describe 'activity_check_repo_is_starred_by_authenticated_user test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for activity_delete_repo_subscription
  # Delete a repository subscription
  # This endpoint should only be used to stop watching a repository. To control whether or not you wish to receive notifications from a repository, [set the repository&#39;s subscription manually](https://docs.github.com/rest/activity/watching#set-a-repository-subscription).
  # @param owner The account owner of the repository. The name is not case sensitive.
  # @param repo The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive.
  # @param [Hash] opts the optional parameters
  # @return [nil]
  describe 'activity_delete_repo_subscription test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for activity_delete_thread_subscription
  # Delete a thread subscription
  # Mutes all future notifications for a conversation until you comment on the thread or get an **@mention**. If you are watching the repository of the thread, you will still receive notifications. To ignore future notifications for a repository you are watching, use the [Set a thread subscription](https://docs.github.com/rest/activity/notifications#set-a-thread-subscription) endpoint and set &#x60;ignore&#x60; to &#x60;true&#x60;.
  # @param thread_id The unique identifier of the notification thread. This corresponds to the value returned in the &#x60;id&#x60; field when you retrieve notifications (for example with the [&#x60;GET /notifications&#x60; operation](https://docs.github.com/rest/activity/notifications#list-notifications-for-the-authenticated-user)).
  # @param [Hash] opts the optional parameters
  # @return [nil]
  describe 'activity_delete_thread_subscription test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for activity_get_feeds
  # Get feeds
  # Lists the feeds available to the authenticated user. The response provides a URL for each feed. You can then get a specific feed by sending a request to one of the feed URLs.  *   **Timeline**: The GitHub global public timeline *   **User**: The public timeline for any user, using &#x60;uri_template&#x60;. For more information, see \&quot;[Hypermedia](https://docs.github.com/rest/using-the-rest-api/getting-started-with-the-rest-api#hypermedia).\&quot; *   **Current user public**: The public timeline for the authenticated user *   **Current user**: The private timeline for the authenticated user *   **Current user actor**: The private timeline for activity created by the authenticated user *   **Current user organizations**: The private timeline for the organizations the authenticated user is a member of. *   **Security advisories**: A collection of public announcements that provide information about security-related vulnerabilities in software on GitHub.  By default, timeline resources are returned in JSON. You can specify the &#x60;application/atom+xml&#x60; type in the &#x60;Accept&#x60; header to return timeline resources in Atom format. For more information, see \&quot;[Media types](https://docs.github.com/rest/using-the-rest-api/getting-started-with-the-rest-api#media-types).\&quot;  **Note**: Private feeds are only returned when [authenticating via Basic Auth](https://docs.github.com/rest/authentication/authenticating-to-the-rest-api#using-basic-authentication) since current feed URIs use the older, non revocable auth tokens.
  # @param [Hash] opts the optional parameters
  # @return [Feed]
  describe 'activity_get_feeds test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for activity_get_repo_subscription
  # Get a repository subscription
  # Gets information about whether the authenticated user is subscribed to the repository.
  # @param owner The account owner of the repository. The name is not case sensitive.
  # @param repo The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive.
  # @param [Hash] opts the optional parameters
  # @return [RepositorySubscription]
  describe 'activity_get_repo_subscription test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for activity_get_thread
  # Get a thread
  # Gets information about a notification thread.
  # @param thread_id The unique identifier of the notification thread. This corresponds to the value returned in the &#x60;id&#x60; field when you retrieve notifications (for example with the [&#x60;GET /notifications&#x60; operation](https://docs.github.com/rest/activity/notifications#list-notifications-for-the-authenticated-user)).
  # @param [Hash] opts the optional parameters
  # @return [Thread]
  describe 'activity_get_thread test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for activity_get_thread_subscription_for_authenticated_user
  # Get a thread subscription for the authenticated user
  # This checks to see if the current user is subscribed to a thread. You can also [get a repository subscription](https://docs.github.com/rest/activity/watching#get-a-repository-subscription).  Note that subscriptions are only generated if a user is participating in a conversation--for example, they&#39;ve replied to the thread, were **@mentioned**, or manually subscribe to a thread.
  # @param thread_id The unique identifier of the notification thread. This corresponds to the value returned in the &#x60;id&#x60; field when you retrieve notifications (for example with the [&#x60;GET /notifications&#x60; operation](https://docs.github.com/rest/activity/notifications#list-notifications-for-the-authenticated-user)).
  # @param [Hash] opts the optional parameters
  # @return [ThreadSubscription]
  describe 'activity_get_thread_subscription_for_authenticated_user test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for activity_list_events_for_authenticated_user
  # List events for the authenticated user
  # If you are authenticated as the given user, you will see your private events. Otherwise, you&#39;ll only see public events.
  # @param username The handle for the GitHub user account.
  # @param [Hash] opts the optional parameters
  # @option opts [Integer] :per_page The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot;
  # @option opts [Integer] :page The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot;
  # @return [Array<Event>]
  describe 'activity_list_events_for_authenticated_user test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for activity_list_notifications_for_authenticated_user
  # List notifications for the authenticated user
  # List all notifications for the current user, sorted by most recently updated.
  # @param [Hash] opts the optional parameters
  # @option opts [Boolean] :all If &#x60;true&#x60;, show notifications marked as read.
  # @option opts [Boolean] :participating If &#x60;true&#x60;, only shows notifications in which the user is directly participating or mentioned.
  # @option opts [Time] :since Only show results that were last updated after the given time. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format: &#x60;YYYY-MM-DDTHH:MM:SSZ&#x60;.
  # @option opts [Time] :before Only show notifications updated before the given time. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format: &#x60;YYYY-MM-DDTHH:MM:SSZ&#x60;.
  # @option opts [Integer] :page The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot;
  # @option opts [Integer] :per_page The number of results per page (max 50). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot;
  # @return [Array<Thread>]
  describe 'activity_list_notifications_for_authenticated_user test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for activity_list_org_events_for_authenticated_user
  # List organization events for the authenticated user
  # This is the user&#39;s organization dashboard. You must be authenticated as the user to view this.
  # @param username The handle for the GitHub user account.
  # @param org The organization name. The name is not case sensitive.
  # @param [Hash] opts the optional parameters
  # @option opts [Integer] :per_page The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot;
  # @option opts [Integer] :page The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot;
  # @return [Array<Event>]
  describe 'activity_list_org_events_for_authenticated_user test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for activity_list_public_events
  # List public events
  # We delay the public events feed by five minutes, which means the most recent event returned by the public events API actually occurred at least five minutes ago.
  # @param [Hash] opts the optional parameters
  # @option opts [Integer] :per_page The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot;
  # @option opts [Integer] :page The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot;
  # @return [Array<Event>]
  describe 'activity_list_public_events test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for activity_list_public_events_for_repo_network
  # List public events for a network of repositories
  # 
  # @param owner The account owner of the repository. The name is not case sensitive.
  # @param repo The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive.
  # @param [Hash] opts the optional parameters
  # @option opts [Integer] :per_page The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot;
  # @option opts [Integer] :page The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot;
  # @return [Array<Event>]
  describe 'activity_list_public_events_for_repo_network test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for activity_list_public_events_for_user
  # List public events for a user
  # 
  # @param username The handle for the GitHub user account.
  # @param [Hash] opts the optional parameters
  # @option opts [Integer] :per_page The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot;
  # @option opts [Integer] :page The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot;
  # @return [Array<Event>]
  describe 'activity_list_public_events_for_user test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for activity_list_public_org_events
  # List public organization events
  # 
  # @param org The organization name. The name is not case sensitive.
  # @param [Hash] opts the optional parameters
  # @option opts [Integer] :per_page The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot;
  # @option opts [Integer] :page The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot;
  # @return [Array<Event>]
  describe 'activity_list_public_org_events test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for activity_list_received_events_for_user
  # List events received by the authenticated user
  # These are events that you&#39;ve received by watching repositories and following users. If you are authenticated as the given user, you will see private events. Otherwise, you&#39;ll only see public events.
  # @param username The handle for the GitHub user account.
  # @param [Hash] opts the optional parameters
  # @option opts [Integer] :per_page The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot;
  # @option opts [Integer] :page The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot;
  # @return [Array<Event>]
  describe 'activity_list_received_events_for_user test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for activity_list_received_public_events_for_user
  # List public events received by a user
  # 
  # @param username The handle for the GitHub user account.
  # @param [Hash] opts the optional parameters
  # @option opts [Integer] :per_page The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot;
  # @option opts [Integer] :page The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot;
  # @return [Array<Event>]
  describe 'activity_list_received_public_events_for_user test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for activity_list_repo_events
  # List repository events
  # **Note**: This API is not built to serve real-time use cases. Depending on the time of day, event latency can be anywhere from 30s to 6h. 
  # @param owner The account owner of the repository. The name is not case sensitive.
  # @param repo The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive.
  # @param [Hash] opts the optional parameters
  # @option opts [Integer] :per_page The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot;
  # @option opts [Integer] :page The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot;
  # @return [Array<Event>]
  describe 'activity_list_repo_events test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for activity_list_repo_notifications_for_authenticated_user
  # List repository notifications for the authenticated user
  # Lists all notifications for the current user in the specified repository.
  # @param owner The account owner of the repository. The name is not case sensitive.
  # @param repo The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive.
  # @param [Hash] opts the optional parameters
  # @option opts [Boolean] :all If &#x60;true&#x60;, show notifications marked as read.
  # @option opts [Boolean] :participating If &#x60;true&#x60;, only shows notifications in which the user is directly participating or mentioned.
  # @option opts [Time] :since Only show results that were last updated after the given time. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format: &#x60;YYYY-MM-DDTHH:MM:SSZ&#x60;.
  # @option opts [Time] :before Only show notifications updated before the given time. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format: &#x60;YYYY-MM-DDTHH:MM:SSZ&#x60;.
  # @option opts [Integer] :per_page The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot;
  # @option opts [Integer] :page The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot;
  # @return [Array<Thread>]
  describe 'activity_list_repo_notifications_for_authenticated_user test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for activity_list_repos_starred_by_authenticated_user
  # List repositories starred by the authenticated user
  # Lists repositories the authenticated user has starred.  This endpoint supports the following custom media types. For more information, see \&quot;[Media types](https://docs.github.com/rest/using-the-rest-api/getting-started-with-the-rest-api#media-types).\&quot;  - **&#x60;application/vnd.github.star+json&#x60;**: Includes a timestamp of when the star was created.
  # @param [Hash] opts the optional parameters
  # @option opts [String] :sort The property to sort the results by. &#x60;created&#x60; means when the repository was starred. &#x60;updated&#x60; means when the repository was last pushed to.
  # @option opts [String] :direction The direction to sort the results by.
  # @option opts [Integer] :per_page The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot;
  # @option opts [Integer] :page The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot;
  # @return [Array<Repository>]
  describe 'activity_list_repos_starred_by_authenticated_user test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for activity_list_repos_starred_by_user
  # List repositories starred by a user
  # Lists repositories a user has starred.  This endpoint supports the following custom media types. For more information, see \&quot;[Media types](https://docs.github.com/rest/using-the-rest-api/getting-started-with-the-rest-api#media-types).\&quot;  - **&#x60;application/vnd.github.star+json&#x60;**: Includes a timestamp of when the star was created.
  # @param username The handle for the GitHub user account.
  # @param [Hash] opts the optional parameters
  # @option opts [String] :sort The property to sort the results by. &#x60;created&#x60; means when the repository was starred. &#x60;updated&#x60; means when the repository was last pushed to.
  # @option opts [String] :direction The direction to sort the results by.
  # @option opts [Integer] :per_page The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot;
  # @option opts [Integer] :page The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot;
  # @return [ActivityListReposStarredByUser200Response]
  describe 'activity_list_repos_starred_by_user test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for activity_list_repos_watched_by_user
  # List repositories watched by a user
  # Lists repositories a user is watching.
  # @param username The handle for the GitHub user account.
  # @param [Hash] opts the optional parameters
  # @option opts [Integer] :per_page The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot;
  # @option opts [Integer] :page The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot;
  # @return [Array<MinimalRepository>]
  describe 'activity_list_repos_watched_by_user test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for activity_list_stargazers_for_repo
  # List stargazers
  # Lists the people that have starred the repository.  This endpoint supports the following custom media types. For more information, see \&quot;[Media types](https://docs.github.com/rest/using-the-rest-api/getting-started-with-the-rest-api#media-types).\&quot;  - **&#x60;application/vnd.github.star+json&#x60;**: Includes a timestamp of when the star was created.
  # @param owner The account owner of the repository. The name is not case sensitive.
  # @param repo The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive.
  # @param [Hash] opts the optional parameters
  # @option opts [Integer] :per_page The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot;
  # @option opts [Integer] :page The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot;
  # @return [ActivityListStargazersForRepo200Response]
  describe 'activity_list_stargazers_for_repo test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for activity_list_watched_repos_for_authenticated_user
  # List repositories watched by the authenticated user
  # Lists repositories the authenticated user is watching.
  # @param [Hash] opts the optional parameters
  # @option opts [Integer] :per_page The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot;
  # @option opts [Integer] :page The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot;
  # @return [Array<MinimalRepository>]
  describe 'activity_list_watched_repos_for_authenticated_user test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for activity_list_watchers_for_repo
  # List watchers
  # Lists the people watching the specified repository.
  # @param owner The account owner of the repository. The name is not case sensitive.
  # @param repo The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive.
  # @param [Hash] opts the optional parameters
  # @option opts [Integer] :per_page The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot;
  # @option opts [Integer] :page The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot;
  # @return [Array<SimpleUser>]
  describe 'activity_list_watchers_for_repo test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for activity_mark_notifications_as_read
  # Mark notifications as read
  # Marks all notifications as \&quot;read\&quot; for the current user. If the number of notifications is too large to complete in one request, you will receive a &#x60;202 Accepted&#x60; status and GitHub will run an asynchronous process to mark notifications as \&quot;read.\&quot; To check whether any \&quot;unread\&quot; notifications remain, you can use the [List notifications for the authenticated user](https://docs.github.com/rest/activity/notifications#list-notifications-for-the-authenticated-user) endpoint and pass the query parameter &#x60;all&#x3D;false&#x60;.
  # @param [Hash] opts the optional parameters
  # @option opts [ActivityMarkNotificationsAsReadRequest] :activity_mark_notifications_as_read_request 
  # @return [ActivityMarkNotificationsAsRead202Response]
  describe 'activity_mark_notifications_as_read test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for activity_mark_repo_notifications_as_read
  # Mark repository notifications as read
  # Marks all notifications in a repository as \&quot;read\&quot; for the current user. If the number of notifications is too large to complete in one request, you will receive a &#x60;202 Accepted&#x60; status and GitHub will run an asynchronous process to mark notifications as \&quot;read.\&quot; To check whether any \&quot;unread\&quot; notifications remain, you can use the [List repository notifications for the authenticated user](https://docs.github.com/rest/activity/notifications#list-repository-notifications-for-the-authenticated-user) endpoint and pass the query parameter &#x60;all&#x3D;false&#x60;.
  # @param owner The account owner of the repository. The name is not case sensitive.
  # @param repo The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive.
  # @param [Hash] opts the optional parameters
  # @option opts [ActivityMarkRepoNotificationsAsReadRequest] :activity_mark_repo_notifications_as_read_request 
  # @return [ActivityMarkRepoNotificationsAsRead202Response]
  describe 'activity_mark_repo_notifications_as_read test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for activity_mark_thread_as_done
  # Mark a thread as done
  # Marks a thread as \&quot;done.\&quot; Marking a thread as \&quot;done\&quot; is equivalent to marking a notification in your notification inbox on GitHub as done: https://github.com/notifications.
  # @param thread_id The unique identifier of the notification thread. This corresponds to the value returned in the &#x60;id&#x60; field when you retrieve notifications (for example with the [&#x60;GET /notifications&#x60; operation](https://docs.github.com/rest/activity/notifications#list-notifications-for-the-authenticated-user)).
  # @param [Hash] opts the optional parameters
  # @return [nil]
  describe 'activity_mark_thread_as_done test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for activity_mark_thread_as_read
  # Mark a thread as read
  # Marks a thread as \&quot;read.\&quot; Marking a thread as \&quot;read\&quot; is equivalent to clicking a notification in your notification inbox on GitHub: https://github.com/notifications.
  # @param thread_id The unique identifier of the notification thread. This corresponds to the value returned in the &#x60;id&#x60; field when you retrieve notifications (for example with the [&#x60;GET /notifications&#x60; operation](https://docs.github.com/rest/activity/notifications#list-notifications-for-the-authenticated-user)).
  # @param [Hash] opts the optional parameters
  # @return [nil]
  describe 'activity_mark_thread_as_read test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for activity_set_repo_subscription
  # Set a repository subscription
  # If you would like to watch a repository, set &#x60;subscribed&#x60; to &#x60;true&#x60;. If you would like to ignore notifications made within a repository, set &#x60;ignored&#x60; to &#x60;true&#x60;. If you would like to stop watching a repository, [delete the repository&#39;s subscription](https://docs.github.com/rest/activity/watching#delete-a-repository-subscription) completely.
  # @param owner The account owner of the repository. The name is not case sensitive.
  # @param repo The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive.
  # @param [Hash] opts the optional parameters
  # @option opts [ActivitySetRepoSubscriptionRequest] :activity_set_repo_subscription_request 
  # @return [RepositorySubscription]
  describe 'activity_set_repo_subscription test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for activity_set_thread_subscription
  # Set a thread subscription
  # If you are watching a repository, you receive notifications for all threads by default. Use this endpoint to ignore future notifications for threads until you comment on the thread or get an **@mention**.  You can also use this endpoint to subscribe to threads that you are currently not receiving notifications for or to subscribed to threads that you have previously ignored.  Unsubscribing from a conversation in a repository that you are not watching is functionally equivalent to the [Delete a thread subscription](https://docs.github.com/rest/activity/notifications#delete-a-thread-subscription) endpoint.
  # @param thread_id The unique identifier of the notification thread. This corresponds to the value returned in the &#x60;id&#x60; field when you retrieve notifications (for example with the [&#x60;GET /notifications&#x60; operation](https://docs.github.com/rest/activity/notifications#list-notifications-for-the-authenticated-user)).
  # @param [Hash] opts the optional parameters
  # @option opts [ActivitySetThreadSubscriptionRequest] :activity_set_thread_subscription_request 
  # @return [ThreadSubscription]
  describe 'activity_set_thread_subscription test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for activity_star_repo_for_authenticated_user
  # Star a repository for the authenticated user
  # Note that you&#39;ll need to set &#x60;Content-Length&#x60; to zero when calling out to this endpoint. For more information, see \&quot;[HTTP method](https://docs.github.com/rest/guides/getting-started-with-the-rest-api#http-method).\&quot;
  # @param owner The account owner of the repository. The name is not case sensitive.
  # @param repo The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive.
  # @param [Hash] opts the optional parameters
  # @return [nil]
  describe 'activity_star_repo_for_authenticated_user test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for activity_unstar_repo_for_authenticated_user
  # Unstar a repository for the authenticated user
  # Unstar a repository that the authenticated user has previously starred.
  # @param owner The account owner of the repository. The name is not case sensitive.
  # @param repo The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive.
  # @param [Hash] opts the optional parameters
  # @return [nil]
  describe 'activity_unstar_repo_for_authenticated_user test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

end
