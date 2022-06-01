#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 94
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 64
#define ALIAS_COUNT 0
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 14

enum {
  anon_sym_EQ = 1,
  anon_sym_SEMI = 2,
  sym_mutability_specifier = 3,
  sym_comment = 4,
  sym_primitive_type = 5,
  anon_sym_LBRACK = 6,
  anon_sym_RBRACK = 7,
  aux_sym_identifier_token1 = 8,
  anon_sym_AMP_AMP = 9,
  anon_sym_PIPE_PIPE = 10,
  anon_sym_AMP = 11,
  anon_sym_PIPE = 12,
  anon_sym_CARET = 13,
  anon_sym_EQ_EQ = 14,
  anon_sym_BANG_EQ = 15,
  anon_sym_LT = 16,
  anon_sym_LT_EQ = 17,
  anon_sym_GT = 18,
  anon_sym_GT_EQ = 19,
  anon_sym_LT_LT = 20,
  anon_sym_GT_GT = 21,
  anon_sym_PLUS = 22,
  anon_sym_DASH = 23,
  anon_sym_STAR = 24,
  anon_sym_SLASH = 25,
  anon_sym_PERCENT = 26,
  anon_sym_new = 27,
  sym_integer_literal = 28,
  sym_real_literal = 29,
  anon_sym_DQUOTE = 30,
  aux_sym_string_literal_token1 = 31,
  anon_sym_SQUOTE = 32,
  aux_sym_char_literal_token1 = 33,
  anon_sym_true = 34,
  anon_sym_false = 35,
  anon_sym_LPAREN = 36,
  anon_sym_COMMA = 37,
  anon_sym_RPAREN = 38,
  anon_sym_LBRACE = 39,
  anon_sym_RBRACE = 40,
  sym_source_file = 41,
  sym__statement = 42,
  sym__declaration = 43,
  sym_variable_declaration = 44,
  sym_function_declaration = 45,
  sym__type = 46,
  sym_array_type = 47,
  sym_identifier = 48,
  sym__expression = 49,
  sym_binary_expression = 50,
  sym_array_creation_expression = 51,
  sym_literal = 52,
  sym_reference = 53,
  sym_string_literal = 54,
  sym_char_literal = 55,
  sym_bool_literal = 56,
  sym_parameters = 57,
  sym_parameter = 58,
  sym_block = 59,
  aux_sym_source_file_repeat1 = 60,
  aux_sym_string_literal_repeat1 = 61,
  aux_sym_parameters_repeat1 = 62,
  aux_sym_block_repeat1 = 63,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [anon_sym_SEMI] = ";",
  [sym_mutability_specifier] = "mutability_specifier",
  [sym_comment] = "comment",
  [sym_primitive_type] = "primitive_type",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [aux_sym_identifier_token1] = "identifier_token1",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [anon_sym_CARET] = "^",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_new] = "new",
  [sym_integer_literal] = "integer_literal",
  [sym_real_literal] = "real_literal",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_char_literal_token1] = "char_literal_token1",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym__declaration] = "_declaration",
  [sym_variable_declaration] = "variable_declaration",
  [sym_function_declaration] = "function_declaration",
  [sym__type] = "_type",
  [sym_array_type] = "array_type",
  [sym_identifier] = "identifier",
  [sym__expression] = "_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_array_creation_expression] = "array_creation_expression",
  [sym_literal] = "literal",
  [sym_reference] = "reference",
  [sym_string_literal] = "string_literal",
  [sym_char_literal] = "char_literal",
  [sym_bool_literal] = "bool_literal",
  [sym_parameters] = "parameters",
  [sym_parameter] = "parameter",
  [sym_block] = "block",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_mutability_specifier] = sym_mutability_specifier,
  [sym_comment] = sym_comment,
  [sym_primitive_type] = sym_primitive_type,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_new] = anon_sym_new,
  [sym_integer_literal] = sym_integer_literal,
  [sym_real_literal] = sym_real_literal,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_char_literal_token1] = aux_sym_char_literal_token1,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym__declaration] = sym__declaration,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_function_declaration] = sym_function_declaration,
  [sym__type] = sym__type,
  [sym_array_type] = sym_array_type,
  [sym_identifier] = sym_identifier,
  [sym__expression] = sym__expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_array_creation_expression] = sym_array_creation_expression,
  [sym_literal] = sym_literal,
  [sym_reference] = sym_reference,
  [sym_string_literal] = sym_string_literal,
  [sym_char_literal] = sym_char_literal,
  [sym_bool_literal] = sym_bool_literal,
  [sym_parameters] = sym_parameters,
  [sym_parameter] = sym_parameter,
  [sym_block] = sym_block,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
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
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_mutability_specifier] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_new] = {
    .visible = true,
    .named = false,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_real_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_char_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_array_creation_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_char_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_body = 1,
  field_expression = 2,
  field_left = 3,
  field_name = 4,
  field_operator = 5,
  field_parameters = 6,
  field_reference = 7,
  field_return_type = 8,
  field_right = 9,
  field_size = 10,
  field_statement = 11,
  field_type = 12,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_expression] = "expression",
  [field_left] = "left",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_parameters] = "parameters",
  [field_reference] = "reference",
  [field_return_type] = "return_type",
  [field_right] = "right",
  [field_size] = "size",
  [field_statement] = "statement",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 3},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 2},
  [8] = {.index = 12, .length = 4},
  [9] = {.index = 16, .length = 3},
  [10] = {.index = 19, .length = 1},
  [11] = {.index = 20, .length = 3},
  [12] = {.index = 23, .length = 1},
  [13] = {.index = 24, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_reference, 0},
  [1] =
    {field_type, 1},
  [2] =
    {field_type, 0},
  [3] =
    {field_name, 1},
    {field_type, 0},
  [5] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [8] =
    {field_name, 2},
    {field_type, 1},
  [10] =
    {field_size, 2},
    {field_type, 0},
  [12] =
    {field_body, 3},
    {field_name, 1},
    {field_parameters, 2},
    {field_return_type, 0},
  [16] =
    {field_expression, 3},
    {field_name, 1},
    {field_type, 0},
  [19] =
    {field_statement, 0},
  [20] =
    {field_expression, 4},
    {field_name, 2},
    {field_type, 1},
  [23] =
    {field_statement, 1, .inherited = true},
  [24] =
    {field_statement, 0, .inherited = true},
    {field_statement, 1, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(38);
      if (lookahead == '!') ADVANCE(13);
      if (lookahead == '"') ADVANCE(114);
      if (lookahead == '%') ADVANCE(110);
      if (lookahead == '&') ADVANCE(95);
      if (lookahead == '\'') ADVANCE(118);
      if (lookahead == '(') ADVANCE(123);
      if (lookahead == ')') ADVANCE(125);
      if (lookahead == '*') ADVANCE(108);
      if (lookahead == '+') ADVANCE(106);
      if (lookahead == ',') ADVANCE(124);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '/') ADVANCE(109);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == '=') ADVANCE(40);
      if (lookahead == '>') ADVANCE(102);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == ']') ADVANCE(49);
      if (lookahead == '^') ADVANCE(97);
      if (lookahead == 'b') ADVANCE(78);
      if (lookahead == 'c') ADVANCE(69);
      if (lookahead == 'f') ADVANCE(56);
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == 'm') ADVANCE(90);
      if (lookahead == 'n') ADVANCE(64);
      if (lookahead == 's') ADVANCE(87);
      if (lookahead == 't') ADVANCE(82);
      if (lookahead == 'u') ADVANCE(70);
      if (lookahead == 'v') ADVANCE(59);
      if (lookahead == '{') ADVANCE(126);
      if (lookahead == '|') ADVANCE(96);
      if (lookahead == '}') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(114);
      if (lookahead == '/') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(117);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(13);
      if (lookahead == '%') ADVANCE(110);
      if (lookahead == '&') ADVANCE(95);
      if (lookahead == '*') ADVANCE(108);
      if (lookahead == '+') ADVANCE(106);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '/') ADVANCE(109);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '>') ADVANCE(102);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '^') ADVANCE(97);
      if (lookahead == '|') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(114);
      if (lookahead == '\'') ADVANCE(118);
      if (lookahead == '(') ADVANCE(123);
      if (lookahead == ')') ADVANCE(125);
      if (lookahead == ',') ADVANCE(124);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == 'f') ADVANCE(57);
      if (lookahead == 'n') ADVANCE(64);
      if (lookahead == 't') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(125);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 'b') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(20);
      if (lookahead == 'f') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(27);
      if (lookahead == 's') ADVANCE(33);
      if (lookahead == 'u') ADVANCE(21);
      if (lookahead == 'v') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(44);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 7:
      if (lookahead == '1') ADVANCE(9);
      if (lookahead == '3') ADVANCE(8);
      if (lookahead == '6') ADVANCE(11);
      if (lookahead == '8') ADVANCE(46);
      END_STATE();
    case 8:
      if (lookahead == '2') ADVANCE(46);
      END_STATE();
    case 9:
      if (lookahead == '2') ADVANCE(12);
      if (lookahead == '6') ADVANCE(46);
      END_STATE();
    case 10:
      if (lookahead == '3') ADVANCE(8);
      if (lookahead == '6') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '4') ADVANCE(46);
      END_STATE();
    case 12:
      if (lookahead == '8') ADVANCE(46);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(99);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(98);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(46);
      END_STATE();
    case 19:
      if (lookahead == 'g') ADVANCE(46);
      END_STATE();
    case 20:
      if (lookahead == 'h') ADVANCE(15);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 36:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(44);
      if (lookahead == '\r') ADVANCE(45);
      END_STATE();
    case 37:
      if (eof) ADVANCE(38);
      if (lookahead == '!') ADVANCE(13);
      if (lookahead == '"') ADVANCE(114);
      if (lookahead == '%') ADVANCE(110);
      if (lookahead == '&') ADVANCE(95);
      if (lookahead == '\'') ADVANCE(118);
      if (lookahead == '*') ADVANCE(108);
      if (lookahead == '+') ADVANCE(106);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '/') ADVANCE(109);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '>') ADVANCE(102);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '^') ADVANCE(97);
      if (lookahead == 'b') ADVANCE(78);
      if (lookahead == 'c') ADVANCE(69);
      if (lookahead == 'f') ADVANCE(56);
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == 'm') ADVANCE(90);
      if (lookahead == 'n') ADVANCE(64);
      if (lookahead == 's') ADVANCE(87);
      if (lookahead == 't') ADVANCE(82);
      if (lookahead == 'u') ADVANCE(70);
      if (lookahead == 'v') ADVANCE(59);
      if (lookahead == '|') ADVANCE(96);
      if (lookahead == '}') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(37)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(98);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_mutability_specifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(36);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_primitive_type);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_primitive_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '1') ADVANCE(52);
      if (lookahead == '3') ADVANCE(51);
      if (lookahead == '6') ADVANCE(54);
      if (lookahead == '8') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '2') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '2') ADVANCE(55);
      if (lookahead == '6') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '3') ADVANCE(51);
      if (lookahead == '6') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '4') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '8') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(73);
      if (lookahead == 'l') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == 'o') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'b') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'g') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'h') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'w') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(93);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(94);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == '=') ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(103);
      if (lookahead == '>') ADVANCE(105);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(44);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_new);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_real_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(117);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '/') ADVANCE(44);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
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
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 37},
  [28] = {.lex_state = 37},
  [29] = {.lex_state = 37},
  [30] = {.lex_state = 37},
  [31] = {.lex_state = 37},
  [32] = {.lex_state = 37},
  [33] = {.lex_state = 37},
  [34] = {.lex_state = 37},
  [35] = {.lex_state = 37},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_mutability_specifier] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_primitive_type] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_identifier_token1] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [sym_integer_literal] = ACTIONS(1),
    [sym_real_literal] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(90),
    [sym__statement] = STATE(23),
    [sym__declaration] = STATE(23),
    [sym_variable_declaration] = STATE(23),
    [sym_function_declaration] = STATE(23),
    [sym__type] = STATE(73),
    [sym_array_type] = STATE(73),
    [sym__expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_array_creation_expression] = STATE(16),
    [sym_literal] = STATE(16),
    [sym_reference] = STATE(16),
    [sym_string_literal] = STATE(6),
    [sym_char_literal] = STATE(6),
    [sym_bool_literal] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_mutability_specifier] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_primitive_type] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_new] = ACTIONS(13),
    [sym_integer_literal] = ACTIONS(15),
    [sym_real_literal] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_SEMI] = ACTIONS(25),
    [sym_mutability_specifier] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [sym_primitive_type] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [aux_sym_identifier_token1] = ACTIONS(27),
    [anon_sym_AMP_AMP] = ACTIONS(25),
    [anon_sym_PIPE_PIPE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_CARET] = ACTIONS(25),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_LT_LT] = ACTIONS(25),
    [anon_sym_GT_GT] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(27),
    [anon_sym_PERCENT] = ACTIONS(25),
    [anon_sym_new] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(27),
    [sym_real_literal] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(25),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 12,
      sym_mutability_specifier,
      sym_primitive_type,
      aux_sym_identifier_token1,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_new,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_real_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
  [39] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 12,
      sym_mutability_specifier,
      sym_primitive_type,
      aux_sym_identifier_token1,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_new,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(35), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_real_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
  [78] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 12,
      sym_mutability_specifier,
      sym_primitive_type,
      aux_sym_identifier_token1,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_new,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_real_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
  [117] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 12,
      sym_mutability_specifier,
      sym_primitive_type,
      aux_sym_identifier_token1,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_new,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_real_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
  [156] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 12,
      sym_mutability_specifier,
      sym_primitive_type,
      aux_sym_identifier_token1,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_new,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(47), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_real_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
  [195] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 12,
      sym_mutability_specifier,
      sym_primitive_type,
      aux_sym_identifier_token1,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_new,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(51), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_real_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
  [234] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 12,
      sym_mutability_specifier,
      sym_primitive_type,
      aux_sym_identifier_token1,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_new,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(55), 19,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_real_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
  [273] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 12,
      sym_mutability_specifier,
      sym_primitive_type,
      aux_sym_identifier_token1,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_new,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(59), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_real_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
  [312] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 12,
      sym_mutability_specifier,
      sym_primitive_type,
      aux_sym_identifier_token1,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_new,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(63), 19,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_real_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
  [351] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_AMP_AMP,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(83), 1,
      anon_sym_SLASH,
    ACTIONS(69), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(75), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(77), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(79), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(81), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(73), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(31), 6,
      ts_builtin_sym_end,
      anon_sym_PIPE_PIPE,
      sym_real_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
    ACTIONS(33), 7,
      sym_mutability_specifier,
      sym_primitive_type,
      aux_sym_identifier_token1,
      anon_sym_new,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [407] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(83), 1,
      anon_sym_SLASH,
    ACTIONS(69), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(75), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(77), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(79), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(81), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(73), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(31), 7,
      ts_builtin_sym_end,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_real_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
    ACTIONS(33), 7,
      sym_mutability_specifier,
      sym_primitive_type,
      aux_sym_identifier_token1,
      anon_sym_new,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [461] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_SLASH,
    ACTIONS(81), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(33), 11,
      sym_mutability_specifier,
      sym_primitive_type,
      aux_sym_identifier_token1,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_new,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 16,
      ts_builtin_sym_end,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_real_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
  [503] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_SLASH,
    ACTIONS(79), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(81), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(33), 11,
      sym_mutability_specifier,
      sym_primitive_type,
      aux_sym_identifier_token1,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_new,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 14,
      ts_builtin_sym_end,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      sym_real_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
  [547] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_AMP_AMP,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(83), 1,
      anon_sym_SLASH,
    ACTIONS(89), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(69), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(75), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(77), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(79), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(81), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(73), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(85), 5,
      ts_builtin_sym_end,
      sym_real_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
    ACTIONS(87), 7,
      sym_mutability_specifier,
      sym_primitive_type,
      aux_sym_identifier_token1,
      anon_sym_new,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [605] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(83), 1,
      anon_sym_SLASH,
    ACTIONS(69), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(77), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(79), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(81), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(33), 9,
      sym_mutability_specifier,
      sym_primitive_type,
      aux_sym_identifier_token1,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_new,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 11,
      ts_builtin_sym_end,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_real_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
  [655] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_SLASH,
    ACTIONS(77), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(79), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(81), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(33), 11,
      sym_mutability_specifier,
      sym_primitive_type,
      aux_sym_identifier_token1,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_new,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 12,
      ts_builtin_sym_end,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_real_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
  [701] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(83), 1,
      anon_sym_SLASH,
    ACTIONS(77), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(79), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(81), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(31), 11,
      ts_builtin_sym_end,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_real_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
    ACTIONS(33), 11,
      sym_mutability_specifier,
      sym_primitive_type,
      aux_sym_identifier_token1,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_new,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [749] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      sym_mutability_specifier,
    ACTIONS(94), 1,
      sym_primitive_type,
    ACTIONS(97), 1,
      aux_sym_identifier_token1,
    ACTIONS(100), 1,
      anon_sym_new,
    ACTIONS(103), 1,
      sym_integer_literal,
    ACTIONS(106), 1,
      sym_real_literal,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(112), 1,
      anon_sym_SQUOTE,
    ACTIONS(118), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      aux_sym_block_repeat1,
    ACTIONS(115), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(73), 2,
      sym__type,
      sym_array_type,
    STATE(6), 3,
      sym_string_literal,
      sym_char_literal,
      sym_bool_literal,
    STATE(61), 4,
      sym__statement,
      sym__declaration,
      sym_variable_declaration,
      sym_function_declaration,
    STATE(16), 5,
      sym__expression,
      sym_binary_expression,
      sym_array_creation_expression,
      sym_literal,
      sym_reference,
  [809] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_mutability_specifier,
    ACTIONS(9), 1,
      sym_primitive_type,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_new,
    ACTIONS(15), 1,
      sym_integer_literal,
    ACTIONS(17), 1,
      sym_real_literal,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(120), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      aux_sym_block_repeat1,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(73), 2,
      sym__type,
      sym_array_type,
    STATE(6), 3,
      sym_string_literal,
      sym_char_literal,
      sym_bool_literal,
    STATE(61), 4,
      sym__statement,
      sym__declaration,
      sym_variable_declaration,
      sym_function_declaration,
    STATE(16), 5,
      sym__expression,
      sym_binary_expression,
      sym_array_creation_expression,
      sym_literal,
      sym_reference,
  [869] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_mutability_specifier,
    ACTIONS(9), 1,
      sym_primitive_type,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_new,
    ACTIONS(15), 1,
      sym_integer_literal,
    ACTIONS(17), 1,
      sym_real_literal,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      aux_sym_block_repeat1,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(73), 2,
      sym__type,
      sym_array_type,
    STATE(6), 3,
      sym_string_literal,
      sym_char_literal,
      sym_bool_literal,
    STATE(61), 4,
      sym__statement,
      sym__declaration,
      sym_variable_declaration,
      sym_function_declaration,
    STATE(16), 5,
      sym__expression,
      sym_binary_expression,
      sym_array_creation_expression,
      sym_literal,
      sym_reference,
  [929] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_mutability_specifier,
    ACTIONS(9), 1,
      sym_primitive_type,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_new,
    ACTIONS(15), 1,
      sym_integer_literal,
    ACTIONS(17), 1,
      sym_real_literal,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(73), 2,
      sym__type,
      sym_array_type,
    STATE(6), 3,
      sym_string_literal,
      sym_char_literal,
      sym_bool_literal,
    STATE(16), 5,
      sym__expression,
      sym_binary_expression,
      sym_array_creation_expression,
      sym_literal,
      sym_reference,
    STATE(24), 5,
      sym__statement,
      sym__declaration,
      sym_variable_declaration,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
  [987] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(128), 1,
      sym_mutability_specifier,
    ACTIONS(131), 1,
      sym_primitive_type,
    ACTIONS(134), 1,
      aux_sym_identifier_token1,
    ACTIONS(137), 1,
      anon_sym_new,
    ACTIONS(140), 1,
      sym_integer_literal,
    ACTIONS(143), 1,
      sym_real_literal,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    ACTIONS(152), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(73), 2,
      sym__type,
      sym_array_type,
    STATE(6), 3,
      sym_string_literal,
      sym_char_literal,
      sym_bool_literal,
    STATE(16), 5,
      sym__expression,
      sym_binary_expression,
      sym_array_creation_expression,
      sym_literal,
      sym_reference,
    STATE(24), 5,
      sym__statement,
      sym__declaration,
      sym_variable_declaration,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
  [1045] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(55), 16,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      aux_sym_identifier_token1,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [1074] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(63), 16,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      aux_sym_identifier_token1,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [1103] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_SEMI,
    ACTIONS(157), 1,
      anon_sym_AMP_AMP,
    ACTIONS(159), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(163), 1,
      anon_sym_CARET,
    ACTIONS(175), 1,
      anon_sym_SLASH,
    ACTIONS(161), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(167), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(169), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(171), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(173), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(165), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1148] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_AMP_AMP,
    ACTIONS(159), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(163), 1,
      anon_sym_CARET,
    ACTIONS(175), 1,
      anon_sym_SLASH,
    ACTIONS(177), 1,
      anon_sym_SEMI,
    ACTIONS(161), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(167), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(169), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(171), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(173), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(165), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1193] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_SLASH,
    ACTIONS(173), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(33), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(31), 12,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1224] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_CARET,
    ACTIONS(175), 1,
      anon_sym_SLASH,
    ACTIONS(161), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(167), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(169), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(171), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(173), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(31), 3,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(165), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1265] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_AMP_AMP,
    ACTIONS(163), 1,
      anon_sym_CARET,
    ACTIONS(175), 1,
      anon_sym_SLASH,
    ACTIONS(31), 2,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
    ACTIONS(161), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(167), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(169), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(171), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(173), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(165), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1308] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_CARET,
    ACTIONS(175), 1,
      anon_sym_SLASH,
    ACTIONS(169), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(171), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(173), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(33), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(31), 7,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1345] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_SLASH,
    ACTIONS(169), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(171), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(173), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(33), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(31), 8,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1380] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_CARET,
    ACTIONS(175), 1,
      anon_sym_SLASH,
    ACTIONS(33), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(169), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(171), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(173), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(31), 7,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1419] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_SLASH,
    ACTIONS(171), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(173), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(33), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(31), 10,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1452] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_new,
    ACTIONS(15), 1,
      sym_integer_literal,
    ACTIONS(17), 1,
      sym_real_literal,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 3,
      sym_string_literal,
      sym_char_literal,
      sym_bool_literal,
    STATE(12), 5,
      sym__expression,
      sym_binary_expression,
      sym_array_creation_expression,
      sym_literal,
      sym_reference,
  [1490] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(15), 1,
      sym_integer_literal,
    ACTIONS(17), 1,
      sym_real_literal,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(179), 1,
      anon_sym_new,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 3,
      sym_string_literal,
      sym_char_literal,
      sym_bool_literal,
    STATE(31), 5,
      sym__expression,
      sym_binary_expression,
      sym_array_creation_expression,
      sym_literal,
      sym_reference,
  [1528] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_new,
    ACTIONS(15), 1,
      sym_integer_literal,
    ACTIONS(17), 1,
      sym_real_literal,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 3,
      sym_string_literal,
      sym_char_literal,
      sym_bool_literal,
    STATE(15), 5,
      sym__expression,
      sym_binary_expression,
      sym_array_creation_expression,
      sym_literal,
      sym_reference,
  [1566] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_new,
    ACTIONS(15), 1,
      sym_integer_literal,
    ACTIONS(17), 1,
      sym_real_literal,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 3,
      sym_string_literal,
      sym_char_literal,
      sym_bool_literal,
    STATE(14), 5,
      sym__expression,
      sym_binary_expression,
      sym_array_creation_expression,
      sym_literal,
      sym_reference,
  [1604] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_new,
    ACTIONS(15), 1,
      sym_integer_literal,
    ACTIONS(17), 1,
      sym_real_literal,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 3,
      sym_string_literal,
      sym_char_literal,
      sym_bool_literal,
    STATE(3), 5,
      sym__expression,
      sym_binary_expression,
      sym_array_creation_expression,
      sym_literal,
      sym_reference,
  [1642] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(15), 1,
      sym_integer_literal,
    ACTIONS(17), 1,
      sym_real_literal,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(179), 1,
      anon_sym_new,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 3,
      sym_string_literal,
      sym_char_literal,
      sym_bool_literal,
    STATE(3), 5,
      sym__expression,
      sym_binary_expression,
      sym_array_creation_expression,
      sym_literal,
      sym_reference,
  [1680] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(15), 1,
      sym_integer_literal,
    ACTIONS(17), 1,
      sym_real_literal,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(179), 1,
      anon_sym_new,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 3,
      sym_string_literal,
      sym_char_literal,
      sym_bool_literal,
    STATE(29), 5,
      sym__expression,
      sym_binary_expression,
      sym_array_creation_expression,
      sym_literal,
      sym_reference,
  [1718] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(15), 1,
      sym_integer_literal,
    ACTIONS(17), 1,
      sym_real_literal,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(179), 1,
      anon_sym_new,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 3,
      sym_string_literal,
      sym_char_literal,
      sym_bool_literal,
    STATE(35), 5,
      sym__expression,
      sym_binary_expression,
      sym_array_creation_expression,
      sym_literal,
      sym_reference,
  [1756] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(15), 1,
      sym_integer_literal,
    ACTIONS(17), 1,
      sym_real_literal,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(179), 1,
      anon_sym_new,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 3,
      sym_string_literal,
      sym_char_literal,
      sym_bool_literal,
    STATE(27), 5,
      sym__expression,
      sym_binary_expression,
      sym_array_creation_expression,
      sym_literal,
      sym_reference,
  [1794] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(15), 1,
      sym_integer_literal,
    ACTIONS(17), 1,
      sym_real_literal,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(179), 1,
      anon_sym_new,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 3,
      sym_string_literal,
      sym_char_literal,
      sym_bool_literal,
    STATE(34), 5,
      sym__expression,
      sym_binary_expression,
      sym_array_creation_expression,
      sym_literal,
      sym_reference,
  [1832] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(15), 1,
      sym_integer_literal,
    ACTIONS(17), 1,
      sym_real_literal,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(179), 1,
      anon_sym_new,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 3,
      sym_string_literal,
      sym_char_literal,
      sym_bool_literal,
    STATE(33), 5,
      sym__expression,
      sym_binary_expression,
      sym_array_creation_expression,
      sym_literal,
      sym_reference,
  [1870] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(15), 1,
      sym_integer_literal,
    ACTIONS(17), 1,
      sym_real_literal,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(179), 1,
      anon_sym_new,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 3,
      sym_string_literal,
      sym_char_literal,
      sym_bool_literal,
    STATE(32), 5,
      sym__expression,
      sym_binary_expression,
      sym_array_creation_expression,
      sym_literal,
      sym_reference,
  [1908] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_new,
    ACTIONS(15), 1,
      sym_integer_literal,
    ACTIONS(17), 1,
      sym_real_literal,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 3,
      sym_string_literal,
      sym_char_literal,
      sym_bool_literal,
    STATE(17), 5,
      sym__expression,
      sym_binary_expression,
      sym_array_creation_expression,
      sym_literal,
      sym_reference,
  [1946] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(15), 1,
      sym_integer_literal,
    ACTIONS(17), 1,
      sym_real_literal,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(179), 1,
      anon_sym_new,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 3,
      sym_string_literal,
      sym_char_literal,
      sym_bool_literal,
    STATE(28), 5,
      sym__expression,
      sym_binary_expression,
      sym_array_creation_expression,
      sym_literal,
      sym_reference,
  [1984] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(15), 1,
      sym_integer_literal,
    ACTIONS(17), 1,
      sym_real_literal,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(179), 1,
      anon_sym_new,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 3,
      sym_string_literal,
      sym_char_literal,
      sym_bool_literal,
    STATE(30), 5,
      sym__expression,
      sym_binary_expression,
      sym_array_creation_expression,
      sym_literal,
      sym_reference,
  [2022] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_new,
    ACTIONS(15), 1,
      sym_integer_literal,
    ACTIONS(17), 1,
      sym_real_literal,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 3,
      sym_string_literal,
      sym_char_literal,
      sym_bool_literal,
    STATE(18), 5,
      sym__expression,
      sym_binary_expression,
      sym_array_creation_expression,
      sym_literal,
      sym_reference,
  [2060] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_new,
    ACTIONS(15), 1,
      sym_integer_literal,
    ACTIONS(17), 1,
      sym_real_literal,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 3,
      sym_string_literal,
      sym_char_literal,
      sym_bool_literal,
    STATE(19), 5,
      sym__expression,
      sym_binary_expression,
      sym_array_creation_expression,
      sym_literal,
      sym_reference,
  [2098] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_new,
    ACTIONS(15), 1,
      sym_integer_literal,
    ACTIONS(17), 1,
      sym_real_literal,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 3,
      sym_string_literal,
      sym_char_literal,
      sym_bool_literal,
    STATE(13), 5,
      sym__expression,
      sym_binary_expression,
      sym_array_creation_expression,
      sym_literal,
      sym_reference,
  [2136] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 5,
      ts_builtin_sym_end,
      sym_real_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
    ACTIONS(183), 7,
      sym_mutability_specifier,
      sym_primitive_type,
      aux_sym_identifier_token1,
      anon_sym_new,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [2156] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 5,
      ts_builtin_sym_end,
      sym_real_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
    ACTIONS(187), 7,
      sym_mutability_specifier,
      sym_primitive_type,
      aux_sym_identifier_token1,
      anon_sym_new,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [2176] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 5,
      ts_builtin_sym_end,
      sym_real_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
    ACTIONS(191), 7,
      sym_mutability_specifier,
      sym_primitive_type,
      aux_sym_identifier_token1,
      anon_sym_new,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [2196] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 5,
      ts_builtin_sym_end,
      sym_real_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
    ACTIONS(195), 7,
      sym_mutability_specifier,
      sym_primitive_type,
      aux_sym_identifier_token1,
      anon_sym_new,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [2216] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 5,
      ts_builtin_sym_end,
      sym_real_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
    ACTIONS(199), 7,
      sym_mutability_specifier,
      sym_primitive_type,
      aux_sym_identifier_token1,
      anon_sym_new,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [2236] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 5,
      ts_builtin_sym_end,
      sym_real_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
    ACTIONS(203), 7,
      sym_mutability_specifier,
      sym_primitive_type,
      aux_sym_identifier_token1,
      anon_sym_new,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [2256] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 5,
      ts_builtin_sym_end,
      sym_real_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
    ACTIONS(207), 7,
      sym_mutability_specifier,
      sym_primitive_type,
      aux_sym_identifier_token1,
      anon_sym_new,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [2276] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 4,
      sym_real_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
    ACTIONS(209), 7,
      sym_mutability_specifier,
      sym_primitive_type,
      aux_sym_identifier_token1,
      anon_sym_new,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [2295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 5,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2306] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      sym_primitive_type,
    ACTIONS(217), 1,
      anon_sym_RPAREN,
    STATE(69), 1,
      sym_parameter,
    STATE(71), 2,
      sym__type,
      sym_array_type,
  [2323] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_EQ,
    ACTIONS(221), 1,
      anon_sym_SEMI,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    STATE(82), 1,
      sym_parameters,
  [2339] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      sym_primitive_type,
    STATE(79), 1,
      sym_parameter,
    STATE(71), 2,
      sym__type,
      sym_array_type,
  [2353] = 4,
    ACTIONS(225), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_DQUOTE,
    ACTIONS(229), 1,
      aux_sym_string_literal_token1,
    STATE(77), 1,
      aux_sym_string_literal_repeat1,
  [2366] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym_primitive_type,
    STATE(2), 1,
      sym_array_type,
    STATE(87), 1,
      sym__type,
  [2379] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    ACTIONS(236), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      aux_sym_parameters_repeat1,
  [2392] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_COMMA,
    ACTIONS(240), 1,
      anon_sym_RPAREN,
    STATE(70), 1,
      aux_sym_parameters_repeat1,
  [2405] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_COMMA,
    ACTIONS(242), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      aux_sym_parameters_repeat1,
  [2418] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(246), 1,
      aux_sym_identifier_token1,
    STATE(83), 1,
      sym_identifier,
  [2431] = 4,
    ACTIONS(225), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      aux_sym_string_literal_token1,
    STATE(66), 1,
      aux_sym_string_literal_repeat1,
  [2444] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(246), 1,
      aux_sym_identifier_token1,
    STATE(64), 1,
      sym_identifier,
  [2457] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      sym_primitive_type,
    STATE(2), 1,
      sym_array_type,
    STATE(92), 1,
      sym__type,
  [2470] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(246), 1,
      aux_sym_identifier_token1,
    STATE(78), 1,
      sym_identifier,
  [2483] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      sym_primitive_type,
    STATE(75), 2,
      sym__type,
      sym_array_type,
  [2494] = 4,
    ACTIONS(225), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_DQUOTE,
    ACTIONS(258), 1,
      aux_sym_string_literal_token1,
    STATE(77), 1,
      aux_sym_string_literal_repeat1,
  [2507] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_EQ,
    ACTIONS(263), 1,
      anon_sym_SEMI,
  [2517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2525] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_RBRACK,
    ACTIONS(267), 1,
      sym_integer_literal,
  [2535] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_RBRACK,
    ACTIONS(271), 1,
      sym_integer_literal,
  [2545] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      sym_block,
  [2555] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2563] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_SQUOTE,
  [2570] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_LBRACE,
  [2577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_RBRACK,
  [2584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_LBRACK,
  [2591] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_LBRACE,
  [2598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_LBRACE,
  [2605] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      ts_builtin_sym_end,
  [2612] = 2,
    ACTIONS(225), 1,
      sym_comment,
    ACTIONS(291), 1,
      aux_sym_char_literal_token1,
  [2619] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
  [2626] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 39,
  [SMALL_STATE(5)] = 78,
  [SMALL_STATE(6)] = 117,
  [SMALL_STATE(7)] = 156,
  [SMALL_STATE(8)] = 195,
  [SMALL_STATE(9)] = 234,
  [SMALL_STATE(10)] = 273,
  [SMALL_STATE(11)] = 312,
  [SMALL_STATE(12)] = 351,
  [SMALL_STATE(13)] = 407,
  [SMALL_STATE(14)] = 461,
  [SMALL_STATE(15)] = 503,
  [SMALL_STATE(16)] = 547,
  [SMALL_STATE(17)] = 605,
  [SMALL_STATE(18)] = 655,
  [SMALL_STATE(19)] = 701,
  [SMALL_STATE(20)] = 749,
  [SMALL_STATE(21)] = 809,
  [SMALL_STATE(22)] = 869,
  [SMALL_STATE(23)] = 929,
  [SMALL_STATE(24)] = 987,
  [SMALL_STATE(25)] = 1045,
  [SMALL_STATE(26)] = 1074,
  [SMALL_STATE(27)] = 1103,
  [SMALL_STATE(28)] = 1148,
  [SMALL_STATE(29)] = 1193,
  [SMALL_STATE(30)] = 1224,
  [SMALL_STATE(31)] = 1265,
  [SMALL_STATE(32)] = 1308,
  [SMALL_STATE(33)] = 1345,
  [SMALL_STATE(34)] = 1380,
  [SMALL_STATE(35)] = 1419,
  [SMALL_STATE(36)] = 1452,
  [SMALL_STATE(37)] = 1490,
  [SMALL_STATE(38)] = 1528,
  [SMALL_STATE(39)] = 1566,
  [SMALL_STATE(40)] = 1604,
  [SMALL_STATE(41)] = 1642,
  [SMALL_STATE(42)] = 1680,
  [SMALL_STATE(43)] = 1718,
  [SMALL_STATE(44)] = 1756,
  [SMALL_STATE(45)] = 1794,
  [SMALL_STATE(46)] = 1832,
  [SMALL_STATE(47)] = 1870,
  [SMALL_STATE(48)] = 1908,
  [SMALL_STATE(49)] = 1946,
  [SMALL_STATE(50)] = 1984,
  [SMALL_STATE(51)] = 2022,
  [SMALL_STATE(52)] = 2060,
  [SMALL_STATE(53)] = 2098,
  [SMALL_STATE(54)] = 2136,
  [SMALL_STATE(55)] = 2156,
  [SMALL_STATE(56)] = 2176,
  [SMALL_STATE(57)] = 2196,
  [SMALL_STATE(58)] = 2216,
  [SMALL_STATE(59)] = 2236,
  [SMALL_STATE(60)] = 2256,
  [SMALL_STATE(61)] = 2276,
  [SMALL_STATE(62)] = 2295,
  [SMALL_STATE(63)] = 2306,
  [SMALL_STATE(64)] = 2323,
  [SMALL_STATE(65)] = 2339,
  [SMALL_STATE(66)] = 2353,
  [SMALL_STATE(67)] = 2366,
  [SMALL_STATE(68)] = 2379,
  [SMALL_STATE(69)] = 2392,
  [SMALL_STATE(70)] = 2405,
  [SMALL_STATE(71)] = 2418,
  [SMALL_STATE(72)] = 2431,
  [SMALL_STATE(73)] = 2444,
  [SMALL_STATE(74)] = 2457,
  [SMALL_STATE(75)] = 2470,
  [SMALL_STATE(76)] = 2483,
  [SMALL_STATE(77)] = 2494,
  [SMALL_STATE(78)] = 2507,
  [SMALL_STATE(79)] = 2517,
  [SMALL_STATE(80)] = 2525,
  [SMALL_STATE(81)] = 2535,
  [SMALL_STATE(82)] = 2545,
  [SMALL_STATE(83)] = 2555,
  [SMALL_STATE(84)] = 2563,
  [SMALL_STATE(85)] = 2570,
  [SMALL_STATE(86)] = 2577,
  [SMALL_STATE(87)] = 2584,
  [SMALL_STATE(88)] = 2591,
  [SMALL_STATE(89)] = 2598,
  [SMALL_STATE(90)] = 2605,
  [SMALL_STATE(91)] = 2612,
  [SMALL_STATE(92)] = 2619,
  [SMALL_STATE(93)] = 2626,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_creation_expression, 2, .production_id = 2),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_creation_expression, 2, .production_id = 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 5),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 5),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 3),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1, .production_id = 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 1, .production_id = 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_literal, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_literal, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 4, .production_id = 7),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 4, .production_id = 7),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3, .production_id = 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 3, .production_id = 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 13), SHIFT_REPEAT(76),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 13), SHIFT_REPEAT(73),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 13), SHIFT_REPEAT(5),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 13), SHIFT_REPEAT(67),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 13), SHIFT_REPEAT(6),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 13), SHIFT_REPEAT(6),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 13), SHIFT_REPEAT(72),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 13), SHIFT_REPEAT(91),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 13), SHIFT_REPEAT(8),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 13),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(76),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(72),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(91),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, .production_id = 4),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 3, .production_id = 4),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 8),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 4, .production_id = 8),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, .production_id = 9),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, .production_id = 9),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 6),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4, .production_id = 6),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 12),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, .production_id = 12),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, .production_id = 11),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 6, .production_id = 11),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 1, .production_id = 10),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 1, .production_id = 10),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(65),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(77),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 4),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [289] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_vinyl(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
