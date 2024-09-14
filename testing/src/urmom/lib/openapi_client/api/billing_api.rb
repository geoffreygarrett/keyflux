=begin
#GitHub v3 REST API

#GitHub's v3 REST API.

The version of the OpenAPI document: 1.1.4

Generated by: https://openapi-generator.tech
OpenAPI Generator version: 6.2.0

=end

require 'cgi'

module OpenapiClient
  class BillingApi
    attr_accessor :api_client

    def initialize(api_client = ApiClient.default)
      @api_client = api_client
    end
    # Get GitHub Actions billing for an organization
    # Gets the summary of the free and paid GitHub Actions minutes used.  Paid minutes only apply to workflows in private repositories that use GitHub-hosted runners. Minutes used is listed for each GitHub-hosted runner operating system. Any job re-runs are also included in the usage. The usage returned includes any minute multipliers for macOS and Windows runners, and is rounded up to the nearest whole minute. For more information, see \"[Managing billing for GitHub Actions](https://docs.github.com/github/setting-up-and-managing-billing-and-payments-on-github/managing-billing-for-github-actions)\".  OAuth app tokens and personal access tokens (classic) need the `repo` or `admin:org` scope to use this endpoint.
    # @param org [String] The organization name. The name is not case sensitive.
    # @param [Hash] opts the optional parameters
    # @return [ActionsBillingUsage]
    def billing_get_github_actions_billing_org(org, opts = {})
      data, _status_code, _headers = billing_get_github_actions_billing_org_with_http_info(org, opts)
      data
    end

    # Get GitHub Actions billing for an organization
    # Gets the summary of the free and paid GitHub Actions minutes used.  Paid minutes only apply to workflows in private repositories that use GitHub-hosted runners. Minutes used is listed for each GitHub-hosted runner operating system. Any job re-runs are also included in the usage. The usage returned includes any minute multipliers for macOS and Windows runners, and is rounded up to the nearest whole minute. For more information, see \&quot;[Managing billing for GitHub Actions](https://docs.github.com/github/setting-up-and-managing-billing-and-payments-on-github/managing-billing-for-github-actions)\&quot;.  OAuth app tokens and personal access tokens (classic) need the &#x60;repo&#x60; or &#x60;admin:org&#x60; scope to use this endpoint.
    # @param org [String] The organization name. The name is not case sensitive.
    # @param [Hash] opts the optional parameters
    # @return [Array<(ActionsBillingUsage, Integer, Hash)>] ActionsBillingUsage data, response status code and response headers
    def billing_get_github_actions_billing_org_with_http_info(org, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug 'Calling API: BillingApi.billing_get_github_actions_billing_org ...'
      end
      # verify the required parameter 'org' is set
      if @api_client.config.client_side_validation && org.nil?
        fail ArgumentError, "Missing the required parameter 'org' when calling BillingApi.billing_get_github_actions_billing_org"
      end
      # resource path
      local_var_path = '/orgs/{org}/settings/billing/actions'.sub('{' + 'org' + '}', CGI.escape(org.to_s))

      # query parameters
      query_params = opts[:query_params] || {}

      # header parameters
      header_params = opts[:header_params] || {}
      # HTTP header 'Accept' (if needed)
      header_params['Accept'] = @api_client.select_header_accept(['application/json'])

      # form parameters
      form_params = opts[:form_params] || {}

      # http body (model)
      post_body = opts[:debug_body]

      # return_type
      return_type = opts[:debug_return_type] || 'ActionsBillingUsage'

      # auth_names
      auth_names = opts[:debug_auth_names] || []

      new_options = opts.merge(
        :operation => :"BillingApi.billing_get_github_actions_billing_org",
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => return_type
      )

      data, status_code, headers = @api_client.call_api(:GET, local_var_path, new_options)
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: BillingApi#billing_get_github_actions_billing_org\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end

    # Get GitHub Actions billing for a user
    # Gets the summary of the free and paid GitHub Actions minutes used.  Paid minutes only apply to workflows in private repositories that use GitHub-hosted runners. Minutes used is listed for each GitHub-hosted runner operating system. Any job re-runs are also included in the usage. The usage returned includes any minute multipliers for macOS and Windows runners, and is rounded up to the nearest whole minute. For more information, see \"[Managing billing for GitHub Actions](https://docs.github.com/github/setting-up-and-managing-billing-and-payments-on-github/managing-billing-for-github-actions)\".  OAuth app tokens and personal access tokens (classic) need the `user` scope to use this endpoint.
    # @param username [String] The handle for the GitHub user account.
    # @param [Hash] opts the optional parameters
    # @return [ActionsBillingUsage]
    def billing_get_github_actions_billing_user(username, opts = {})
      data, _status_code, _headers = billing_get_github_actions_billing_user_with_http_info(username, opts)
      data
    end

    # Get GitHub Actions billing for a user
    # Gets the summary of the free and paid GitHub Actions minutes used.  Paid minutes only apply to workflows in private repositories that use GitHub-hosted runners. Minutes used is listed for each GitHub-hosted runner operating system. Any job re-runs are also included in the usage. The usage returned includes any minute multipliers for macOS and Windows runners, and is rounded up to the nearest whole minute. For more information, see \&quot;[Managing billing for GitHub Actions](https://docs.github.com/github/setting-up-and-managing-billing-and-payments-on-github/managing-billing-for-github-actions)\&quot;.  OAuth app tokens and personal access tokens (classic) need the &#x60;user&#x60; scope to use this endpoint.
    # @param username [String] The handle for the GitHub user account.
    # @param [Hash] opts the optional parameters
    # @return [Array<(ActionsBillingUsage, Integer, Hash)>] ActionsBillingUsage data, response status code and response headers
    def billing_get_github_actions_billing_user_with_http_info(username, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug 'Calling API: BillingApi.billing_get_github_actions_billing_user ...'
      end
      # verify the required parameter 'username' is set
      if @api_client.config.client_side_validation && username.nil?
        fail ArgumentError, "Missing the required parameter 'username' when calling BillingApi.billing_get_github_actions_billing_user"
      end
      # resource path
      local_var_path = '/users/{username}/settings/billing/actions'.sub('{' + 'username' + '}', CGI.escape(username.to_s))

      # query parameters
      query_params = opts[:query_params] || {}

      # header parameters
      header_params = opts[:header_params] || {}
      # HTTP header 'Accept' (if needed)
      header_params['Accept'] = @api_client.select_header_accept(['application/json'])

      # form parameters
      form_params = opts[:form_params] || {}

      # http body (model)
      post_body = opts[:debug_body]

      # return_type
      return_type = opts[:debug_return_type] || 'ActionsBillingUsage'

      # auth_names
      auth_names = opts[:debug_auth_names] || []

      new_options = opts.merge(
        :operation => :"BillingApi.billing_get_github_actions_billing_user",
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => return_type
      )

      data, status_code, headers = @api_client.call_api(:GET, local_var_path, new_options)
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: BillingApi#billing_get_github_actions_billing_user\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end

    # Get GitHub Packages billing for an organization
    # Gets the free and paid storage used for GitHub Packages in gigabytes.  Paid minutes only apply to packages stored for private repositories. For more information, see \"[Managing billing for GitHub Packages](https://docs.github.com/github/setting-up-and-managing-billing-and-payments-on-github/managing-billing-for-github-packages).\"  OAuth app tokens and personal access tokens (classic) need the `repo` or `admin:org` scope to use this endpoint.
    # @param org [String] The organization name. The name is not case sensitive.
    # @param [Hash] opts the optional parameters
    # @return [PackagesBillingUsage]
    def billing_get_github_packages_billing_org(org, opts = {})
      data, _status_code, _headers = billing_get_github_packages_billing_org_with_http_info(org, opts)
      data
    end

    # Get GitHub Packages billing for an organization
    # Gets the free and paid storage used for GitHub Packages in gigabytes.  Paid minutes only apply to packages stored for private repositories. For more information, see \&quot;[Managing billing for GitHub Packages](https://docs.github.com/github/setting-up-and-managing-billing-and-payments-on-github/managing-billing-for-github-packages).\&quot;  OAuth app tokens and personal access tokens (classic) need the &#x60;repo&#x60; or &#x60;admin:org&#x60; scope to use this endpoint.
    # @param org [String] The organization name. The name is not case sensitive.
    # @param [Hash] opts the optional parameters
    # @return [Array<(PackagesBillingUsage, Integer, Hash)>] PackagesBillingUsage data, response status code and response headers
    def billing_get_github_packages_billing_org_with_http_info(org, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug 'Calling API: BillingApi.billing_get_github_packages_billing_org ...'
      end
      # verify the required parameter 'org' is set
      if @api_client.config.client_side_validation && org.nil?
        fail ArgumentError, "Missing the required parameter 'org' when calling BillingApi.billing_get_github_packages_billing_org"
      end
      # resource path
      local_var_path = '/orgs/{org}/settings/billing/packages'.sub('{' + 'org' + '}', CGI.escape(org.to_s))

      # query parameters
      query_params = opts[:query_params] || {}

      # header parameters
      header_params = opts[:header_params] || {}
      # HTTP header 'Accept' (if needed)
      header_params['Accept'] = @api_client.select_header_accept(['application/json'])

      # form parameters
      form_params = opts[:form_params] || {}

      # http body (model)
      post_body = opts[:debug_body]

      # return_type
      return_type = opts[:debug_return_type] || 'PackagesBillingUsage'

      # auth_names
      auth_names = opts[:debug_auth_names] || []

      new_options = opts.merge(
        :operation => :"BillingApi.billing_get_github_packages_billing_org",
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => return_type
      )

      data, status_code, headers = @api_client.call_api(:GET, local_var_path, new_options)
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: BillingApi#billing_get_github_packages_billing_org\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end

    # Get GitHub Packages billing for a user
    # Gets the free and paid storage used for GitHub Packages in gigabytes.  Paid minutes only apply to packages stored for private repositories. For more information, see \"[Managing billing for GitHub Packages](https://docs.github.com/github/setting-up-and-managing-billing-and-payments-on-github/managing-billing-for-github-packages).\"  OAuth app tokens and personal access tokens (classic) need the `user` scope to use this endpoint.
    # @param username [String] The handle for the GitHub user account.
    # @param [Hash] opts the optional parameters
    # @return [PackagesBillingUsage]
    def billing_get_github_packages_billing_user(username, opts = {})
      data, _status_code, _headers = billing_get_github_packages_billing_user_with_http_info(username, opts)
      data
    end

    # Get GitHub Packages billing for a user
    # Gets the free and paid storage used for GitHub Packages in gigabytes.  Paid minutes only apply to packages stored for private repositories. For more information, see \&quot;[Managing billing for GitHub Packages](https://docs.github.com/github/setting-up-and-managing-billing-and-payments-on-github/managing-billing-for-github-packages).\&quot;  OAuth app tokens and personal access tokens (classic) need the &#x60;user&#x60; scope to use this endpoint.
    # @param username [String] The handle for the GitHub user account.
    # @param [Hash] opts the optional parameters
    # @return [Array<(PackagesBillingUsage, Integer, Hash)>] PackagesBillingUsage data, response status code and response headers
    def billing_get_github_packages_billing_user_with_http_info(username, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug 'Calling API: BillingApi.billing_get_github_packages_billing_user ...'
      end
      # verify the required parameter 'username' is set
      if @api_client.config.client_side_validation && username.nil?
        fail ArgumentError, "Missing the required parameter 'username' when calling BillingApi.billing_get_github_packages_billing_user"
      end
      # resource path
      local_var_path = '/users/{username}/settings/billing/packages'.sub('{' + 'username' + '}', CGI.escape(username.to_s))

      # query parameters
      query_params = opts[:query_params] || {}

      # header parameters
      header_params = opts[:header_params] || {}
      # HTTP header 'Accept' (if needed)
      header_params['Accept'] = @api_client.select_header_accept(['application/json'])

      # form parameters
      form_params = opts[:form_params] || {}

      # http body (model)
      post_body = opts[:debug_body]

      # return_type
      return_type = opts[:debug_return_type] || 'PackagesBillingUsage'

      # auth_names
      auth_names = opts[:debug_auth_names] || []

      new_options = opts.merge(
        :operation => :"BillingApi.billing_get_github_packages_billing_user",
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => return_type
      )

      data, status_code, headers = @api_client.call_api(:GET, local_var_path, new_options)
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: BillingApi#billing_get_github_packages_billing_user\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end

    # Get shared storage billing for an organization
    # Gets the estimated paid and estimated total storage used for GitHub Actions and GitHub Packages.  Paid minutes only apply to packages stored for private repositories. For more information, see \"[Managing billing for GitHub Packages](https://docs.github.com/github/setting-up-and-managing-billing-and-payments-on-github/managing-billing-for-github-packages).\"  OAuth app tokens and personal access tokens (classic) need the `repo` or `admin:org` scope to use this endpoint.
    # @param org [String] The organization name. The name is not case sensitive.
    # @param [Hash] opts the optional parameters
    # @return [CombinedBillingUsage]
    def billing_get_shared_storage_billing_org(org, opts = {})
      data, _status_code, _headers = billing_get_shared_storage_billing_org_with_http_info(org, opts)
      data
    end

    # Get shared storage billing for an organization
    # Gets the estimated paid and estimated total storage used for GitHub Actions and GitHub Packages.  Paid minutes only apply to packages stored for private repositories. For more information, see \&quot;[Managing billing for GitHub Packages](https://docs.github.com/github/setting-up-and-managing-billing-and-payments-on-github/managing-billing-for-github-packages).\&quot;  OAuth app tokens and personal access tokens (classic) need the &#x60;repo&#x60; or &#x60;admin:org&#x60; scope to use this endpoint.
    # @param org [String] The organization name. The name is not case sensitive.
    # @param [Hash] opts the optional parameters
    # @return [Array<(CombinedBillingUsage, Integer, Hash)>] CombinedBillingUsage data, response status code and response headers
    def billing_get_shared_storage_billing_org_with_http_info(org, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug 'Calling API: BillingApi.billing_get_shared_storage_billing_org ...'
      end
      # verify the required parameter 'org' is set
      if @api_client.config.client_side_validation && org.nil?
        fail ArgumentError, "Missing the required parameter 'org' when calling BillingApi.billing_get_shared_storage_billing_org"
      end
      # resource path
      local_var_path = '/orgs/{org}/settings/billing/shared-storage'.sub('{' + 'org' + '}', CGI.escape(org.to_s))

      # query parameters
      query_params = opts[:query_params] || {}

      # header parameters
      header_params = opts[:header_params] || {}
      # HTTP header 'Accept' (if needed)
      header_params['Accept'] = @api_client.select_header_accept(['application/json'])

      # form parameters
      form_params = opts[:form_params] || {}

      # http body (model)
      post_body = opts[:debug_body]

      # return_type
      return_type = opts[:debug_return_type] || 'CombinedBillingUsage'

      # auth_names
      auth_names = opts[:debug_auth_names] || []

      new_options = opts.merge(
        :operation => :"BillingApi.billing_get_shared_storage_billing_org",
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => return_type
      )

      data, status_code, headers = @api_client.call_api(:GET, local_var_path, new_options)
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: BillingApi#billing_get_shared_storage_billing_org\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end

    # Get shared storage billing for a user
    # Gets the estimated paid and estimated total storage used for GitHub Actions and GitHub Packages.  Paid minutes only apply to packages stored for private repositories. For more information, see \"[Managing billing for GitHub Packages](https://docs.github.com/github/setting-up-and-managing-billing-and-payments-on-github/managing-billing-for-github-packages).\"  OAuth app tokens and personal access tokens (classic) need the `user` scope to use this endpoint.
    # @param username [String] The handle for the GitHub user account.
    # @param [Hash] opts the optional parameters
    # @return [CombinedBillingUsage]
    def billing_get_shared_storage_billing_user(username, opts = {})
      data, _status_code, _headers = billing_get_shared_storage_billing_user_with_http_info(username, opts)
      data
    end

    # Get shared storage billing for a user
    # Gets the estimated paid and estimated total storage used for GitHub Actions and GitHub Packages.  Paid minutes only apply to packages stored for private repositories. For more information, see \&quot;[Managing billing for GitHub Packages](https://docs.github.com/github/setting-up-and-managing-billing-and-payments-on-github/managing-billing-for-github-packages).\&quot;  OAuth app tokens and personal access tokens (classic) need the &#x60;user&#x60; scope to use this endpoint.
    # @param username [String] The handle for the GitHub user account.
    # @param [Hash] opts the optional parameters
    # @return [Array<(CombinedBillingUsage, Integer, Hash)>] CombinedBillingUsage data, response status code and response headers
    def billing_get_shared_storage_billing_user_with_http_info(username, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug 'Calling API: BillingApi.billing_get_shared_storage_billing_user ...'
      end
      # verify the required parameter 'username' is set
      if @api_client.config.client_side_validation && username.nil?
        fail ArgumentError, "Missing the required parameter 'username' when calling BillingApi.billing_get_shared_storage_billing_user"
      end
      # resource path
      local_var_path = '/users/{username}/settings/billing/shared-storage'.sub('{' + 'username' + '}', CGI.escape(username.to_s))

      # query parameters
      query_params = opts[:query_params] || {}

      # header parameters
      header_params = opts[:header_params] || {}
      # HTTP header 'Accept' (if needed)
      header_params['Accept'] = @api_client.select_header_accept(['application/json'])

      # form parameters
      form_params = opts[:form_params] || {}

      # http body (model)
      post_body = opts[:debug_body]

      # return_type
      return_type = opts[:debug_return_type] || 'CombinedBillingUsage'

      # auth_names
      auth_names = opts[:debug_auth_names] || []

      new_options = opts.merge(
        :operation => :"BillingApi.billing_get_shared_storage_billing_user",
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => return_type
      )

      data, status_code, headers = @api_client.call_api(:GET, local_var_path, new_options)
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: BillingApi#billing_get_shared_storage_billing_user\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end
  end
end