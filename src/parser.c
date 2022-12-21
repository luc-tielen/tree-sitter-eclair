#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 51
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 1
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 7

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
  sym_identifier = 17,
  sym_number = 18,
  sym_string = 19,
  sym_hole = 20,
  sym_comment = 21,
  sym_source_file = 22,
  sym__statement = 23,
  sym_typedef = 24,
  sym_qualifier = 25,
  sym_type_list = 26,
  sym_type = 27,
  sym_fact = 28,
  sym__atom = 29,
  sym_rule = 30,
  sym_clause_list = 31,
  sym_comparison = 32,
  sym_compare_op = 33,
  sym_argument_list = 34,
  sym__argument = 35,
  sym__literal = 36,
  aux_sym_source_file_repeat1 = 37,
  aux_sym_typedef_repeat1 = 38,
  aux_sym_type_list_repeat1 = 39,
  aux_sym_clause_list_repeat1 = 40,
  aux_sym_argument_list_repeat1 = 41,
  alias_sym_clause = 42,
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
  [sym__argument] = "_argument",
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
  [sym__argument] = sym__argument,
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
  [sym__argument] = {
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
  field_name = 3,
  field_types = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arguments] = "arguments",
  [field_clauses] = "clauses",
  [field_name] = "name",
  [field_types] = "types",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 0, .length = 2},
  [5] = {.index = 6, .length = 3},
  [6] = {.index = 9, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_arguments, 0, .inherited = true},
    {field_name, 0, .inherited = true},
  [2] =
    {field_arguments, 2},
    {field_name, 0},
  [4] =
    {field_name, 1},
    {field_types, 3},
  [6] =
    {field_arguments, 2},
    {field_clauses, 5},
    {field_name, 0},
  [9] =
    {field_arguments, 1, .inherited = true},
    {field_name, 1, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [4] = {
    [0] = alias_sym_clause,
  },
  [6] = {
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
      if (lookahead == ',') ADVANCE(39);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == '>') ADVANCE(47);
      if (lookahead == '?') ADVANCE(52);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(54);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(53);
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
          lookahead != '\r') ADVANCE(54);
      if (lookahead == '\r') ADVANCE(55);
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
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '?') ADVANCE(52);
      if (lookahead == '@') ADVANCE(9);
      if (lookahead == '\\') SKIP(30)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
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
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_hole);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(54);
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
  [3] = {.lex_state = 31},
  [4] = {.lex_state = 31},
  [5] = {.lex_state = 31},
  [6] = {.lex_state = 31},
  [7] = {.lex_state = 31},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 31},
  [11] = {.lex_state = 31},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 31},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 31},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 31},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 31},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 31},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 31},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
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
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_hole] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(48),
    [sym__statement] = STATE(2),
    [sym_typedef] = STATE(2),
    [sym_fact] = STATE(2),
    [sym__atom] = STATE(45),
    [sym_rule] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_ATdef] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_ATdef,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(45), 1,
      sym__atom,
    STATE(3), 5,
      sym__statement,
      sym_typedef,
      sym_fact,
      sym_rule,
      aux_sym_source_file_repeat1,
  [23] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      anon_sym_ATdef,
    ACTIONS(18), 1,
      sym_identifier,
    STATE(45), 1,
      sym__atom,
    STATE(3), 5,
      sym__statement,
      sym_typedef,
      sym_fact,
      sym_rule,
      aux_sym_source_file_repeat1,
  [46] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_identifier,
    STATE(18), 1,
      sym_comparison,
    STATE(32), 1,
      sym__atom,
    STATE(42), 1,
      sym_clause_list,
    STATE(8), 2,
      sym__argument,
      sym__literal,
    ACTIONS(23), 3,
      sym_number,
      sym_string,
      sym_hole,
  [71] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_identifier,
    STATE(37), 1,
      sym__atom,
    STATE(38), 1,
      sym_comparison,
    STATE(8), 2,
      sym__argument,
      sym__literal,
    ACTIONS(23), 3,
      sym_number,
      sym_string,
      sym_hole,
  [93] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(50), 1,
      sym_argument_list,
    STATE(17), 2,
      sym__argument,
      sym__literal,
    ACTIONS(25), 4,
      sym_identifier,
      sym_number,
      sym_string,
      sym_hole,
  [110] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(43), 1,
      sym_argument_list,
    STATE(17), 2,
      sym__argument,
      sym__literal,
    ACTIONS(25), 4,
      sym_identifier,
      sym_number,
      sym_string,
      sym_hole,
  [127] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(10), 1,
      sym_compare_op,
    ACTIONS(29), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [144] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [161] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(40), 2,
      sym__argument,
      sym__literal,
    ACTIONS(37), 4,
      sym_identifier,
      sym_number,
      sym_string,
      sym_hole,
  [175] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(36), 2,
      sym__argument,
      sym__literal,
    ACTIONS(39), 4,
      sym_identifier,
      sym_number,
      sym_string,
      sym_hole,
  [189] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 2,
      anon_sym_input,
      anon_sym_output,
    STATE(14), 2,
      sym_qualifier,
      aux_sym_typedef_repeat1,
  [204] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 2,
      anon_sym_input,
      anon_sym_output,
    STATE(13), 2,
      sym_qualifier,
      aux_sym_typedef_repeat1,
  [219] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      anon_sym_DOT,
    ACTIONS(43), 2,
      anon_sym_input,
      anon_sym_output,
    STATE(13), 2,
      sym_qualifier,
      aux_sym_typedef_repeat1,
  [234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 4,
      sym_identifier,
      sym_number,
      sym_string,
      sym_hole,
  [244] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(33), 1,
      sym_type,
    STATE(46), 1,
      sym_type_list,
    ACTIONS(54), 2,
      anon_sym_u32,
      anon_sym_string,
  [258] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_RPAREN,
    ACTIONS(58), 1,
      anon_sym_COMMA,
    STATE(20), 1,
      aux_sym_argument_list_repeat1,
  [271] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_DOT,
    ACTIONS(62), 1,
      anon_sym_COMMA,
    STATE(23), 1,
      aux_sym_clause_list_repeat1,
  [284] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      anon_sym_DOT,
    ACTIONS(66), 1,
      anon_sym_COMMA,
    STATE(19), 1,
      aux_sym_clause_list_repeat1,
  [297] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_COMMA,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      aux_sym_argument_list_repeat1,
  [310] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(35), 1,
      sym_type,
    ACTIONS(54), 2,
      anon_sym_u32,
      anon_sym_string,
  [321] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    ACTIONS(73), 1,
      anon_sym_COMMA,
    STATE(30), 1,
      aux_sym_type_list_repeat1,
  [334] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_COMMA,
    ACTIONS(75), 1,
      anon_sym_DOT,
    STATE(19), 1,
      aux_sym_clause_list_repeat1,
  [347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 3,
      ts_builtin_sym_end,
      anon_sym_ATdef,
      sym_identifier,
  [356] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    ACTIONS(81), 1,
      anon_sym_COMMA,
    STATE(25), 1,
      aux_sym_argument_list_repeat1,
  [369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 3,
      ts_builtin_sym_end,
      anon_sym_ATdef,
      sym_identifier,
  [378] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 3,
      anon_sym_DOT,
      anon_sym_input,
      anon_sym_output,
  [387] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_COMMA,
    ACTIONS(88), 1,
      anon_sym_DOT,
    STATE(19), 1,
      aux_sym_clause_list_repeat1,
  [400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 3,
      ts_builtin_sym_end,
      anon_sym_ATdef,
      sym_identifier,
  [409] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_RPAREN,
    ACTIONS(94), 1,
      anon_sym_COMMA,
    STATE(30), 1,
      aux_sym_type_list_repeat1,
  [422] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 3,
      ts_builtin_sym_end,
      anon_sym_ATdef,
      sym_identifier,
  [431] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_COMMA,
    ACTIONS(99), 1,
      anon_sym_DOT,
    STATE(28), 1,
      aux_sym_clause_list_repeat1,
  [444] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_COMMA,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      aux_sym_type_list_repeat1,
  [457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
  [489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
  [497] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(109), 1,
      anon_sym_COLON_DASH,
  [507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
  [515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
  [523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_DOT,
  [530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_RPAREN,
  [537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
  [544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_DOT,
  [551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
  [558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      sym_identifier,
  [565] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
  [572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
  [579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 46,
  [SMALL_STATE(5)] = 71,
  [SMALL_STATE(6)] = 93,
  [SMALL_STATE(7)] = 110,
  [SMALL_STATE(8)] = 127,
  [SMALL_STATE(9)] = 144,
  [SMALL_STATE(10)] = 161,
  [SMALL_STATE(11)] = 175,
  [SMALL_STATE(12)] = 189,
  [SMALL_STATE(13)] = 204,
  [SMALL_STATE(14)] = 219,
  [SMALL_STATE(15)] = 234,
  [SMALL_STATE(16)] = 244,
  [SMALL_STATE(17)] = 258,
  [SMALL_STATE(18)] = 271,
  [SMALL_STATE(19)] = 284,
  [SMALL_STATE(20)] = 297,
  [SMALL_STATE(21)] = 310,
  [SMALL_STATE(22)] = 321,
  [SMALL_STATE(23)] = 334,
  [SMALL_STATE(24)] = 347,
  [SMALL_STATE(25)] = 356,
  [SMALL_STATE(26)] = 369,
  [SMALL_STATE(27)] = 378,
  [SMALL_STATE(28)] = 387,
  [SMALL_STATE(29)] = 400,
  [SMALL_STATE(30)] = 409,
  [SMALL_STATE(31)] = 422,
  [SMALL_STATE(32)] = 431,
  [SMALL_STATE(33)] = 444,
  [SMALL_STATE(34)] = 457,
  [SMALL_STATE(35)] = 465,
  [SMALL_STATE(36)] = 473,
  [SMALL_STATE(37)] = 481,
  [SMALL_STATE(38)] = 489,
  [SMALL_STATE(39)] = 497,
  [SMALL_STATE(40)] = 507,
  [SMALL_STATE(41)] = 515,
  [SMALL_STATE(42)] = 523,
  [SMALL_STATE(43)] = 530,
  [SMALL_STATE(44)] = 537,
  [SMALL_STATE(45)] = 544,
  [SMALL_STATE(46)] = 551,
  [SMALL_STATE(47)] = 558,
  [SMALL_STATE(48)] = 565,
  [SMALL_STATE(49)] = 572,
  [SMALL_STATE(50)] = 579,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(49),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__argument, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typedef_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typedef_repeat1, 2), SHIFT_REPEAT(27),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compare_op, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause_list, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clause_list_repeat1, 2),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_clause_list_repeat1, 2), SHIFT_REPEAT(5),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_list, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause_list, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 7, .production_id = 5),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(11),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef, 6, .production_id = 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualifier, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause_list, 2, .production_id = 4),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 2, .production_id = 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_list_repeat1, 2),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_list_repeat1, 2), SHIFT_REPEAT(21),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef, 7, .production_id = 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause_list, 1, .production_id = 4),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_list, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clause_list_repeat1, 2, .production_id = 6),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atom, 4, .production_id = 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [125] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
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
