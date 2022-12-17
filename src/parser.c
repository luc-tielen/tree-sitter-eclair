#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 50
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 36
#define ALIAS_COUNT 1
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 7

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
  sym_identifier = 12,
  sym_number = 13,
  sym_string = 14,
  sym_hole = 15,
  sym_comment = 16,
  sym_source_file = 17,
  sym__statement = 18,
  sym_typedef = 19,
  sym_qualifier = 20,
  sym_type_list = 21,
  sym_type = 22,
  sym_fact = 23,
  sym__atom = 24,
  sym_rule = 25,
  sym_clause_list = 26,
  sym_equality = 27,
  sym_argument_list = 28,
  sym__argument = 29,
  sym__literal = 30,
  aux_sym_source_file_repeat1 = 31,
  aux_sym_typedef_repeat1 = 32,
  aux_sym_type_list_repeat1 = 33,
  aux_sym_clause_list_repeat1 = 34,
  aux_sym_argument_list_repeat1 = 35,
  alias_sym_clause = 36,
};

static const char *ts_symbol_names[] = {
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
  [sym_equality] = "equality",
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

static TSSymbol ts_symbol_map[] = {
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
  [sym_equality] = sym_equality,
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
  [sym_equality] = {
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

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_arguments] = "arguments",
  [field_clauses] = "clauses",
  [field_name] = "name",
  [field_types] = "types",
};

static const TSFieldMapSlice ts_field_map_slices[7] = {
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

static TSSymbol ts_alias_sequences[7][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [4] = {
    [0] = alias_sym_clause,
  },
  [6] = {
    [1] = alias_sym_clause,
  },
};

static uint16_t ts_non_terminal_alias_map[] = {
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
      if (eof) ADVANCE(31);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == ',') ADVANCE(38);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '?') ADVANCE(46);
      if (lookahead == '@') ADVANCE(8);
      if (lookahead == '\\') SKIP(27)
      if (lookahead == 'i') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(22);
      if (lookahead == 's') ADVANCE(18);
      if (lookahead == 'u') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(48);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(41);
      END_STATE();
    case 6:
      if (lookahead == '2') ADVANCE(39);
      END_STATE();
    case 7:
      if (lookahead == '3') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 'f') ADVANCE(32);
      END_STATE();
    case 11:
      if (lookahead == 'g') ADVANCE(40);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 15:
      if (lookahead == 'p') ADVANCE(23);
      END_STATE();
    case 16:
      if (lookahead == 'p') ADVANCE(24);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 20:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 22:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 24:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 25:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(48);
      if (lookahead == '\r') ADVANCE(49);
      END_STATE();
    case 26:
      if (eof) ADVANCE(31);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 27:
      if (eof) ADVANCE(31);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(26)
      END_STATE();
    case 28:
      if (eof) ADVANCE(31);
      if (lookahead == '\n') SKIP(30)
      END_STATE();
    case 29:
      if (eof) ADVANCE(31);
      if (lookahead == '\n') SKIP(30)
      if (lookahead == '\r') SKIP(28)
      END_STATE();
    case 30:
      if (eof) ADVANCE(31);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '?') ADVANCE(46);
      if (lookahead == '@') ADVANCE(8);
      if (lookahead == '\\') SKIP(29)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_ATdef);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_hole);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(25);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 30},
  [2] = {.lex_state = 30},
  [3] = {.lex_state = 30},
  [4] = {.lex_state = 30},
  [5] = {.lex_state = 30},
  [6] = {.lex_state = 30},
  [7] = {.lex_state = 30},
  [8] = {.lex_state = 30},
  [9] = {.lex_state = 30},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 30},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 30},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 30},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 30},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 30},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
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
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_hole] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(46),
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

