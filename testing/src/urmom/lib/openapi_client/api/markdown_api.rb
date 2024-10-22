=begin
#GitHub v3 REST API

#GitHub's v3 REST API.

The version of the OpenAPI document: 1.1.4

Generated by: https://openapi-generator.tech
OpenAPI Generator version: 6.2.0

=end

require 'cgi'

module OpenapiClient
  class MarkdownApi
    attr_accessor :api_client

    def initialize(api_client = ApiClient.default)
      @api_client = api_client
    end
    # Render a Markdown document
    # 
    # @param markdown_render_request [MarkdownRenderRequest] 
    # @param [Hash] opts the optional parameters
    # @return [String]
    def markdown_render(markdown_render_request, opts = {})
      data, _status_code, _headers = markdown_render_with_http_info(markdown_render_request, opts)
      data
    end

    # Render a Markdown document
    # 
    # @param markdown_render_request [MarkdownRenderRequest] 
    # @param [Hash] opts the optional parameters
    # @return [Array<(String, Integer, Hash)>] String data, response status code and response headers
    def markdown_render_with_http_info(markdown_render_request, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug 'Calling API: MarkdownApi.markdown_render ...'
      end
      # verify the required parameter 'markdown_render_request' is set
      if @api_client.config.client_side_validation && markdown_render_request.nil?
        fail ArgumentError, "Missing the required parameter 'markdown_render_request' when calling MarkdownApi.markdown_render"
      end
      # resource path
      local_var_path = '/markdown'

      # query parameters
      query_params = opts[:query_params] || {}

      # header parameters
      header_params = opts[:header_params] || {}
      # HTTP header 'Accept' (if needed)
      header_params['Accept'] = @api_client.select_header_accept(['text/html'])
      # HTTP header 'Content-Type'
      content_type = @api_client.select_header_content_type(['application/json'])
      if !content_type.nil?
          header_params['Content-Type'] = content_type
      end

      # form parameters
      form_params = opts[:form_params] || {}

      # http body (model)
      post_body = opts[:debug_body] || @api_client.object_to_http_body(markdown_render_request)

      # return_type
      return_type = opts[:debug_return_type] || 'String'

      # auth_names
      auth_names = opts[:debug_auth_names] || []

      new_options = opts.merge(
        :operation => :"MarkdownApi.markdown_render",
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => return_type
      )

      data, status_code, headers = @api_client.call_api(:POST, local_var_path, new_options)
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: MarkdownApi#markdown_render\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end

    # Render a Markdown document in raw mode
    # You must send Markdown as plain text (using a `Content-Type` header of `text/plain` or `text/x-markdown`) to this endpoint, rather than using JSON format. In raw mode, [GitHub Flavored Markdown](https://github.github.com/gfm/) is not supported and Markdown will be rendered in plain format like a README.md file. Markdown content must be 400 KB or less.
    # @param [Hash] opts the optional parameters
    # @option opts [String] :body 
    # @return [String]
    def markdown_render_raw(opts = {})
      data, _status_code, _headers = markdown_render_raw_with_http_info(opts)
      data
    end

    # Render a Markdown document in raw mode
    # You must send Markdown as plain text (using a &#x60;Content-Type&#x60; header of &#x60;text/plain&#x60; or &#x60;text/x-markdown&#x60;) to this endpoint, rather than using JSON format. In raw mode, [GitHub Flavored Markdown](https://github.github.com/gfm/) is not supported and Markdown will be rendered in plain format like a README.md file. Markdown content must be 400 KB or less.
    # @param [Hash] opts the optional parameters
    # @option opts [String] :body 
    # @return [Array<(String, Integer, Hash)>] String data, response status code and response headers
    def markdown_render_raw_with_http_info(opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug 'Calling API: MarkdownApi.markdown_render_raw ...'
      end
      # resource path
      local_var_path = '/markdown/raw'

      # query parameters
      query_params = opts[:query_params] || {}

      # header parameters
      header_params = opts[:header_params] || {}
      # HTTP header 'Accept' (if needed)
      header_params['Accept'] = @api_client.select_header_accept(['text/html'])
      # HTTP header 'Content-Type'
      content_type = @api_client.select_header_content_type(['text/plain', 'text/x-markdown'])
      if !content_type.nil?
          header_params['Content-Type'] = content_type
      end

      # form parameters
      form_params = opts[:form_params] || {}

      # http body (model)
      post_body = opts[:debug_body] || @api_client.object_to_http_body(opts[:'body'])

      # return_type
      return_type = opts[:debug_return_type] || 'String'

      # auth_names
      auth_names = opts[:debug_auth_names] || []

      new_options = opts.merge(
        :operation => :"MarkdownApi.markdown_render_raw",
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => return_type
      )

      data, status_code, headers = @api_client.call_api(:POST, local_var_path, new_options)
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: MarkdownApi#markdown_render_raw\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end
  end
end
