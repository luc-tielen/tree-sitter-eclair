#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 79
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 58
#define ALIAS_COUNT 1
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 12

enum {
  anon_sym_ATdef = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_DOT = 4,
  anon_sym_ATextern = 5,
  anon_sym_input = 6,
  anon_sym_output = 7,
  anon_sym_COMMA = 8,
  anon_sym_COLON = 9,
  anon_sym_u32 = 10,
  anon_sym_string = 11,
  anon_sym_COLON_DASH = 12,
  anon_sym_BANG = 13,
  anon_sym_EQ = 14,
  anon_sym_BANG_EQ = 15,
  anon_sym_LT = 16,
  anon_sym_LT_EQ = 17,
  anon_sym_GT = 18,
  anon_sym_GT_EQ = 19,
  anon_sym_DASH = 20,
  anon_sym_PLUS = 21,
  anon_sym_STAR = 22,
  anon_sym_SLASH = 23,
  sym_identifier = 24,
  sym_number = 25,
  sym_string = 26,
  sym_wildcard = 27,
  sym_hole = 28,
  sym_comment = 29,
  sym_source_file = 30,
  sym__statement = 31,
  sym_typedef = 32,
  sym_extern = 33,
  sym_qualifier = 34,
  sym_arg_list = 35,
  sym_arg = 36,
  sym_named_type = 37,
  sym_type = 38,
  sym_fact = 39,
  sym__atom = 40,
  sym_rule = 41,
  sym_clause_list = 42,
  sym__clause = 43,
  sym_negation = 44,
  sym_comparison = 45,
  sym_compare_op = 46,
  sym_argument_list = 47,
  sym__expr = 48,
  sym_unary_expr = 49,
  sym_binary_expr = 50,
  sym__term = 51,
  sym__literal = 52,
  aux_sym_source_file_repeat1 = 53,
  aux_sym_typedef_repeat1 = 54,
  aux_sym_arg_list_repeat1 = 55,
  aux_sym_clause_list_repeat1 = 56,
  aux_sym_argument_list_repeat1 = 57,
  alias_sym_clause = 58,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ATdef] = "@def",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOT] = ".",
  [anon_sym_ATextern] = "@extern",
  [anon_sym_input] = "input",
  [anon_sym_output] = "output",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON] = ":",
  [anon_sym_u32] = "u32",
  [anon_sym_string] = "string",
  [anon_sym_COLON_DASH] = ":-",
  [anon_sym_BANG] = "!",
  [anon_sym_EQ] = "=",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_string] = "string",
  [sym_wildcard] = "wildcard",
  [sym_hole] = "hole",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_typedef] = "typedef",
  [sym_extern] = "extern",
  [sym_qualifier] = "qualifier",
  [sym_arg_list] = "arg_list",
  [sym_arg] = "arg",
  [sym_named_type] = "named_type",
  [sym_type] = "type",
  [sym_fact] = "fact",
  [sym__atom] = "_atom",
  [sym_rule] = "rule",
  [sym_clause_list] = "clause_list",
  [sym__clause] = "_clause",
  [sym_negation] = "negation",
  [sym_comparison] = "comparison",
  [sym_compare_op] = "compare_op",
  [sym_argument_list] = "argument_list",
  [sym__expr] = "_expr",
  [sym_unary_expr] = "unary_expr",
  [sym_binary_expr] = "binary_expr",
  [sym__term] = "_term",
  [sym__literal] = "_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_typedef_repeat1] = "typedef_repeat1",
  [aux_sym_arg_list_repeat1] = "arg_list_repeat1",
  [aux_sym_clause_list_repeat1] = "clause_list_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [alias_sym_clause] = "clause",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_ATdef] = anon_sym_ATdef,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_ATextern] = anon_sym_ATextern,
  [anon_sym_input] = anon_sym_input,
  [anon_sym_output] = anon_sym_output,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_u32] = anon_sym_u32,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_COLON_DASH] = anon_sym_COLON_DASH,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [sym_wildcard] = sym_wildcard,
  [sym_hole] = sym_hole,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_typedef] = sym_typedef,
  [sym_extern] = sym_extern,
  [sym_qualifier] = sym_qualifier,
  [sym_arg_list] = sym_arg_list,
  [sym_arg] = sym_arg,
  [sym_named_type] = sym_named_type,
  [sym_type] = sym_type,
  [sym_fact] = sym_fact,
  [sym__atom] = sym__atom,
  [sym_rule] = sym_rule,
  [sym_clause_list] = sym_clause_list,
  [sym__clause] = sym__clause,
  [sym_negation] = sym_negation,
  [sym_comparison] = sym_comparison,
  [sym_compare_op] = sym_compare_op,
  [sym_argument_list] = sym_argument_list,
  [sym__expr] = sym__expr,
  [sym_unary_expr] = sym_unary_expr,
  [sym_binary_expr] = sym_binary_expr,
  [sym__term] = sym__term,
  [sym__literal] = sym__literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_typedef_repeat1] = aux_sym_typedef_repeat1,
  [aux_sym_arg_list_repeat1] = aux_sym_arg_list_repeat1,
  [aux_sym_clause_list_repeat1] = aux_sym_clause_list_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [alias_sym_clause] = alias_sym_clause,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_ATdef] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATextern] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_input] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_output] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
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
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_wildcard] = {
    .visible = true,
    .named = true,
  },
  [sym_hole] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_typedef] = {
    .visible = true,
    .named = true,
  },
  [sym_extern] = {
    .visible = true,
    .named = true,
  },
  [sym_qualifier] = {
    .visible = true,
    .named = true,
  },
  [sym_arg_list] = {
    .visible = true,
    .named = true,
  },
  [sym_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_named_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_fact] = {
    .visible = true,
    .named = true,
  },
  [sym__atom] = {
    .visible = false,
    .named = true,
  },
  [sym_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_clause_list] = {
    .visible = true,
    .named = true,
  },
  [sym__clause] = {
    .visible = false,
    .named = true,
  },
  [sym_negation] = {
    .visible = true,
    .named = true,
  },
  [sym_comparison] = {
    .visible = true,
    .named = true,
  },
  [sym_compare_op] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym_unary_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expr] = {
    .visible = true,
    .named = true,
  },
  [sym__term] = {
    .visible = false,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_typedef_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arg_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_clause_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_clause] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_args = 1,
  field_arguments = 2,
  field_clauses = 3,
  field_expr = 4,
  field_left = 5,
  field_name = 6,
  field_operator = 7,
  field_right = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_args] = "args",
  [field_arguments] = "arguments",
  [field_clauses] = "clauses",
  [field_expr] = "expr",
  [field_left] = "left",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 4},
  [3] = {.index = 6, .length = 2},
  [4] = {.index = 8, .length = 4},
  [5] = {.index = 12, .length = 2},
  [6] = {.index = 14, .length = 7},
  [7] = {.index = 21, .length = 2},
  [8] = {.index = 0, .length = 2},
  [9] = {.index = 12, .length = 2},
  [10] = {.index = 23, .length = 3},
  [11] = {.index = 26, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_arguments, 0, .inherited = true},
    {field_name, 0, .inherited = true},
  [2] =
    {field_arguments, 1, .inherited = true},
    {field_expr, 1},
    {field_name, 1, .inherited = true},
    {field_operator, 0},
  [6] =
    {field_arguments, 2},
    {field_name, 0},
  [8] =
    {field_arguments, 0, .inherited = true},
    {field_arguments, 1, .inherited = true},
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [12] =
    {field_arguments, 1, .inherited = true},
    {field_name, 1, .inherited = true},
  [14] =
    {field_arguments, 0, .inherited = true},
    {field_arguments, 2, .inherited = true},
    {field_left, 0},
    {field_name, 0, .inherited = true},
    {field_name, 2, .inherited = true},
    {field_operator, 1},
    {field_right, 2},
  [21] =
    {field_args, 3},
    {field_name, 1},
  [23] =
    {field_arguments, 2},
    {field_clauses, 5},
    {field_name, 0},
  [26] =
    {field_arguments, 0, .inherited = true},
    {field_arguments, 2, .inherited = true},
    {field_name, 0, .inherited = true},
    {field_name, 2, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [8] = {
    [0] = alias_sym_clause,
  },
  [9] = {
    [1] = alias_sym_clause,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__atom, 2,
    sym__atom,
    alias_sym_clause,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(40);
      if (lookahead == '!') ADVANCE(57);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(42);
      if (lookahead == ')') ADVANCE(43);
      if (lookahead == '*') ADVANCE(66);
      if (lookahead == '+') ADVANCE(65);
      if (lookahead == ',') ADVANCE(48);
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == '<') ADVANCE(60);
      if (lookahead == '=') ADVANCE(58);
      if (lookahead == '>') ADVANCE(62);
      if (lookahead == '?') ADVANCE(79);
      if (lookahead == '@') ADVANCE(12);
      if (lookahead == '\\') SKIP(36)
      if (lookahead == '_') ADVANCE(78);
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(30);
      if (lookahead == 's') ADVANCE(25);
      if (lookahead == 'u') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(3)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '(') ADVANCE(42);
      if (lookahead == ')') ADVANCE(43);
      if (lookahead == '*') ADVANCE(66);
      if (lookahead == '+') ADVANCE(65);
      if (lookahead == ',') ADVANCE(48);
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == '<') ADVANCE(60);
      if (lookahead == '=') ADVANCE(58);
      if (lookahead == '>') ADVANCE(62);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 's') ADVANCE(74);
      if (lookahead == 'u') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(81);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(55);
      END_STATE();
    case 9:
      if (lookahead == '2') ADVANCE(51);
      END_STATE();
    case 10:
      if (lookahead == '3') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(59);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 15:
      if (lookahead == 'f') ADVANCE(41);
      END_STATE();
    case 16:
      if (lookahead == 'g') ADVANCE(53);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 21:
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 22:
      if (lookahead == 'p') ADVANCE(32);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 30:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 32:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 33:
      if (lookahead == 'x') ADVANCE(28);
      END_STATE();
    case 34:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(81);
      if (lookahead == '\r') ADVANCE(82);
      END_STATE();
    case 35:
      if (eof) ADVANCE(40);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 36:
      if (eof) ADVANCE(40);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(35)
      END_STATE();
    case 37:
      if (eof) ADVANCE(40);
      if (lookahead == '\n') SKIP(39)
      END_STATE();
    case 38:
      if (eof) ADVANCE(40);
      if (lookahead == '\n') SKIP(39)
      if (lookahead == '\r') SKIP(37)
      END_STATE();
    case 39:
      if (eof) ADVANCE(40);
      if (lookahead == '!') ADVANCE(56);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(42);
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '?') ADVANCE(79);
      if (lookahead == '@') ADVANCE(12);
      if (lookahead == '\\') SKIP(38)
      if (lookahead == '_') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_ATdef);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_ATextern);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '-') ADVANCE(55);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_u32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(59);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(81);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_wildcard);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_hole);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(34);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 39},
  [2] = {.lex_state = 39},
  [3] = {.lex_state = 39},
  [4] = {.lex_state = 39},
  [5] = {.lex_state = 39},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 39},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 39},
  [11] = {.lex_state = 39},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 39},
  [14] = {.lex_state = 39},
  [15] = {.lex_state = 39},
  [16] = {.lex_state = 39},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 39},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 39},
  [27] = {.lex_state = 39},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 39},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 39},
  [40] = {.lex_state = 39},
  [41] = {.lex_state = 39},
  [42] = {.lex_state = 39},
  [43] = {.lex_state = 39},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 39},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 39},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 39},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 39},
  [78] = {.lex_state = 39},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_ATdef] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_ATextern] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_u32] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_COLON_DASH] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_wildcard] = ACTIONS(1),
    [sym_hole] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(74),
    [sym__statement] = STATE(27),
    [sym_typedef] = STATE(27),
    [sym_extern] = STATE(27),
    [sym_fact] = STATE(27),
    [sym__atom] = STATE(72),
    [sym_rule] = STATE(27),
    [aux_sym_source_file_repeat1] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_ATdef] = ACTIONS(7),
    [anon_sym_ATextern] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_BANG,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      sym_identifier,
    STATE(24), 1,
      sym__atom,
    STATE(64), 1,
      sym_clause_list,
    STATE(21), 2,
      sym__term,
      sym__literal,
    STATE(25), 3,
      sym__expr,
      sym_unary_expr,
      sym_binary_expr,
    STATE(47), 3,
      sym__clause,
      sym_negation,
      sym_comparison,
    ACTIONS(21), 4,
      sym_number,
      sym_string,
      sym_wildcard,
      sym_hole,
  [42] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_BANG,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      sym_identifier,
    STATE(24), 1,
      sym__atom,
    STATE(21), 2,
      sym__term,
      sym__literal,
    STATE(25), 3,
      sym__expr,
      sym_unary_expr,
      sym_binary_expr,
    STATE(57), 3,
      sym__clause,
      sym_negation,
      sym_comparison,
    ACTIONS(21), 4,
      sym_number,
      sym_string,
      sym_wildcard,
      sym_hole,
  [81] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      sym_identifier,
    STATE(18), 1,
      sym__atom,
    STATE(67), 1,
      sym_argument_list,
    STATE(21), 2,
      sym__term,
      sym__literal,
    STATE(28), 3,
      sym__expr,
      sym_unary_expr,
      sym_binary_expr,
    ACTIONS(21), 4,
      sym_number,
      sym_string,
      sym_wildcard,
      sym_hole,
  [115] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      sym_identifier,
    STATE(18), 1,
      sym__atom,
    STATE(66), 1,
      sym_argument_list,
    STATE(21), 2,
      sym__term,
      sym__literal,
    STATE(28), 3,
      sym__expr,
      sym_unary_expr,
      sym_binary_expr,
    ACTIONS(21), 4,
      sym_number,
      sym_string,
      sym_wildcard,
      sym_hole,
  [149] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(25), 10,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [173] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      sym_identifier,
    STATE(18), 1,
      sym__atom,
    STATE(21), 2,
      sym__term,
      sym__literal,
    STATE(22), 3,
      sym__expr,
      sym_unary_expr,
      sym_binary_expr,
    ACTIONS(21), 4,
      sym_number,
      sym_string,
      sym_wildcard,
      sym_hole,
  [204] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(29), 10,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [225] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(33), 10,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [246] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      sym_identifier,
    STATE(18), 1,
      sym__atom,
    STATE(21), 2,
      sym__term,
      sym__literal,
    STATE(19), 3,
      sym__expr,
      sym_unary_expr,
      sym_binary_expr,
    ACTIONS(21), 4,
      sym_number,
      sym_string,
      sym_wildcard,
      sym_hole,
  [277] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      sym_identifier,
    STATE(18), 1,
      sym__atom,
    STATE(21), 2,
      sym__term,
      sym__literal,
    STATE(9), 3,
      sym__expr,
      sym_unary_expr,
      sym_binary_expr,
    ACTIONS(21), 4,
      sym_number,
      sym_string,
      sym_wildcard,
      sym_hole,
  [308] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      anon_sym_PLUS,
    ACTIONS(45), 1,
      anon_sym_STAR,
    ACTIONS(47), 1,
      anon_sym_SLASH,
    ACTIONS(39), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 7,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [337] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      sym_identifier,
    STATE(18), 1,
      sym__atom,
    STATE(21), 2,
      sym__term,
      sym__literal,
    STATE(17), 3,
      sym__expr,
      sym_unary_expr,
      sym_binary_expr,
    ACTIONS(21), 4,
      sym_number,
      sym_string,
      sym_wildcard,
      sym_hole,
  [368] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      sym_identifier,
    STATE(18), 1,
      sym__atom,
    STATE(21), 2,
      sym__term,
      sym__literal,
    STATE(34), 3,
      sym__expr,
      sym_unary_expr,
      sym_binary_expr,
    ACTIONS(21), 4,
      sym_number,
      sym_string,
      sym_wildcard,
      sym_hole,
  [399] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      sym_identifier,
    STATE(18), 1,
      sym__atom,
    STATE(21), 2,
      sym__term,
      sym__literal,
    STATE(36), 3,
      sym__expr,
      sym_unary_expr,
      sym_binary_expr,
    ACTIONS(21), 4,
      sym_number,
      sym_string,
      sym_wildcard,
      sym_hole,
  [430] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      sym_identifier,
    STATE(18), 1,
      sym__atom,
    STATE(21), 2,
      sym__term,
      sym__literal,
    STATE(12), 3,
      sym__expr,
      sym_unary_expr,
      sym_binary_expr,
    ACTIONS(21), 4,
      sym_number,
      sym_string,
      sym_wildcard,
      sym_hole,
  [461] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_STAR,
    ACTIONS(47), 1,
      anon_sym_SLASH,
    ACTIONS(35), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 9,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
  [486] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(49), 10,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [507] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(33), 10,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [528] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      sym_identifier,
    STATE(18), 1,
      sym__atom,
    STATE(21), 2,
      sym__term,
      sym__literal,
    STATE(32), 3,
      sym__expr,
      sym_unary_expr,
      sym_binary_expr,
    ACTIONS(21), 4,
      sym_number,
      sym_string,
      sym_wildcard,
      sym_hole,
  [559] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(53), 10,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [580] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_STAR,
    ACTIONS(47), 1,
      anon_sym_SLASH,
    ACTIONS(35), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 9,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
  [605] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(57), 10,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [626] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
    ACTIONS(51), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(49), 7,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [648] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      anon_sym_PLUS,
    ACTIONS(45), 1,
      anon_sym_STAR,
    ACTIONS(47), 1,
      anon_sym_SLASH,
    STATE(20), 1,
      sym_compare_op,
    ACTIONS(65), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(63), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [677] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 1,
      anon_sym_ATdef,
    ACTIONS(72), 1,
      anon_sym_ATextern,
    ACTIONS(75), 1,
      sym_identifier,
    STATE(72), 1,
      sym__atom,
    STATE(26), 6,
      sym__statement,
      sym_typedef,
      sym_extern,
      sym_fact,
      sym_rule,
      aux_sym_source_file_repeat1,
  [704] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_ATdef,
    ACTIONS(9), 1,
      anon_sym_ATextern,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    STATE(72), 1,
      sym__atom,
    STATE(26), 6,
      sym__statement,
      sym_typedef,
      sym_extern,
      sym_fact,
      sym_rule,
      aux_sym_source_file_repeat1,
  [731] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      anon_sym_PLUS,
    ACTIONS(45), 1,
      anon_sym_STAR,
    ACTIONS(47), 1,
      anon_sym_SLASH,
    ACTIONS(80), 1,
      anon_sym_RPAREN,
    ACTIONS(82), 1,
      anon_sym_COMMA,
    STATE(46), 1,
      aux_sym_argument_list_repeat1,
  [756] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      sym_identifier,
    STATE(54), 1,
      sym_arg,
    STATE(76), 1,
      sym_arg_list,
    ACTIONS(84), 2,
      anon_sym_u32,
      anon_sym_string,
    STATE(61), 2,
      sym_named_type,
      sym_type,
  [777] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      sym_identifier,
    STATE(54), 1,
      sym_arg,
    STATE(70), 1,
      sym_arg_list,
    ACTIONS(84), 2,
      anon_sym_u32,
      anon_sym_string,
    STATE(61), 2,
      sym_named_type,
      sym_type,
  [798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 7,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_identifier,
      sym_number,
      sym_string,
      sym_wildcard,
      sym_hole,
  [811] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      anon_sym_PLUS,
    ACTIONS(45), 1,
      anon_sym_STAR,
    ACTIONS(47), 1,
      anon_sym_SLASH,
    ACTIONS(90), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
  [831] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      sym_identifier,
    STATE(60), 1,
      sym_arg,
    ACTIONS(84), 2,
      anon_sym_u32,
      anon_sym_string,
    STATE(61), 2,
      sym_named_type,
      sym_type,
  [849] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      anon_sym_PLUS,
    ACTIONS(45), 1,
      anon_sym_STAR,
    ACTIONS(47), 1,
      anon_sym_SLASH,
    ACTIONS(92), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [869] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_DOT,
    ACTIONS(96), 2,
      anon_sym_input,
      anon_sym_output,
    STATE(37), 2,
      sym_qualifier,
      aux_sym_typedef_repeat1,
  [884] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      anon_sym_PLUS,
    ACTIONS(45), 1,
      anon_sym_STAR,
    ACTIONS(47), 1,
      anon_sym_SLASH,
    ACTIONS(98), 1,
      anon_sym_RPAREN,
  [903] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_DOT,
    ACTIONS(102), 2,
      anon_sym_input,
      anon_sym_output,
    STATE(37), 2,
      sym_qualifier,
      aux_sym_typedef_repeat1,
  [918] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(96), 2,
      anon_sym_input,
      anon_sym_output,
    STATE(35), 2,
      sym_qualifier,
      aux_sym_typedef_repeat1,
  [933] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 4,
      ts_builtin_sym_end,
      anon_sym_ATdef,
      anon_sym_ATextern,
      sym_identifier,
  [943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 4,
      ts_builtin_sym_end,
      anon_sym_ATdef,
      anon_sym_ATextern,
      sym_identifier,
  [953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 4,
      ts_builtin_sym_end,
      anon_sym_ATdef,
      anon_sym_ATextern,
      sym_identifier,
  [963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 4,
      ts_builtin_sym_end,
      anon_sym_ATdef,
      anon_sym_ATextern,
      sym_identifier,
  [973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 4,
      ts_builtin_sym_end,
      anon_sym_ATdef,
      anon_sym_ATextern,
      sym_identifier,
  [983] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_DOT,
    STATE(73), 1,
      sym_type,
    ACTIONS(119), 2,
      anon_sym_u32,
      anon_sym_string,
  [997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 4,
      ts_builtin_sym_end,
      anon_sym_ATdef,
      anon_sym_ATextern,
      sym_identifier,
  [1007] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_COMMA,
    ACTIONS(123), 1,
      anon_sym_RPAREN,
    STATE(50), 1,
      aux_sym_argument_list_repeat1,
  [1020] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_DOT,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    STATE(52), 1,
      aux_sym_clause_list_repeat1,
  [1033] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_DOT,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    STATE(48), 1,
      aux_sym_clause_list_repeat1,
  [1046] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(58), 1,
      sym_type,
    ACTIONS(119), 2,
      anon_sym_u32,
      anon_sym_string,
  [1057] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_RPAREN,
    ACTIONS(136), 1,
      anon_sym_COMMA,
    STATE(50), 1,
      aux_sym_argument_list_repeat1,
  [1070] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 3,
      anon_sym_DOT,
      anon_sym_input,
      anon_sym_output,
  [1079] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    ACTIONS(141), 1,
      anon_sym_DOT,
    STATE(48), 1,
      aux_sym_clause_list_repeat1,
  [1092] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    STATE(53), 1,
      aux_sym_arg_list_repeat1,
  [1105] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_RPAREN,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    STATE(56), 1,
      aux_sym_arg_list_repeat1,
  [1118] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COMMA,
  [1127] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    ACTIONS(154), 1,
      anon_sym_RPAREN,
    STATE(53), 1,
      aux_sym_arg_list_repeat1,
  [1140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
  [1148] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1156] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DOT,
    ACTIONS(158), 1,
      anon_sym_COLON_DASH,
  [1166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
  [1190] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      sym_identifier,
    STATE(62), 1,
      sym__atom,
  [1200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_DOT,
  [1207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_COLON,
  [1214] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_RPAREN,
  [1221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_RPAREN,
  [1228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
  [1235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
  [1242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_RPAREN,
  [1249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
  [1256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_DOT,
  [1263] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_DOT,
  [1270] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      ts_builtin_sym_end,
  [1277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
  [1284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_RPAREN,
  [1291] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      sym_identifier,
  [1298] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 81,
  [SMALL_STATE(5)] = 115,
  [SMALL_STATE(6)] = 149,
  [SMALL_STATE(7)] = 173,
  [SMALL_STATE(8)] = 204,
  [SMALL_STATE(9)] = 225,
  [SMALL_STATE(10)] = 246,
  [SMALL_STATE(11)] = 277,
  [SMALL_STATE(12)] = 308,
  [SMALL_STATE(13)] = 337,
  [SMALL_STATE(14)] = 368,
  [SMALL_STATE(15)] = 399,
  [SMALL_STATE(16)] = 430,
  [SMALL_STATE(17)] = 461,
  [SMALL_STATE(18)] = 486,
  [SMALL_STATE(19)] = 507,
  [SMALL_STATE(20)] = 528,
  [SMALL_STATE(21)] = 559,
  [SMALL_STATE(22)] = 580,
  [SMALL_STATE(23)] = 605,
  [SMALL_STATE(24)] = 626,
  [SMALL_STATE(25)] = 648,
  [SMALL_STATE(26)] = 677,
  [SMALL_STATE(27)] = 704,
  [SMALL_STATE(28)] = 731,
  [SMALL_STATE(29)] = 756,
  [SMALL_STATE(30)] = 777,
  [SMALL_STATE(31)] = 798,
  [SMALL_STATE(32)] = 811,
  [SMALL_STATE(33)] = 831,
  [SMALL_STATE(34)] = 849,
  [SMALL_STATE(35)] = 869,
  [SMALL_STATE(36)] = 884,
  [SMALL_STATE(37)] = 903,
  [SMALL_STATE(38)] = 918,
  [SMALL_STATE(39)] = 933,
  [SMALL_STATE(40)] = 943,
  [SMALL_STATE(41)] = 953,
  [SMALL_STATE(42)] = 963,
  [SMALL_STATE(43)] = 973,
  [SMALL_STATE(44)] = 983,
  [SMALL_STATE(45)] = 997,
  [SMALL_STATE(46)] = 1007,
  [SMALL_STATE(47)] = 1020,
  [SMALL_STATE(48)] = 1033,
  [SMALL_STATE(49)] = 1046,
  [SMALL_STATE(50)] = 1057,
  [SMALL_STATE(51)] = 1070,
  [SMALL_STATE(52)] = 1079,
  [SMALL_STATE(53)] = 1092,
  [SMALL_STATE(54)] = 1105,
  [SMALL_STATE(55)] = 1118,
  [SMALL_STATE(56)] = 1127,
  [SMALL_STATE(57)] = 1140,
  [SMALL_STATE(58)] = 1148,
  [SMALL_STATE(59)] = 1156,
  [SMALL_STATE(60)] = 1166,
  [SMALL_STATE(61)] = 1174,
  [SMALL_STATE(62)] = 1182,
  [SMALL_STATE(63)] = 1190,
  [SMALL_STATE(64)] = 1200,
  [SMALL_STATE(65)] = 1207,
  [SMALL_STATE(66)] = 1214,
  [SMALL_STATE(67)] = 1221,
  [SMALL_STATE(68)] = 1228,
  [SMALL_STATE(69)] = 1235,
  [SMALL_STATE(70)] = 1242,
  [SMALL_STATE(71)] = 1249,
  [SMALL_STATE(72)] = 1256,
  [SMALL_STATE(73)] = 1263,
  [SMALL_STATE(74)] = 1270,
  [SMALL_STATE(75)] = 1277,
  [SMALL_STATE(76)] = 1284,
  [SMALL_STATE(77)] = 1291,
  [SMALL_STATE(78)] = 1298,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__term, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__term, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 3, .production_id = 5),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 3, .production_id = 5),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expr, 3, .production_id = 6),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expr, 3, .production_id = 6),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 2, .production_id = 2),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 2, .production_id = 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__term, 1, .production_id = 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__term, 1, .production_id = 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1, .production_id = 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 1, .production_id = 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atom, 4, .production_id = 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atom, 4, .production_id = 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__clause, 1, .production_id = 8),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(77),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(75),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1, .production_id = 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compare_op, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 3, .production_id = 11),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, .production_id = 5),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typedef_repeat1, 2),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typedef_repeat1, 2), SHIFT_REPEAT(51),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef, 6, .production_id = 7),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern, 6, .production_id = 7),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef, 7, .production_id = 7),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 2, .production_id = 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern, 7, .production_id = 7),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 7, .production_id = 10),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2, .production_id = 4),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause_list, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clause_list_repeat1, 2),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_clause_list_repeat1, 2), SHIFT_REPEAT(3),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, .production_id = 4),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, .production_id = 4), SHIFT_REPEAT(14),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualifier, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause_list, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_list_repeat1, 2),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_list_repeat1, 2), SHIFT_REPEAT(33),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_list, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_list, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_type, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negation, 2, .production_id = 9),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [184] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_eclair(void) {
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
