#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 46
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 1
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 7

enum {
  anon_sym_ATdef = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_DOT = 4,
  anon_sym_COMMA = 5,
  anon_sym_u32 = 6,
  anon_sym_string = 7,
  anon_sym_COLON_DASH = 8,
  anon_sym_EQ = 9,
  sym_identifier = 10,
  sym_number = 11,
  sym_string = 12,
  sym_hole = 13,
  sym_source_file = 14,
  sym__statement = 15,
  sym_typedef = 16,
  sym_type_list = 17,
  sym_type = 18,
  sym_fact = 19,
  sym__atom = 20,
  sym_rule = 21,
  sym_clause_list = 22,
  sym_equality = 23,
  sym_argument_list = 24,
  sym__argument = 25,
  sym__literal = 26,
  aux_sym_source_file_repeat1 = 27,
  aux_sym_type_list_repeat1 = 28,
  aux_sym_clause_list_repeat1 = 29,
  aux_sym_argument_list_repeat1 = 30,
  alias_sym_clause = 31,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ATdef] = "@def",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOT] = ".",
  [anon_sym_COMMA] = ",",
  [anon_sym_u32] = "u32",
  [anon_sym_string] = "string",
  [anon_sym_COLON_DASH] = ":-",
  [anon_sym_EQ] = "=",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_string] = "string",
  [sym_hole] = "hole",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_typedef] = "typedef",
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
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_u32] = anon_sym_u32,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_COLON_DASH] = anon_sym_COLON_DASH,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [sym_hole] = sym_hole,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_typedef] = sym_typedef,
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
      if (eof) ADVANCE(15);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '(') ADVANCE(17);
      if (lookahead == ')') ADVANCE(18);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == ':') ADVANCE(2);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '?') ADVANCE(37);
      if (lookahead == '@') ADVANCE(5);
      if (lookahead == 's') ADVANCE(33);
      if (lookahead == 'u') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(25);
      END_STATE();
    case 3:
      if (lookahead == '2') ADVANCE(21);
      END_STATE();
    case 4:
      if (lookahead == '3') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == 'd') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == 'f') ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == 'g') ADVANCE(23);
      END_STATE();
    case 9:
      if (lookahead == 'i') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 12:
      if (lookahead == 's') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 14:
      if (eof) ADVANCE(15);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '?') ADVANCE(37);
      if (lookahead == '@') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_ATdef);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_u32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_hole);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 14},
  [2] = {.lex_state = 14},
  [3] = {.lex_state = 14},
  [4] = {.lex_state = 14},
  [5] = {.lex_state = 14},
  [6] = {.lex_state = 14},
  [7] = {.lex_state = 14},
  [8] = {.lex_state = 14},
  [9] = {.lex_state = 14},
  [10] = {.lex_state = 12},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 14},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 14},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 12},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 14},
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
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 14},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_ATdef] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_u32] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_COLON_DASH] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_hole] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(41),
    [sym__statement] = STATE(3),
    [sym_typedef] = STATE(3),
    [sym_fact] = STATE(3),
    [sym__atom] = STATE(40),
    [sym_rule] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_ATdef] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(9), 1,
      sym_identifier,
    STATE(20), 1,
      sym_equality,
    STATE(22), 1,
      sym__atom,
    STATE(37), 1,
      sym_clause_list,
    STATE(39), 2,
      sym__argument,
      sym__literal,
    ACTIONS(11), 3,
      sym_number,
      sym_string,
      sym_hole,
  [22] = 5,
    ACTIONS(5), 1,
      anon_sym_ATdef,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(40), 1,
      sym__atom,
    STATE(4), 5,
      sym__statement,
      sym_typedef,
      sym_fact,
      sym_rule,
      aux_sym_source_file_repeat1,
  [42] = 5,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym_ATdef,
    ACTIONS(20), 1,
      sym_identifier,
    STATE(40), 1,
      sym__atom,
    STATE(4), 5,
      sym__statement,
      sym_typedef,
      sym_fact,
      sym_rule,
      aux_sym_source_file_repeat1,
  [62] = 5,
    ACTIONS(9), 1,
      sym_identifier,
    STATE(31), 1,
      sym__atom,
    STATE(32), 1,
      sym_equality,
    STATE(39), 2,
      sym__argument,
      sym__literal,
    ACTIONS(11), 3,
      sym_number,
      sym_string,
      sym_hole,
  [81] = 3,
    STATE(44), 1,
      sym_argument_list,
    STATE(14), 2,
      sym__argument,
      sym__literal,
    ACTIONS(23), 4,
      sym_identifier,
      sym_number,
      sym_string,
      sym_hole,
  [95] = 3,
    STATE(45), 1,
      sym_argument_list,
    STATE(14), 2,
      sym__argument,
      sym__literal,
    ACTIONS(23), 4,
      sym_identifier,
      sym_number,
      sym_string,
      sym_hole,
  [109] = 2,
    STATE(33), 2,
      sym__argument,
      sym__literal,
    ACTIONS(25), 4,
      sym_identifier,
      sym_number,
      sym_string,
      sym_hole,
  [120] = 2,
    STATE(26), 2,
      sym__argument,
      sym__literal,
    ACTIONS(27), 4,
      sym_identifier,
      sym_number,
      sym_string,
      sym_hole,
  [131] = 3,
    STATE(17), 1,
      sym_type,
    STATE(42), 1,
      sym_type_list,
    ACTIONS(29), 2,
      anon_sym_u32,
      anon_sym_string,
  [142] = 3,
    ACTIONS(31), 1,
      anon_sym_RPAREN,
    ACTIONS(33), 1,
      anon_sym_COMMA,
    STATE(23), 1,
      aux_sym_type_list_repeat1,
  [152] = 3,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_COMMA,
    STATE(13), 1,
      aux_sym_clause_list_repeat1,
  [162] = 3,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      anon_sym_COMMA,
    STATE(13), 1,
      aux_sym_clause_list_repeat1,
  [172] = 3,
    ACTIONS(44), 1,
      anon_sym_RPAREN,
    ACTIONS(46), 1,
      anon_sym_COMMA,
    STATE(19), 1,
      aux_sym_argument_list_repeat1,
  [182] = 3,
    ACTIONS(37), 1,
      anon_sym_COMMA,
    ACTIONS(48), 1,
      anon_sym_DOT,
    STATE(13), 1,
      aux_sym_clause_list_repeat1,
  [192] = 1,
    ACTIONS(50), 3,
      ts_builtin_sym_end,
      anon_sym_ATdef,
      sym_identifier,
  [198] = 3,
    ACTIONS(33), 1,
      anon_sym_COMMA,
    ACTIONS(52), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      aux_sym_type_list_repeat1,
  [208] = 1,
    ACTIONS(54), 3,
      ts_builtin_sym_end,
      anon_sym_ATdef,
      sym_identifier,
  [214] = 3,
    ACTIONS(46), 1,
      anon_sym_COMMA,
    ACTIONS(56), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      aux_sym_argument_list_repeat1,
  [224] = 3,
    ACTIONS(37), 1,
      anon_sym_COMMA,
    ACTIONS(58), 1,
      anon_sym_DOT,
    STATE(15), 1,
      aux_sym_clause_list_repeat1,
  [234] = 2,
    STATE(27), 1,
      sym_type,
    ACTIONS(29), 2,
      anon_sym_u32,
      anon_sym_string,
  [242] = 3,
    ACTIONS(37), 1,
      anon_sym_COMMA,
    ACTIONS(60), 1,
      anon_sym_DOT,
    STATE(12), 1,
      aux_sym_clause_list_repeat1,
  [252] = 3,
    ACTIONS(62), 1,
      anon_sym_RPAREN,
    ACTIONS(64), 1,
      anon_sym_COMMA,
    STATE(23), 1,
      aux_sym_type_list_repeat1,
  [262] = 1,
    ACTIONS(67), 3,
      ts_builtin_sym_end,
      anon_sym_ATdef,
      sym_identifier,
  [268] = 3,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    ACTIONS(71), 1,
      anon_sym_COMMA,
    STATE(25), 1,
      aux_sym_argument_list_repeat1,
  [278] = 1,
    ACTIONS(69), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [283] = 1,
    ACTIONS(62), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [288] = 2,
    ACTIONS(74), 1,
      anon_sym_LPAREN,
    ACTIONS(76), 1,
      anon_sym_EQ,
  [295] = 2,
    ACTIONS(78), 1,
      anon_sym_DOT,
    ACTIONS(80), 1,
      anon_sym_COLON_DASH,
  [302] = 1,
    ACTIONS(82), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [307] = 1,
    ACTIONS(84), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
  [312] = 1,
    ACTIONS(39), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
  [317] = 1,
    ACTIONS(86), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
  [322] = 1,
    ACTIONS(78), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
  [327] = 1,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
  [331] = 1,
    ACTIONS(90), 1,
      sym_identifier,
  [335] = 1,
    ACTIONS(92), 1,
      anon_sym_DOT,
  [339] = 1,
    ACTIONS(94), 1,
      anon_sym_DOT,
  [343] = 1,
    ACTIONS(96), 1,
      anon_sym_EQ,
  [347] = 1,
    ACTIONS(98), 1,
      anon_sym_DOT,
  [351] = 1,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
  [355] = 1,
    ACTIONS(102), 1,
      anon_sym_RPAREN,
  [359] = 1,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
  [363] = 1,
    ACTIONS(106), 1,
      anon_sym_RPAREN,
  [367] = 1,
    ACTIONS(108), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 42,
  [SMALL_STATE(5)] = 62,
  [SMALL_STATE(6)] = 81,
  [SMALL_STATE(7)] = 95,
  [SMALL_STATE(8)] = 109,
  [SMALL_STATE(9)] = 120,
  [SMALL_STATE(10)] = 131,
  [SMALL_STATE(11)] = 142,
  [SMALL_STATE(12)] = 152,
  [SMALL_STATE(13)] = 162,
  [SMALL_STATE(14)] = 172,
  [SMALL_STATE(15)] = 182,
  [SMALL_STATE(16)] = 192,
  [SMALL_STATE(17)] = 198,
  [SMALL_STATE(18)] = 208,
  [SMALL_STATE(19)] = 214,
  [SMALL_STATE(20)] = 224,
  [SMALL_STATE(21)] = 234,
  [SMALL_STATE(22)] = 242,
  [SMALL_STATE(23)] = 252,
  [SMALL_STATE(24)] = 262,
  [SMALL_STATE(25)] = 268,
  [SMALL_STATE(26)] = 278,
  [SMALL_STATE(27)] = 283,
  [SMALL_STATE(28)] = 288,
  [SMALL_STATE(29)] = 295,
  [SMALL_STATE(30)] = 302,
  [SMALL_STATE(31)] = 307,
  [SMALL_STATE(32)] = 312,
  [SMALL_STATE(33)] = 317,
  [SMALL_STATE(34)] = 322,
  [SMALL_STATE(35)] = 327,
  [SMALL_STATE(36)] = 331,
  [SMALL_STATE(37)] = 335,
  [SMALL_STATE(38)] = 339,
  [SMALL_STATE(39)] = 343,
  [SMALL_STATE(40)] = 347,
  [SMALL_STATE(41)] = 351,
  [SMALL_STATE(42)] = 355,
  [SMALL_STATE(43)] = 359,
  [SMALL_STATE(44)] = 363,
  [SMALL_STATE(45)] = 367,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(36),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(43),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_list, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause_list, 2, .production_id = 4),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clause_list_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_clause_list_repeat1, 2), SHIFT_REPEAT(5),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause_list, 2),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 7, .production_id = 5),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_list, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 2, .production_id = 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause_list, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause_list, 1, .production_id = 4),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_list_repeat1, 2),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_list_repeat1, 2), SHIFT_REPEAT(21),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef, 6, .production_id = 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(9),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atom, 4, .production_id = 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clause_list_repeat1, 2, .production_id = 6),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equality, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [100] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
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
