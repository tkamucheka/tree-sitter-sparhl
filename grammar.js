module.exports = grammar({
  name: 'SPARHL',

  extras: $ => [
    $.comment,
    /\s/,
    /\\\r?\n/
  ],

  rules: {
    // program ::= { <definition> | <instruction> }
    program: $ => repeat(
      choice(
        $.definition,
        $.instruction
      )
    ),

    // <definition> ::= <identifier> "=" ( <number> | <tensor> )
    definition: $ => seq(
      $.identifier,
      token('='),
      choice(
        $.number,
        $.tensor
      )
    ),

    // <number> ::= <integer> | <float>
    number: $ => choice(
      $.integer,
      $.float
    ),

    // <tensor> ::= <type> [ <value> ]
    tensor: $ => seq(
      $.type,
      optional($.value)
    ),

    // <type> ::= <type_name> <shape>
    type: $ => seq(
      $.named_type,
      $.shape
    ),

    // <type_name> ::= "matrix" | "vector"
    named_type: $ => choice('matrix', 'vector'),

    // <shape> ::= "<" <dimensions> ">"
    shape: $ => seq(
      '<',
      $.dimensions,
      '>'
    ),

    // <dimensions> ::= <dimension> [ "," <dimension> ]
    dimensions: $ => seq(
      $.dimension,
      optional(
        seq(',', $.dimension)
      )
    ),

    // <dimension> ::= <size> | <identifier>
    dimension: $ => choice(
      $.identifier, 
      $.size // repeat1($._digit)
    ),

    // <size> ::= [1-9] [0-9]+
    size: $ => seq(
      /[1-9]/,
      repeat($._digit)
    ),

    // <value> ::= <list>
    value: $ => $.list,

    // <list> ::= "[" <float> { "," <float> } "]"
    list: $ => seq(
      "[",
      $.number,
      repeat(
        seq(",", $.number)
      ),
      "]"
    ),

    // <instruction> ::= <operation> <arguments>
    instruction: $ => seq(
      $.operation,
      $.arguments
    ),

    // <operation> ::=
    // "LOADM" |
    // "LOADV" |
    // "LOADCOLV |
    // "LOADROWV |
    // "STOREM" |
    // "STOREV" |
    // "ADD" |
    // "SUB" |
    // "MULT" |
    // "TRANSPOSE" |
    // "ACUMULATE" |
    // <activation>
    operation: $ => choice(
      "LOADM",
      "LOADV",
      "LOADCOLV",
      "LOADROWV",
      "STOREV",
      "STOREM",
      "ADD",
      "SUB",
      "MULT",
      "TRANSPOSE",
      "ACCUMULATE",
      $.activation
    ),

    // <activation> ::= "ACTIVATION" <function>
    activation: $ => seq(
      "ACTIVATION",
      "<",
      $.function,
      ">"
    ),

    // <function> ::= 
    // "SIGMOID" |
    // "RELU" |
    // "TANH" |
    function: $ => choice(
      "RELU",
      "SIGMOID",
      "TANH"
    ),

    // <arguments> ::= <argument> { "," <argument> }
    arguments: $ => seq(
      $.argument,
      repeat(
        seq(
          ",",
          $.argument
        )
      )
    ),

    // <argument> ::= <register> | <identifier>
    argument: $ => choice(
      $.register,
      $.identifier
    ),

    // <register> ::= ( "R" | "r" ) [0-9]+
    register: $ => /[R|r][0-9]+/,

    // <identifier> ::= <letter> ( <letter> | <digit> | "_")*
    identifier: $ => /([a-z]|[A-Z])+([a-z]|[A-Z]|[0-9])*/,

    // <integer> ::= [ <sign> ] <digit> { <digit> }
    integer: $ => seq(
      optional($.sign),
      repeat1($._digit)
    ),

    // <float> ::= <digit> { "." , <digit> }
    float: $ => seq(
      optional($.sign),
      repeat1($._digit),
      seq(".", repeat($._digit))
    ),

    // <digit> ::= [0-9]+
    _digit: $=> /[0-9]/,

    // <sign> ::= "+" | "-"
    sign: $ => choice("+", "-"),

    // <comment> ::= ";" 
    comment: $ => token(seq(';', /.*/))
  }
});
