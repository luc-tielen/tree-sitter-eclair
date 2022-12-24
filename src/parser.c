#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 60
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 49
#define ALIAS_COUNT 1
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 9

enum {
  anon_sym_ATdef = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_DOT = 4,
  anon_sym_input = 5,
  anon_sym_output = 6,
  anon_sym_COMMA = 7,
  anon_sym_u32 = 8,
  anon_sym_string = 9,
  anon_sym_COLON_DASH = 10,
  anon_sym_EQ = 11,
  anon_sym_BANG_EQ = 12,
  anon_sym_LT = 13,
  anon_sym_LT_EQ = 14,
  anon_sym_GT = 15,
  anon_sym_GT_EQ = 16,
  anon_sym_DASH = 17,
  anon_sym_PLUS = 18,
  anon_sym_STAR = 19,
  anon_sym_SLASH = 20,
  sym_identifier = 21,
  sym_number = 22,
  sym_string = 23,
  sym_hole = 24,
  sym_comment = 25,
  sym_source_file = 26,
  sym__statement = 27,
  sym_typedef = 28,
  sym_qualifier = 29,
  sym_type_list = 30,
  sym_type = 31,
  sym_fact = 32,
  sym__atom = 33,
  sym_rule = 34,
  sym_clause_list = 35,
  sym_comparison = 36,
  sym_compare_op = 37,
  sym_argument_list = 38,
  sym__expr = 39,
  sym_unary_expr = 40,
  sym_binary_expr = 41,
  sym__term = 42,
  sym__literal = 43,
  aux_sym_source_file_repeat1 = 44,
  aux_sym_typedef_repeat1 = 45,
  aux_sym_type_list_repeat1 = 46,
  aux_sym_clause_list_repeat1 = 47,
  aux_sym_argument_list_repeat1 = 48,
  alias_sym_clause = 49,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ATdef] = "@def",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOT] = ".",
  [anon_sym_input] = "input",
  [anon_sym_output] = "output",
  [anon_sym_COMMA] = ",",
  [anon_sym_u32] = "u32",
  [anon_sym_string] = "string",
  [anon_sym_COLON_DASH] = ":-",
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
  [sym_hole] = "hole",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_typedef] = "typedef",
  [sym_qualifier] = "qualifier",
  [sym_type_list] = "type_list",
  [sym_type] = "type",
  [sym_fact] = "fact",
  [sym__atom] = "_atom",
  [sym_rule] = "rule",
  [sym_clause_list] = "clause_list",
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
  [anon_sym_input] = anon_sym_input,
  [anon_sym_output] = anon_sym_output,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_u32] = anon_sym_u32,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_COLON_DASH] = anon_sym_COLON_DASH,
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
  [sym_hole] = sym_hole,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_typedef] = sym_typedef,
  [sym_qualifier] = sym_qualifier,
  [sym_type_list] = sym_type_list,
  [sym_type] = sym_type,
  [sym_fact] = sym_fact,
  [sym__atom] = sym__atom,
  [sym_rule] = sym_rule,
  [sym_clause_list] = sym_clause_list,
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
  [sym_qualifier] = {
    .visible = true,
    .named = true,
  },
  [sym_type_list] = {
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
  field_arguments = 1,
  field_clauses = 2,
  field_expr = 3,
  field_left = 4,
  field_name = 5,
  field_operator = 6,
  field_right = 7,
  field_types = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
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
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 3},
  [5] = {.index = 9, .length = 2},
  [6] = {.index = 0, .length = 2},
  [7] = {.index = 11, .length = 3},
  [8] = {.index = 14, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_arguments, 0, .inherited = true},
    {field_name, 0, .inherited = true},
  [2] =
    {field_expr, 1},
    {field_operator, 0},
  [4] =
    {field_arguments, 2},
    {field_name, 0},
  [6] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [9] =
    {field_name, 1},
    {field_types, 3},
  [11] =
    {field_arguments, 2},
    {field_clauses, 5},
    {field_name, 0},
  [14] =
    {field_arguments, 1, .inherited = true},
    {field_name, 1, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [6] = {
    [0] = alias_sym_clause,
  },
  [8] = {
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
      if (eof) ADVANCE(32);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == '*') ADVANCE(51);
      if (lookahead == '+') ADVANCE(50);
      if (lookahead == ',') ADVANCE(39);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '/') ADVANCE(52);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == '>') ADVANCE(47);
      if (lookahead == '?') ADVANCE(56);
      if (lookahead == '@') ADVANCE(9);
      if (lookahead == '\\') SKIP(28)
      if (lookahead == 'i') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(23);
      if (lookahead == 's') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(58);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(57);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(42);
      END_STATE();
    case 6:
      if (lookahead == '2') ADVANCE(40);
      END_STATE();
    case 7:
      if (lookahead == '3') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(44);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == 'f') ADVANCE(33);
      END_STATE();
    case 12:
      if (lookahead == 'g') ADVANCE(41);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 16:
      if (lookahead == 'p') ADVANCE(24);
      END_STATE();
    case 17:
      if (lookahead == 'p') ADVANCE(25);
      END_STATE();
    case 18:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 23:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 25:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 26:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(58);
      if (lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 27:
      if (eof) ADVANCE(32);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 28:
      if (eof) ADVANCE(32);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(27)
      END_STATE();
    case 29:
      if (eof) ADVANCE(32);
      if (lookahead == '\n') SKIP(31)
      END_STATE();
    case 30:
      if (eof) ADVANCE(32);
      if (lookahead == '\n') SKIP(31)
      if (lookahead == '\r') SKIP(29)
      END_STATE();
    case 31:
      if (eof) ADVANCE(32);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '?') ADVANCE(56);
      if (lookahead == '@') ADVANCE(9);
      if (lookahead == '\\') SKIP(30)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_ATdef);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(58);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_hole);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(26);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 31},
  [2] = {.lex_state = 31},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 31},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 31},
  [9] = {.lex_state = 31},
  [10] = {.lex_state = 31},
  [11] = {.lex_state = 31},
  [12] = {.lex_state = 31},
  [13] = {.lex_state = 31},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 31},
  [16] = {.lex_state = 31},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 31},
  [19] = {.lex_state = 31},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 31},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 31},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 31},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 31},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 31},
  [45] = {.lex_state = 0},
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
  [58] = {.lex_state = 31},
  [59] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_ATdef] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_u32] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_COLON_DASH] = ACTIONS(1),
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
    [sym_hole] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(56),
    [sym__statement] = STATE(18),
    [sym_typedef] = STATE(18),
    [sym_fact] = STATE(18),
    [sym__atom] = STATE(55),
    [sym_rule] = STATE(18),
    [aux_sym_source_file_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_ATdef] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(15), 1,
      sym_identifier,
    STATE(41), 1,
      sym__atom,
    STATE(43), 1,
      sym_comparison,
    STATE(52), 1,
      sym_clause_list,
    ACTIONS(17), 3,
      sym_number,
      sym_string,
      sym_hole,
    STATE(14), 5,
      sym__expr,
      sym_unary_expr,
      sym_binary_expr,
      sym__term,
      sym__literal,
  [34] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_SLASH,
    ACTIONS(21), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(19), 7,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [61] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(15), 1,
      sym_identifier,
    STATE(48), 1,
      sym__atom,
    STATE(49), 1,
      sym_comparison,
    ACTIONS(17), 3,
      sym_number,
      sym_string,
      sym_hole,
    STATE(14), 5,
      sym__expr,
      sym_unary_expr,
      sym_binary_expr,
      sym__term,
      sym__literal,
  [92] = 3,
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
  [113] = 3,
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
  [134] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
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
  [159] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DASH,
    STATE(57), 1,
      sym_argument_list,
    ACTIONS(37), 4,
      sym_identifier,
      sym_number,
      sym_string,
      sym_hole,
    STATE(20), 5,
      sym__expr,
      sym_unary_expr,
      sym_binary_expr,
      sym__term,
      sym__literal,
  [185] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DASH,
    STATE(51), 1,
      sym_argument_list,
    ACTIONS(37), 4,
      sym_identifier,
      sym_number,
      sym_string,
      sym_hole,
    STATE(20), 5,
      sym__expr,
      sym_unary_expr,
      sym_binary_expr,
      sym__term,
      sym__literal,
  [211] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(39), 4,
      sym_identifier,
      sym_number,
      sym_string,
      sym_hole,
    STATE(7), 5,
      sym__expr,
      sym_unary_expr,
      sym_binary_expr,
      sym__term,
      sym__literal,
  [234] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(41), 4,
      sym_identifier,
      sym_number,
      sym_string,
      sym_hole,
    STATE(22), 5,
      sym__expr,
      sym_unary_expr,
      sym_binary_expr,
      sym__term,
      sym__literal,
  [257] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(43), 4,
      sym_identifier,
      sym_number,
      sym_string,
      sym_hole,
    STATE(21), 5,
      sym__expr,
      sym_unary_expr,
      sym_binary_expr,
      sym__term,
      sym__literal,
  [280] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(45), 4,
      sym_identifier,
      sym_number,
      sym_string,
      sym_hole,
    STATE(6), 5,
      sym__expr,
      sym_unary_expr,
      sym_binary_expr,
      sym__term,
      sym__literal,
  [303] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_SLASH,
    STATE(11), 1,
      sym_compare_op,
    ACTIONS(23), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(49), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(47), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [330] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(51), 4,
      sym_identifier,
      sym_number,
      sym_string,
      sym_hole,
    STATE(25), 5,
      sym__expr,
      sym_unary_expr,
      sym_binary_expr,
      sym__term,
      sym__literal,
  [353] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(53), 4,
      sym_identifier,
      sym_number,
      sym_string,
      sym_hole,
    STATE(3), 5,
      sym__expr,
      sym_unary_expr,
      sym_binary_expr,
      sym__term,
      sym__literal,
  [376] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(57), 7,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [397] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_ATdef,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    STATE(55), 1,
      sym__atom,
    STATE(19), 5,
      sym__statement,
      sym_typedef,
      sym_fact,
      sym_rule,
      aux_sym_source_file_repeat1,
  [420] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 1,
      anon_sym_ATdef,
    ACTIONS(68), 1,
      sym_identifier,
    STATE(55), 1,
      sym__atom,
    STATE(19), 5,
      sym__statement,
      sym_typedef,
      sym_fact,
      sym_rule,
      aux_sym_source_file_repeat1,
  [443] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_SLASH,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    ACTIONS(73), 1,
      anon_sym_COMMA,
    STATE(37), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(23), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [466] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_SLASH,
    ACTIONS(23), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [484] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_SLASH,
    ACTIONS(23), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(77), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
  [502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 6,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_identifier,
      sym_number,
      sym_string,
      sym_hole,
  [514] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_DOT,
    ACTIONS(83), 2,
      anon_sym_input,
      anon_sym_output,
    STATE(24), 2,
      sym_qualifier,
      aux_sym_typedef_repeat1,
  [529] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_SLASH,
    ACTIONS(86), 1,
      anon_sym_RPAREN,
    ACTIONS(23), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [546] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_DOT,
    ACTIONS(90), 2,
      anon_sym_input,
      anon_sym_output,
    STATE(27), 2,
      sym_qualifier,
      aux_sym_typedef_repeat1,
  [561] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_DOT,
    ACTIONS(90), 2,
      anon_sym_input,
      anon_sym_output,
    STATE(24), 2,
      sym_qualifier,
      aux_sym_typedef_repeat1,
  [576] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(32), 1,
      sym_type,
    STATE(54), 1,
      sym_type_list,
    ACTIONS(94), 2,
      anon_sym_u32,
      anon_sym_string,
  [590] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_DOT,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    STATE(31), 1,
      aux_sym_clause_list_repeat1,
  [603] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(100), 1,
      anon_sym_DOT,
    STATE(31), 1,
      aux_sym_clause_list_repeat1,
  [616] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_DOT,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    STATE(31), 1,
      aux_sym_clause_list_repeat1,
  [629] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
    ACTIONS(109), 1,
      anon_sym_COMMA,
    STATE(33), 1,
      aux_sym_type_list_repeat1,
  [642] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_COMMA,
    ACTIONS(111), 1,
      anon_sym_RPAREN,
    STATE(39), 1,
      aux_sym_type_list_repeat1,
  [655] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    STATE(34), 1,
      aux_sym_argument_list_repeat1,
  [668] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 3,
      ts_builtin_sym_end,
      anon_sym_ATdef,
      sym_identifier,
  [677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 3,
      anon_sym_DOT,
      anon_sym_input,
      anon_sym_output,
  [686] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_COMMA,
    ACTIONS(120), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      aux_sym_argument_list_repeat1,
  [699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 3,
      ts_builtin_sym_end,
      anon_sym_ATdef,
      sym_identifier,
  [708] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_RPAREN,
    ACTIONS(126), 1,
      anon_sym_COMMA,
    STATE(39), 1,
      aux_sym_type_list_repeat1,
  [721] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 3,
      ts_builtin_sym_end,
      anon_sym_ATdef,
      sym_identifier,
  [730] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(131), 1,
      anon_sym_DOT,
    STATE(29), 1,
      aux_sym_clause_list_repeat1,
  [743] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(47), 1,
      sym_type,
    ACTIONS(94), 2,
      anon_sym_u32,
      anon_sym_string,
  [754] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(133), 1,
      anon_sym_DOT,
    STATE(30), 1,
      aux_sym_clause_list_repeat1,
  [767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 3,
      ts_builtin_sym_end,
      anon_sym_ATdef,
      sym_identifier,
  [776] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [784] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_DOT,
    ACTIONS(141), 1,
      anon_sym_COLON_DASH,
  [794] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
  [810] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
  [818] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
  [826] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_RPAREN,
  [833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_DOT,
  [840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
  [847] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_RPAREN,
  [854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_DOT,
  [861] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
  [868] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_RPAREN,
  [875] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      sym_identifier,
  [882] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 61,
  [SMALL_STATE(5)] = 92,
  [SMALL_STATE(6)] = 113,
  [SMALL_STATE(7)] = 134,
  [SMALL_STATE(8)] = 159,
  [SMALL_STATE(9)] = 185,
  [SMALL_STATE(10)] = 211,
  [SMALL_STATE(11)] = 234,
  [SMALL_STATE(12)] = 257,
  [SMALL_STATE(13)] = 280,
  [SMALL_STATE(14)] = 303,
  [SMALL_STATE(15)] = 330,
  [SMALL_STATE(16)] = 353,
  [SMALL_STATE(17)] = 376,
  [SMALL_STATE(18)] = 397,
  [SMALL_STATE(19)] = 420,
  [SMALL_STATE(20)] = 443,
  [SMALL_STATE(21)] = 466,
  [SMALL_STATE(22)] = 484,
  [SMALL_STATE(23)] = 502,
  [SMALL_STATE(24)] = 514,
  [SMALL_STATE(25)] = 529,
  [SMALL_STATE(26)] = 546,
  [SMALL_STATE(27)] = 561,
  [SMALL_STATE(28)] = 576,
  [SMALL_STATE(29)] = 590,
  [SMALL_STATE(30)] = 603,
  [SMALL_STATE(31)] = 616,
  [SMALL_STATE(32)] = 629,
  [SMALL_STATE(33)] = 642,
  [SMALL_STATE(34)] = 655,
  [SMALL_STATE(35)] = 668,
  [SMALL_STATE(36)] = 677,
  [SMALL_STATE(37)] = 686,
  [SMALL_STATE(38)] = 699,
  [SMALL_STATE(39)] = 708,
  [SMALL_STATE(40)] = 721,
  [SMALL_STATE(41)] = 730,
  [SMALL_STATE(42)] = 743,
  [SMALL_STATE(43)] = 754,
  [SMALL_STATE(44)] = 767,
  [SMALL_STATE(45)] = 776,
  [SMALL_STATE(46)] = 784,
  [SMALL_STATE(47)] = 794,
  [SMALL_STATE(48)] = 802,
  [SMALL_STATE(49)] = 810,
  [SMALL_STATE(50)] = 818,
  [SMALL_STATE(51)] = 826,
  [SMALL_STATE(52)] = 833,
  [SMALL_STATE(53)] = 840,
  [SMALL_STATE(54)] = 847,
  [SMALL_STATE(55)] = 854,
  [SMALL_STATE(56)] = 861,
  [SMALL_STATE(57)] = 868,
  [SMALL_STATE(58)] = 875,
  [SMALL_STATE(59)] = 882,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 2, .production_id = 2),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 2, .production_id = 2),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 3),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 3),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expr, 3, .production_id = 4),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expr, 3, .production_id = 4),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__term, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__term, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(58),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compare_op, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typedef_repeat1, 2),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typedef_repeat1, 2), SHIFT_REPEAT(36),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause_list, 2, .production_id = 6),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause_list, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clause_list_repeat1, 2),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_clause_list_repeat1, 2), SHIFT_REPEAT(4),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_list, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_list, 2),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(12),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef, 6, .production_id = 5),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualifier, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 7, .production_id = 7),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_list_repeat1, 2),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_list_repeat1, 2), SHIFT_REPEAT(42),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 2, .production_id = 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause_list, 1, .production_id = 6),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause_list, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef, 7, .production_id = 5),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atom, 4, .production_id = 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clause_list_repeat1, 2, .production_id = 8),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [155] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
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
