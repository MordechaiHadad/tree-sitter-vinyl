#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 87
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 62
#define ALIAS_COUNT 0
#define TOKEN_COUNT 39
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 12

enum {
  anon_sym_EQ = 1,
  anon_sym_SEMI = 2,
  sym_primitive_type = 3,
  anon_sym_LBRACK = 4,
  anon_sym_RBRACK = 5,
  aux_sym_identifier_token1 = 6,
  anon_sym_AMP_AMP = 7,
  anon_sym_PIPE_PIPE = 8,
  anon_sym_AMP = 9,
  anon_sym_PIPE = 10,
  anon_sym_CARET = 11,
  anon_sym_EQ_EQ = 12,
  anon_sym_BANG_EQ = 13,
  anon_sym_LT = 14,
  anon_sym_LT_EQ = 15,
  anon_sym_GT = 16,
  anon_sym_GT_EQ = 17,
  anon_sym_LT_LT = 18,
  anon_sym_GT_GT = 19,
  anon_sym_PLUS = 20,
  anon_sym_DASH = 21,
  anon_sym_STAR = 22,
  anon_sym_SLASH = 23,
  anon_sym_PERCENT = 24,
  anon_sym_new = 25,
  sym_integer_literal = 26,
  sym_floating_point_literal = 27,
  anon_sym_DQUOTE = 28,
  aux_sym_string_literal_token1 = 29,
  anon_sym_SQUOTE = 30,
  aux_sym_char_literal_token1 = 31,
  anon_sym_true = 32,
  anon_sym_false = 33,
  anon_sym_LPAREN = 34,
  anon_sym_COMMA = 35,
  anon_sym_RPAREN = 36,
  anon_sym_LBRACE = 37,
  anon_sym_RBRACE = 38,
  sym_source_file = 39,
  sym__statement = 40,
  sym__declaration = 41,
  sym_variable_declaration = 42,
  sym_function_declaration = 43,
  sym__type = 44,
  sym_array_type = 45,
  sym_identifier = 46,
  sym__expression = 47,
  sym_binary_expression = 48,
  sym_array_creation_expression = 49,
  sym_literal = 50,
  sym_reference = 51,
  sym_string_literal = 52,
  sym_char_literal = 53,
  sym_bool_literal = 54,
  sym_parameters = 55,
  sym_parameter = 56,
  sym_block = 57,
  aux_sym_source_file_repeat1 = 58,
  aux_sym_string_literal_repeat1 = 59,
  aux_sym_parameters_repeat1 = 60,
  aux_sym_block_repeat1 = 61,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [anon_sym_SEMI] = ";",
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
  [7] = {.index = 10, .length = 4},
  [8] = {.index = 14, .length = 3},
  [9] = {.index = 17, .length = 1},
  [10] = {.index = 18, .length = 1},
  [11] = {.index = 19, .length = 2},
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
    {field_size, 2},
    {field_type, 0},
  [10] =
    {field_body, 3},
    {field_identifier, 1},
    {field_parameters, 2},
    {field_return_type, 0},
  [14] =
    {field_expression, 3},
    {field_name, 1},
    {field_type, 0},
  [17] =
    {field_statement, 0},
  [18] =
    {field_statement, 1, .inherited = true},
  [19] =
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
      if (eof) ADVANCE(36);
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '"') ADVANCE(102);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == '&') ADVANCE(83);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '(') ADVANCE(109);
      if (lookahead == ')') ADVANCE(111);
      if (lookahead == '*') ADVANCE(96);
      if (lookahead == '+') ADVANCE(94);
      if (lookahead == ',') ADVANCE(110);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '/') ADVANCE(97);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '<') ADVANCE(88);
      if (lookahead == '=') ADVANCE(38);
      if (lookahead == '>') ADVANCE(90);
      if (lookahead == '[') ADVANCE(42);
      if (lookahead == ']') ADVANCE(43);
      if (lookahead == '^') ADVANCE(85);
      if (lookahead == 'b') ADVANCE(68);
      if (lookahead == 'c') ADVANCE(60);
      if (lookahead == 'f') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(67);
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead == 's') ADVANCE(77);
      if (lookahead == 't') ADVANCE(71);
      if (lookahead == 'u') ADVANCE(61);
      if (lookahead == 'v') ADVANCE(53);
      if (lookahead == '{') ADVANCE(112);
      if (lookahead == '|') ADVANCE(84);
      if (lookahead == '}') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(104);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == '&') ADVANCE(83);
      if (lookahead == '*') ADVANCE(96);
      if (lookahead == '+') ADVANCE(94);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '/') ADVANCE(97);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '<') ADVANCE(88);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '>') ADVANCE(90);
      if (lookahead == '[') ADVANCE(42);
      if (lookahead == '^') ADVANCE(85);
      if (lookahead == '|') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(102);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '(') ADVANCE(109);
      if (lookahead == ')') ADVANCE(111);
      if (lookahead == ',') ADVANCE(110);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '=') ADVANCE(37);
      if (lookahead == 'f') ADVANCE(51);
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead == 't') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(111);
      if (lookahead == 'b') ADVANCE(26);
      if (lookahead == 'c') ADVANCE(18);
      if (lookahead == 'f') ADVANCE(23);
      if (lookahead == 'i') ADVANCE(25);
      if (lookahead == 's') ADVANCE(31);
      if (lookahead == 'u') ADVANCE(19);
      if (lookahead == 'v') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '1') ADVANCE(7);
      if (lookahead == '3') ADVANCE(6);
      if (lookahead == '6') ADVANCE(9);
      if (lookahead == '8') ADVANCE(40);
      END_STATE();
    case 6:
      if (lookahead == '2') ADVANCE(40);
      END_STATE();
    case 7:
      if (lookahead == '2') ADVANCE(10);
      if (lookahead == '6') ADVANCE(40);
      END_STATE();
    case 8:
      if (lookahead == '3') ADVANCE(6);
      if (lookahead == '6') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '4') ADVANCE(40);
      END_STATE();
    case 10:
      if (lookahead == '8') ADVANCE(40);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(87);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(86);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(40);
      END_STATE();
    case 17:
      if (lookahead == 'g') ADVANCE(40);
      END_STATE();
    case 18:
      if (lookahead == 'h') ADVANCE(13);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 34:
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(106);
      END_STATE();
    case 35:
      if (eof) ADVANCE(36);
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '"') ADVANCE(102);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == '&') ADVANCE(83);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '*') ADVANCE(96);
      if (lookahead == '+') ADVANCE(94);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '/') ADVANCE(97);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '<') ADVANCE(88);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '>') ADVANCE(90);
      if (lookahead == '[') ADVANCE(42);
      if (lookahead == '^') ADVANCE(85);
      if (lookahead == 'b') ADVANCE(68);
      if (lookahead == 'c') ADVANCE(60);
      if (lookahead == 'f') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(67);
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead == 's') ADVANCE(77);
      if (lookahead == 't') ADVANCE(71);
      if (lookahead == 'u') ADVANCE(61);
      if (lookahead == 'v') ADVANCE(53);
      if (lookahead == '|') ADVANCE(84);
      if (lookahead == '}') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(86);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_primitive_type);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_primitive_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '1') ADVANCE(46);
      if (lookahead == '3') ADVANCE(45);
      if (lookahead == '6') ADVANCE(48);
      if (lookahead == '8') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '2') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '2') ADVANCE(49);
      if (lookahead == '6') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '3') ADVANCE(45);
      if (lookahead == '6') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '4') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '8') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(64);
      if (lookahead == 'l') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(72);
      if (lookahead == 'o') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'g') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'h') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'w') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(81);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(82);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(92);
      if (lookahead == '=') ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(91);
      if (lookahead == '>') ADVANCE(93);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_new);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_floating_point_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 35},
  [3] = {.lex_state = 35},
  [4] = {.lex_state = 35},
  [5] = {.lex_state = 35},
  [6] = {.lex_state = 35},
  [7] = {.lex_state = 35},
  [8] = {.lex_state = 35},
  [9] = {.lex_state = 35},
  [10] = {.lex_state = 35},
  [11] = {.lex_state = 35},
  [12] = {.lex_state = 35},
  [13] = {.lex_state = 35},
  [14] = {.lex_state = 35},
  [15] = {.lex_state = 35},
  [16] = {.lex_state = 35},
  [17] = {.lex_state = 35},
  [18] = {.lex_state = 35},
  [19] = {.lex_state = 35},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 35},
  [28] = {.lex_state = 35},
  [29] = {.lex_state = 35},
  [30] = {.lex_state = 35},
  [31] = {.lex_state = 35},
  [32] = {.lex_state = 35},
  [33] = {.lex_state = 35},
  [34] = {.lex_state = 35},
  [35] = {.lex_state = 3},
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
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 34},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
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
    [sym_source_file] = STATE(85),
    [sym__statement] = STATE(20),
    [sym__declaration] = STATE(20),
    [sym_variable_declaration] = STATE(20),
    [sym_function_declaration] = STATE(20),
    [sym__type] = STATE(65),
    [sym_array_type] = STATE(65),
    [sym__expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_array_creation_expression] = STATE(16),
    [sym_literal] = STATE(16),
    [sym_reference] = STATE(16),
    [sym_string_literal] = STATE(6),
    [sym_char_literal] = STATE(6),
    [sym_bool_literal] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(20),
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
  [353] = 7,
    ACTIONS(65), 1,
      anon_sym_CARET,
    ACTIONS(63), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(67), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(69), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(71), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(29), 8,
      sym_primitive_type,
      aux_sym_identifier_token1,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_new,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 11,
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
  [397] = 5,
    ACTIONS(67), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(69), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(71), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
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
    ACTIONS(27), 12,
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
  [437] = 6,
    ACTIONS(65), 1,
      anon_sym_CARET,
    ACTIONS(67), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(69), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(71), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
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
    ACTIONS(27), 11,
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
  [479] = 10,
    ACTIONS(65), 1,
      anon_sym_CARET,
    ACTIONS(73), 1,
      anon_sym_AMP_AMP,
    ACTIONS(63), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(67), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(69), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(75), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(27), 6,
      ts_builtin_sym_end,
      anon_sym_PIPE_PIPE,
      sym_floating_point_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
    ACTIONS(29), 6,
      sym_primitive_type,
      aux_sym_identifier_token1,
      anon_sym_new,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [529] = 11,
    ACTIONS(65), 1,
      anon_sym_CARET,
    ACTIONS(73), 1,
      anon_sym_AMP_AMP,
    ACTIONS(83), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(63), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(67), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(69), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 3,
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
  [581] = 9,
    ACTIONS(65), 1,
      anon_sym_CARET,
    ACTIONS(63), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(67), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(69), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(75), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(29), 6,
      sym_primitive_type,
      aux_sym_identifier_token1,
      anon_sym_new,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 7,
      ts_builtin_sym_end,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_floating_point_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
  [629] = 3,
    ACTIONS(71), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
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
    ACTIONS(27), 16,
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
  [665] = 4,
    ACTIONS(69), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(71), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
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
    ACTIONS(27), 14,
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
  [703] = 13,
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
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(65), 2,
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
    STATE(22), 5,
      sym__statement,
      sym__declaration,
      sym_variable_declaration,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
  [755] = 14,
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
    ACTIONS(87), 1,
      anon_sym_RBRACE,
    STATE(24), 1,
      aux_sym_block_repeat1,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(65), 2,
      sym__type,
      sym_array_type,
    STATE(6), 3,
      sym_string_literal,
      sym_char_literal,
      sym_bool_literal,
    STATE(57), 4,
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
  [809] = 13,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      sym_primitive_type,
    ACTIONS(94), 1,
      aux_sym_identifier_token1,
    ACTIONS(97), 1,
      anon_sym_new,
    ACTIONS(100), 1,
      sym_integer_literal,
    ACTIONS(103), 1,
      sym_floating_point_literal,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(112), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(65), 2,
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
    STATE(22), 5,
      sym__statement,
      sym__declaration,
      sym_variable_declaration,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
  [861] = 14,
    ACTIONS(115), 1,
      sym_primitive_type,
    ACTIONS(118), 1,
      aux_sym_identifier_token1,
    ACTIONS(121), 1,
      anon_sym_new,
    ACTIONS(124), 1,
      sym_integer_literal,
    ACTIONS(127), 1,
      sym_floating_point_literal,
    ACTIONS(130), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      aux_sym_block_repeat1,
    ACTIONS(136), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(65), 2,
      sym__type,
      sym_array_type,
    STATE(6), 3,
      sym_string_literal,
      sym_char_literal,
      sym_bool_literal,
    STATE(57), 4,
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
  [915] = 14,
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
      anon_sym_RBRACE,
    STATE(23), 1,
      aux_sym_block_repeat1,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(65), 2,
      sym__type,
      sym_array_type,
    STATE(6), 3,
      sym_string_literal,
      sym_char_literal,
      sym_bool_literal,
    STATE(57), 4,
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
  [969] = 2,
    ACTIONS(57), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 17,
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
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [995] = 2,
    ACTIONS(61), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 17,
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
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1021] = 3,
    ACTIONS(143), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(29), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 12,
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
  [1047] = 10,
    ACTIONS(145), 1,
      anon_sym_SEMI,
    ACTIONS(147), 1,
      anon_sym_AMP_AMP,
    ACTIONS(149), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(153), 1,
      anon_sym_CARET,
    ACTIONS(151), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(157), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(161), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(143), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(155), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1087] = 4,
    ACTIONS(161), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(143), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(29), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 10,
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
  [1115] = 6,
    ACTIONS(153), 1,
      anon_sym_CARET,
    ACTIONS(159), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(161), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(143), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(29), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 7,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1147] = 8,
    ACTIONS(153), 1,
      anon_sym_CARET,
    ACTIONS(151), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(157), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(161), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(27), 3,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(143), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(155), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1183] = 9,
    ACTIONS(147), 1,
      anon_sym_AMP_AMP,
    ACTIONS(153), 1,
      anon_sym_CARET,
    ACTIONS(27), 2,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
    ACTIONS(151), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(157), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(161), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(143), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(155), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1221] = 5,
    ACTIONS(159), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(161), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(143), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(29), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 8,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1251] = 7,
    ACTIONS(153), 1,
      anon_sym_CARET,
    ACTIONS(29), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(159), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(161), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(143), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(27), 7,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1285] = 9,
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
  [1320] = 9,
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
  [1355] = 9,
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
  [1390] = 9,
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
  [1425] = 9,
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
    ACTIONS(163), 1,
      anon_sym_new,
    ACTIONS(19), 2,
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
  [1460] = 9,
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
    ACTIONS(163), 1,
      anon_sym_new,
    ACTIONS(19), 2,
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
  [1495] = 9,
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
    ACTIONS(163), 1,
      anon_sym_new,
    ACTIONS(19), 2,
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
  [1530] = 9,
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
  [1565] = 9,
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
    ACTIONS(163), 1,
      anon_sym_new,
    ACTIONS(19), 2,
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
  [1600] = 9,
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
    ACTIONS(163), 1,
      anon_sym_new,
    ACTIONS(19), 2,
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
  [1635] = 9,
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
    ACTIONS(163), 1,
      anon_sym_new,
    ACTIONS(19), 2,
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
  [1670] = 9,
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
  [1705] = 9,
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
  [1740] = 9,
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
    ACTIONS(163), 1,
      anon_sym_new,
    ACTIONS(19), 2,
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
  [1775] = 9,
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
    ACTIONS(163), 1,
      anon_sym_new,
    ACTIONS(19), 2,
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
  [1810] = 9,
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
    ACTIONS(163), 1,
      anon_sym_new,
    ACTIONS(19), 2,
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
  [1845] = 9,
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
  [1880] = 2,
    ACTIONS(165), 5,
      ts_builtin_sym_end,
      sym_floating_point_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
    ACTIONS(167), 6,
      sym_primitive_type,
      aux_sym_identifier_token1,
      anon_sym_new,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [1896] = 2,
    ACTIONS(169), 5,
      ts_builtin_sym_end,
      sym_floating_point_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
    ACTIONS(171), 6,
      sym_primitive_type,
      aux_sym_identifier_token1,
      anon_sym_new,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [1912] = 2,
    ACTIONS(173), 5,
      ts_builtin_sym_end,
      sym_floating_point_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
    ACTIONS(175), 6,
      sym_primitive_type,
      aux_sym_identifier_token1,
      anon_sym_new,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [1928] = 2,
    ACTIONS(177), 5,
      ts_builtin_sym_end,
      sym_floating_point_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
    ACTIONS(179), 6,
      sym_primitive_type,
      aux_sym_identifier_token1,
      anon_sym_new,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [1944] = 2,
    ACTIONS(181), 5,
      ts_builtin_sym_end,
      sym_floating_point_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
    ACTIONS(183), 6,
      sym_primitive_type,
      aux_sym_identifier_token1,
      anon_sym_new,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [1960] = 2,
    ACTIONS(187), 4,
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
  [1975] = 1,
    ACTIONS(189), 5,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1983] = 4,
    ACTIONS(191), 1,
      sym_primitive_type,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
    STATE(70), 1,
      sym_parameter,
    STATE(69), 2,
      sym__type,
      sym_array_type,
  [1997] = 3,
    ACTIONS(191), 1,
      sym_primitive_type,
    STATE(76), 1,
      sym_parameter,
    STATE(69), 2,
      sym__type,
      sym_array_type,
  [2008] = 4,
    ACTIONS(195), 1,
      anon_sym_EQ,
    ACTIONS(197), 1,
      anon_sym_SEMI,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    STATE(73), 1,
      sym_parameters,
  [2021] = 3,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(203), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      aux_sym_parameters_repeat1,
  [2031] = 3,
    ACTIONS(205), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      aux_sym_string_literal_token1,
    STATE(63), 1,
      aux_sym_string_literal_repeat1,
  [2041] = 3,
    ACTIONS(210), 1,
      anon_sym_DQUOTE,
    ACTIONS(212), 1,
      aux_sym_string_literal_token1,
    STATE(66), 1,
      aux_sym_string_literal_repeat1,
  [2051] = 3,
    ACTIONS(214), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      aux_sym_identifier_token1,
    STATE(61), 1,
      sym_identifier,
  [2061] = 3,
    ACTIONS(218), 1,
      anon_sym_DQUOTE,
    ACTIONS(220), 1,
      aux_sym_string_literal_token1,
    STATE(63), 1,
      aux_sym_string_literal_repeat1,
  [2071] = 3,
    ACTIONS(222), 1,
      anon_sym_COMMA,
    ACTIONS(225), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      aux_sym_parameters_repeat1,
  [2081] = 3,
    ACTIONS(227), 1,
      sym_primitive_type,
    STATE(2), 1,
      sym_array_type,
    STATE(83), 1,
      sym__type,
  [2091] = 3,
    ACTIONS(214), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      aux_sym_identifier_token1,
    STATE(72), 1,
      sym_identifier,
  [2101] = 3,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(229), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      aux_sym_parameters_repeat1,
  [2111] = 3,
    ACTIONS(231), 1,
      sym_primitive_type,
    STATE(2), 1,
      sym_array_type,
    STATE(78), 1,
      sym__type,
  [2121] = 1,
    ACTIONS(233), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2126] = 2,
    ACTIONS(235), 1,
      anon_sym_LBRACE,
    STATE(52), 1,
      sym_block,
  [2133] = 2,
    ACTIONS(237), 1,
      anon_sym_RBRACK,
    ACTIONS(239), 1,
      sym_integer_literal,
  [2140] = 2,
    ACTIONS(241), 1,
      anon_sym_RBRACK,
    ACTIONS(243), 1,
      sym_integer_literal,
  [2147] = 1,
    ACTIONS(225), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2152] = 1,
    ACTIONS(245), 1,
      anon_sym_LBRACE,
  [2156] = 1,
    ACTIONS(214), 1,
      anon_sym_LBRACK,
  [2160] = 1,
    ACTIONS(247), 1,
      anon_sym_LBRACE,
  [2164] = 1,
    ACTIONS(249), 1,
      anon_sym_RBRACK,
  [2168] = 1,
    ACTIONS(251), 1,
      anon_sym_RBRACK,
  [2172] = 1,
    ACTIONS(253), 1,
      anon_sym_SQUOTE,
  [2176] = 1,
    ACTIONS(255), 1,
      anon_sym_LBRACK,
  [2180] = 1,
    ACTIONS(257), 1,
      anon_sym_LBRACE,
  [2184] = 1,
    ACTIONS(259), 1,
      ts_builtin_sym_end,
  [2188] = 1,
    ACTIONS(261), 1,
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
  [SMALL_STATE(13)] = 397,
  [SMALL_STATE(14)] = 437,
  [SMALL_STATE(15)] = 479,
  [SMALL_STATE(16)] = 529,
  [SMALL_STATE(17)] = 581,
  [SMALL_STATE(18)] = 629,
  [SMALL_STATE(19)] = 665,
  [SMALL_STATE(20)] = 703,
  [SMALL_STATE(21)] = 755,
  [SMALL_STATE(22)] = 809,
  [SMALL_STATE(23)] = 861,
  [SMALL_STATE(24)] = 915,
  [SMALL_STATE(25)] = 969,
  [SMALL_STATE(26)] = 995,
  [SMALL_STATE(27)] = 1021,
  [SMALL_STATE(28)] = 1047,
  [SMALL_STATE(29)] = 1087,
  [SMALL_STATE(30)] = 1115,
  [SMALL_STATE(31)] = 1147,
  [SMALL_STATE(32)] = 1183,
  [SMALL_STATE(33)] = 1221,
  [SMALL_STATE(34)] = 1251,
  [SMALL_STATE(35)] = 1285,
  [SMALL_STATE(36)] = 1320,
  [SMALL_STATE(37)] = 1355,
  [SMALL_STATE(38)] = 1390,
  [SMALL_STATE(39)] = 1425,
  [SMALL_STATE(40)] = 1460,
  [SMALL_STATE(41)] = 1495,
  [SMALL_STATE(42)] = 1530,
  [SMALL_STATE(43)] = 1565,
  [SMALL_STATE(44)] = 1600,
  [SMALL_STATE(45)] = 1635,
  [SMALL_STATE(46)] = 1670,
  [SMALL_STATE(47)] = 1705,
  [SMALL_STATE(48)] = 1740,
  [SMALL_STATE(49)] = 1775,
  [SMALL_STATE(50)] = 1810,
  [SMALL_STATE(51)] = 1845,
  [SMALL_STATE(52)] = 1880,
  [SMALL_STATE(53)] = 1896,
  [SMALL_STATE(54)] = 1912,
  [SMALL_STATE(55)] = 1928,
  [SMALL_STATE(56)] = 1944,
  [SMALL_STATE(57)] = 1960,
  [SMALL_STATE(58)] = 1975,
  [SMALL_STATE(59)] = 1983,
  [SMALL_STATE(60)] = 1997,
  [SMALL_STATE(61)] = 2008,
  [SMALL_STATE(62)] = 2021,
  [SMALL_STATE(63)] = 2031,
  [SMALL_STATE(64)] = 2041,
  [SMALL_STATE(65)] = 2051,
  [SMALL_STATE(66)] = 2061,
  [SMALL_STATE(67)] = 2071,
  [SMALL_STATE(68)] = 2081,
  [SMALL_STATE(69)] = 2091,
  [SMALL_STATE(70)] = 2101,
  [SMALL_STATE(71)] = 2111,
  [SMALL_STATE(72)] = 2121,
  [SMALL_STATE(73)] = 2126,
  [SMALL_STATE(74)] = 2133,
  [SMALL_STATE(75)] = 2140,
  [SMALL_STATE(76)] = 2147,
  [SMALL_STATE(77)] = 2152,
  [SMALL_STATE(78)] = 2156,
  [SMALL_STATE(79)] = 2160,
  [SMALL_STATE(80)] = 2164,
  [SMALL_STATE(81)] = 2168,
  [SMALL_STATE(82)] = 2172,
  [SMALL_STATE(83)] = 2176,
  [SMALL_STATE(84)] = 2180,
  [SMALL_STATE(85)] = 2184,
  [SMALL_STATE(86)] = 2188,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_creation_expression, 2, .production_id = 2),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_creation_expression, 2, .production_id = 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 5),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 5),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_literal, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_literal, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 3),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1, .production_id = 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 1, .production_id = 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 4, .production_id = 6),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 4, .production_id = 6),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3, .production_id = 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 3, .production_id = 3),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(65),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(68),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(64),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(86),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 11), SHIFT_REPEAT(65),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 11), SHIFT_REPEAT(8),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 11), SHIFT_REPEAT(68),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 11), SHIFT_REPEAT(6),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 11), SHIFT_REPEAT(6),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 11), SHIFT_REPEAT(64),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 11), SHIFT_REPEAT(86),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 11), SHIFT_REPEAT(4),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 11),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 7),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 4, .production_id = 7),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, .production_id = 8),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, .production_id = 8),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 10),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, .production_id = 10),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, .production_id = 4),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 3, .production_id = 4),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 1, .production_id = 9),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 1, .production_id = 9),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(63),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(60),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 4),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [259] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
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
