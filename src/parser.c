#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 40
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 1
#define TOKEN_COUNT 12
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
  sym_identifier = 9,
  sym_number = 10,
  sym_string = 11,
  sym_source_file = 12,
  sym__statement = 13,
  sym_typedef = 14,
  sym_type_list = 15,
  sym_type = 16,
  sym_fact = 17,
  sym__atom = 18,
  sym_rule = 19,
  sym_clause_list = 20,
  sym_argument_list = 21,
  sym__argument = 22,
  aux_sym_source_file_repeat1 = 23,
  aux_sym_type_list_repeat1 = 24,
  aux_sym_clause_list_repeat1 = 25,
  aux_sym_argument_list_repeat1 = 26,
  alias_sym_clause = 27,
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
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_string] = "string",
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
  [anon_sym_string] = anon_sym_string,
  [anon_sym_COLON_DASH] = anon_sym_COLON_DASH,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
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
  [anon_sym_string] = {
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
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
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
      if (eof) ADVANCE(15);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '(') ADVANCE(17);
      if (lookahead == ')') ADVANCE(18);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == ':') ADVANCE(2);
      if (lookahead == '@') ADVANCE(5);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == 'u') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(35);
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
      if (lookahead == '@') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
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
  [7] = {.lex_state = 12},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 14},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 14},
  [12] = {.lex_state = 14},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 14},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 12},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 14},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 14},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
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
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_COLON_DASH] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(34),
    [sym__statement] = STATE(2),
    [sym_typedef] = STATE(2),
    [sym_fact] = STATE(2),
    [sym__atom] = STATE(30),
    [sym_rule] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_ATdef] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(5), 1,
      anon_sym_ATdef,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    STATE(30), 1,
      sym__atom,
    STATE(3), 5,
      sym__statement,
      sym_typedef,
      sym_fact,
      sym_rule,
      aux_sym_source_file_repeat1,
  [20] = 5,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_ATdef,
    ACTIONS(16), 1,
      sym_identifier,
    STATE(30), 1,
      sym__atom,
    STATE(3), 5,
      sym__statement,
      sym_typedef,
      sym_fact,
      sym_rule,
      aux_sym_source_file_repeat1,
  [40] = 3,
    STATE(13), 1,
      sym__argument,
    STATE(37), 1,
      sym_argument_list,
    ACTIONS(19), 3,
      sym_identifier,
      sym_number,
      sym_string,
  [52] = 3,
    STATE(13), 1,
      sym__argument,
    STATE(38), 1,
      sym_argument_list,
    ACTIONS(19), 3,
      sym_identifier,
      sym_number,
      sym_string,
  [64] = 2,
    STATE(22), 1,
      sym__argument,
    ACTIONS(21), 3,
      sym_identifier,
      sym_number,
      sym_string,
  [73] = 3,
    STATE(16), 1,
      sym_type,
    STATE(32), 1,
      sym_type_list,
    ACTIONS(23), 2,
      anon_sym_u32,
      anon_sym_string,
  [84] = 3,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COMMA,
    STATE(14), 1,
      aux_sym_clause_list_repeat1,
  [94] = 3,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(8), 1,
      sym__atom,
    STATE(35), 1,
      sym_clause_list,
  [104] = 3,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_COMMA,
    STATE(10), 1,
      aux_sym_clause_list_repeat1,
  [114] = 1,
    ACTIONS(36), 3,
      ts_builtin_sym_end,
      anon_sym_ATdef,
      sym_identifier,
  [120] = 1,
    ACTIONS(38), 3,
      ts_builtin_sym_end,
      anon_sym_ATdef,
      sym_identifier,
  [126] = 3,
    ACTIONS(40), 1,
      anon_sym_RPAREN,
    ACTIONS(42), 1,
      anon_sym_COMMA,
    STATE(19), 1,
      aux_sym_argument_list_repeat1,
  [136] = 3,
    ACTIONS(27), 1,
      anon_sym_COMMA,
    ACTIONS(44), 1,
      anon_sym_DOT,
    STATE(10), 1,
      aux_sym_clause_list_repeat1,
  [146] = 3,
    ACTIONS(46), 1,
      anon_sym_RPAREN,
    ACTIONS(48), 1,
      anon_sym_COMMA,
    STATE(15), 1,
      aux_sym_type_list_repeat1,
  [156] = 3,
    ACTIONS(51), 1,
      anon_sym_RPAREN,
    ACTIONS(53), 1,
      anon_sym_COMMA,
    STATE(20), 1,
      aux_sym_type_list_repeat1,
  [166] = 1,
    ACTIONS(55), 3,
      ts_builtin_sym_end,
      anon_sym_ATdef,
      sym_identifier,
  [172] = 3,
    ACTIONS(57), 1,
      anon_sym_RPAREN,
    ACTIONS(59), 1,
      anon_sym_COMMA,
    STATE(18), 1,
      aux_sym_argument_list_repeat1,
  [182] = 3,
    ACTIONS(42), 1,
      anon_sym_COMMA,
    ACTIONS(62), 1,
      anon_sym_RPAREN,
    STATE(18), 1,
      aux_sym_argument_list_repeat1,
  [192] = 3,
    ACTIONS(53), 1,
      anon_sym_COMMA,
    ACTIONS(64), 1,
      anon_sym_RPAREN,
    STATE(15), 1,
      aux_sym_type_list_repeat1,
  [202] = 2,
    STATE(24), 1,
      sym_type,
    ACTIONS(23), 2,
      anon_sym_u32,
      anon_sym_string,
  [210] = 1,
    ACTIONS(57), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [215] = 2,
    ACTIONS(66), 1,
      anon_sym_DOT,
    ACTIONS(68), 1,
      anon_sym_COLON_DASH,
  [222] = 1,
    ACTIONS(46), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [227] = 2,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(27), 1,
      sym__atom,
  [234] = 1,
    ACTIONS(70), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [239] = 1,
    ACTIONS(72), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
  [244] = 1,
    ACTIONS(66), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
  [249] = 1,
    ACTIONS(74), 1,
      anon_sym_DOT,
  [253] = 1,
    ACTIONS(76), 1,
      anon_sym_DOT,
  [257] = 1,
    ACTIONS(78), 1,
      sym_identifier,
  [261] = 1,
    ACTIONS(80), 1,
      anon_sym_RPAREN,
  [265] = 1,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
  [269] = 1,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
  [273] = 1,
    ACTIONS(86), 1,
      anon_sym_DOT,
  [277] = 1,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
  [281] = 1,
    ACTIONS(90), 1,
      anon_sym_RPAREN,
  [285] = 1,
    ACTIONS(92), 1,
      anon_sym_RPAREN,
  [289] = 1,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 20,
  [SMALL_STATE(4)] = 40,
  [SMALL_STATE(5)] = 52,
  [SMALL_STATE(6)] = 64,
  [SMALL_STATE(7)] = 73,
  [SMALL_STATE(8)] = 84,
  [SMALL_STATE(9)] = 94,
  [SMALL_STATE(10)] = 104,
  [SMALL_STATE(11)] = 114,
  [SMALL_STATE(12)] = 120,
  [SMALL_STATE(13)] = 126,
  [SMALL_STATE(14)] = 136,
  [SMALL_STATE(15)] = 146,
  [SMALL_STATE(16)] = 156,
  [SMALL_STATE(17)] = 166,
  [SMALL_STATE(18)] = 172,
  [SMALL_STATE(19)] = 182,
  [SMALL_STATE(20)] = 192,
  [SMALL_STATE(21)] = 202,
  [SMALL_STATE(22)] = 210,
  [SMALL_STATE(23)] = 215,
  [SMALL_STATE(24)] = 222,
  [SMALL_STATE(25)] = 227,
  [SMALL_STATE(26)] = 234,
  [SMALL_STATE(27)] = 239,
  [SMALL_STATE(28)] = 244,
  [SMALL_STATE(29)] = 249,
  [SMALL_STATE(30)] = 253,
  [SMALL_STATE(31)] = 257,
  [SMALL_STATE(32)] = 261,
  [SMALL_STATE(33)] = 265,
  [SMALL_STATE(34)] = 269,
  [SMALL_STATE(35)] = 273,
  [SMALL_STATE(36)] = 277,
  [SMALL_STATE(37)] = 281,
  [SMALL_STATE(38)] = 285,
  [SMALL_STATE(39)] = 289,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(31),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(36),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause_list, 1, .production_id = 4),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clause_list_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_clause_list_repeat1, 2), SHIFT_REPEAT(25),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 2, .production_id = 1),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 7, .production_id = 5),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause_list, 2, .production_id = 4),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_list_repeat1, 2),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_list_repeat1, 2), SHIFT_REPEAT(21),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_list, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef, 6, .production_id = 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(6),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_list, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atom, 4, .production_id = 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clause_list_repeat1, 2, .production_id = 6),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [84] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
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
