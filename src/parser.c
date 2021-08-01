#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 28
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 1
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 6

enum {
  anon_sym_DOT = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_COLON_DASH = 4,
  anon_sym_COMMA = 5,
  sym_identifier = 6,
  sym_lit = 7,
  sym_source_file = 8,
  sym__statement = 9,
  sym_fact = 10,
  sym__atom = 11,
  sym_rule = 12,
  sym_clause_list = 13,
  sym_argument_list = 14,
  sym__argument = 15,
  aux_sym_source_file_repeat1 = 16,
  aux_sym_clause_list_repeat1 = 17,
  aux_sym_argument_list_repeat1 = 18,
  alias_sym_clause = 19,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DOT] = ".",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON_DASH] = ":-",
  [anon_sym_COMMA] = ",",
  [sym_identifier] = "identifier",
  [sym_lit] = "lit",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_fact] = "fact",
  [sym__atom] = "_atom",
  [sym_rule] = "rule",
  [sym_clause_list] = "clause_list",
  [sym_argument_list] = "argument_list",
  [sym__argument] = "_argument",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_clause_list_repeat1] = "clause_list_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [alias_sym_clause] = "clause",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON_DASH] = anon_sym_COLON_DASH,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_identifier] = sym_identifier,
  [sym_lit] = sym_lit,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_fact] = sym_fact,
  [sym__atom] = sym__atom,
  [sym_rule] = sym_rule,
  [sym_clause_list] = sym_clause_list,
  [sym_argument_list] = sym_argument_list,
  [sym__argument] = sym__argument,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_clause_list_repeat1] = aux_sym_clause_list_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [alias_sym_clause] = alias_sym_clause,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOT] = {
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
  [anon_sym_COLON_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arguments] = "arguments",
  [field_clauses] = "clauses",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 0, .length = 2},
  [4] = {.index = 4, .length = 3},
  [5] = {.index = 7, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_arguments, 0, .inherited = true},
    {field_name, 0, .inherited = true},
  [2] =
    {field_arguments, 2},
    {field_name, 0},
  [4] =
    {field_arguments, 2},
    {field_clauses, 5},
    {field_name, 0},
  [7] =
    {field_arguments, 1, .inherited = true},
    {field_name, 1, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [0] = alias_sym_clause,
  },
  [5] = {
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
      if (eof) ADVANCE(2);
      if (lookahead == '(') ADVANCE(4);
      if (lookahead == ')') ADVANCE(5);
      if (lookahead == ',') ADVANCE(7);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == ':') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 1:
      if (lookahead == '-') ADVANCE(6);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON_DASH] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_lit] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(27),
    [sym__statement] = STATE(2),
    [sym_fact] = STATE(2),
    [sym__atom] = STATE(25),
    [sym_rule] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    STATE(25), 1,
      sym__atom,
    STATE(3), 4,
      sym__statement,
      sym_fact,
      sym_rule,
      aux_sym_source_file_repeat1,
  [16] = 4,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(25), 1,
      sym__atom,
    STATE(3), 4,
      sym__statement,
      sym_fact,
      sym_rule,
      aux_sym_source_file_repeat1,
  [32] = 3,
    STATE(10), 1,
      sym__argument,
    STATE(26), 1,
      sym_argument_list,
    ACTIONS(14), 2,
      sym_identifier,
      sym_lit,
  [43] = 3,
    STATE(10), 1,
      sym__argument,
    STATE(24), 1,
      sym_argument_list,
    ACTIONS(14), 2,
      sym_identifier,
      sym_lit,
  [54] = 3,
    ACTIONS(16), 1,
      sym_identifier,
    STATE(9), 1,
      sym__atom,
    STATE(23), 1,
      sym_clause_list,
  [64] = 3,
    ACTIONS(18), 1,
      anon_sym_DOT,
    ACTIONS(20), 1,
      anon_sym_COMMA,
    STATE(7), 1,
      aux_sym_clause_list_repeat1,
  [74] = 3,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COMMA,
    STATE(7), 1,
      aux_sym_clause_list_repeat1,
  [84] = 3,
    ACTIONS(25), 1,
      anon_sym_COMMA,
    ACTIONS(27), 1,
      anon_sym_DOT,
    STATE(8), 1,
      aux_sym_clause_list_repeat1,
  [94] = 3,
    ACTIONS(29), 1,
      anon_sym_RPAREN,
    ACTIONS(31), 1,
      anon_sym_COMMA,
    STATE(13), 1,
      aux_sym_argument_list_repeat1,
  [104] = 3,
    ACTIONS(33), 1,
      anon_sym_RPAREN,
    ACTIONS(35), 1,
      anon_sym_COMMA,
    STATE(11), 1,
      aux_sym_argument_list_repeat1,
  [114] = 2,
    STATE(15), 1,
      sym__argument,
    ACTIONS(38), 2,
      sym_identifier,
      sym_lit,
  [122] = 3,
    ACTIONS(31), 1,
      anon_sym_COMMA,
    ACTIONS(40), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      aux_sym_argument_list_repeat1,
  [132] = 1,
    ACTIONS(42), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [137] = 1,
    ACTIONS(33), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [142] = 2,
    ACTIONS(44), 1,
      anon_sym_DOT,
    ACTIONS(46), 1,
      anon_sym_COLON_DASH,
  [149] = 2,
    ACTIONS(16), 1,
      sym_identifier,
    STATE(19), 1,
      sym__atom,
  [156] = 1,
    ACTIONS(48), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [161] = 1,
    ACTIONS(50), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
  [166] = 1,
    ACTIONS(44), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
  [171] = 1,
    ACTIONS(52), 1,
      anon_sym_LPAREN,
  [175] = 1,
    ACTIONS(54), 1,
      anon_sym_LPAREN,
  [179] = 1,
    ACTIONS(56), 1,
      anon_sym_DOT,
  [183] = 1,
    ACTIONS(58), 1,
      anon_sym_RPAREN,
  [187] = 1,
    ACTIONS(60), 1,
      anon_sym_DOT,
  [191] = 1,
    ACTIONS(62), 1,
      anon_sym_RPAREN,
  [195] = 1,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 16,
  [SMALL_STATE(4)] = 32,
  [SMALL_STATE(5)] = 43,
  [SMALL_STATE(6)] = 54,
  [SMALL_STATE(7)] = 64,
  [SMALL_STATE(8)] = 74,
  [SMALL_STATE(9)] = 84,
  [SMALL_STATE(10)] = 94,
  [SMALL_STATE(11)] = 104,
  [SMALL_STATE(12)] = 114,
  [SMALL_STATE(13)] = 122,
  [SMALL_STATE(14)] = 132,
  [SMALL_STATE(15)] = 137,
  [SMALL_STATE(16)] = 142,
  [SMALL_STATE(17)] = 149,
  [SMALL_STATE(18)] = 156,
  [SMALL_STATE(19)] = 161,
  [SMALL_STATE(20)] = 166,
  [SMALL_STATE(21)] = 171,
  [SMALL_STATE(22)] = 175,
  [SMALL_STATE(23)] = 179,
  [SMALL_STATE(24)] = 183,
  [SMALL_STATE(25)] = 187,
  [SMALL_STATE(26)] = 191,
  [SMALL_STATE(27)] = 195,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [14] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [16] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clause_list_repeat1, 2),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_clause_list_repeat1, 2), SHIFT_REPEAT(17),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause_list, 2, .production_id = 3),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause_list, 1, .production_id = 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(12),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 2, .production_id = 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atom, 4, .production_id = 2),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 7, .production_id = 4),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clause_list_repeat1, 2, .production_id = 5),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [64] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
