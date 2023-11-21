#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 55
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 57
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_EQ = 1,
  anon_sym_matrix = 2,
  anon_sym_vector = 3,
  anon_sym_LT = 4,
  anon_sym_GT = 5,
  anon_sym_COMMA = 6,
  aux_sym_size_token1 = 7,
  anon_sym_LBRACK = 8,
  anon_sym_RBRACK = 9,
  anon_sym_LOADM = 10,
  anon_sym_LOADV = 11,
  anon_sym_LOADCOLV = 12,
  anon_sym_LOADROWV = 13,
  anon_sym_STOREV = 14,
  anon_sym_STOREM = 15,
  anon_sym_ADD = 16,
  anon_sym_SUB = 17,
  anon_sym_MULT = 18,
  anon_sym_TRANSPOSE = 19,
  anon_sym_ACCUMULATE = 20,
  anon_sym_ACTIVATION = 21,
  anon_sym_RELU = 22,
  anon_sym_SIGMOID = 23,
  anon_sym_TANH = 24,
  sym_register = 25,
  sym_identifier = 26,
  anon_sym_DOT = 27,
  sym__digit = 28,
  anon_sym_PLUS = 29,
  anon_sym_DASH = 30,
  sym_comment = 31,
  sym_program = 32,
  sym_definition = 33,
  sym_number = 34,
  sym_tensor = 35,
  sym_type = 36,
  sym_named_type = 37,
  sym_shape = 38,
  sym_dimensions = 39,
  sym_dimension = 40,
  sym_size = 41,
  sym_value = 42,
  sym_list = 43,
  sym_instruction = 44,
  sym_operation = 45,
  sym_activation = 46,
  sym_function = 47,
  sym_arguments = 48,
  sym_argument = 49,
  sym_integer = 50,
  sym_float = 51,
  sym_sign = 52,
  aux_sym_program_repeat1 = 53,
  aux_sym_size_repeat1 = 54,
  aux_sym_list_repeat1 = 55,
  aux_sym_arguments_repeat1 = 56,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [anon_sym_matrix] = "matrix",
  [anon_sym_vector] = "vector",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_COMMA] = ",",
  [aux_sym_size_token1] = "size_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LOADM] = "LOADM",
  [anon_sym_LOADV] = "LOADV",
  [anon_sym_LOADCOLV] = "LOADCOLV",
  [anon_sym_LOADROWV] = "LOADROWV",
  [anon_sym_STOREV] = "STOREV",
  [anon_sym_STOREM] = "STOREM",
  [anon_sym_ADD] = "ADD",
  [anon_sym_SUB] = "SUB",
  [anon_sym_MULT] = "MULT",
  [anon_sym_TRANSPOSE] = "TRANSPOSE",
  [anon_sym_ACCUMULATE] = "ACCUMULATE",
  [anon_sym_ACTIVATION] = "ACTIVATION",
  [anon_sym_RELU] = "RELU",
  [anon_sym_SIGMOID] = "SIGMOID",
  [anon_sym_TANH] = "TANH",
  [sym_register] = "register",
  [sym_identifier] = "identifier",
  [anon_sym_DOT] = ".",
  [sym__digit] = "_digit",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [sym_comment] = "comment",
  [sym_program] = "program",
  [sym_definition] = "definition",
  [sym_number] = "number",
  [sym_tensor] = "tensor",
  [sym_type] = "type",
  [sym_named_type] = "named_type",
  [sym_shape] = "shape",
  [sym_dimensions] = "dimensions",
  [sym_dimension] = "dimension",
  [sym_size] = "size",
  [sym_value] = "value",
  [sym_list] = "list",
  [sym_instruction] = "instruction",
  [sym_operation] = "operation",
  [sym_activation] = "activation",
  [sym_function] = "function",
  [sym_arguments] = "arguments",
  [sym_argument] = "argument",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_sign] = "sign",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_size_repeat1] = "size_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_matrix] = anon_sym_matrix,
  [anon_sym_vector] = anon_sym_vector,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_size_token1] = aux_sym_size_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LOADM] = anon_sym_LOADM,
  [anon_sym_LOADV] = anon_sym_LOADV,
  [anon_sym_LOADCOLV] = anon_sym_LOADCOLV,
  [anon_sym_LOADROWV] = anon_sym_LOADROWV,
  [anon_sym_STOREV] = anon_sym_STOREV,
  [anon_sym_STOREM] = anon_sym_STOREM,
  [anon_sym_ADD] = anon_sym_ADD,
  [anon_sym_SUB] = anon_sym_SUB,
  [anon_sym_MULT] = anon_sym_MULT,
  [anon_sym_TRANSPOSE] = anon_sym_TRANSPOSE,
  [anon_sym_ACCUMULATE] = anon_sym_ACCUMULATE,
  [anon_sym_ACTIVATION] = anon_sym_ACTIVATION,
  [anon_sym_RELU] = anon_sym_RELU,
  [anon_sym_SIGMOID] = anon_sym_SIGMOID,
  [anon_sym_TANH] = anon_sym_TANH,
  [sym_register] = sym_register,
  [sym_identifier] = sym_identifier,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym__digit] = sym__digit,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_comment] = sym_comment,
  [sym_program] = sym_program,
  [sym_definition] = sym_definition,
  [sym_number] = sym_number,
  [sym_tensor] = sym_tensor,
  [sym_type] = sym_type,
  [sym_named_type] = sym_named_type,
  [sym_shape] = sym_shape,
  [sym_dimensions] = sym_dimensions,
  [sym_dimension] = sym_dimension,
  [sym_size] = sym_size,
  [sym_value] = sym_value,
  [sym_list] = sym_list,
  [sym_instruction] = sym_instruction,
  [sym_operation] = sym_operation,
  [sym_activation] = sym_activation,
  [sym_function] = sym_function,
  [sym_arguments] = sym_arguments,
  [sym_argument] = sym_argument,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_sign] = sym_sign,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_size_repeat1] = aux_sym_size_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_matrix] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vector] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_size_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LOADM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LOADV] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LOADCOLV] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LOADROWV] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STOREV] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STOREM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ADD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SUB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MULT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TRANSPOSE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ACCUMULATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ACTIVATION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RELU] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SIGMOID] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TANH] = {
    .visible = true,
    .named = false,
  },
  [sym_register] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym__digit] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_tensor] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_named_type] = {
    .visible = true,
    .named = true,
  },
  [sym_shape] = {
    .visible = true,
    .named = true,
  },
  [sym_dimensions] = {
    .visible = true,
    .named = true,
  },
  [sym_dimension] = {
    .visible = true,
    .named = true,
  },
  [sym_size] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_activation] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_sign] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_size_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(38);
      if (lookahead == '+') ADVANCE(141);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '-') ADVANCE(142);
      if (lookahead == '.') ADVANCE(139);
      if (lookahead == '0') ADVANCE(140);
      if (lookahead == ';') ADVANCE(143);
      if (lookahead == '<') ADVANCE(44);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '>') ADVANCE(45);
      if (lookahead == 'A') ADVANCE(76);
      if (lookahead == 'L') ADVANCE(102);
      if (lookahead == 'M') ADVANCE(118);
      if (lookahead == 'R') ADVANCE(85);
      if (lookahead == 'S') ADVANCE(88);
      if (lookahead == 'T') ADVANCE(70);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '\\') SKIP(34)
      if (lookahead == ']') ADVANCE(49);
      if (lookahead == 'm') ADVANCE(126);
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead == 'v') ADVANCE(128);
      if (lookahead == '|') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(7)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(8)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(9)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '+') ADVANCE(141);
      if (lookahead == '-') ADVANCE(142);
      if (lookahead == ';') ADVANCE(143);
      if (lookahead == 'R') ADVANCE(12);
      if (lookahead == 'S') ADVANCE(15);
      if (lookahead == 'T') ADVANCE(10);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'm') ADVANCE(22);
      if (lookahead == 'v') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 8:
      if (lookahead == ';') ADVANCE(143);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 9:
      if (lookahead == ';') ADVANCE(143);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(137);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == '|') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == 'D') ADVANCE(64);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(17);
      END_STATE();
    case 13:
      if (lookahead == 'G') ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == 'H') ADVANCE(66);
      END_STATE();
    case 15:
      if (lookahead == 'I') ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == 'I') ADVANCE(11);
      END_STATE();
    case 17:
      if (lookahead == 'L') ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == 'M') ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == 'N') ADVANCE(14);
      END_STATE();
    case 20:
      if (lookahead == 'O') ADVANCE(16);
      END_STATE();
    case 21:
      if (lookahead == 'U') ADVANCE(62);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(30);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 31:
      if (lookahead == 'x') ADVANCE(40);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 33:
      if (eof) ADVANCE(38);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 34:
      if (eof) ADVANCE(38);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(33)
      END_STATE();
    case 35:
      if (eof) ADVANCE(38);
      if (lookahead == '\n') SKIP(37)
      END_STATE();
    case 36:
      if (eof) ADVANCE(38);
      if (lookahead == '\n') SKIP(37)
      if (lookahead == '\r') SKIP(35)
      END_STATE();
    case 37:
      if (eof) ADVANCE(38);
      if (lookahead == '+') ADVANCE(141);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '-') ADVANCE(142);
      if (lookahead == '.') ADVANCE(139);
      if (lookahead == ';') ADVANCE(143);
      if (lookahead == '>') ADVANCE(45);
      if (lookahead == 'A') ADVANCE(76);
      if (lookahead == 'L') ADVANCE(102);
      if (lookahead == 'M') ADVANCE(118);
      if (lookahead == 'S') ADVANCE(115);
      if (lookahead == 'T') ADVANCE(111);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '\\') SKIP(36)
      if (lookahead == ']') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_matrix);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_matrix);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_vector);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_vector);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_size_token1);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LOADM);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LOADV);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LOADCOLV);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LOADROWV);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_STOREV);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_STOREM);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_ADD);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_SUB);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_MULT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_TRANSPOSE);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_ACCUMULATE);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_ACTIVATION);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_RELU);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_RELU);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_SIGMOID);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_SIGMOID);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_TANH);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_TANH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(99);
      if (lookahead == 'R') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(77);
      if (lookahead == 'D') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(120);
      if (lookahead == 'T') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(108);
      if (lookahead == 'M') ADVANCE(50);
      if (lookahead == 'R') ADVANCE(104);
      if (lookahead == 'V') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(86);
      if (lookahead == 'T') ADVANCE(103);
      if (lookahead == 'U') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(55);
      if (lookahead == 'V') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(103);
      if (lookahead == 'U') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__digit);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(143);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 37},
  [2] = {.lex_state = 37},
  [3] = {.lex_state = 37},
  [4] = {.lex_state = 37},
  [5] = {.lex_state = 37},
  [6] = {.lex_state = 37},
  [7] = {.lex_state = 37},
  [8] = {.lex_state = 37},
  [9] = {.lex_state = 37},
  [10] = {.lex_state = 37},
  [11] = {.lex_state = 37},
  [12] = {.lex_state = 37},
  [13] = {.lex_state = 37},
  [14] = {.lex_state = 37},
  [15] = {.lex_state = 37},
  [16] = {.lex_state = 37},
  [17] = {.lex_state = 37},
  [18] = {.lex_state = 37},
  [19] = {.lex_state = 37},
  [20] = {.lex_state = 37},
  [21] = {.lex_state = 37},
  [22] = {.lex_state = 37},
  [23] = {.lex_state = 37},
  [24] = {.lex_state = 37},
  [25] = {.lex_state = 37},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 37},
  [28] = {.lex_state = 37},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 37},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 37},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 9},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 9},
  [40] = {.lex_state = 37},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 9},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 37},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_matrix] = ACTIONS(1),
    [anon_sym_vector] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_size_token1] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LOADM] = ACTIONS(1),
    [anon_sym_LOADV] = ACTIONS(1),
    [anon_sym_LOADCOLV] = ACTIONS(1),
    [anon_sym_LOADROWV] = ACTIONS(1),
    [anon_sym_STOREV] = ACTIONS(1),
    [anon_sym_STOREM] = ACTIONS(1),
    [anon_sym_ADD] = ACTIONS(1),
    [anon_sym_SUB] = ACTIONS(1),
    [anon_sym_MULT] = ACTIONS(1),
    [anon_sym_TRANSPOSE] = ACTIONS(1),
    [anon_sym_ACCUMULATE] = ACTIONS(1),
    [anon_sym_ACTIVATION] = ACTIONS(1),
    [anon_sym_RELU] = ACTIONS(1),
    [anon_sym_SIGMOID] = ACTIONS(1),
    [anon_sym_TANH] = ACTIONS(1),
    [sym_register] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym__digit] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_program] = STATE(48),
    [sym_definition] = STATE(5),
    [sym_instruction] = STATE(5),
    [sym_operation] = STATE(34),
    [sym_activation] = STATE(42),
    [aux_sym_program_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LOADM] = ACTIONS(7),
    [anon_sym_LOADV] = ACTIONS(7),
    [anon_sym_LOADCOLV] = ACTIONS(7),
    [anon_sym_LOADROWV] = ACTIONS(7),
    [anon_sym_STOREV] = ACTIONS(7),
    [anon_sym_STOREM] = ACTIONS(7),
    [anon_sym_ADD] = ACTIONS(7),
    [anon_sym_SUB] = ACTIONS(7),
    [anon_sym_MULT] = ACTIONS(7),
    [anon_sym_TRANSPOSE] = ACTIONS(7),
    [anon_sym_ACCUMULATE] = ACTIONS(7),
    [anon_sym_ACTIVATION] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__digit,
    STATE(2), 1,
      aux_sym_size_repeat1,
    ACTIONS(13), 5,
      ts_builtin_sym_end,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT,
    ACTIONS(15), 13,
      anon_sym_LOADM,
      anon_sym_LOADV,
      anon_sym_LOADCOLV,
      anon_sym_LOADROWV,
      anon_sym_STOREV,
      anon_sym_STOREM,
      anon_sym_ADD,
      anon_sym_SUB,
      anon_sym_MULT,
      anon_sym_TRANSPOSE,
      anon_sym_ACCUMULATE,
      anon_sym_ACTIVATION,
      sym_identifier,
  [32] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(24), 1,
      anon_sym_DOT,
    ACTIONS(26), 1,
      sym__digit,
    STATE(2), 1,
      aux_sym_size_repeat1,
    ACTIONS(20), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(22), 13,
      anon_sym_LOADM,
      anon_sym_LOADV,
      anon_sym_LOADCOLV,
      anon_sym_LOADROWV,
      anon_sym_STOREV,
      anon_sym_STOREM,
      anon_sym_ADD,
      anon_sym_SUB,
      anon_sym_MULT,
      anon_sym_TRANSPOSE,
      anon_sym_ACCUMULATE,
      anon_sym_ACTIVATION,
      sym_identifier,
  [65] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(26), 1,
      sym__digit,
    ACTIONS(32), 1,
      anon_sym_DOT,
    STATE(2), 1,
      aux_sym_size_repeat1,
    ACTIONS(28), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(30), 13,
      anon_sym_LOADM,
      anon_sym_LOADV,
      anon_sym_LOADCOLV,
      anon_sym_LOADROWV,
      anon_sym_STOREV,
      anon_sym_STOREM,
      anon_sym_ADD,
      anon_sym_SUB,
      anon_sym_MULT,
      anon_sym_TRANSPOSE,
      anon_sym_ACCUMULATE,
      anon_sym_ACTIVATION,
      sym_identifier,
  [98] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_ACTIVATION,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    STATE(34), 1,
      sym_operation,
    STATE(42), 1,
      sym_activation,
    STATE(6), 3,
      sym_definition,
      sym_instruction,
      aux_sym_program_repeat1,
    ACTIONS(7), 11,
      anon_sym_LOADM,
      anon_sym_LOADV,
      anon_sym_LOADCOLV,
      anon_sym_LOADROWV,
      anon_sym_STOREV,
      anon_sym_STOREM,
      anon_sym_ADD,
      anon_sym_SUB,
      anon_sym_MULT,
      anon_sym_TRANSPOSE,
      anon_sym_ACCUMULATE,
  [135] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      anon_sym_ACTIVATION,
    ACTIONS(44), 1,
      sym_identifier,
    STATE(34), 1,
      sym_operation,
    STATE(42), 1,
      sym_activation,
    STATE(6), 3,
      sym_definition,
      sym_instruction,
      aux_sym_program_repeat1,
    ACTIONS(38), 11,
      anon_sym_LOADM,
      anon_sym_LOADV,
      anon_sym_LOADCOLV,
      anon_sym_LOADROWV,
      anon_sym_STOREV,
      anon_sym_STOREM,
      anon_sym_ADD,
      anon_sym_SUB,
      anon_sym_MULT,
      anon_sym_TRANSPOSE,
      anon_sym_ACCUMULATE,
  [172] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(26), 1,
      sym__digit,
    STATE(2), 1,
      aux_sym_size_repeat1,
    ACTIONS(47), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(49), 13,
      anon_sym_LOADM,
      anon_sym_LOADV,
      anon_sym_LOADCOLV,
      anon_sym_LOADROWV,
      anon_sym_STOREV,
      anon_sym_STOREM,
      anon_sym_ADD,
      anon_sym_SUB,
      anon_sym_MULT,
      anon_sym_TRANSPOSE,
      anon_sym_ACCUMULATE,
      anon_sym_ACTIVATION,
      sym_identifier,
  [202] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(26), 1,
      sym__digit,
    STATE(2), 1,
      aux_sym_size_repeat1,
    ACTIONS(51), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(53), 13,
      anon_sym_LOADM,
      anon_sym_LOADV,
      anon_sym_LOADCOLV,
      anon_sym_LOADROWV,
      anon_sym_STOREV,
      anon_sym_STOREM,
      anon_sym_ADD,
      anon_sym_SUB,
      anon_sym_MULT,
      anon_sym_TRANSPOSE,
      anon_sym_ACCUMULATE,
      anon_sym_ACTIVATION,
      sym_identifier,
  [232] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      sym__digit,
    STATE(7), 1,
      aux_sym_size_repeat1,
    ACTIONS(51), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(53), 13,
      anon_sym_LOADM,
      anon_sym_LOADV,
      anon_sym_LOADCOLV,
      anon_sym_LOADROWV,
      anon_sym_STOREV,
      anon_sym_STOREM,
      anon_sym_ADD,
      anon_sym_SUB,
      anon_sym_MULT,
      anon_sym_TRANSPOSE,
      anon_sym_ACCUMULATE,
      anon_sym_ACTIVATION,
      sym_identifier,
  [262] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__digit,
    STATE(8), 1,
      aux_sym_size_repeat1,
    ACTIONS(57), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(59), 13,
      anon_sym_LOADM,
      anon_sym_LOADV,
      anon_sym_LOADCOLV,
      anon_sym_LOADROWV,
      anon_sym_STOREV,
      anon_sym_STOREM,
      anon_sym_ADD,
      anon_sym_SUB,
      anon_sym_MULT,
      anon_sym_TRANSPOSE,
      anon_sym_ACCUMULATE,
      anon_sym_ACTIVATION,
      sym_identifier,
  [292] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    STATE(24), 1,
      sym_list,
    STATE(25), 1,
      sym_value,
    ACTIONS(67), 13,
      anon_sym_LOADM,
      anon_sym_LOADV,
      anon_sym_LOADCOLV,
      anon_sym_LOADROWV,
      anon_sym_STOREV,
      anon_sym_STOREM,
      anon_sym_ADD,
      anon_sym_SUB,
      anon_sym_MULT,
      anon_sym_TRANSPOSE,
      anon_sym_ACCUMULATE,
      anon_sym_ACTIVATION,
      sym_identifier,
  [323] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 1,
      anon_sym_COMMA,
    STATE(15), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(73), 13,
      anon_sym_LOADM,
      anon_sym_LOADV,
      anon_sym_LOADCOLV,
      anon_sym_LOADROWV,
      anon_sym_STOREV,
      anon_sym_STOREM,
      anon_sym_ADD,
      anon_sym_SUB,
      anon_sym_MULT,
      anon_sym_TRANSPOSE,
      anon_sym_ACCUMULATE,
      anon_sym_ACTIVATION,
      sym_identifier,
  [351] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_COMMA,
    STATE(13), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(80), 13,
      anon_sym_LOADM,
      anon_sym_LOADV,
      anon_sym_LOADCOLV,
      anon_sym_LOADROWV,
      anon_sym_STOREV,
      anon_sym_STOREM,
      anon_sym_ADD,
      anon_sym_SUB,
      anon_sym_MULT,
      anon_sym_TRANSPOSE,
      anon_sym_ACCUMULATE,
      anon_sym_ACTIVATION,
      sym_identifier,
  [379] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(84), 13,
      anon_sym_LOADM,
      anon_sym_LOADV,
      anon_sym_LOADCOLV,
      anon_sym_LOADROWV,
      anon_sym_STOREV,
      anon_sym_STOREM,
      anon_sym_ADD,
      anon_sym_SUB,
      anon_sym_MULT,
      anon_sym_TRANSPOSE,
      anon_sym_ACCUMULATE,
      anon_sym_ACTIVATION,
      sym_identifier,
  [403] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_COMMA,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
    STATE(13), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(88), 13,
      anon_sym_LOADM,
      anon_sym_LOADV,
      anon_sym_LOADCOLV,
      anon_sym_LOADROWV,
      anon_sym_STOREV,
      anon_sym_STOREM,
      anon_sym_ADD,
      anon_sym_SUB,
      anon_sym_MULT,
      anon_sym_TRANSPOSE,
      anon_sym_ACCUMULATE,
      anon_sym_ACTIVATION,
      sym_identifier,
  [431] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    ACTIONS(80), 13,
      anon_sym_LOADM,
      anon_sym_LOADV,
      anon_sym_LOADCOLV,
      anon_sym_LOADROWV,
      anon_sym_STOREV,
      anon_sym_STOREM,
      anon_sym_ADD,
      anon_sym_SUB,
      anon_sym_MULT,
      anon_sym_TRANSPOSE,
      anon_sym_ACCUMULATE,
      anon_sym_ACTIVATION,
      sym_identifier,
  [454] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    ACTIONS(92), 13,
      anon_sym_LOADM,
      anon_sym_LOADV,
      anon_sym_LOADCOLV,
      anon_sym_LOADROWV,
      anon_sym_STOREV,
      anon_sym_STOREM,
      anon_sym_ADD,
      anon_sym_SUB,
      anon_sym_MULT,
      anon_sym_TRANSPOSE,
      anon_sym_ACCUMULATE,
      anon_sym_ACTIVATION,
      sym_identifier,
  [477] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(96), 13,
      anon_sym_LOADM,
      anon_sym_LOADV,
      anon_sym_LOADCOLV,
      anon_sym_LOADROWV,
      anon_sym_STOREV,
      anon_sym_STOREM,
      anon_sym_ADD,
      anon_sym_SUB,
      anon_sym_MULT,
      anon_sym_TRANSPOSE,
      anon_sym_ACCUMULATE,
      anon_sym_ACTIVATION,
      sym_identifier,
  [500] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(100), 13,
      anon_sym_LOADM,
      anon_sym_LOADV,
      anon_sym_LOADCOLV,
      anon_sym_LOADROWV,
      anon_sym_STOREV,
      anon_sym_STOREM,
      anon_sym_ADD,
      anon_sym_SUB,
      anon_sym_MULT,
      anon_sym_TRANSPOSE,
      anon_sym_ACCUMULATE,
      anon_sym_ACTIVATION,
      sym_identifier,
  [523] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
    ACTIONS(104), 13,
      anon_sym_LOADM,
      anon_sym_LOADV,
      anon_sym_LOADCOLV,
      anon_sym_LOADROWV,
      anon_sym_STOREV,
      anon_sym_STOREM,
      anon_sym_ADD,
      anon_sym_SUB,
      anon_sym_MULT,
      anon_sym_TRANSPOSE,
      anon_sym_ACCUMULATE,
      anon_sym_ACTIVATION,
      sym_identifier,
  [545] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
    ACTIONS(108), 13,
      anon_sym_LOADM,
      anon_sym_LOADV,
      anon_sym_LOADCOLV,
      anon_sym_LOADROWV,
      anon_sym_STOREV,
      anon_sym_STOREM,
      anon_sym_ADD,
      anon_sym_SUB,
      anon_sym_MULT,
      anon_sym_TRANSPOSE,
      anon_sym_ACCUMULATE,
      anon_sym_ACTIVATION,
      sym_identifier,
  [567] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
    ACTIONS(112), 13,
      anon_sym_LOADM,
      anon_sym_LOADV,
      anon_sym_LOADCOLV,
      anon_sym_LOADROWV,
      anon_sym_STOREV,
      anon_sym_STOREM,
      anon_sym_ADD,
      anon_sym_SUB,
      anon_sym_MULT,
      anon_sym_TRANSPOSE,
      anon_sym_ACCUMULATE,
      anon_sym_ACTIVATION,
      sym_identifier,
  [589] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    ACTIONS(116), 13,
      anon_sym_LOADM,
      anon_sym_LOADV,
      anon_sym_LOADCOLV,
      anon_sym_LOADROWV,
      anon_sym_STOREV,
      anon_sym_STOREM,
      anon_sym_ADD,
      anon_sym_SUB,
      anon_sym_MULT,
      anon_sym_TRANSPOSE,
      anon_sym_ACCUMULATE,
      anon_sym_ACTIVATION,
      sym_identifier,
  [611] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
    ACTIONS(120), 13,
      anon_sym_LOADM,
      anon_sym_LOADV,
      anon_sym_LOADCOLV,
      anon_sym_LOADROWV,
      anon_sym_STOREV,
      anon_sym_STOREM,
      anon_sym_ADD,
      anon_sym_SUB,
      anon_sym_MULT,
      anon_sym_TRANSPOSE,
      anon_sym_ACCUMULATE,
      anon_sym_ACTIVATION,
      sym_identifier,
  [633] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    ACTIONS(124), 13,
      anon_sym_LOADM,
      anon_sym_LOADV,
      anon_sym_LOADCOLV,
      anon_sym_LOADROWV,
      anon_sym_STOREV,
      anon_sym_STOREM,
      anon_sym_ADD,
      anon_sym_SUB,
      anon_sym_MULT,
      anon_sym_TRANSPOSE,
      anon_sym_ACCUMULATE,
      anon_sym_ACTIVATION,
      sym_identifier,
  [655] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      sym__digit,
    STATE(3), 1,
      aux_sym_size_repeat1,
    STATE(11), 1,
      sym_type,
    STATE(40), 1,
      sym_sign,
    STATE(41), 1,
      sym_named_type,
    ACTIONS(126), 2,
      anon_sym_matrix,
      anon_sym_vector,
    ACTIONS(130), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(14), 2,
      sym_integer,
      sym_float,
    STATE(22), 2,
      sym_number,
      sym_tensor,
  [690] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      sym__digit,
    STATE(3), 1,
      aux_sym_size_repeat1,
    STATE(38), 1,
      sym_number,
    STATE(40), 1,
      sym_sign,
    ACTIONS(130), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(14), 2,
      sym_integer,
      sym_float,
  [714] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      sym__digit,
    STATE(3), 1,
      aux_sym_size_repeat1,
    STATE(40), 1,
      sym_sign,
    STATE(43), 1,
      sym_number,
    ACTIONS(130), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(14), 2,
      sym_integer,
      sym_float,
  [738] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      aux_sym_size_token1,
    ACTIONS(134), 1,
      sym_identifier,
    STATE(44), 1,
      sym_size,
    STATE(45), 1,
      sym_dimension,
    STATE(51), 1,
      sym_dimensions,
  [757] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      sym__digit,
    STATE(32), 1,
      aux_sym_size_repeat1,
    ACTIONS(136), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [771] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      aux_sym_size_token1,
    ACTIONS(134), 1,
      sym_identifier,
    STATE(44), 1,
      sym_size,
    STATE(54), 1,
      sym_dimension,
  [787] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(26), 1,
      sym__digit,
    STATE(2), 1,
      aux_sym_size_repeat1,
    ACTIONS(140), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [801] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(53), 1,
      sym_function,
    ACTIONS(142), 3,
      anon_sym_RELU,
      anon_sym_SIGMOID,
      anon_sym_TANH,
  [813] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(12), 1,
      sym_argument,
    STATE(21), 1,
      sym_arguments,
    ACTIONS(144), 2,
      sym_register,
      sym_identifier,
  [827] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_COMMA,
    ACTIONS(148), 1,
      anon_sym_RBRACK,
    STATE(37), 1,
      aux_sym_list_repeat1,
  [840] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(16), 1,
      sym_argument,
    ACTIONS(144), 2,
      sym_register,
      sym_identifier,
  [851] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    ACTIONS(153), 1,
      anon_sym_RBRACK,
    STATE(37), 1,
      aux_sym_list_repeat1,
  [864] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_COMMA,
    ACTIONS(155), 1,
      anon_sym_RBRACK,
    STATE(35), 1,
      aux_sym_list_repeat1,
  [877] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 2,
      sym_register,
      sym_identifier,
  [885] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      sym__digit,
    STATE(4), 1,
      aux_sym_size_repeat1,
  [895] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_LT,
    STATE(18), 1,
      sym_shape,
  [905] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 2,
      sym_register,
      sym_identifier,
  [913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [929] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_GT,
    ACTIONS(169), 1,
      anon_sym_COMMA,
  [939] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      sym__digit,
  [946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_LT,
  [953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      ts_builtin_sym_end,
  [960] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_GT,
  [967] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_EQ,
  [974] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_GT,
  [981] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_LT,
  [988] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_GT,
  [995] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_GT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 65,
  [SMALL_STATE(5)] = 98,
  [SMALL_STATE(6)] = 135,
  [SMALL_STATE(7)] = 172,
  [SMALL_STATE(8)] = 202,
  [SMALL_STATE(9)] = 232,
  [SMALL_STATE(10)] = 262,
  [SMALL_STATE(11)] = 292,
  [SMALL_STATE(12)] = 323,
  [SMALL_STATE(13)] = 351,
  [SMALL_STATE(14)] = 379,
  [SMALL_STATE(15)] = 403,
  [SMALL_STATE(16)] = 431,
  [SMALL_STATE(17)] = 454,
  [SMALL_STATE(18)] = 477,
  [SMALL_STATE(19)] = 500,
  [SMALL_STATE(20)] = 523,
  [SMALL_STATE(21)] = 545,
  [SMALL_STATE(22)] = 567,
  [SMALL_STATE(23)] = 589,
  [SMALL_STATE(24)] = 611,
  [SMALL_STATE(25)] = 633,
  [SMALL_STATE(26)] = 655,
  [SMALL_STATE(27)] = 690,
  [SMALL_STATE(28)] = 714,
  [SMALL_STATE(29)] = 738,
  [SMALL_STATE(30)] = 757,
  [SMALL_STATE(31)] = 771,
  [SMALL_STATE(32)] = 787,
  [SMALL_STATE(33)] = 801,
  [SMALL_STATE(34)] = 813,
  [SMALL_STATE(35)] = 827,
  [SMALL_STATE(36)] = 840,
  [SMALL_STATE(37)] = 851,
  [SMALL_STATE(38)] = 864,
  [SMALL_STATE(39)] = 877,
  [SMALL_STATE(40)] = 885,
  [SMALL_STATE(41)] = 895,
  [SMALL_STATE(42)] = 905,
  [SMALL_STATE(43)] = 913,
  [SMALL_STATE(44)] = 921,
  [SMALL_STATE(45)] = 929,
  [SMALL_STATE(46)] = 939,
  [SMALL_STATE(47)] = 946,
  [SMALL_STATE(48)] = 953,
  [SMALL_STATE(49)] = 960,
  [SMALL_STATE(50)] = 967,
  [SMALL_STATE(51)] = 974,
  [SMALL_STATE(52)] = 981,
  [SMALL_STATE(53)] = 988,
  [SMALL_STATE(54)] = 995,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_size_repeat1, 2),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_size_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_size_repeat1, 2), SHIFT_REPEAT(2),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [22] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 2),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 2),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(42),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(52),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(50),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 4),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 4),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tensor, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tensor, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(36),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 3),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 3),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition, 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tensor, 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tensor, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_size, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_size, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(28),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_activation, 4),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimensions, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sign, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_type, 1),
  [175] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimensions, 3),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_SPARHL(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
