module.exports = grammar({
  name: "openapi3",

  externals: ($) => [$.indent, $.dedent, $.err],

  rules: {
    source_file: ($) => seq($.version, $.info),
    version: ($) => seq($.versionLabel, $.versionValue, $._newline),
    versionLabel: (_) => "openapi:",
    versionValue: (_) => "3.0.0",

    info: ($) =>
      seq(
        $.infoLabel,
        $._newline,
        $.indent,
        $.infoValue,
        $.dedent,
      ),
    infoLabel: (_) => "info:",

    infoValue: ($) =>
      seq(
        "title:",
        $.any,
        $._newline,
        "description:",
        $.any,
        $._newline,
        "version:",
        "0.1.9",
        $._newline,
      ),

    any: (_) => /\s*(.*)/,

    _newline: (_) => choice("\n", "\r\n"),
  },
});
