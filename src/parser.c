#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 84
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 60
#define ALIAS_COUNT 1
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 13

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
  sym_type_list = 36,
  sym_arg = 37,
  sym_named_type = 38,
  sym_type = 39,
  sym_fact = 40,
  sym__atom = 41,
  sym_rule = 42,
  sym_clause_list = 43,
  sym__clause = 44,
  sym_negation = 45,
  sym_comparison = 46,
  sym_compare_op = 47,
  sym_argument_list = 48,
  sym__expr = 49,
  sym_unary_expr = 50,
  sym_binary_expr = 51,
  sym__term = 52,
  sym__literal = 53,
  aux_sym_source_file_repeat1 = 54,
  aux_sym_typedef_repeat1 = 55,
  aux_sym_arg_list_repeat1 = 56,
  aux_sym_type_list_repeat1 = 57,
  aux_sym_clause_list_repeat1 = 58,
  aux_sym_argument_list_repeat1 = 59,
  alias_sym_clause = 60,
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
  [sym_type_list] = "type_list",
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
  [aux_sym_type_list_repeat1] = "type_list_repeat1",
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
  [sym_type_list] = sym_type_list,
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
  [aux_sym_type_list_repeat1] = aux_sym_type_list_repeat1,
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
  [sym_type_list] = {
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
  [aux_sym_type_list_repeat1] = {
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
  field_types = 9,
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
  [field_types] = "types",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 4},
  [3] = {.index = 6, .length = 2},
  [4] = {.index = 8, .length = 4},
  [5] = {.index = 12, .length = 2},
  [6] = {.index = 14, .length = 7},
  [7] = {.index = 21, .length = 2},
  [8] = {.index = 23, .length = 2},
  [9] = {.index = 0, .length = 2},
  [10] = {.index = 12, .length = 2},
  [11] = {.index = 25, .length = 3},
  [12] = {.index = 28, .length = 4},
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
    {field_name, 1},
    {field_types, 3},
  [25] =
    {field_arguments, 2},
    {field_clauses, 5},
    {field_name, 0},
  [28] =
    {field_arguments, 0, .inherited = true},
    {field_arguments, 2, .inherited = true},
    {field_name, 0, .inherited = true},
    {field_name, 2, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [9] = {
    [0] = alias_sym_clause,
  },
  [10] = {
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
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 39},
  [10] = {.lex_state = 39},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 39},
  [13] = {.lex_state = 39},
  [14] = {.lex_state = 39},
  [15] = {.lex_state = 39},
  [16] = {.lex_state = 39},
  [17] = {.lex_state = 39},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 39},
  [26] = {.lex_state = 39},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 39},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 0},
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
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 39},
  [67] = {.lex_state = 39},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 39},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 39},
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
    [sym_source_file] = STATE(79),
    [sym__statement] = STATE(25),
    [sym_typedef] = STATE(25),
    [sym_extern] = STATE(25),
    [sym_fact] = STATE(25),
    [sym__atom] = STATE(77),
    [sym_rule] = STATE(25),
    [aux_sym_source_file_repeat1] = STATE(25),
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
    STATE(76), 1,
      sym_clause_list,
    STATE(21), 2,
      sym__term,
      sym__literal,
    STATE(27), 3,
      sym__expr,
      sym_unary_expr,
      sym_binary_expr,
    STATE(52), 3,
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
    STATE(27), 3,
      sym__expr,
      sym_unary_expr,
      sym_binary_expr,
    STATE(63), 3,
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
    STATE(78), 1,
      sym_argument_list,
    STATE(21), 2,
      sym__term,
      sym__literal,
    STATE(29), 3,
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
    STATE(81), 1,
      sym_argument_list,
    STATE(21), 2,
      sym__term,
      sym__literal,
    STATE(29), 3,
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
  [173] = 3,
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
  [194] = 3,
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
  [215] = 8,
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
    STATE(8), 3,
      sym__expr,
      sym_unary_expr,
      sym_binary_expr,
    ACTIONS(21), 4,
      sym_number,
      sym_string,
      sym_wildcard,
      sym_hole,
  [277] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(37), 10,
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
  [298] = 8,
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
    STATE(23), 3,
      sym__expr,
      sym_unary_expr,
      sym_binary_expr,
    ACTIONS(21), 4,
      sym_number,
      sym_string,
      sym_wildcard,
      sym_hole,
  [329] = 8,
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
  [360] = 8,
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
    STATE(31), 3,
      sym__expr,
      sym_unary_expr,
      sym_binary_expr,
    ACTIONS(21), 4,
      sym_number,
      sym_string,
      sym_wildcard,
      sym_hole,
  [391] = 8,
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
  [422] = 8,
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
    STATE(20), 3,
      sym__expr,
      sym_unary_expr,
      sym_binary_expr,
    ACTIONS(21), 4,
      sym_number,
      sym_string,
      sym_wildcard,
      sym_hole,
  [453] = 8,
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
  [484] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(41), 10,
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
  [505] = 3,
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
  [526] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      anon_sym_PLUS,
    ACTIONS(53), 1,
      anon_sym_STAR,
    ACTIONS(55), 1,
      anon_sym_SLASH,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 7,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [555] = 3,
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
  [576] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_STAR,
    ACTIONS(55), 1,
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
  [601] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_STAR,
    ACTIONS(55), 1,
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
  [626] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
    ACTIONS(43), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(41), 7,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [648] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_ATdef,
    ACTIONS(9), 1,
      anon_sym_ATextern,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    STATE(77), 1,
      sym__atom,
    STATE(26), 6,
      sym__statement,
      sym_typedef,
      sym_extern,
      sym_fact,
      sym_rule,
      aux_sym_source_file_repeat1,
  [675] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      anon_sym_ATdef,
    ACTIONS(70), 1,
      anon_sym_ATextern,
    ACTIONS(73), 1,
      sym_identifier,
    STATE(77), 1,
      sym__atom,
    STATE(26), 6,
      sym__statement,
      sym_typedef,
      sym_extern,
      sym_fact,
      sym_rule,
      aux_sym_source_file_repeat1,
  [702] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      anon_sym_PLUS,
    ACTIONS(53), 1,
      anon_sym_STAR,
    ACTIONS(55), 1,
      anon_sym_SLASH,
    STATE(17), 1,
      sym_compare_op,
    ACTIONS(78), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(76), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [731] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 7,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_identifier,
      sym_number,
      sym_string,
      sym_wildcard,
      sym_hole,
  [744] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      anon_sym_PLUS,
    ACTIONS(53), 1,
      anon_sym_STAR,
    ACTIONS(55), 1,
      anon_sym_SLASH,
    ACTIONS(82), 1,
      anon_sym_RPAREN,
    ACTIONS(84), 1,
      anon_sym_COMMA,
    STATE(47), 1,
      aux_sym_argument_list_repeat1,
  [769] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_identifier,
    STATE(46), 1,
      sym_arg,
    STATE(73), 1,
      sym_arg_list,
    ACTIONS(86), 2,
      anon_sym_u32,
      anon_sym_string,
    STATE(65), 2,
      sym_named_type,
      sym_type,
  [790] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      anon_sym_PLUS,
    ACTIONS(53), 1,
      anon_sym_STAR,
    ACTIONS(55), 1,
      anon_sym_SLASH,
    ACTIONS(90), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [810] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      anon_sym_PLUS,
    ACTIONS(53), 1,
      anon_sym_STAR,
    ACTIONS(55), 1,
      anon_sym_SLASH,
    ACTIONS(92), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
  [830] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_identifier,
    STATE(62), 1,
      sym_arg,
    ACTIONS(86), 2,
      anon_sym_u32,
      anon_sym_string,
    STATE(65), 2,
      sym_named_type,
      sym_type,
  [848] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_DOT,
    ACTIONS(96), 2,
      anon_sym_input,
      anon_sym_output,
    STATE(34), 2,
      sym_qualifier,
      aux_sym_typedef_repeat1,
  [863] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_DOT,
    ACTIONS(101), 2,
      anon_sym_input,
      anon_sym_output,
    STATE(37), 2,
      sym_qualifier,
      aux_sym_typedef_repeat1,
  [878] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      anon_sym_PLUS,
    ACTIONS(53), 1,
      anon_sym_STAR,
    ACTIONS(55), 1,
      anon_sym_SLASH,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
  [897] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(101), 2,
      anon_sym_input,
      anon_sym_output,
    STATE(34), 2,
      sym_qualifier,
      aux_sym_typedef_repeat1,
  [912] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_DOT,
    STATE(72), 1,
      sym_type,
    ACTIONS(109), 2,
      anon_sym_u32,
      anon_sym_string,
  [926] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 4,
      ts_builtin_sym_end,
      anon_sym_ATdef,
      anon_sym_ATextern,
      sym_identifier,
  [936] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 4,
      ts_builtin_sym_end,
      anon_sym_ATdef,
      anon_sym_ATextern,
      sym_identifier,
  [946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 4,
      ts_builtin_sym_end,
      anon_sym_ATdef,
      anon_sym_ATextern,
      sym_identifier,
  [956] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 4,
      ts_builtin_sym_end,
      anon_sym_ATdef,
      anon_sym_ATextern,
      sym_identifier,
  [966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 4,
      ts_builtin_sym_end,
      anon_sym_ATdef,
      anon_sym_ATextern,
      sym_identifier,
  [976] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(56), 1,
      sym_type,
    STATE(82), 1,
      sym_type_list,
    ACTIONS(109), 2,
      anon_sym_u32,
      anon_sym_string,
  [990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 4,
      ts_builtin_sym_end,
      anon_sym_ATdef,
      anon_sym_ATextern,
      sym_identifier,
  [1000] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_RPAREN,
    ACTIONS(125), 1,
      anon_sym_COMMA,
    STATE(51), 1,
      aux_sym_arg_list_repeat1,
  [1013] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_COMMA,
    ACTIONS(127), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      aux_sym_argument_list_repeat1,
  [1026] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_DOT,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    STATE(48), 1,
      aux_sym_clause_list_repeat1,
  [1039] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_DOT,
    ACTIONS(136), 1,
      anon_sym_COMMA,
    STATE(48), 1,
      aux_sym_clause_list_repeat1,
  [1052] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(61), 1,
      sym_type,
    ACTIONS(109), 2,
      anon_sym_u32,
      anon_sym_string,
  [1063] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_COMMA,
    ACTIONS(138), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      aux_sym_arg_list_repeat1,
  [1076] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_COMMA,
    ACTIONS(140), 1,
      anon_sym_DOT,
    STATE(49), 1,
      aux_sym_clause_list_repeat1,
  [1089] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(64), 1,
      sym_type,
    ACTIONS(109), 2,
      anon_sym_u32,
      anon_sym_string,
  [1100] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COMMA,
  [1109] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_RPAREN,
    ACTIONS(146), 1,
      anon_sym_COMMA,
    STATE(55), 1,
      aux_sym_argument_list_repeat1,
  [1122] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_RPAREN,
    ACTIONS(151), 1,
      anon_sym_COMMA,
    STATE(58), 1,
      aux_sym_type_list_repeat1,
  [1135] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 3,
      anon_sym_DOT,
      anon_sym_input,
      anon_sym_output,
  [1144] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_COMMA,
    ACTIONS(155), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_type_list_repeat1,
  [1157] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_RPAREN,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    STATE(59), 1,
      aux_sym_type_list_repeat1,
  [1170] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_RPAREN,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    STATE(60), 1,
      aux_sym_arg_list_repeat1,
  [1183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1191] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1199] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
  [1207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1223] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      sym_identifier,
    STATE(68), 1,
      sym__atom,
  [1233] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(173), 1,
      anon_sym_COLON_DASH,
  [1243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
  [1251] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_LPAREN,
  [1258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
  [1265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      sym_identifier,
  [1272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_DOT,
  [1279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
  [1286] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
  [1293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_COLON,
  [1300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_DOT,
  [1307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_DOT,
  [1314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
  [1321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
  [1328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
  [1335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_RPAREN,
  [1342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
  [1349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 81,
  [SMALL_STATE(5)] = 115,
  [SMALL_STATE(6)] = 149,
  [SMALL_STATE(7)] = 173,
  [SMALL_STATE(8)] = 194,
  [SMALL_STATE(9)] = 215,
  [SMALL_STATE(10)] = 246,
  [SMALL_STATE(11)] = 277,
  [SMALL_STATE(12)] = 298,
  [SMALL_STATE(13)] = 329,
  [SMALL_STATE(14)] = 360,
  [SMALL_STATE(15)] = 391,
  [SMALL_STATE(16)] = 422,
  [SMALL_STATE(17)] = 453,
  [SMALL_STATE(18)] = 484,
  [SMALL_STATE(19)] = 505,
  [SMALL_STATE(20)] = 526,
  [SMALL_STATE(21)] = 555,
  [SMALL_STATE(22)] = 576,
  [SMALL_STATE(23)] = 601,
  [SMALL_STATE(24)] = 626,
  [SMALL_STATE(25)] = 648,
  [SMALL_STATE(26)] = 675,
  [SMALL_STATE(27)] = 702,
  [SMALL_STATE(28)] = 731,
  [SMALL_STATE(29)] = 744,
  [SMALL_STATE(30)] = 769,
  [SMALL_STATE(31)] = 790,
  [SMALL_STATE(32)] = 810,
  [SMALL_STATE(33)] = 830,
  [SMALL_STATE(34)] = 848,
  [SMALL_STATE(35)] = 863,
  [SMALL_STATE(36)] = 878,
  [SMALL_STATE(37)] = 897,
  [SMALL_STATE(38)] = 912,
  [SMALL_STATE(39)] = 926,
  [SMALL_STATE(40)] = 936,
  [SMALL_STATE(41)] = 946,
  [SMALL_STATE(42)] = 956,
  [SMALL_STATE(43)] = 966,
  [SMALL_STATE(44)] = 976,
  [SMALL_STATE(45)] = 990,
  [SMALL_STATE(46)] = 1000,
  [SMALL_STATE(47)] = 1013,
  [SMALL_STATE(48)] = 1026,
  [SMALL_STATE(49)] = 1039,
  [SMALL_STATE(50)] = 1052,
  [SMALL_STATE(51)] = 1063,
  [SMALL_STATE(52)] = 1076,
  [SMALL_STATE(53)] = 1089,
  [SMALL_STATE(54)] = 1100,
  [SMALL_STATE(55)] = 1109,
  [SMALL_STATE(56)] = 1122,
  [SMALL_STATE(57)] = 1135,
  [SMALL_STATE(58)] = 1144,
  [SMALL_STATE(59)] = 1157,
  [SMALL_STATE(60)] = 1170,
  [SMALL_STATE(61)] = 1183,
  [SMALL_STATE(62)] = 1191,
  [SMALL_STATE(63)] = 1199,
  [SMALL_STATE(64)] = 1207,
  [SMALL_STATE(65)] = 1215,
  [SMALL_STATE(66)] = 1223,
  [SMALL_STATE(67)] = 1233,
  [SMALL_STATE(68)] = 1243,
  [SMALL_STATE(69)] = 1251,
  [SMALL_STATE(70)] = 1258,
  [SMALL_STATE(71)] = 1265,
  [SMALL_STATE(72)] = 1272,
  [SMALL_STATE(73)] = 1279,
  [SMALL_STATE(74)] = 1286,
  [SMALL_STATE(75)] = 1293,
  [SMALL_STATE(76)] = 1300,
  [SMALL_STATE(77)] = 1307,
  [SMALL_STATE(78)] = 1314,
  [SMALL_STATE(79)] = 1321,
  [SMALL_STATE(80)] = 1328,
  [SMALL_STATE(81)] = 1335,
  [SMALL_STATE(82)] = 1342,
  [SMALL_STATE(83)] = 1349,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
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
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atom, 4, .production_id = 3),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atom, 4, .production_id = 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__term, 1, .production_id = 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__term, 1, .production_id = 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 2, .production_id = 2),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 2, .production_id = 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1, .production_id = 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 1, .production_id = 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__clause, 1, .production_id = 9),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(71),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(83),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(80),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compare_op, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1, .production_id = 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, .production_id = 5),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 3, .production_id = 12),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typedef_repeat1, 2),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typedef_repeat1, 2), SHIFT_REPEAT(57),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef, 6, .production_id = 7),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 7, .production_id = 11),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern, 7, .production_id = 8),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef, 7, .production_id = 7),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 2, .production_id = 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern, 6, .production_id = 8),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_list, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2, .production_id = 4),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clause_list_repeat1, 2),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_clause_list_repeat1, 2), SHIFT_REPEAT(3),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause_list, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_list, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause_list, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, .production_id = 4),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, .production_id = 4), SHIFT_REPEAT(14),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_list, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualifier, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_list, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_list_repeat1, 2),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_list_repeat1, 2), SHIFT_REPEAT(53),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_list_repeat1, 2),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_list_repeat1, 2), SHIFT_REPEAT(33),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_type, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negation, 2, .production_id = 10),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [195] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
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
