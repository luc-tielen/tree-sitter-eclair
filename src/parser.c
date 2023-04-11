#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 75
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 55
#define ALIAS_COUNT 1
#define TOKEN_COUNT 29
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
  anon_sym_u32 = 9,
  anon_sym_string = 10,
  anon_sym_COLON_DASH = 11,
  anon_sym_BANG = 12,
  anon_sym_EQ = 13,
  anon_sym_BANG_EQ = 14,
  anon_sym_LT = 15,
  anon_sym_LT_EQ = 16,
  anon_sym_GT = 17,
  anon_sym_GT_EQ = 18,
  anon_sym_DASH = 19,
  anon_sym_PLUS = 20,
  anon_sym_STAR = 21,
  anon_sym_SLASH = 22,
  sym_identifier = 23,
  sym_number = 24,
  sym_string = 25,
  sym_wildcard = 26,
  sym_hole = 27,
  sym_comment = 28,
  sym_source_file = 29,
  sym__statement = 30,
  sym_typedef = 31,
  sym_extern = 32,
  sym_qualifier = 33,
  sym_type_list = 34,
  sym_type = 35,
  sym_fact = 36,
  sym__atom = 37,
  sym_rule = 38,
  sym_clause_list = 39,
  sym__clause = 40,
  sym_negation = 41,
  sym_comparison = 42,
  sym_compare_op = 43,
  sym_argument_list = 44,
  sym__expr = 45,
  sym_unary_expr = 46,
  sym_binary_expr = 47,
  sym__term = 48,
  sym__literal = 49,
  aux_sym_source_file_repeat1 = 50,
  aux_sym_typedef_repeat1 = 51,
  aux_sym_type_list_repeat1 = 52,
  aux_sym_clause_list_repeat1 = 53,
  aux_sym_argument_list_repeat1 = 54,
  alias_sym_clause = 55,
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
  [sym_type_list] = "type_list",
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
  [sym_type_list] = sym_type_list,
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
    {field_name, 1},
    {field_types, 3},
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

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(40);
      if (lookahead == '!') ADVANCE(53);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(42);
      if (lookahead == ')') ADVANCE(43);
      if (lookahead == '*') ADVANCE(62);
      if (lookahead == '+') ADVANCE(61);
      if (lookahead == ',') ADVANCE(48);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '<') ADVANCE(56);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == '>') ADVANCE(58);
      if (lookahead == '?') ADVANCE(68);
      if (lookahead == '@') ADVANCE(12);
      if (lookahead == '\\') SKIP(36)
      if (lookahead == '_') ADVANCE(67);
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(30);
      if (lookahead == 's') ADVANCE(25);
      if (lookahead == 'u') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
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
      if (lookahead == '*') ADVANCE(62);
      if (lookahead == '+') ADVANCE(61);
      if (lookahead == ',') ADVANCE(48);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == '<') ADVANCE(56);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == '>') ADVANCE(58);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(70);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(51);
      END_STATE();
    case 9:
      if (lookahead == '2') ADVANCE(49);
      END_STATE();
    case 10:
      if (lookahead == '3') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(55);
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
      if (lookahead == 'g') ADVANCE(50);
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
          lookahead != '\r') ADVANCE(70);
      if (lookahead == '\r') ADVANCE(71);
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
      if (lookahead == '!') ADVANCE(52);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(42);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '?') ADVANCE(68);
      if (lookahead == '@') ADVANCE(12);
      if (lookahead == '\\') SKIP(38)
      if (lookahead == '_') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
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
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(55);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(70);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_wildcard);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_hole);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(70);
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
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 39},
  [7] = {.lex_state = 39},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 39},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 39},
  [14] = {.lex_state = 39},
  [15] = {.lex_state = 39},
  [16] = {.lex_state = 39},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 39},
  [20] = {.lex_state = 39},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 39},
  [27] = {.lex_state = 39},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 39},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 39},
  [37] = {.lex_state = 39},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 39},
  [41] = {.lex_state = 39},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 39},
  [44] = {.lex_state = 39},
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
  [56] = {.lex_state = 39},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 39},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 39},
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
    [sym_source_file] = STATE(71),
    [sym__statement] = STATE(27),
    [sym_typedef] = STATE(27),
    [sym_extern] = STATE(27),
    [sym_fact] = STATE(27),
    [sym__atom] = STATE(69),
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
    STATE(63), 1,
      sym_clause_list,
    STATE(21), 2,
      sym__term,
      sym__literal,
    STATE(25), 3,
      sym__expr,
      sym_unary_expr,
      sym_binary_expr,
    STATE(46), 3,
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
    STATE(60), 3,
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
    STATE(73), 1,
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
  [115] = 4,
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
  [139] = 9,
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
    STATE(65), 1,
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
    STATE(17), 3,
      sym__expr,
      sym_unary_expr,
      sym_binary_expr,
    ACTIONS(21), 4,
      sym_number,
      sym_string,
      sym_wildcard,
      sym_hole,
  [204] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 9,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
  [229] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 9,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
  [254] = 3,
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
  [275] = 8,
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
  [306] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_PLUS,
    ACTIONS(43), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 7,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [335] = 8,
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
  [366] = 8,
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
  [397] = 8,
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
  [428] = 8,
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
  [459] = 3,
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
  [480] = 3,
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
  [501] = 8,
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
  [532] = 8,
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
    STATE(30), 3,
      sym__expr,
      sym_unary_expr,
      sym_binary_expr,
    ACTIONS(21), 4,
      sym_number,
      sym_string,
      sym_wildcard,
      sym_hole,
  [563] = 3,
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
  [584] = 3,
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
    ACTIONS(33), 1,
      anon_sym_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_PLUS,
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
    STATE(69), 1,
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
    STATE(69), 1,
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
    ACTIONS(33), 1,
      anon_sym_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_PLUS,
    ACTIONS(80), 1,
      anon_sym_RPAREN,
    ACTIONS(82), 1,
      anon_sym_COMMA,
    STATE(45), 1,
      aux_sym_argument_list_repeat1,
  [756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 7,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_identifier,
      sym_number,
      sym_string,
      sym_wildcard,
      sym_hole,
  [769] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_PLUS,
    ACTIONS(86), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
  [789] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_PLUS,
    ACTIONS(88), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [809] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_PLUS,
    ACTIONS(90), 1,
      anon_sym_RPAREN,
  [828] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_DOT,
    ACTIONS(94), 2,
      anon_sym_input,
      anon_sym_output,
    STATE(35), 2,
      sym_qualifier,
      aux_sym_typedef_repeat1,
  [843] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_DOT,
    ACTIONS(94), 2,
      anon_sym_input,
      anon_sym_output,
    STATE(33), 2,
      sym_qualifier,
      aux_sym_typedef_repeat1,
  [858] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DOT,
    ACTIONS(100), 2,
      anon_sym_input,
      anon_sym_output,
    STATE(35), 2,
      sym_qualifier,
      aux_sym_typedef_repeat1,
  [873] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 4,
      ts_builtin_sym_end,
      anon_sym_ATdef,
      anon_sym_ATextern,
      sym_identifier,
  [883] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 4,
      ts_builtin_sym_end,
      anon_sym_ATdef,
      anon_sym_ATextern,
      sym_identifier,
  [893] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(55), 1,
      sym_type,
    STATE(61), 1,
      sym_type_list,
    ACTIONS(107), 2,
      anon_sym_u32,
      anon_sym_string,
  [907] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(55), 1,
      sym_type,
    STATE(64), 1,
      sym_type_list,
    ACTIONS(107), 2,
      anon_sym_u32,
      anon_sym_string,
  [921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 4,
      ts_builtin_sym_end,
      anon_sym_ATdef,
      anon_sym_ATextern,
      sym_identifier,
  [931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 4,
      ts_builtin_sym_end,
      anon_sym_ATdef,
      anon_sym_ATextern,
      sym_identifier,
  [941] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_DOT,
    STATE(62), 1,
      sym_type,
    ACTIONS(107), 2,
      anon_sym_u32,
      anon_sym_string,
  [955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 4,
      ts_builtin_sym_end,
      anon_sym_ATdef,
      anon_sym_ATextern,
      sym_identifier,
  [965] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 4,
      ts_builtin_sym_end,
      anon_sym_ATdef,
      anon_sym_ATextern,
      sym_identifier,
  [975] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_COMMA,
    ACTIONS(119), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      aux_sym_argument_list_repeat1,
  [988] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_DOT,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    STATE(49), 1,
      aux_sym_clause_list_repeat1,
  [1001] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_DOT,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    STATE(47), 1,
      aux_sym_clause_list_repeat1,
  [1014] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_RPAREN,
    ACTIONS(132), 1,
      anon_sym_COMMA,
    STATE(48), 1,
      aux_sym_argument_list_repeat1,
  [1027] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    ACTIONS(135), 1,
      anon_sym_DOT,
    STATE(47), 1,
      aux_sym_clause_list_repeat1,
  [1040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 3,
      anon_sym_DOT,
      anon_sym_input,
      anon_sym_output,
  [1049] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(58), 1,
      sym_type,
    ACTIONS(107), 2,
      anon_sym_u32,
      anon_sym_string,
  [1060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COMMA,
  [1069] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_RPAREN,
    ACTIONS(143), 1,
      anon_sym_COMMA,
    STATE(53), 1,
      aux_sym_type_list_repeat1,
  [1082] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_RPAREN,
    ACTIONS(148), 1,
      anon_sym_COMMA,
    STATE(53), 1,
      aux_sym_type_list_repeat1,
  [1095] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_COMMA,
    ACTIONS(150), 1,
      anon_sym_RPAREN,
    STATE(54), 1,
      aux_sym_type_list_repeat1,
  [1108] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      sym_identifier,
    STATE(59), 1,
      sym__atom,
  [1118] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DOT,
    ACTIONS(154), 1,
      anon_sym_COLON_DASH,
  [1128] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1136] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
  [1144] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
  [1152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_RPAREN,
  [1159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_DOT,
  [1166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_DOT,
  [1173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_RPAREN,
  [1180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_RPAREN,
  [1187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
  [1194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
  [1201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
  [1208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_DOT,
  [1215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      sym_identifier,
  [1222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      ts_builtin_sym_end,
  [1229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
  [1236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_RPAREN,
  [1243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 81,
  [SMALL_STATE(5)] = 115,
  [SMALL_STATE(6)] = 139,
  [SMALL_STATE(7)] = 173,
  [SMALL_STATE(8)] = 204,
  [SMALL_STATE(9)] = 229,
  [SMALL_STATE(10)] = 254,
  [SMALL_STATE(11)] = 275,
  [SMALL_STATE(12)] = 306,
  [SMALL_STATE(13)] = 335,
  [SMALL_STATE(14)] = 366,
  [SMALL_STATE(15)] = 397,
  [SMALL_STATE(16)] = 428,
  [SMALL_STATE(17)] = 459,
  [SMALL_STATE(18)] = 480,
  [SMALL_STATE(19)] = 501,
  [SMALL_STATE(20)] = 532,
  [SMALL_STATE(21)] = 563,
  [SMALL_STATE(22)] = 584,
  [SMALL_STATE(23)] = 605,
  [SMALL_STATE(24)] = 626,
  [SMALL_STATE(25)] = 648,
  [SMALL_STATE(26)] = 677,
  [SMALL_STATE(27)] = 704,
  [SMALL_STATE(28)] = 731,
  [SMALL_STATE(29)] = 756,
  [SMALL_STATE(30)] = 769,
  [SMALL_STATE(31)] = 789,
  [SMALL_STATE(32)] = 809,
  [SMALL_STATE(33)] = 828,
  [SMALL_STATE(34)] = 843,
  [SMALL_STATE(35)] = 858,
  [SMALL_STATE(36)] = 873,
  [SMALL_STATE(37)] = 883,
  [SMALL_STATE(38)] = 893,
  [SMALL_STATE(39)] = 907,
  [SMALL_STATE(40)] = 921,
  [SMALL_STATE(41)] = 931,
  [SMALL_STATE(42)] = 941,
  [SMALL_STATE(43)] = 955,
  [SMALL_STATE(44)] = 965,
  [SMALL_STATE(45)] = 975,
  [SMALL_STATE(46)] = 988,
  [SMALL_STATE(47)] = 1001,
  [SMALL_STATE(48)] = 1014,
  [SMALL_STATE(49)] = 1027,
  [SMALL_STATE(50)] = 1040,
  [SMALL_STATE(51)] = 1049,
  [SMALL_STATE(52)] = 1060,
  [SMALL_STATE(53)] = 1069,
  [SMALL_STATE(54)] = 1082,
  [SMALL_STATE(55)] = 1095,
  [SMALL_STATE(56)] = 1108,
  [SMALL_STATE(57)] = 1118,
  [SMALL_STATE(58)] = 1128,
  [SMALL_STATE(59)] = 1136,
  [SMALL_STATE(60)] = 1144,
  [SMALL_STATE(61)] = 1152,
  [SMALL_STATE(62)] = 1159,
  [SMALL_STATE(63)] = 1166,
  [SMALL_STATE(64)] = 1173,
  [SMALL_STATE(65)] = 1180,
  [SMALL_STATE(66)] = 1187,
  [SMALL_STATE(67)] = 1194,
  [SMALL_STATE(68)] = 1201,
  [SMALL_STATE(69)] = 1208,
  [SMALL_STATE(70)] = 1215,
  [SMALL_STATE(71)] = 1222,
  [SMALL_STATE(72)] = 1229,
  [SMALL_STATE(73)] = 1236,
  [SMALL_STATE(74)] = 1243,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__term, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__term, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expr, 3, .production_id = 6),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expr, 3, .production_id = 6),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 3, .production_id = 5),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 3, .production_id = 5),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 2, .production_id = 2),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 2, .production_id = 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__term, 1, .production_id = 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__term, 1, .production_id = 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1, .production_id = 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 1, .production_id = 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atom, 4, .production_id = 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atom, 4, .production_id = 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__clause, 1, .production_id = 8),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(70),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(74),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(72),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1, .production_id = 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compare_op, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 3, .production_id = 11),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, .production_id = 5),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typedef_repeat1, 2),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typedef_repeat1, 2), SHIFT_REPEAT(50),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern, 6, .production_id = 7),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef, 7, .production_id = 7),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 2, .production_id = 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef, 6, .production_id = 7),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern, 7, .production_id = 7),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 7, .production_id = 10),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2, .production_id = 4),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause_list, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clause_list_repeat1, 2),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_clause_list_repeat1, 2), SHIFT_REPEAT(3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, .production_id = 4),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, .production_id = 4), SHIFT_REPEAT(19),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause_list, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualifier, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_list_repeat1, 2),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_list_repeat1, 2), SHIFT_REPEAT(51),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_list, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_list, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negation, 2, .production_id = 9),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [176] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
