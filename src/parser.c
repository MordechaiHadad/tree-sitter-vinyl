#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 97
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 63
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 14

enum {
  anon_sym_EQ = 1,
  anon_sym_SEMI = 2,
  sym_mutability_specifier = 3,
  sym_primitive_type = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  aux_sym_identifier_token1 = 7,
  anon_sym_AMP_AMP = 8,
  anon_sym_PIPE_PIPE = 9,
  anon_sym_AMP = 10,
  anon_sym_PIPE = 11,
  anon_sym_CARET = 12,
  anon_sym_EQ_EQ = 13,
  anon_sym_BANG_EQ = 14,
  anon_sym_LT = 15,
  anon_sym_LT_EQ = 16,
  anon_sym_GT = 17,
  anon_sym_GT_EQ = 18,
  anon_sym_LT_LT = 19,
  anon_sym_GT_GT = 20,
  anon_sym_PLUS = 21,
  anon_sym_DASH = 22,
  anon_sym_STAR = 23,
  anon_sym_SLASH = 24,
  anon_sym_PERCENT = 25,
  anon_sym_new = 26,
  sym_integer_literal = 27,
  sym_floating_point_literal = 28,
  anon_sym_DQUOTE = 29,
  aux_sym_string_literal_token1 = 30,
  anon_sym_SQUOTE = 31,
  aux_sym_char_literal_token1 = 32,
  anon_sym_true = 33,
  anon_sym_false = 34,
  anon_sym_LPAREN = 35,
  anon_sym_COMMA = 36,
  anon_sym_RPAREN = 37,
  anon_sym_LBRACE = 38,
  anon_sym_RBRACE = 39,
  sym_source_file = 40,
  sym__statement = 41,
  sym__declaration = 42,
  sym_variable_declaration = 43,
  sym_function_declaration = 44,
  sym__type = 45,
  sym_array_type = 46,
  sym_identifier = 47,
  sym__expression = 48,
  sym_binary_expression = 49,
  sym_array_creation_expression = 50,
  sym_literal = 51,
  sym_reference = 52,
  sym_string_literal = 53,
  sym_char_literal = 54,
  sym_bool_literal = 55,
  sym_parameters = 56,
  sym_parameter = 57,
  sym_block = 58,
  aux_sym_source_file_repeat1 = 59,
  aux_sym_string_literal_repeat1 = 60,
  aux_sym_parameters_repeat1 = 61,
  aux_sym_block_repeat1 = 62,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [anon_sym_SEMI] = ";",
  [sym_mutability_specifier] = "mutability_specifier",
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
  [sym_floating_point_literal] = "floating_point_literal",
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
  [sym_floating_point_literal] = sym_floating_point_literal,
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
  [sym_floating_point_literal] = {
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
  field_identifier = 3,
  field_left = 4,
  field_name = 5,
  field_operator = 6,
  field_parameters = 7,
  field_reference = 8,
  field_return_type = 9,
  field_right = 10,
  field_size = 11,
  field_statement = 12,
  field_type = 13,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_expression] = "expression",
  [field_identifier] = "identifier",
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
    {field_type, 0},
  [10] =
    {field_size, 2},
    {field_type, 0},
  [12] =
    {field_body, 3},
    {field_identifier, 1},
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
    {field_type, 0},
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
      if (eof) ADVANCE(37);
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '"') ADVANCE(110);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == '&') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(113);
      if (lookahead == '(') ADVANCE(117);
      if (lookahead == ')') ADVANCE(119);
      if (lookahead == '*') ADVANCE(104);
      if (lookahead == '+') ADVANCE(102);
      if (lookahead == ',') ADVANCE(118);
      if (lookahead == '-') ADVANCE(103);
      if (lookahead == '/') ADVANCE(105);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '<') ADVANCE(96);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '>') ADVANCE(98);
      if (lookahead == '[') ADVANCE(44);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == '^') ADVANCE(93);
      if (lookahead == 'b') ADVANCE(74);
      if (lookahead == 'c') ADVANCE(65);
      if (lookahead == 'f') ADVANCE(52);
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == 'm') ADVANCE(86);
      if (lookahead == 'n') ADVANCE(60);
      if (lookahead == 's') ADVANCE(83);
      if (lookahead == 't') ADVANCE(78);
      if (lookahead == 'u') ADVANCE(66);
      if (lookahead == 'v') ADVANCE(55);
      if (lookahead == '{') ADVANCE(120);
      if (lookahead == '|') ADVANCE(92);
      if (lookahead == '}') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(112);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == '&') ADVANCE(91);
      if (lookahead == '*') ADVANCE(104);
      if (lookahead == '+') ADVANCE(102);
      if (lookahead == '-') ADVANCE(103);
      if (lookahead == '/') ADVANCE(105);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '<') ADVANCE(96);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '>') ADVANCE(98);
      if (lookahead == '[') ADVANCE(44);
      if (lookahead == '^') ADVANCE(93);
      if (lookahead == 'm') ADVANCE(86);
      if (lookahead == '|') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(110);
      if (lookahead == '\'') ADVANCE(113);
      if (lookahead == '(') ADVANCE(117);
      if (lookahead == ')') ADVANCE(119);
      if (lookahead == ',') ADVANCE(118);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '=') ADVANCE(38);
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(60);
      if (lookahead == 't') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(119);
      if (lookahead == 'b') ADVANCE(27);
      if (lookahead == 'c') ADVANCE(19);
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == 'u') ADVANCE(20);
      if (lookahead == 'v') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '1') ADVANCE(7);
      if (lookahead == '3') ADVANCE(6);
      if (lookahead == '6') ADVANCE(9);
      if (lookahead == '8') ADVANCE(42);
      END_STATE();
    case 6:
      if (lookahead == '2') ADVANCE(42);
      END_STATE();
    case 7:
      if (lookahead == '2') ADVANCE(10);
      if (lookahead == '6') ADVANCE(42);
      END_STATE();
    case 8:
      if (lookahead == '3') ADVANCE(6);
      if (lookahead == '6') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '4') ADVANCE(42);
      END_STATE();
    case 10:
      if (lookahead == '8') ADVANCE(42);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(95);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(94);
      END_STATE();
    case 13:
      if (lookahead == '[') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 18:
      if (lookahead == 'g') ADVANCE(42);
      END_STATE();
    case 19:
      if (lookahead == 'h') ADVANCE(14);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 35:
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(114);
      END_STATE();
    case 36:
      if (eof) ADVANCE(37);
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '"') ADVANCE(110);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == '&') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(113);
      if (lookahead == '*') ADVANCE(104);
      if (lookahead == '+') ADVANCE(102);
      if (lookahead == '-') ADVANCE(103);
      if (lookahead == '/') ADVANCE(105);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '<') ADVANCE(96);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '>') ADVANCE(98);
      if (lookahead == '[') ADVANCE(44);
      if (lookahead == '^') ADVANCE(93);
      if (lookahead == 'b') ADVANCE(74);
      if (lookahead == 'c') ADVANCE(65);
      if (lookahead == 'f') ADVANCE(52);
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(60);
      if (lookahead == 's') ADVANCE(83);
      if (lookahead == 't') ADVANCE(78);
      if (lookahead == 'u') ADVANCE(66);
      if (lookahead == 'v') ADVANCE(55);
      if (lookahead == '|') ADVANCE(92);
      if (lookahead == '}') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(94);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_mutability_specifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_primitive_type);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_primitive_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '1') ADVANCE(48);
      if (lookahead == '3') ADVANCE(47);
      if (lookahead == '6') ADVANCE(50);
      if (lookahead == '8') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '2') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '2') ADVANCE(51);
      if (lookahead == '6') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '3') ADVANCE(47);
      if (lookahead == '6') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '4') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '8') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(69);
      if (lookahead == 'l') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'b') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'g') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'h') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'w') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(89);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(90);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == '=') ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(99);
      if (lookahead == '>') ADVANCE(101);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_new);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_floating_point_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 36},
  [2] = {.lex_state = 36},
  [3] = {.lex_state = 36},
  [4] = {.lex_state = 36},
  [5] = {.lex_state = 36},
  [6] = {.lex_state = 36},
  [7] = {.lex_state = 36},
  [8] = {.lex_state = 36},
  [9] = {.lex_state = 36},
  [10] = {.lex_state = 36},
  [11] = {.lex_state = 36},
  [12] = {.lex_state = 36},
  [13] = {.lex_state = 36},
  [14] = {.lex_state = 36},
  [15] = {.lex_state = 36},
  [16] = {.lex_state = 36},
  [17] = {.lex_state = 36},
  [18] = {.lex_state = 36},
  [19] = {.lex_state = 36},
  [20] = {.lex_state = 36},
  [21] = {.lex_state = 36},
  [22] = {.lex_state = 36},
  [23] = {.lex_state = 36},
  [24] = {.lex_state = 36},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 36},
  [28] = {.lex_state = 36},
  [29] = {.lex_state = 36},
  [30] = {.lex_state = 36},
  [31] = {.lex_state = 36},
  [32] = {.lex_state = 36},
  [33] = {.lex_state = 36},
  [34] = {.lex_state = 36},
  [35] = {.lex_state = 36},
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
  [54] = {.lex_state = 36},
  [55] = {.lex_state = 36},
  [56] = {.lex_state = 36},
  [57] = {.lex_state = 36},
  [58] = {.lex_state = 36},
  [59] = {.lex_state = 36},
  [60] = {.lex_state = 36},
  [61] = {.lex_state = 36},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 13},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 13},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 13},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 13},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 35},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_mutability_specifier] = ACTIONS(1),
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
    [sym_floating_point_literal] = ACTIONS(1),
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
    [sym_source_file] = STATE(95),
    [sym__statement] = STATE(24),
    [sym__declaration] = STATE(24),
    [sym_variable_declaration] = STATE(24),
    [sym_function_declaration] = STATE(24),
    [sym__type] = STATE(65),
    [sym_array_type] = STATE(65),
    [sym__expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_array_creation_expression] = STATE(16),
    [sym_literal] = STATE(16),
    [sym_reference] = STATE(16),
    [sym_string_literal] = STATE(4),
    [sym_char_literal] = STATE(4),
    [sym_bool_literal] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_primitive_type] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_new] = ACTIONS(9),
    [sym_integer_literal] = ACTIONS(11),
    [sym_floating_point_literal] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 10,
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
    ACTIONS(21), 20,
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
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_floating_point_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
  [38] = 2,
    ACTIONS(29), 10,
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
    ACTIONS(27), 20,
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
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_floating_point_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
  [73] = 2,
    ACTIONS(33), 10,
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
    ACTIONS(31), 20,
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
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_floating_point_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
  [108] = 2,
    ACTIONS(37), 10,
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
    ACTIONS(35), 20,
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
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_floating_point_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
  [143] = 2,
    ACTIONS(41), 10,
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
    ACTIONS(39), 20,
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
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_floating_point_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
  [178] = 2,
    ACTIONS(45), 10,
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
    ACTIONS(43), 20,
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
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_floating_point_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
  [213] = 2,
    ACTIONS(49), 10,
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
    ACTIONS(47), 20,
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
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_floating_point_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
  [248] = 2,
    ACTIONS(53), 10,
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
    ACTIONS(51), 20,
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
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_floating_point_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
  [283] = 2,
    ACTIONS(57), 10,
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
    ACTIONS(55), 20,
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
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_floating_point_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
  [318] = 2,
    ACTIONS(61), 10,
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
    ACTIONS(59), 20,
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
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_floating_point_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
  [353] = 4,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(65), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(49), 10,
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
    ACTIONS(47), 14,
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
      sym_floating_point_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
  [391] = 5,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(67), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(65), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(49), 10,
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
    ACTIONS(47), 12,
      ts_builtin_sym_end,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_floating_point_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
  [431] = 6,
    ACTIONS(69), 1,
      anon_sym_CARET,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(67), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(65), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(49), 10,
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
    ACTIONS(47), 11,
      ts_builtin_sym_end,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_floating_point_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
  [473] = 10,
    ACTIONS(69), 1,
      anon_sym_CARET,
    ACTIONS(71), 1,
      anon_sym_AMP_AMP,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(67), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(73), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(75), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(47), 6,
      ts_builtin_sym_end,
      anon_sym_PIPE_PIPE,
      sym_floating_point_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
    ACTIONS(49), 6,
      sym_primitive_type,
      aux_sym_identifier_token1,
      anon_sym_new,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [523] = 11,
    ACTIONS(69), 1,
      anon_sym_CARET,
    ACTIONS(71), 1,
      anon_sym_AMP_AMP,
    ACTIONS(83), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(67), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(73), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(75), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(79), 5,
      ts_builtin_sym_end,
      sym_floating_point_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
    ACTIONS(81), 6,
      sym_primitive_type,
      aux_sym_identifier_token1,
      anon_sym_new,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [575] = 9,
    ACTIONS(69), 1,
      anon_sym_CARET,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(67), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(73), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(75), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(49), 6,
      sym_primitive_type,
      aux_sym_identifier_token1,
      anon_sym_new,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(47), 7,
      ts_builtin_sym_end,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_floating_point_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
  [623] = 3,
    ACTIONS(65), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(49), 10,
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
    ACTIONS(47), 16,
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
      sym_floating_point_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
  [659] = 7,
    ACTIONS(69), 1,
      anon_sym_CARET,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(67), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(73), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(65), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(49), 8,
      sym_primitive_type,
      aux_sym_identifier_token1,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_new,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(47), 11,
      ts_builtin_sym_end,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_floating_point_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
  [703] = 14,
    ACTIONS(85), 1,
      sym_primitive_type,
    ACTIONS(88), 1,
      aux_sym_identifier_token1,
    ACTIONS(91), 1,
      anon_sym_new,
    ACTIONS(94), 1,
      sym_integer_literal,
    ACTIONS(97), 1,
      sym_floating_point_literal,
    ACTIONS(100), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      aux_sym_block_repeat1,
    ACTIONS(106), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(65), 2,
      sym__type,
      sym_array_type,
    STATE(4), 3,
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
  [757] = 14,
    ACTIONS(5), 1,
      sym_primitive_type,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      anon_sym_new,
    ACTIONS(11), 1,
      sym_integer_literal,
    ACTIONS(13), 1,
      sym_floating_point_literal,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      aux_sym_block_repeat1,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(65), 2,
      sym__type,
      sym_array_type,
    STATE(4), 3,
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
  [811] = 14,
    ACTIONS(5), 1,
      sym_primitive_type,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      anon_sym_new,
    ACTIONS(11), 1,
      sym_integer_literal,
    ACTIONS(13), 1,
      sym_floating_point_literal,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(113), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      aux_sym_block_repeat1,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(65), 2,
      sym__type,
      sym_array_type,
    STATE(4), 3,
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
  [865] = 13,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    ACTIONS(117), 1,
      sym_primitive_type,
    ACTIONS(120), 1,
      aux_sym_identifier_token1,
    ACTIONS(123), 1,
      anon_sym_new,
    ACTIONS(126), 1,
      sym_integer_literal,
    ACTIONS(129), 1,
      sym_floating_point_literal,
    ACTIONS(132), 1,
      anon_sym_DQUOTE,
    ACTIONS(135), 1,
      anon_sym_SQUOTE,
    ACTIONS(138), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(65), 2,
      sym__type,
      sym_array_type,
    STATE(4), 3,
      sym_string_literal,
      sym_char_literal,
      sym_bool_literal,
    STATE(16), 5,
      sym__expression,
      sym_binary_expression,
      sym_array_creation_expression,
      sym_literal,
      sym_reference,
    STATE(23), 5,
      sym__statement,
      sym__declaration,
      sym_variable_declaration,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
  [917] = 13,
    ACTIONS(5), 1,
      sym_primitive_type,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      anon_sym_new,
    ACTIONS(11), 1,
      sym_integer_literal,
    ACTIONS(13), 1,
      sym_floating_point_literal,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(65), 2,
      sym__type,
      sym_array_type,
    STATE(4), 3,
      sym_string_literal,
      sym_char_literal,
      sym_bool_literal,
    STATE(16), 5,
      sym__expression,
      sym_binary_expression,
      sym_array_creation_expression,
      sym_literal,
      sym_reference,
    STATE(23), 5,
      sym__statement,
      sym__declaration,
      sym_variable_declaration,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
  [969] = 2,
    ACTIONS(57), 6,
      sym_mutability_specifier,
      aux_sym_identifier_token1,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 16,
      anon_sym_SEMI,
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
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [996] = 2,
    ACTIONS(61), 6,
      sym_mutability_specifier,
      aux_sym_identifier_token1,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 16,
      anon_sym_SEMI,
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
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1023] = 10,
    ACTIONS(143), 1,
      anon_sym_SEMI,
    ACTIONS(145), 1,
      anon_sym_AMP_AMP,
    ACTIONS(147), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(151), 1,
      anon_sym_CARET,
    ACTIONS(149), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(155), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(159), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(161), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(153), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1063] = 10,
    ACTIONS(145), 1,
      anon_sym_AMP_AMP,
    ACTIONS(147), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(151), 1,
      anon_sym_CARET,
    ACTIONS(163), 1,
      anon_sym_SEMI,
    ACTIONS(149), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(155), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(159), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(161), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(153), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1103] = 3,
    ACTIONS(161), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(49), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(47), 12,
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
  [1129] = 8,
    ACTIONS(151), 1,
      anon_sym_CARET,
    ACTIONS(149), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(155), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(159), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 3,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(161), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(153), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1165] = 9,
    ACTIONS(145), 1,
      anon_sym_AMP_AMP,
    ACTIONS(151), 1,
      anon_sym_CARET,
    ACTIONS(47), 2,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
    ACTIONS(149), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(155), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(159), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(161), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(153), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1203] = 6,
    ACTIONS(151), 1,
      anon_sym_CARET,
    ACTIONS(157), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(159), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(161), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(49), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(47), 7,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1235] = 5,
    ACTIONS(157), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(159), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(161), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(49), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(47), 8,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1265] = 7,
    ACTIONS(151), 1,
      anon_sym_CARET,
    ACTIONS(49), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(149), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(157), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(159), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(161), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(47), 7,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1299] = 4,
    ACTIONS(159), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(161), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(49), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(47), 10,
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
  [1327] = 9,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      anon_sym_new,
    ACTIONS(11), 1,
      sym_integer_literal,
    ACTIONS(13), 1,
      sym_floating_point_literal,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 3,
      sym_string_literal,
      sym_char_literal,
      sym_bool_literal,
    STATE(13), 5,
      sym__expression,
      sym_binary_expression,
      sym_array_creation_expression,
      sym_literal,
      sym_reference,
  [1362] = 9,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      anon_sym_new,
    ACTIONS(11), 1,
      sym_integer_literal,
    ACTIONS(13), 1,
      sym_floating_point_literal,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 3,
      sym_string_literal,
      sym_char_literal,
      sym_bool_literal,
    STATE(14), 5,
      sym__expression,
      sym_binary_expression,
      sym_array_creation_expression,
      sym_literal,
      sym_reference,
  [1397] = 9,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      anon_sym_new,
    ACTIONS(11), 1,
      sym_integer_literal,
    ACTIONS(13), 1,
      sym_floating_point_literal,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 3,
      sym_string_literal,
      sym_char_literal,
      sym_bool_literal,
    STATE(12), 5,
      sym__expression,
      sym_binary_expression,
      sym_array_creation_expression,
      sym_literal,
      sym_reference,
  [1432] = 9,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      anon_sym_new,
    ACTIONS(11), 1,
      sym_integer_literal,
    ACTIONS(13), 1,
      sym_floating_point_literal,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 3,
      sym_string_literal,
      sym_char_literal,
      sym_bool_literal,
    STATE(18), 5,
      sym__expression,
      sym_binary_expression,
      sym_array_creation_expression,
      sym_literal,
      sym_reference,
  [1467] = 9,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      anon_sym_new,
    ACTIONS(11), 1,
      sym_integer_literal,
    ACTIONS(13), 1,
      sym_floating_point_literal,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 3,
      sym_string_literal,
      sym_char_literal,
      sym_bool_literal,
    STATE(8), 5,
      sym__expression,
      sym_binary_expression,
      sym_array_creation_expression,
      sym_literal,
      sym_reference,
  [1502] = 9,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      sym_integer_literal,
    ACTIONS(13), 1,
      sym_floating_point_literal,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(165), 1,
      anon_sym_new,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 3,
      sym_string_literal,
      sym_char_literal,
      sym_bool_literal,
    STATE(30), 5,
      sym__expression,
      sym_binary_expression,
      sym_array_creation_expression,
      sym_literal,
      sym_reference,
  [1537] = 9,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      sym_integer_literal,
    ACTIONS(13), 1,
      sym_floating_point_literal,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(165), 1,
      anon_sym_new,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 3,
      sym_string_literal,
      sym_char_literal,
      sym_bool_literal,
    STATE(8), 5,
      sym__expression,
      sym_binary_expression,
      sym_array_creation_expression,
      sym_literal,
      sym_reference,
  [1572] = 9,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      sym_integer_literal,
    ACTIONS(13), 1,
      sym_floating_point_literal,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(165), 1,
      anon_sym_new,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 3,
      sym_string_literal,
      sym_char_literal,
      sym_bool_literal,
    STATE(29), 5,
      sym__expression,
      sym_binary_expression,
      sym_array_creation_expression,
      sym_literal,
      sym_reference,
  [1607] = 9,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      sym_integer_literal,
    ACTIONS(13), 1,
      sym_floating_point_literal,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(165), 1,
      anon_sym_new,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 3,
      sym_string_literal,
      sym_char_literal,
      sym_bool_literal,
    STATE(27), 5,
      sym__expression,
      sym_binary_expression,
      sym_array_creation_expression,
      sym_literal,
      sym_reference,
  [1642] = 9,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      sym_integer_literal,
    ACTIONS(13), 1,
      sym_floating_point_literal,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(165), 1,
      anon_sym_new,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 3,
      sym_string_literal,
      sym_char_literal,
      sym_bool_literal,
    STATE(31), 5,
      sym__expression,
      sym_binary_expression,
      sym_array_creation_expression,
      sym_literal,
      sym_reference,
  [1677] = 9,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      anon_sym_new,
    ACTIONS(11), 1,
      sym_integer_literal,
    ACTIONS(13), 1,
      sym_floating_point_literal,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 3,
      sym_string_literal,
      sym_char_literal,
      sym_bool_literal,
    STATE(17), 5,
      sym__expression,
      sym_binary_expression,
      sym_array_creation_expression,
      sym_literal,
      sym_reference,
  [1712] = 9,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      sym_integer_literal,
    ACTIONS(13), 1,
      sym_floating_point_literal,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(165), 1,
      anon_sym_new,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 3,
      sym_string_literal,
      sym_char_literal,
      sym_bool_literal,
    STATE(35), 5,
      sym__expression,
      sym_binary_expression,
      sym_array_creation_expression,
      sym_literal,
      sym_reference,
  [1747] = 9,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      sym_integer_literal,
    ACTIONS(13), 1,
      sym_floating_point_literal,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(165), 1,
      anon_sym_new,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 3,
      sym_string_literal,
      sym_char_literal,
      sym_bool_literal,
    STATE(28), 5,
      sym__expression,
      sym_binary_expression,
      sym_array_creation_expression,
      sym_literal,
      sym_reference,
  [1782] = 9,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      anon_sym_new,
    ACTIONS(11), 1,
      sym_integer_literal,
    ACTIONS(13), 1,
      sym_floating_point_literal,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 3,
      sym_string_literal,
      sym_char_literal,
      sym_bool_literal,
    STATE(15), 5,
      sym__expression,
      sym_binary_expression,
      sym_array_creation_expression,
      sym_literal,
      sym_reference,
  [1817] = 9,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      sym_integer_literal,
    ACTIONS(13), 1,
      sym_floating_point_literal,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(165), 1,
      anon_sym_new,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 3,
      sym_string_literal,
      sym_char_literal,
      sym_bool_literal,
    STATE(34), 5,
      sym__expression,
      sym_binary_expression,
      sym_array_creation_expression,
      sym_literal,
      sym_reference,
  [1852] = 9,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      sym_integer_literal,
    ACTIONS(13), 1,
      sym_floating_point_literal,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(165), 1,
      anon_sym_new,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 3,
      sym_string_literal,
      sym_char_literal,
      sym_bool_literal,
    STATE(32), 5,
      sym__expression,
      sym_binary_expression,
      sym_array_creation_expression,
      sym_literal,
      sym_reference,
  [1887] = 9,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      sym_integer_literal,
    ACTIONS(13), 1,
      sym_floating_point_literal,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(165), 1,
      anon_sym_new,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 3,
      sym_string_literal,
      sym_char_literal,
      sym_bool_literal,
    STATE(33), 5,
      sym__expression,
      sym_binary_expression,
      sym_array_creation_expression,
      sym_literal,
      sym_reference,
  [1922] = 9,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      anon_sym_new,
    ACTIONS(11), 1,
      sym_integer_literal,
    ACTIONS(13), 1,
      sym_floating_point_literal,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 3,
      sym_string_literal,
      sym_char_literal,
      sym_bool_literal,
    STATE(19), 5,
      sym__expression,
      sym_binary_expression,
      sym_array_creation_expression,
      sym_literal,
      sym_reference,
  [1957] = 2,
    ACTIONS(167), 5,
      ts_builtin_sym_end,
      sym_floating_point_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
    ACTIONS(169), 6,
      sym_primitive_type,
      aux_sym_identifier_token1,
      anon_sym_new,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [1973] = 2,
    ACTIONS(171), 5,
      ts_builtin_sym_end,
      sym_floating_point_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
    ACTIONS(173), 6,
      sym_primitive_type,
      aux_sym_identifier_token1,
      anon_sym_new,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [1989] = 2,
    ACTIONS(175), 5,
      ts_builtin_sym_end,
      sym_floating_point_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
    ACTIONS(177), 6,
      sym_primitive_type,
      aux_sym_identifier_token1,
      anon_sym_new,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [2005] = 2,
    ACTIONS(179), 5,
      ts_builtin_sym_end,
      sym_floating_point_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
    ACTIONS(181), 6,
      sym_primitive_type,
      aux_sym_identifier_token1,
      anon_sym_new,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [2021] = 2,
    ACTIONS(183), 5,
      ts_builtin_sym_end,
      sym_floating_point_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
    ACTIONS(185), 6,
      sym_primitive_type,
      aux_sym_identifier_token1,
      anon_sym_new,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [2037] = 2,
    ACTIONS(187), 5,
      ts_builtin_sym_end,
      sym_floating_point_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
    ACTIONS(189), 6,
      sym_primitive_type,
      aux_sym_identifier_token1,
      anon_sym_new,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [2053] = 2,
    ACTIONS(191), 5,
      ts_builtin_sym_end,
      sym_floating_point_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
    ACTIONS(193), 6,
      sym_primitive_type,
      aux_sym_identifier_token1,
      anon_sym_new,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [2069] = 2,
    ACTIONS(197), 4,
      sym_floating_point_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
    ACTIONS(195), 6,
      sym_primitive_type,
      aux_sym_identifier_token1,
      anon_sym_new,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [2084] = 4,
    ACTIONS(199), 1,
      sym_primitive_type,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
    STATE(74), 1,
      sym_parameter,
    STATE(67), 2,
      sym__type,
      sym_array_type,
  [2098] = 1,
    ACTIONS(203), 5,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2106] = 3,
    ACTIONS(199), 1,
      sym_primitive_type,
    STATE(80), 1,
      sym_parameter,
    STATE(67), 2,
      sym__type,
      sym_array_type,
  [2117] = 4,
    ACTIONS(205), 1,
      sym_mutability_specifier,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      aux_sym_identifier_token1,
    STATE(66), 1,
      sym_identifier,
  [2130] = 4,
    ACTIONS(211), 1,
      anon_sym_EQ,
    ACTIONS(213), 1,
      anon_sym_SEMI,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    STATE(82), 1,
      sym_parameters,
  [2143] = 3,
    ACTIONS(217), 1,
      anon_sym_LBRACK,
    ACTIONS(219), 1,
      aux_sym_identifier_token1,
    STATE(79), 1,
      sym_identifier,
  [2153] = 3,
    ACTIONS(221), 1,
      anon_sym_COMMA,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
    STATE(69), 1,
      aux_sym_parameters_repeat1,
  [2163] = 3,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(228), 1,
      anon_sym_RPAREN,
    STATE(69), 1,
      aux_sym_parameters_repeat1,
  [2173] = 3,
    ACTIONS(230), 1,
      anon_sym_DQUOTE,
    ACTIONS(232), 1,
      aux_sym_string_literal_token1,
    STATE(72), 1,
      aux_sym_string_literal_repeat1,
  [2183] = 3,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_string_literal_token1,
    STATE(71), 1,
      aux_sym_string_literal_repeat1,
  [2193] = 3,
    ACTIONS(239), 1,
      anon_sym_DQUOTE,
    ACTIONS(241), 1,
      aux_sym_string_literal_token1,
    STATE(71), 1,
      aux_sym_string_literal_repeat1,
  [2203] = 3,
    ACTIONS(243), 1,
      sym_primitive_type,
    STATE(2), 1,
      sym_array_type,
    STATE(94), 1,
      sym__type,
  [2213] = 3,
    ACTIONS(221), 1,
      anon_sym_COMMA,
    ACTIONS(245), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      aux_sym_parameters_repeat1,
  [2223] = 3,
    ACTIONS(247), 1,
      sym_primitive_type,
    STATE(2), 1,
      sym_array_type,
    STATE(89), 1,
      sym__type,
  [2233] = 1,
    ACTIONS(55), 2,
      anon_sym_LBRACK,
      aux_sym_identifier_token1,
  [2238] = 2,
    ACTIONS(249), 1,
      anon_sym_RBRACK,
    ACTIONS(251), 1,
      sym_integer_literal,
  [2245] = 2,
    ACTIONS(253), 1,
      anon_sym_RBRACK,
    ACTIONS(255), 1,
      sym_integer_literal,
  [2252] = 1,
    ACTIONS(257), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2257] = 1,
    ACTIONS(228), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2262] = 1,
    ACTIONS(59), 2,
      anon_sym_LBRACK,
      aux_sym_identifier_token1,
  [2267] = 2,
    ACTIONS(259), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      sym_block,
  [2274] = 2,
    ACTIONS(219), 1,
      aux_sym_identifier_token1,
    STATE(84), 1,
      sym_identifier,
  [2281] = 2,
    ACTIONS(261), 1,
      anon_sym_EQ,
    ACTIONS(263), 1,
      anon_sym_SEMI,
  [2288] = 2,
    ACTIONS(265), 1,
      anon_sym_RBRACK,
    ACTIONS(267), 1,
      sym_integer_literal,
  [2295] = 1,
    ACTIONS(269), 1,
      anon_sym_LBRACE,
  [2299] = 1,
    ACTIONS(271), 1,
      anon_sym_RBRACK,
  [2303] = 1,
    ACTIONS(273), 1,
      anon_sym_RBRACK,
  [2307] = 1,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
  [2311] = 1,
    ACTIONS(275), 1,
      anon_sym_LBRACE,
  [2315] = 1,
    ACTIONS(277), 1,
      anon_sym_LBRACE,
  [2319] = 1,
    ACTIONS(279), 1,
      anon_sym_RBRACK,
  [2323] = 1,
    ACTIONS(281), 1,
      anon_sym_SQUOTE,
  [2327] = 1,
    ACTIONS(283), 1,
      anon_sym_LBRACK,
  [2331] = 1,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
  [2335] = 1,
    ACTIONS(287), 1,
      aux_sym_char_literal_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 73,
  [SMALL_STATE(5)] = 108,
  [SMALL_STATE(6)] = 143,
  [SMALL_STATE(7)] = 178,
  [SMALL_STATE(8)] = 213,
  [SMALL_STATE(9)] = 248,
  [SMALL_STATE(10)] = 283,
  [SMALL_STATE(11)] = 318,
  [SMALL_STATE(12)] = 353,
  [SMALL_STATE(13)] = 391,
  [SMALL_STATE(14)] = 431,
  [SMALL_STATE(15)] = 473,
  [SMALL_STATE(16)] = 523,
  [SMALL_STATE(17)] = 575,
  [SMALL_STATE(18)] = 623,
  [SMALL_STATE(19)] = 659,
  [SMALL_STATE(20)] = 703,
  [SMALL_STATE(21)] = 757,
  [SMALL_STATE(22)] = 811,
  [SMALL_STATE(23)] = 865,
  [SMALL_STATE(24)] = 917,
  [SMALL_STATE(25)] = 969,
  [SMALL_STATE(26)] = 996,
  [SMALL_STATE(27)] = 1023,
  [SMALL_STATE(28)] = 1063,
  [SMALL_STATE(29)] = 1103,
  [SMALL_STATE(30)] = 1129,
  [SMALL_STATE(31)] = 1165,
  [SMALL_STATE(32)] = 1203,
  [SMALL_STATE(33)] = 1235,
  [SMALL_STATE(34)] = 1265,
  [SMALL_STATE(35)] = 1299,
  [SMALL_STATE(36)] = 1327,
  [SMALL_STATE(37)] = 1362,
  [SMALL_STATE(38)] = 1397,
  [SMALL_STATE(39)] = 1432,
  [SMALL_STATE(40)] = 1467,
  [SMALL_STATE(41)] = 1502,
  [SMALL_STATE(42)] = 1537,
  [SMALL_STATE(43)] = 1572,
  [SMALL_STATE(44)] = 1607,
  [SMALL_STATE(45)] = 1642,
  [SMALL_STATE(46)] = 1677,
  [SMALL_STATE(47)] = 1712,
  [SMALL_STATE(48)] = 1747,
  [SMALL_STATE(49)] = 1782,
  [SMALL_STATE(50)] = 1817,
  [SMALL_STATE(51)] = 1852,
  [SMALL_STATE(52)] = 1887,
  [SMALL_STATE(53)] = 1922,
  [SMALL_STATE(54)] = 1957,
  [SMALL_STATE(55)] = 1973,
  [SMALL_STATE(56)] = 1989,
  [SMALL_STATE(57)] = 2005,
  [SMALL_STATE(58)] = 2021,
  [SMALL_STATE(59)] = 2037,
  [SMALL_STATE(60)] = 2053,
  [SMALL_STATE(61)] = 2069,
  [SMALL_STATE(62)] = 2084,
  [SMALL_STATE(63)] = 2098,
  [SMALL_STATE(64)] = 2106,
  [SMALL_STATE(65)] = 2117,
  [SMALL_STATE(66)] = 2130,
  [SMALL_STATE(67)] = 2143,
  [SMALL_STATE(68)] = 2153,
  [SMALL_STATE(69)] = 2163,
  [SMALL_STATE(70)] = 2173,
  [SMALL_STATE(71)] = 2183,
  [SMALL_STATE(72)] = 2193,
  [SMALL_STATE(73)] = 2203,
  [SMALL_STATE(74)] = 2213,
  [SMALL_STATE(75)] = 2223,
  [SMALL_STATE(76)] = 2233,
  [SMALL_STATE(77)] = 2238,
  [SMALL_STATE(78)] = 2245,
  [SMALL_STATE(79)] = 2252,
  [SMALL_STATE(80)] = 2257,
  [SMALL_STATE(81)] = 2262,
  [SMALL_STATE(82)] = 2267,
  [SMALL_STATE(83)] = 2274,
  [SMALL_STATE(84)] = 2281,
  [SMALL_STATE(85)] = 2288,
  [SMALL_STATE(86)] = 2295,
  [SMALL_STATE(87)] = 2299,
  [SMALL_STATE(88)] = 2303,
  [SMALL_STATE(89)] = 2307,
  [SMALL_STATE(90)] = 2311,
  [SMALL_STATE(91)] = 2315,
  [SMALL_STATE(92)] = 2319,
  [SMALL_STATE(93)] = 2323,
  [SMALL_STATE(94)] = 2327,
  [SMALL_STATE(95)] = 2331,
  [SMALL_STATE(96)] = 2335,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_creation_expression, 2, .production_id = 2),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_creation_expression, 2, .production_id = 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1, .production_id = 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 1, .production_id = 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 3),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_literal, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_literal, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 5),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 5),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 4, .production_id = 7),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 4, .production_id = 7),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3, .production_id = 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 3, .production_id = 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 13), SHIFT_REPEAT(65),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 13), SHIFT_REPEAT(3),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 13), SHIFT_REPEAT(73),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 13), SHIFT_REPEAT(4),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 13), SHIFT_REPEAT(4),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 13), SHIFT_REPEAT(70),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 13), SHIFT_REPEAT(96),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 13), SHIFT_REPEAT(6),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 13),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(65),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(70),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(96),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 12),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, .production_id = 12),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 6),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4, .production_id = 6),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 8),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 4, .production_id = 8),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, .production_id = 9),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, .production_id = 9),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, .production_id = 4),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 3, .production_id = 4),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, .production_id = 11),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 6, .production_id = 11),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 1, .production_id = 10),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 1, .production_id = 10),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(64),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(71),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 4),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [285] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
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