static uint16_t ts_small_parse_table[] = {
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
    STATE(25), 1,
      sym_equality,
    STATE(29), 1,
      sym__atom,
    STATE(41), 1,
      sym_clause_list,
    STATE(47), 2,
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
    STATE(38), 1,
      sym__atom,
    STATE(39), 1,
      sym_equality,
    STATE(47), 2,
      sym__argument,
      sym__literal,
    ACTIONS(23), 3,
      sym_number,
      sym_string,
      sym_hole,
  [93] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(44), 1,
      sym_argument_list,
    STATE(23), 2,
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
    STATE(49), 1,
      sym_argument_list,
    STATE(23), 2,
      sym__argument,
      sym__literal,
    ACTIONS(25), 4,
      sym_identifier,
      sym_number,
      sym_string,
      sym_hole,
  [127] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(34), 2,
      sym__argument,
      sym__literal,
    ACTIONS(27), 4,
      sym_identifier,
      sym_number,
      sym_string,
      sym_hole,
  [141] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(33), 2,
      sym__argument,
      sym__literal,
    ACTIONS(29), 4,
      sym_identifier,
      sym_number,
      sym_string,
      sym_hole,
  [155] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 2,
      anon_sym_input,
      anon_sym_output,
    STATE(10), 2,
      sym_qualifier,
      aux_sym_typedef_repeat1,
  [170] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 1,
      anon_sym_DOT,
    ACTIONS(38), 2,
      anon_sym_input,
      anon_sym_output,
    STATE(10), 2,
      sym_qualifier,
      aux_sym_typedef_repeat1,
  [185] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      anon_sym_DOT,
    ACTIONS(38), 2,
      anon_sym_input,
      anon_sym_output,
    STATE(11), 2,
      sym_qualifier,
      aux_sym_typedef_repeat1,
  [200] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(18), 1,
      sym_type,
    STATE(48), 1,
      sym_type_list,
    ACTIONS(42), 2,
      anon_sym_u32,
      anon_sym_string,
  [214] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      anon_sym_RPAREN,
    ACTIONS(46), 1,
      anon_sym_COMMA,
    STATE(14), 1,
      aux_sym_argument_list_repeat1,
  [227] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 3,
      anon_sym_DOT,
      anon_sym_input,
      anon_sym_output,
  [236] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      aux_sym_clause_list_repeat1,
  [249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 3,
      ts_builtin_sym_end,
      anon_sym_ATdef,
      sym_identifier,
  [258] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_RPAREN,
    ACTIONS(59), 1,
      anon_sym_COMMA,
    STATE(22), 1,
      aux_sym_type_list_repeat1,
  [271] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_COMMA,
    ACTIONS(61), 1,
      anon_sym_DOT,
    STATE(27), 1,
      aux_sym_clause_list_repeat1,
  [284] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    ACTIONS(65), 1,
      anon_sym_COMMA,
    STATE(14), 1,
      aux_sym_argument_list_repeat1,
  [297] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(32), 1,
      sym_type,
    ACTIONS(42), 2,
      anon_sym_u32,
      anon_sym_string,
  [308] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_COMMA,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    STATE(30), 1,
      aux_sym_type_list_repeat1,
  [321] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_COMMA,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    STATE(20), 1,
      aux_sym_argument_list_repeat1,
  [334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 3,
      ts_builtin_sym_end,
      anon_sym_ATdef,
      sym_identifier,
  [343] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_COMMA,
    ACTIONS(73), 1,
      anon_sym_DOT,
    STATE(16), 1,
      aux_sym_clause_list_repeat1,
  [356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 3,
      ts_builtin_sym_end,
      anon_sym_ATdef,
      sym_identifier,
  [365] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_DOT,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      aux_sym_clause_list_repeat1,
  [378] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 3,
      ts_builtin_sym_end,
      anon_sym_ATdef,
      sym_identifier,
  [387] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_COMMA,
    ACTIONS(84), 1,
      anon_sym_DOT,
    STATE(19), 1,
      aux_sym_clause_list_repeat1,
  [400] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_RPAREN,
    ACTIONS(88), 1,
      anon_sym_COMMA,
    STATE(30), 1,
      aux_sym_type_list_repeat1,
  [413] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_EQ,
  [423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
  [439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [447] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_DOT,
    ACTIONS(99), 1,
      anon_sym_COLON_DASH,
  [457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
  [465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
  [481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
  [489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      sym_identifier,
  [496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_DOT,
  [503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
  [510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
  [517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_RPAREN,
  [524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
  [531] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
  [538] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_EQ,
  [545] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
  [552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_RPAREN,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 46,
  [SMALL_STATE(5)] = 71,
  [SMALL_STATE(6)] = 93,
  [SMALL_STATE(7)] = 110,
  [SMALL_STATE(8)] = 127,
  [SMALL_STATE(9)] = 141,
  [SMALL_STATE(10)] = 155,
  [SMALL_STATE(11)] = 170,
  [SMALL_STATE(12)] = 185,
  [SMALL_STATE(13)] = 200,
  [SMALL_STATE(14)] = 214,
  [SMALL_STATE(15)] = 227,
  [SMALL_STATE(16)] = 236,
  [SMALL_STATE(17)] = 249,
  [SMALL_STATE(18)] = 258,
  [SMALL_STATE(19)] = 271,
  [SMALL_STATE(20)] = 284,
  [SMALL_STATE(21)] = 297,
  [SMALL_STATE(22)] = 308,
  [SMALL_STATE(23)] = 321,
  [SMALL_STATE(24)] = 334,
  [SMALL_STATE(25)] = 343,
  [SMALL_STATE(26)] = 356,
  [SMALL_STATE(27)] = 365,
  [SMALL_STATE(28)] = 378,
  [SMALL_STATE(29)] = 387,
  [SMALL_STATE(30)] = 400,
  [SMALL_STATE(31)] = 413,
  [SMALL_STATE(32)] = 423,
  [SMALL_STATE(33)] = 431,
  [SMALL_STATE(34)] = 439,
  [SMALL_STATE(35)] = 447,
  [SMALL_STATE(36)] = 457,
  [SMALL_STATE(37)] = 465,
  [SMALL_STATE(38)] = 473,
  [SMALL_STATE(39)] = 481,
  [SMALL_STATE(40)] = 489,
  [SMALL_STATE(41)] = 496,
  [SMALL_STATE(42)] = 503,
  [SMALL_STATE(43)] = 510,
  [SMALL_STATE(44)] = 517,
  [SMALL_STATE(45)] = 524,
  [SMALL_STATE(46)] = 531,
  [SMALL_STATE(47)] = 538,
  [SMALL_STATE(48)] = 545,
  [SMALL_STATE(49)] = 552,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(40),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(43),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typedef_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typedef_repeat1, 2), SHIFT_REPEAT(15),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(8),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualifier, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause_list, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 7, .production_id = 5),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_list, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause_list, 2, .production_id = 4),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_list, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef, 7, .production_id = 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause_list, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef, 6, .production_id = 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clause_list_repeat1, 2),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_clause_list_repeat1, 2), SHIFT_REPEAT(5),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 2, .production_id = 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause_list, 1, .production_id = 4),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_list_repeat1, 2),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_list_repeat1, 2), SHIFT_REPEAT(21),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equality, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atom, 4, .production_id = 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clause_list_repeat1, 2, .production_id = 6),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [117] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_eclair(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const uint16_t *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .field_count = FIELD_COUNT,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .field_names = ts_field_names,
    .large_state_count = LARGE_STATE_COUNT,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
