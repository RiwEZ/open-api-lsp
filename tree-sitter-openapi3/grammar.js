module.exports = grammar({
  name: "openapi3",

  rules: {
    source_file: ($) => repeat(choice($.version, $.info)),
    version: ($) => seq("openapi:", "3.0.0"),
    info: ($) => seq("info:"),
  },
});
