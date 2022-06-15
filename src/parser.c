#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 40
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 1
#define TOKEN_COUNT 11
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
  anon_sym_str = 7,
  anon_sym_COLON_DASH = 8,
  sym_identifier = 9,
  sym_lit = 10,
  sym_source_file = 11,
  sym__statement = 12,
  sym_typedef = 13,
  sym_type_list = 14,
  sym_type = 15,
  sym_fact = 16,
  sym__atom = 17,
  sym_rule = 18,
  sym_clause_list = 19,
  sym_argument_list = 20,
  sym__argument = 21,
  aux_sym_source_file_repeat1 = 22,
  aux_sym_type_list_repeat1 = 23,
  aux_sym_clause_list_repeat1 = 24,
  aux_sym_argument_list_repeat1 = 25,
  alias_sym_clause = 26,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ATdef] = "@def",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOT] = ".",
  [anon_sym_COMMA] = ",",
  [anon_sym_u32] = "u32",
  [anon_sym_str] = "str",
  [anon_sym_COLON_DASH] = ":-",
  [sym_identifier] = "identifier",
  [sym_lit] = "lit",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_typedef] = "typedef",
  [sym_type_list] = "type_list",
  [sym_type] = "type",
  [sym_fact] = "fact",
  [sym__atom] = "_atom",
  [sym_rule] = "rule",
  [sym_clause_list] = "clause_list",
  [sym_argument_list] = "argument_list",
  [sym__argument] = "_argument",
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
  [anon_sym_str] = anon_sym_str,
  [anon_sym_COLON_DASH] = anon_sym_COLON_DASH,
  [sym_identifier] = sym_identifier,
  [sym_lit] = sym_lit,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_typedef] = sym_typedef,
  [sym_type_list] = sym_type_list,
  [sym_type] = sym_type,
  [sym_fact] = sym_fact,
  [sym__atom] = sym__atom,
  [sym_rule] = sym_rule,
  [sym_clause_list] = sym_clause_list,
  [sym_argument_list] = sym_argument_list,
  [sym__argument] = sym__argument,
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
  [anon_sym_str] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_lit] = {
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
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym__argument] = {
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
      if (eof) ADVANCE(11);
      if (lookahead == '(') ADVANCE(13);
      if (lookahead == ')') ADVANCE(14);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == ':') ADVANCE(1);
      if (lookahead == '@') ADVANCE(4);
      if (lookahead == 's') ADVANCE(25);
      if (lookahead == 'u') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 1:
      if (lookahead == '-') ADVANCE(21);
      END_STATE();
    case 2:
      if (lookahead == '2') ADVANCE(17);
      END_STATE();
    case 3:
      if (lookahead == '3') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == 'd') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == 'f') ADVANCE(12);
      END_STATE();
    case 7:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 8:
      if (lookahead == 's') ADVANCE(9);
      if (lookahead == 'u') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 10:
      if (eof) ADVANCE(11);
      if (lookahead == '@') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_ATdef);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_u32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_str);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_str);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 10},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 10},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 10},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
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
    [anon_sym_str] = ACTIONS(1),
    [anon_sym_COLON_DASH] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_lit] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(30),
    [sym__statement] = STATE(3),
    [sym_typedef] = STATE(3),
    [sym_fact] = STATE(3),
    [sym__atom] = STATE(31),
    [sym_rule] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_ATdef] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      anon_sym_ATdef,
    ACTIONS(14), 1,
      sym_identifier,
    STATE(31), 1,
      sym__atom,
    STATE(2), 5,
      sym__statement,
      sym_typedef,
      sym_fact,
      sym_rule,
      aux_sym_source_file_repeat1,
  [20] = 5,
    ACTIONS(5), 1,
      anon_sym_ATdef,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(31), 1,
      sym__atom,
    STATE(2), 5,
      sym__statement,
      sym_typedef,
      sym_fact,
      sym_rule,
      aux_sym_source_file_repeat1,
  [40] = 3,
    STATE(13), 1,
      sym__argument,
    STATE(38), 1,
      sym_argument_list,
    ACTIONS(19), 2,
      sym_identifier,
      sym_lit,
  [51] = 3,
    STATE(13), 1,
      sym__argument,
    STATE(37), 1,
      sym_argument_list,
    ACTIONS(19), 2,
      sym_identifier,
      sym_lit,
  [62] = 3,
    STATE(16), 1,
      sym_type,
    STATE(32), 1,
      sym_type_list,
    ACTIONS(21), 2,
      anon_sym_u32,
      anon_sym_str,
  [73] = 3,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COMMA,
    STATE(12), 1,
      aux_sym_clause_list_repeat1,
  [83] = 3,
    ACTIONS(27), 1,
      anon_sym_RPAREN,
    ACTIONS(29), 1,
      anon_sym_COMMA,
    STATE(14), 1,
      aux_sym_type_list_repeat1,
  [93] = 3,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_COMMA,
    STATE(9), 1,
      aux_sym_clause_list_repeat1,
  [103] = 1,
    ACTIONS(36), 3,
      ts_builtin_sym_end,
      anon_sym_ATdef,
      sym_identifier,
  [109] = 1,
    ACTIONS(38), 3,
      ts_builtin_sym_end,
      anon_sym_ATdef,
      sym_identifier,
  [115] = 3,
    ACTIONS(25), 1,
      anon_sym_COMMA,
    ACTIONS(40), 1,
      anon_sym_DOT,
    STATE(9), 1,
      aux_sym_clause_list_repeat1,
  [125] = 3,
    ACTIONS(42), 1,
      anon_sym_RPAREN,
    ACTIONS(44), 1,
      anon_sym_COMMA,
    STATE(19), 1,
      aux_sym_argument_list_repeat1,
  [135] = 3,
    ACTIONS(46), 1,
      anon_sym_RPAREN,
    ACTIONS(48), 1,
      anon_sym_COMMA,
    STATE(14), 1,
      aux_sym_type_list_repeat1,
  [145] = 1,
    ACTIONS(51), 3,
      ts_builtin_sym_end,
      anon_sym_ATdef,
      sym_identifier,
  [151] = 3,
    ACTIONS(29), 1,
      anon_sym_COMMA,
    ACTIONS(53), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      aux_sym_type_list_repeat1,
  [161] = 3,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    ACTIONS(57), 1,
      anon_sym_COMMA,
    STATE(17), 1,
      aux_sym_argument_list_repeat1,
  [171] = 2,
    STATE(22), 1,
      sym__argument,
    ACTIONS(60), 2,
      sym_identifier,
      sym_lit,
  [179] = 3,
    ACTIONS(44), 1,
      anon_sym_COMMA,
    ACTIONS(62), 1,
      anon_sym_RPAREN,
    STATE(17), 1,
      aux_sym_argument_list_repeat1,
  [189] = 3,
    ACTIONS(64), 1,
      sym_identifier,
    STATE(7), 1,
      sym__atom,
    STATE(35), 1,
      sym_clause_list,
  [199] = 2,
    STATE(24), 1,
      sym_type,
    ACTIONS(21), 2,
      anon_sym_u32,
      anon_sym_str,
  [207] = 1,
    ACTIONS(55), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [212] = 2,
    ACTIONS(66), 1,
      anon_sym_DOT,
    ACTIONS(68), 1,
      anon_sym_COLON_DASH,
  [219] = 1,
    ACTIONS(46), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [224] = 2,
    ACTIONS(64), 1,
      sym_identifier,
    STATE(27), 1,
      sym__atom,
  [231] = 1,
    ACTIONS(70), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [236] = 1,
    ACTIONS(72), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
  [241] = 1,
    ACTIONS(66), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
  [246] = 1,
    ACTIONS(74), 1,
      anon_sym_DOT,
  [250] = 1,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
  [254] = 1,
    ACTIONS(78), 1,
      anon_sym_DOT,
  [258] = 1,
    ACTIONS(80), 1,
      anon_sym_RPAREN,
  [262] = 1,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
  [266] = 1,
    ACTIONS(84), 1,
      sym_identifier,
  [270] = 1,
    ACTIONS(86), 1,
      anon_sym_DOT,
  [274] = 1,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
  [278] = 1,
    ACTIONS(90), 1,
      anon_sym_RPAREN,
  [282] = 1,
    ACTIONS(92), 1,
      anon_sym_RPAREN,
  [286] = 1,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 20,
  [SMALL_STATE(4)] = 40,
  [SMALL_STATE(5)] = 51,
  [SMALL_STATE(6)] = 62,
  [SMALL_STATE(7)] = 73,
  [SMALL_STATE(8)] = 83,
  [SMALL_STATE(9)] = 93,
  [SMALL_STATE(10)] = 103,
  [SMALL_STATE(11)] = 109,
  [SMALL_STATE(12)] = 115,
  [SMALL_STATE(13)] = 125,
  [SMALL_STATE(14)] = 135,
  [SMALL_STATE(15)] = 145,
  [SMALL_STATE(16)] = 151,
  [SMALL_STATE(17)] = 161,
  [SMALL_STATE(18)] = 171,
  [SMALL_STATE(19)] = 179,
  [SMALL_STATE(20)] = 189,
  [SMALL_STATE(21)] = 199,
  [SMALL_STATE(22)] = 207,
  [SMALL_STATE(23)] = 212,
  [SMALL_STATE(24)] = 219,
  [SMALL_STATE(25)] = 224,
  [SMALL_STATE(26)] = 231,
  [SMALL_STATE(27)] = 236,
  [SMALL_STATE(28)] = 241,
  [SMALL_STATE(29)] = 246,
  [SMALL_STATE(30)] = 250,
  [SMALL_STATE(31)] = 254,
  [SMALL_STATE(32)] = 258,
  [SMALL_STATE(33)] = 262,
  [SMALL_STATE(34)] = 266,
  [SMALL_STATE(35)] = 270,
  [SMALL_STATE(36)] = 274,
  [SMALL_STATE(37)] = 278,
  [SMALL_STATE(38)] = 282,
  [SMALL_STATE(39)] = 286,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(36),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause_list, 1, .production_id = 4),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_list, 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clause_list_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_clause_list_repeat1, 2), SHIFT_REPEAT(25),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 7, .production_id = 5),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 2, .production_id = 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause_list, 2, .production_id = 4),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_list_repeat1, 2),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_list_repeat1, 2), SHIFT_REPEAT(21),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef, 6, .production_id = 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_list, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(18),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atom, 4, .production_id = 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clause_list_repeat1, 2, .production_id = 6),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [76] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
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
