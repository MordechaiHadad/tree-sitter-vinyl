#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 97
#define LARGE_STATE_COUNT 2
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
    {field_type, 0},
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
      if (eof) ADVANCE(39);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '%') ADVANCE(111);
      if (lookahead == '&') ADVANCE(96);
      if (lookahead == '\'') ADVANCE(119);
      if (lookahead == '(') ADVANCE(124);
      if (lookahead == ')') ADVANCE(126);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == '+') ADVANCE(107);
      if (lookahead == ',') ADVANCE(125);
      if (lookahead == '-') ADVANCE(108);
      if (lookahead == '/') ADVANCE(110);
      if (lookahead == ';') ADVANCE(42);
      if (lookahead == '<') ADVANCE(101);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '>') ADVANCE(103);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == ']') ADVANCE(50);
      if (lookahead == '^') ADVANCE(98);
      if (lookahead == 'b') ADVANCE(79);
      if (lookahead == 'c') ADVANCE(70);
      if (lookahead == 'f') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(78);
      if (lookahead == 'm') ADVANCE(91);
      if (lookahead == 'n') ADVANCE(65);
      if (lookahead == 's') ADVANCE(88);
      if (lookahead == 't') ADVANCE(83);
      if (lookahead == 'u') ADVANCE(71);
      if (lookahead == 'v') ADVANCE(60);
      if (lookahead == '{') ADVANCE(127);
      if (lookahead == '|') ADVANCE(97);
      if (lookahead == '}') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '/') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(118);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '%') ADVANCE(111);
      if (lookahead == '&') ADVANCE(96);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == '+') ADVANCE(107);
      if (lookahead == '-') ADVANCE(108);
      if (lookahead == '/') ADVANCE(110);
      if (lookahead == ';') ADVANCE(42);
      if (lookahead == '<') ADVANCE(101);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '>') ADVANCE(103);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == '^') ADVANCE(98);
      if (lookahead == 'm') ADVANCE(91);
      if (lookahead == '|') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '\'') ADVANCE(119);
      if (lookahead == '(') ADVANCE(124);
      if (lookahead == ')') ADVANCE(126);
      if (lookahead == ',') ADVANCE(125);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ';') ADVANCE(42);
      if (lookahead == '=') ADVANCE(40);
      if (lookahead == 'f') ADVANCE(58);
      if (lookahead == 'n') ADVANCE(65);
      if (lookahead == 't') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(126);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 'b') ADVANCE(29);
      if (lookahead == 'c') ADVANCE(21);
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 'u') ADVANCE(22);
      if (lookahead == 'v') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(45);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(120);
      END_STATE();
    case 8:
      if (lookahead == '1') ADVANCE(10);
      if (lookahead == '3') ADVANCE(9);
      if (lookahead == '6') ADVANCE(12);
      if (lookahead == '8') ADVANCE(47);
      END_STATE();
    case 9:
      if (lookahead == '2') ADVANCE(47);
      END_STATE();
    case 10:
      if (lookahead == '2') ADVANCE(13);
      if (lookahead == '6') ADVANCE(47);
      END_STATE();
    case 11:
      if (lookahead == '3') ADVANCE(9);
      if (lookahead == '6') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '4') ADVANCE(47);
      END_STATE();
    case 13:
      if (lookahead == '8') ADVANCE(47);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(100);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(99);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(47);
      END_STATE();
    case 20:
      if (lookahead == 'g') ADVANCE(47);
      END_STATE();
    case 21:
      if (lookahead == 'h') ADVANCE(16);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 37:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(45);
      if (lookahead == '\r') ADVANCE(46);
      END_STATE();
    case 38:
      if (eof) ADVANCE(39);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '%') ADVANCE(111);
      if (lookahead == '&') ADVANCE(96);
      if (lookahead == '\'') ADVANCE(119);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == '+') ADVANCE(107);
      if (lookahead == '-') ADVANCE(108);
      if (lookahead == '/') ADVANCE(110);
      if (lookahead == ';') ADVANCE(42);
      if (lookahead == '<') ADVANCE(101);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '>') ADVANCE(103);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == '^') ADVANCE(98);
      if (lookahead == 'b') ADVANCE(79);
      if (lookahead == 'c') ADVANCE(70);
      if (lookahead == 'f') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(78);
      if (lookahead == 'n') ADVANCE(65);
      if (lookahead == 's') ADVANCE(88);
      if (lookahead == 't') ADVANCE(83);
      if (lookahead == 'u') ADVANCE(71);
      if (lookahead == 'v') ADVANCE(60);
      if (lookahead == '|') ADVANCE(97);
      if (lookahead == '}') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(38)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(99);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_mutability_specifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(37);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_primitive_type);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_primitive_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '1') ADVANCE(53);
      if (lookahead == '3') ADVANCE(52);
      if (lookahead == '6') ADVANCE(55);
      if (lookahead == '8') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '2') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '2') ADVANCE(56);
      if (lookahead == '6') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '3') ADVANCE(52);
      if (lookahead == '6') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '4') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '8') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(74);
      if (lookahead == 'l') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'b') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'g') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'h') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'w') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(94);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(95);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(105);
      if (lookahead == '=') ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(104);
      if (lookahead == '>') ADVANCE(106);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(45);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_new);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_real_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(118);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '/') ADVANCE(45);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 38},
  [2] = {.lex_state = 38},
  [3] = {.lex_state = 38},
  [4] = {.lex_state = 38},
  [5] = {.lex_state = 38},
  [6] = {.lex_state = 38},
  [7] = {.lex_state = 38},
  [8] = {.lex_state = 38},
  [9] = {.lex_state = 38},
  [10] = {.lex_state = 38},
  [11] = {.lex_state = 38},
  [12] = {.lex_state = 38},
  [13] = {.lex_state = 38},
  [14] = {.lex_state = 38},
  [15] = {.lex_state = 38},
  [16] = {.lex_state = 38},
  [17] = {.lex_state = 38},
  [18] = {.lex_state = 38},
  [19] = {.lex_state = 38},
  [20] = {.lex_state = 38},
  [21] = {.lex_state = 38},
  [22] = {.lex_state = 38},
  [23] = {.lex_state = 38},
  [24] = {.lex_state = 38},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 38},
  [28] = {.lex_state = 38},
  [29] = {.lex_state = 38},
  [30] = {.lex_state = 38},
  [31] = {.lex_state = 38},
  [32] = {.lex_state = 38},
  [33] = {.lex_state = 38},
  [34] = {.lex_state = 38},
  [35] = {.lex_state = 38},
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
  [54] = {.lex_state = 38},
  [55] = {.lex_state = 38},
  [56] = {.lex_state = 38},
  [57] = {.lex_state = 38},
  [58] = {.lex_state = 38},
  [59] = {.lex_state = 38},
  [60] = {.lex_state = 38},
  [61] = {.lex_state = 38},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 6},
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
  [96] = {.lex_state = 7},
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
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_primitive_type] = ACTIONS(7),
    [aux_sym_identifier_token1] = ACTIONS(9),
    [anon_sym_new] = ACTIONS(11),
    [sym_integer_literal] = ACTIONS(13),
    [sym_real_literal] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 11,
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
    ACTIONS(23), 19,
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
  [41] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 11,
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
    ACTIONS(29), 19,
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
  [79] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 11,
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
    ACTIONS(33), 19,
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
    ACTIONS(39), 11,
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
    ACTIONS(37), 19,
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
  [155] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 11,
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
    ACTIONS(41), 19,
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
  [193] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 11,
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
    ACTIONS(45), 19,
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
  [231] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 11,
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
    ACTIONS(49), 19,
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
  [269] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 11,
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
    ACTIONS(53), 19,
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
  [307] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 11,
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
    ACTIONS(57), 19,
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
  [345] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 11,
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
    ACTIONS(61), 19,
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
  [383] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_SLASH,
    ACTIONS(65), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(67), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(51), 10,
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
    ACTIONS(49), 14,
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
  [426] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_SLASH,
    ACTIONS(65), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(67), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(71), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(51), 10,
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
    ACTIONS(49), 12,
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
  [471] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_SLASH,
    ACTIONS(73), 1,
      anon_sym_CARET,
    ACTIONS(65), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(67), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(71), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(51), 10,
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
    ACTIONS(49), 11,
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
  [518] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_SLASH,
    ACTIONS(73), 1,
      anon_sym_CARET,
    ACTIONS(75), 1,
      anon_sym_AMP_AMP,
    ACTIONS(65), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(67), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(71), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(77), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(81), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(49), 6,
      ts_builtin_sym_end,
      anon_sym_PIPE_PIPE,
      sym_real_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
    ACTIONS(51), 6,
      sym_primitive_type,
      aux_sym_identifier_token1,
      anon_sym_new,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [573] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_SLASH,
    ACTIONS(73), 1,
      anon_sym_CARET,
    ACTIONS(75), 1,
      anon_sym_AMP_AMP,
    ACTIONS(87), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(65), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(67), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(71), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(77), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(81), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(83), 5,
      ts_builtin_sym_end,
      sym_real_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
    ACTIONS(85), 6,
      sym_primitive_type,
      aux_sym_identifier_token1,
      anon_sym_new,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [630] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_SLASH,
    ACTIONS(73), 1,
      anon_sym_CARET,
    ACTIONS(65), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(67), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(71), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(77), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(81), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(51), 6,
      sym_primitive_type,
      aux_sym_identifier_token1,
      anon_sym_new,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(49), 7,
      ts_builtin_sym_end,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_real_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
  [683] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_SLASH,
    ACTIONS(67), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(51), 10,
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
    ACTIONS(49), 16,
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
  [724] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_SLASH,
    ACTIONS(73), 1,
      anon_sym_CARET,
    ACTIONS(65), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(67), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(71), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(77), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(51), 8,
      sym_primitive_type,
      aux_sym_identifier_token1,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_new,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(49), 11,
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
  [773] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      sym_primitive_type,
    ACTIONS(92), 1,
      aux_sym_identifier_token1,
    ACTIONS(95), 1,
      anon_sym_new,
    ACTIONS(98), 1,
      sym_integer_literal,
    ACTIONS(101), 1,
      sym_real_literal,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(113), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      aux_sym_block_repeat1,
    ACTIONS(110), 2,
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
  [830] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_primitive_type,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      anon_sym_new,
    ACTIONS(13), 1,
      sym_integer_literal,
    ACTIONS(15), 1,
      sym_real_literal,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(115), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      aux_sym_block_repeat1,
    ACTIONS(21), 2,
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
  [887] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_primitive_type,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      anon_sym_new,
    ACTIONS(13), 1,
      sym_integer_literal,
    ACTIONS(15), 1,
      sym_real_literal,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      aux_sym_block_repeat1,
    ACTIONS(21), 2,
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
  [944] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    ACTIONS(121), 1,
      sym_primitive_type,
    ACTIONS(124), 1,
      aux_sym_identifier_token1,
    ACTIONS(127), 1,
      anon_sym_new,
    ACTIONS(130), 1,
      sym_integer_literal,
    ACTIONS(133), 1,
      sym_real_literal,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    ACTIONS(139), 1,
      anon_sym_SQUOTE,
    ACTIONS(142), 2,
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
  [999] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_primitive_type,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      anon_sym_new,
    ACTIONS(13), 1,
      sym_integer_literal,
    ACTIONS(15), 1,
      sym_real_literal,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 2,
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
  [1054] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 7,
      sym_mutability_specifier,
      aux_sym_identifier_token1,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(57), 15,
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
      anon_sym_PERCENT,
  [1084] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 7,
      sym_mutability_specifier,
      aux_sym_identifier_token1,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(61), 15,
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
      anon_sym_PERCENT,
  [1114] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_SEMI,
    ACTIONS(149), 1,
      anon_sym_AMP_AMP,
    ACTIONS(151), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(155), 1,
      anon_sym_CARET,
    ACTIONS(167), 1,
      anon_sym_SLASH,
    ACTIONS(153), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(159), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(163), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(165), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(157), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1159] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_AMP_AMP,
    ACTIONS(151), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(155), 1,
      anon_sym_CARET,
    ACTIONS(167), 1,
      anon_sym_SLASH,
    ACTIONS(169), 1,
      anon_sym_SEMI,
    ACTIONS(153), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(159), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(163), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(165), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(157), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1204] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_SLASH,
    ACTIONS(165), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(51), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 12,
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
  [1235] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_CARET,
    ACTIONS(167), 1,
      anon_sym_SLASH,
    ACTIONS(153), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(159), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(163), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(165), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(49), 3,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(157), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1276] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_AMP_AMP,
    ACTIONS(155), 1,
      anon_sym_CARET,
    ACTIONS(167), 1,
      anon_sym_SLASH,
    ACTIONS(49), 2,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
    ACTIONS(153), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(159), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(163), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(165), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(157), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1319] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_CARET,
    ACTIONS(167), 1,
      anon_sym_SLASH,
    ACTIONS(161), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(163), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(165), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(51), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 7,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1356] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_SLASH,
    ACTIONS(161), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(163), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(165), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(51), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 8,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1391] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_CARET,
    ACTIONS(167), 1,
      anon_sym_SLASH,
    ACTIONS(51), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(153), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(161), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(163), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(165), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(49), 7,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1430] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_SLASH,
    ACTIONS(163), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(165), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(51), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 10,
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
  [1463] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      anon_sym_new,
    ACTIONS(13), 1,
      sym_integer_literal,
    ACTIONS(15), 1,
      sym_real_literal,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 2,
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
  [1501] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      anon_sym_new,
    ACTIONS(13), 1,
      sym_integer_literal,
    ACTIONS(15), 1,
      sym_real_literal,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 2,
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
  [1539] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      anon_sym_new,
    ACTIONS(13), 1,
      sym_integer_literal,
    ACTIONS(15), 1,
      sym_real_literal,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 2,
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
  [1577] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      anon_sym_new,
    ACTIONS(13), 1,
      sym_integer_literal,
    ACTIONS(15), 1,
      sym_real_literal,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 2,
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
  [1615] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      anon_sym_new,
    ACTIONS(13), 1,
      sym_integer_literal,
    ACTIONS(15), 1,
      sym_real_literal,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 2,
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
  [1653] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      sym_integer_literal,
    ACTIONS(15), 1,
      sym_real_literal,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(171), 1,
      anon_sym_new,
    ACTIONS(21), 2,
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
  [1691] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      sym_integer_literal,
    ACTIONS(15), 1,
      sym_real_literal,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(171), 1,
      anon_sym_new,
    ACTIONS(21), 2,
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
  [1729] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      sym_integer_literal,
    ACTIONS(15), 1,
      sym_real_literal,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(171), 1,
      anon_sym_new,
    ACTIONS(21), 2,
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
  [1767] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      sym_integer_literal,
    ACTIONS(15), 1,
      sym_real_literal,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(171), 1,
      anon_sym_new,
    ACTIONS(21), 2,
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
  [1805] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      sym_integer_literal,
    ACTIONS(15), 1,
      sym_real_literal,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(171), 1,
      anon_sym_new,
    ACTIONS(21), 2,
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
  [1843] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      anon_sym_new,
    ACTIONS(13), 1,
      sym_integer_literal,
    ACTIONS(15), 1,
      sym_real_literal,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 2,
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
  [1881] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      sym_integer_literal,
    ACTIONS(15), 1,
      sym_real_literal,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(171), 1,
      anon_sym_new,
    ACTIONS(21), 2,
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
  [1919] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      sym_integer_literal,
    ACTIONS(15), 1,
      sym_real_literal,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(171), 1,
      anon_sym_new,
    ACTIONS(21), 2,
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
  [1957] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      anon_sym_new,
    ACTIONS(13), 1,
      sym_integer_literal,
    ACTIONS(15), 1,
      sym_real_literal,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 2,
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
  [1995] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      sym_integer_literal,
    ACTIONS(15), 1,
      sym_real_literal,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(171), 1,
      anon_sym_new,
    ACTIONS(21), 2,
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
  [2033] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      sym_integer_literal,
    ACTIONS(15), 1,
      sym_real_literal,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(171), 1,
      anon_sym_new,
    ACTIONS(21), 2,
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
  [2071] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      sym_integer_literal,
    ACTIONS(15), 1,
      sym_real_literal,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(171), 1,
      anon_sym_new,
    ACTIONS(21), 2,
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
  [2109] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      anon_sym_new,
    ACTIONS(13), 1,
      sym_integer_literal,
    ACTIONS(15), 1,
      sym_real_literal,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 2,
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
  [2147] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 5,
      ts_builtin_sym_end,
      sym_real_literal,
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
  [2166] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 5,
      ts_builtin_sym_end,
      sym_real_literal,
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
  [2185] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 5,
      ts_builtin_sym_end,
      sym_real_literal,
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
  [2204] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 5,
      ts_builtin_sym_end,
      sym_real_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
    ACTIONS(187), 6,
      sym_primitive_type,
      aux_sym_identifier_token1,
      anon_sym_new,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [2223] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 5,
      ts_builtin_sym_end,
      sym_real_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
    ACTIONS(191), 6,
      sym_primitive_type,
      aux_sym_identifier_token1,
      anon_sym_new,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [2242] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 5,
      ts_builtin_sym_end,
      sym_real_literal,
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
  [2261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 5,
      ts_builtin_sym_end,
      sym_real_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
    ACTIONS(199), 6,
      sym_primitive_type,
      aux_sym_identifier_token1,
      anon_sym_new,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [2280] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 4,
      sym_real_literal,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
    ACTIONS(201), 6,
      sym_primitive_type,
      aux_sym_identifier_token1,
      anon_sym_new,
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
  [2298] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      sym_primitive_type,
    ACTIONS(207), 1,
      anon_sym_RPAREN,
    STATE(74), 1,
      sym_parameter,
    STATE(67), 2,
      sym__type,
      sym_array_type,
  [2315] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 5,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2326] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      sym_primitive_type,
    STATE(80), 1,
      sym_parameter,
    STATE(67), 2,
      sym__type,
      sym_array_type,
  [2340] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_mutability_specifier,
    ACTIONS(213), 1,
      anon_sym_LBRACK,
    ACTIONS(215), 1,
      aux_sym_identifier_token1,
    STATE(66), 1,
      sym_identifier,
  [2356] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_EQ,
    ACTIONS(219), 1,
      anon_sym_SEMI,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    STATE(82), 1,
      sym_parameters,
  [2372] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_LBRACK,
    ACTIONS(225), 1,
      aux_sym_identifier_token1,
    STATE(79), 1,
      sym_identifier,
  [2385] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_COMMA,
    ACTIONS(229), 1,
      anon_sym_RPAREN,
    STATE(69), 1,
      aux_sym_parameters_repeat1,
  [2398] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    ACTIONS(234), 1,
      anon_sym_RPAREN,
    STATE(69), 1,
      aux_sym_parameters_repeat1,
  [2411] = 4,
    ACTIONS(236), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_DQUOTE,
    ACTIONS(240), 1,
      aux_sym_string_literal_token1,
    STATE(72), 1,
      aux_sym_string_literal_repeat1,
  [2424] = 4,
    ACTIONS(236), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(244), 1,
      aux_sym_string_literal_token1,
    STATE(71), 1,
      aux_sym_string_literal_repeat1,
  [2437] = 4,
    ACTIONS(236), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_DQUOTE,
    ACTIONS(249), 1,
      aux_sym_string_literal_token1,
    STATE(71), 1,
      aux_sym_string_literal_repeat1,
  [2450] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym_primitive_type,
    STATE(2), 1,
      sym_array_type,
    STATE(94), 1,
      sym__type,
  [2463] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_COMMA,
    ACTIONS(253), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      aux_sym_parameters_repeat1,
  [2476] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      sym_primitive_type,
    STATE(2), 1,
      sym_array_type,
    STATE(89), 1,
      sym__type,
  [2489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 2,
      anon_sym_LBRACK,
      aux_sym_identifier_token1,
  [2497] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_RBRACK,
    ACTIONS(259), 1,
      sym_integer_literal,
  [2507] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_RBRACK,
    ACTIONS(263), 1,
      sym_integer_literal,
  [2517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 2,
      anon_sym_LBRACK,
      aux_sym_identifier_token1,
  [2541] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      sym_block,
  [2551] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      aux_sym_identifier_token1,
    STATE(84), 1,
      sym_identifier,
  [2561] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_EQ,
    ACTIONS(271), 1,
      anon_sym_SEMI,
  [2571] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_RBRACK,
    ACTIONS(275), 1,
      sym_integer_literal,
  [2581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_LBRACE,
  [2588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_RBRACK,
  [2595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_RBRACK,
  [2602] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_LBRACK,
  [2609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_LBRACE,
  [2616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_LBRACE,
  [2623] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_RBRACK,
  [2630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
  [2637] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_LBRACK,
  [2644] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      ts_builtin_sym_end,
  [2651] = 2,
    ACTIONS(236), 1,
      sym_comment,
    ACTIONS(295), 1,
      aux_sym_char_literal_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 79,
  [SMALL_STATE(5)] = 117,
  [SMALL_STATE(6)] = 155,
  [SMALL_STATE(7)] = 193,
  [SMALL_STATE(8)] = 231,
  [SMALL_STATE(9)] = 269,
  [SMALL_STATE(10)] = 307,
  [SMALL_STATE(11)] = 345,
  [SMALL_STATE(12)] = 383,
  [SMALL_STATE(13)] = 426,
  [SMALL_STATE(14)] = 471,
  [SMALL_STATE(15)] = 518,
  [SMALL_STATE(16)] = 573,
  [SMALL_STATE(17)] = 630,
  [SMALL_STATE(18)] = 683,
  [SMALL_STATE(19)] = 724,
  [SMALL_STATE(20)] = 773,
  [SMALL_STATE(21)] = 830,
  [SMALL_STATE(22)] = 887,
  [SMALL_STATE(23)] = 944,
  [SMALL_STATE(24)] = 999,
  [SMALL_STATE(25)] = 1054,
  [SMALL_STATE(26)] = 1084,
  [SMALL_STATE(27)] = 1114,
  [SMALL_STATE(28)] = 1159,
  [SMALL_STATE(29)] = 1204,
  [SMALL_STATE(30)] = 1235,
  [SMALL_STATE(31)] = 1276,
  [SMALL_STATE(32)] = 1319,
  [SMALL_STATE(33)] = 1356,
  [SMALL_STATE(34)] = 1391,
  [SMALL_STATE(35)] = 1430,
  [SMALL_STATE(36)] = 1463,
  [SMALL_STATE(37)] = 1501,
  [SMALL_STATE(38)] = 1539,
  [SMALL_STATE(39)] = 1577,
  [SMALL_STATE(40)] = 1615,
  [SMALL_STATE(41)] = 1653,
  [SMALL_STATE(42)] = 1691,
  [SMALL_STATE(43)] = 1729,
  [SMALL_STATE(44)] = 1767,
  [SMALL_STATE(45)] = 1805,
  [SMALL_STATE(46)] = 1843,
  [SMALL_STATE(47)] = 1881,
  [SMALL_STATE(48)] = 1919,
  [SMALL_STATE(49)] = 1957,
  [SMALL_STATE(50)] = 1995,
  [SMALL_STATE(51)] = 2033,
  [SMALL_STATE(52)] = 2071,
  [SMALL_STATE(53)] = 2109,
  [SMALL_STATE(54)] = 2147,
  [SMALL_STATE(55)] = 2166,
  [SMALL_STATE(56)] = 2185,
  [SMALL_STATE(57)] = 2204,
  [SMALL_STATE(58)] = 2223,
  [SMALL_STATE(59)] = 2242,
  [SMALL_STATE(60)] = 2261,
  [SMALL_STATE(61)] = 2280,
  [SMALL_STATE(62)] = 2298,
  [SMALL_STATE(63)] = 2315,
  [SMALL_STATE(64)] = 2326,
  [SMALL_STATE(65)] = 2340,
  [SMALL_STATE(66)] = 2356,
  [SMALL_STATE(67)] = 2372,
  [SMALL_STATE(68)] = 2385,
  [SMALL_STATE(69)] = 2398,
  [SMALL_STATE(70)] = 2411,
  [SMALL_STATE(71)] = 2424,
  [SMALL_STATE(72)] = 2437,
  [SMALL_STATE(73)] = 2450,
  [SMALL_STATE(74)] = 2463,
  [SMALL_STATE(75)] = 2476,
  [SMALL_STATE(76)] = 2489,
  [SMALL_STATE(77)] = 2497,
  [SMALL_STATE(78)] = 2507,
  [SMALL_STATE(79)] = 2517,
  [SMALL_STATE(80)] = 2525,
  [SMALL_STATE(81)] = 2533,
  [SMALL_STATE(82)] = 2541,
  [SMALL_STATE(83)] = 2551,
  [SMALL_STATE(84)] = 2561,
  [SMALL_STATE(85)] = 2571,
  [SMALL_STATE(86)] = 2581,
  [SMALL_STATE(87)] = 2588,
  [SMALL_STATE(88)] = 2595,
  [SMALL_STATE(89)] = 2602,
  [SMALL_STATE(90)] = 2609,
  [SMALL_STATE(91)] = 2616,
  [SMALL_STATE(92)] = 2623,
  [SMALL_STATE(93)] = 2630,
  [SMALL_STATE(94)] = 2637,
  [SMALL_STATE(95)] = 2644,
  [SMALL_STATE(96)] = 2651,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_creation_expression, 2, .production_id = 2),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_creation_expression, 2, .production_id = 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1, .production_id = 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 1, .production_id = 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 3),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_literal, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_literal, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 5),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 5),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 4, .production_id = 7),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 4, .production_id = 7),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3, .production_id = 3),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 3, .production_id = 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 13), SHIFT_REPEAT(65),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 13), SHIFT_REPEAT(3),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 13), SHIFT_REPEAT(73),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 13), SHIFT_REPEAT(4),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 13), SHIFT_REPEAT(4),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 13), SHIFT_REPEAT(70),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 13), SHIFT_REPEAT(96),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 13), SHIFT_REPEAT(6),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 13),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(65),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(70),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(96),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 12),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, .production_id = 12),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 6),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4, .production_id = 6),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 8),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 4, .production_id = 8),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, .production_id = 9),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, .production_id = 9),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, .production_id = 4),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 3, .production_id = 4),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, .production_id = 11),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 6, .production_id = 11),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 1, .production_id = 10),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 1, .production_id = 10),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(64),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(71),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 4),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [293] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
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
