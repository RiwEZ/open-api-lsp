module.exports = grammar({
  name: "openapi3",

  externals: ($) => [$.indent, $.dedent, $.err],

  rules: {
    source_file: ($) => $.openAPIObject,

    openAPIObject: ($) =>
      repeat1(choice($.openapi, $.info, $.paths, $.components)),

    openapi: ($) => seq($.openapiFieldName, $.value, $._newline),
    openapiFieldName: (_) => "openapi:",

    info: ($) =>
      seq($.infoFieldName, $._newline, $.indent, $.infoObject, $.dedent),
    infoFieldName: (_) => "info:",

    infoObject: ($) => repeat1(choice($.title, $.description, $.version)),
    title: ($) => seq($.titleFieldName, $.value, $._newline),
    titleFieldName: (_) => "title:",
    version: ($) => seq($.versionFieldName, $.value, $._newline),
    versionFieldName: (_) => "version:",
    description: ($) => seq("description:", $.value, $._newline),

    paths: ($) =>
      seq($.pathsFieldName, $._newline, $.indent, $.pathsObject, $.dedent),
    pathsFieldName: (_) => "paths:",
    pathsObject: ($) => repeat1(seq($.pathFieldPattern, $.pathItemObject)),
    pathFieldPattern: (_) => /\/\w+:/,

    pathItemObject: ($) =>
      repeat1(
        choice(
          seq(
            "get:",
            $._newline,
            $.indent,
            $.operationObject,
            $.dedent,
          ),
        ),
      ),

    operationObject: ($) =>
      repeat1(
        choice(
          seq(
            "responses:",
            $._newline,
            $.indent,
            $.key,
            $.value,
            $._newline,
            $.dedent,
          ),
        ),
      ),

    /*
    pathItemObject: ($) =>
      repeat1(
        choice(
          seq("get:", $._newline, $.indent, $.operationObject, $.dedent),
          seq("summary:", $.value, $._newline),
          seq("description:", $.value, $._newline),
        ),
      ),
    operationObject: ($) =>
      repeat1(
        choice(
          seq("responses:", $._newline, $.indent, $.responsesObject, $._newline, $.dedent),
        ),
      ),
    responsesObject: ($) =>
      repeat1(
        choice(
          seq(/'\d\d\d':/, $._newline, $.indent, $.responseObject, $.dedent),
        ),
      ),
    responseObject: ($) =>
      repeat1(choice(seq("description:", $.value, $._newline))),
    */

    components: ($) =>
      seq("components:", $._newline, $.indent, $.componentsObject, $.dedent),
    componentsObject: ($) => repeat1(choice($.schemas)),
    schemas: ($) =>
      seq("schemas:", $._newline, $.indent, $.schemaObject, $.dedent),
    // include all shits
    schemaObject: ($) => repeat1(seq($.key, $.value, $._newline)),

    value: (_) => /\s*(.*)/,
    key: (_) => /\w+:/,

    _newline: (_) => choice("\n", "\r\n"),
  },
});
