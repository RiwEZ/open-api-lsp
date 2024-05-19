module.exports = grammar({
  name: "openapi3",

  rules: {
    source_file: ($) => $.version,
    version: ($) => seq("openapi: 3.0.0"),
  },
});
