=begin
#GitHub v3 REST API

#GitHub's v3 REST API.

The version of the OpenAPI document: 1.1.4

Generated by: https://openapi-generator.tech
OpenAPI Generator version: 6.2.0

=end

require 'cgi'

module OpenapiClient
  class OidcApi
    attr_accessor :api_client

    def initialize(api_client = ApiClient.default)
      @api_client = api_client
    end
    # Get the customization template for an OIDC subject claim for an organization
    # Gets the customization template for an OpenID Connect (OIDC) subject claim.  OAuth app tokens and personal access tokens (classic) need the `read:org` scope to use this endpoint.
    # @param org [String] The organization name. The name is not case sensitive.
    # @param [Hash] opts the optional parameters
    # @return [OidcCustomSub]
    def oidc_get_oidc_custom_sub_template_for_org(org, opts = {})
      data, _status_code, _headers = oidc_get_oidc_custom_sub_template_for_org_with_http_info(org, opts)
      data
    end

    # Get the customization template for an OIDC subject claim for an organization
    # Gets the customization template for an OpenID Connect (OIDC) subject claim.  OAuth app tokens and personal access tokens (classic) need the &#x60;read:org&#x60; scope to use this endpoint.
    # @param org [String] The organization name. The name is not case sensitive.
    # @param [Hash] opts the optional parameters
    # @return [Array<(OidcCustomSub, Integer, Hash)>] OidcCustomSub data, response status code and response headers
    def oidc_get_oidc_custom_sub_template_for_org_with_http_info(org, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug 'Calling API: OidcApi.oidc_get_oidc_custom_sub_template_for_org ...'
      end
      # verify the required parameter 'org' is set
      if @api_client.config.client_side_validation && org.nil?
        fail ArgumentError, "Missing the required parameter 'org' when calling OidcApi.oidc_get_oidc_custom_sub_template_for_org"
      end
      # resource path
      local_var_path = '/orgs/{org}/actions/oidc/customization/sub'.sub('{' + 'org' + '}', CGI.escape(org.to_s))

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
      return_type = opts[:debug_return_type] || 'OidcCustomSub'

      # auth_names
      auth_names = opts[:debug_auth_names] || []

      new_options = opts.merge(
        :operation => :"OidcApi.oidc_get_oidc_custom_sub_template_for_org",
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => return_type
      )

      data, status_code, headers = @api_client.call_api(:GET, local_var_path, new_options)
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: OidcApi#oidc_get_oidc_custom_sub_template_for_org\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end

    # Set the customization template for an OIDC subject claim for an organization
    # Creates or updates the customization template for an OpenID Connect (OIDC) subject claim.  OAuth app tokens and personal access tokens (classic) need the `write:org` scope to use this endpoint.
    # @param org [String] The organization name. The name is not case sensitive.
    # @param oidc_custom_sub [OidcCustomSub] 
    # @param [Hash] opts the optional parameters
    # @return [Object]
    def oidc_update_oidc_custom_sub_template_for_org(org, oidc_custom_sub, opts = {})
      data, _status_code, _headers = oidc_update_oidc_custom_sub_template_for_org_with_http_info(org, oidc_custom_sub, opts)
      data
    end

    # Set the customization template for an OIDC subject claim for an organization
    # Creates or updates the customization template for an OpenID Connect (OIDC) subject claim.  OAuth app tokens and personal access tokens (classic) need the &#x60;write:org&#x60; scope to use this endpoint.
    # @param org [String] The organization name. The name is not case sensitive.
    # @param oidc_custom_sub [OidcCustomSub] 
    # @param [Hash] opts the optional parameters
    # @return [Array<(Object, Integer, Hash)>] Object data, response status code and response headers
    def oidc_update_oidc_custom_sub_template_for_org_with_http_info(org, oidc_custom_sub, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug 'Calling API: OidcApi.oidc_update_oidc_custom_sub_template_for_org ...'
      end
      # verify the required parameter 'org' is set
      if @api_client.config.client_side_validation && org.nil?
        fail ArgumentError, "Missing the required parameter 'org' when calling OidcApi.oidc_update_oidc_custom_sub_template_for_org"
      end
      # verify the required parameter 'oidc_custom_sub' is set
      if @api_client.config.client_side_validation && oidc_custom_sub.nil?
        fail ArgumentError, "Missing the required parameter 'oidc_custom_sub' when calling OidcApi.oidc_update_oidc_custom_sub_template_for_org"
      end
      # resource path
      local_var_path = '/orgs/{org}/actions/oidc/customization/sub'.sub('{' + 'org' + '}', CGI.escape(org.to_s))

      # query parameters
      query_params = opts[:query_params] || {}

      # header parameters
      header_params = opts[:header_params] || {}
      # HTTP header 'Accept' (if needed)
      header_params['Accept'] = @api_client.select_header_accept(['application/json'])
      # HTTP header 'Content-Type'
      content_type = @api_client.select_header_content_type(['application/json'])
      if !content_type.nil?
          header_params['Content-Type'] = content_type
      end

      # form parameters
      form_params = opts[:form_params] || {}

      # http body (model)
      post_body = opts[:debug_body] || @api_client.object_to_http_body(oidc_custom_sub)

      # return_type
      return_type = opts[:debug_return_type] || 'Object'

      # auth_names
      auth_names = opts[:debug_auth_names] || []

      new_options = opts.merge(
        :operation => :"OidcApi.oidc_update_oidc_custom_sub_template_for_org",
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => return_type
      )

      data, status_code, headers = @api_client.call_api(:PUT, local_var_path, new_options)
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: OidcApi#oidc_update_oidc_custom_sub_template_for_org\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end
  end
end
