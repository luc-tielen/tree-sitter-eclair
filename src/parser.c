#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 74
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 51
#define ALIAS_COUNT 1
#define TOKEN_COUNT 27
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
  anon_sym_EQ = 12,
  anon_sym_BANG_EQ = 13,
  anon_sym_LT = 14,
  anon_sym_LT_EQ = 15,
  anon_sym_GT = 16,
  anon_sym_GT_EQ = 17,
  anon_sym_DASH = 18,
  anon_sym_PLUS = 19,
  anon_sym_STAR = 20,
  anon_sym_SLASH = 21,
  sym_identifier = 22,
  sym_number = 23,
  sym_string = 24,
  sym_hole = 25,
  sym_comment = 26,
  sym_source_file = 27,
  sym__statement = 28,
  sym_typedef = 29,
  sym_extern = 30,
  sym_qualifier = 31,
  sym_type_list = 32,
  sym_type = 33,
  sym_fact = 34,
  sym__atom = 35,
  sym_rule = 36,
  sym_clause_list = 37,
  sym_comparison = 38,
  sym_compare_op = 39,
  sym_argument_list = 40,
  sym__expr = 41,
  sym_unary_expr = 42,
  sym_binary_expr = 43,
  sym__term = 44,
  sym__literal = 45,
  aux_sym_source_file_repeat1 = 46,
  aux_sym_typedef_repeat1 = 47,
  aux_sym_type_list_repeat1 = 48,
  aux_sym_clause_list_repeat1 = 49,
  aux_sym_argument_list_repeat1 = 50,
  alias_sym_clause = 51,
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
  [sym_extern] = "extern",
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
  [anon_sym_ATextern] = anon_sym_ATextern,
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
  [sym_extern] = sym_extern,
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
  [9] = {.index = 23, .length = 3},
  [10] = {.index = 12, .length = 2},
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
      if (eof) ADVANCE(37);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == '*') ADVANCE(57);
      if (lookahead == '+') ADVANCE(56);
      if (lookahead == ',') ADVANCE(45);
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == '<') ADVANCE(51);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead == '>') ADVANCE(53);
      if (lookahead == '?') ADVANCE(62);
      if (lookahead == '@') ADVANCE(9);
      if (lookahead == '\\') SKIP(33)
      if (lookahead == 'i') ADVANCE(15);
      if (lookahead == 'o') ADVANCE(27);
      if (lookahead == 's') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(64);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(48);
      END_STATE();
    case 6:
      if (lookahead == '2') ADVANCE(46);
      END_STATE();
    case 7:
      if (lookahead == '3') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(50);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(10);
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 12:
      if (lookahead == 'f') ADVANCE(38);
      END_STATE();
    case 13:
      if (lookahead == 'g') ADVANCE(47);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 18:
      if (lookahead == 'p') ADVANCE(28);
      END_STATE();
    case 19:
      if (lookahead == 'p') ADVANCE(29);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 27:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 28:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 29:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 30:
      if (lookahead == 'x') ADVANCE(25);
      END_STATE();
    case 31:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(65);
      END_STATE();
    case 32:
      if (eof) ADVANCE(37);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 33:
      if (eof) ADVANCE(37);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(32)
      END_STATE();
    case 34:
      if (eof) ADVANCE(37);
      if (lookahead == '\n') SKIP(36)
      END_STATE();
    case 35:
      if (eof) ADVANCE(37);
      if (lookahead == '\n') SKIP(36)
      if (lookahead == '\r') SKIP(34)
      END_STATE();
    case 36:
      if (eof) ADVANCE(37);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '?') ADVANCE(62);
      if (lookahead == '@') ADVANCE(9);
      if (lookahead == '\\') SKIP(35)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_ATdef);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_ATextern);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(64);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_hole);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(31);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 36},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 36},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 36},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 36},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 36},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 36},
  [18] = {.lex_state = 36},
  [19] = {.lex_state = 36},
  [20] = {.lex_state = 36},
  [21] = {.lex_state = 36},
  [22] = {.lex_state = 36},
  [23] = {.lex_state = 36},
  [24] = {.lex_state = 36},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 36},
  [28] = {.lex_state = 36},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 36},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 36},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 36},
  [40] = {.lex_state = 36},
  [41] = {.lex_state = 36},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 36},
  [45] = {.lex_state = 36},
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
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 36},
  [73] = {.lex_state = 36},
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
    [sym_source_file] = STATE(70),
    [sym__statement] = STATE(28),
    [sym_typedef] = STATE(28),
    [sym_extern] = STATE(28),
    [sym_fact] = STATE(28),
    [sym__atom] = STATE(69),
    [sym_rule] = STATE(28),
    [aux_sym_source_file_repeat1] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_ATdef] = ACTIONS(7),
    [anon_sym_ATextern] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(15), 10,
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
  [24] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(15), 1,
      sym__atom,
    STATE(47), 1,
      sym_comparison,
    STATE(61), 1,
      sym_clause_list,
    STATE(16), 2,
      sym__term,
      sym__literal,
    ACTIONS(25), 3,
      sym_number,
      sym_string,
      sym_hole,
    STATE(26), 3,
      sym__expr,
      sym_unary_expr,
      sym_binary_expr,
  [60] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(27), 10,
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
  [81] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(31), 10,
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
  [102] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(4), 1,
      sym__atom,
    STATE(62), 1,
      sym_argument_list,
    STATE(16), 2,
      sym__term,
      sym__literal,
    ACTIONS(25), 3,
      sym_number,
      sym_string,
      sym_hole,
    STATE(29), 3,
      sym__expr,
      sym_unary_expr,
      sym_binary_expr,
  [135] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(35), 10,
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
  [156] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_PLUS,
    ACTIONS(47), 1,
      anon_sym_STAR,
    ACTIONS(49), 1,
      anon_sym_SLASH,
    ACTIONS(41), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 7,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [185] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(25), 1,
      sym__atom,
    STATE(60), 1,
      sym_comparison,
    STATE(16), 2,
      sym__term,
      sym__literal,
    ACTIONS(25), 3,
      sym_number,
      sym_string,
      sym_hole,
    STATE(26), 3,
      sym__expr,
      sym_unary_expr,
      sym_binary_expr,
  [218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(35), 10,
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
  [239] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(4), 1,
      sym__atom,
    STATE(65), 1,
      sym_argument_list,
    STATE(16), 2,
      sym__term,
      sym__literal,
    ACTIONS(25), 3,
      sym_number,
      sym_string,
      sym_hole,
    STATE(29), 3,
      sym__expr,
      sym_unary_expr,
      sym_binary_expr,
  [272] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_STAR,
    ACTIONS(49), 1,
      anon_sym_SLASH,
    ACTIONS(37), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(35), 9,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
  [297] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(51), 10,
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
  [318] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_STAR,
    ACTIONS(49), 1,
      anon_sym_SLASH,
    ACTIONS(37), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(35), 9,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
  [343] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_DOT,
    ACTIONS(57), 1,
      anon_sym_COMMA,
    STATE(55), 1,
      aux_sym_clause_list_repeat1,
    ACTIONS(29), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(27), 7,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [370] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(59), 10,
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
  [391] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(4), 1,
      sym__atom,
    STATE(16), 2,
      sym__term,
      sym__literal,
    ACTIONS(25), 3,
      sym_number,
      sym_string,
      sym_hole,
    STATE(32), 3,
      sym__expr,
      sym_unary_expr,
      sym_binary_expr,
  [421] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(4), 1,
      sym__atom,
    STATE(16), 2,
      sym__term,
      sym__literal,
    ACTIONS(25), 3,
      sym_number,
      sym_string,
      sym_hole,
    STATE(8), 3,
      sym__expr,
      sym_unary_expr,
      sym_binary_expr,
  [451] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(4), 1,
      sym__atom,
    STATE(16), 2,
      sym__term,
      sym__literal,
    ACTIONS(25), 3,
      sym_number,
      sym_string,
      sym_hole,
    STATE(34), 3,
      sym__expr,
      sym_unary_expr,
      sym_binary_expr,
  [481] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(4), 1,
      sym__atom,
    STATE(16), 2,
      sym__term,
      sym__literal,
    ACTIONS(25), 3,
      sym_number,
      sym_string,
      sym_hole,
    STATE(31), 3,
      sym__expr,
      sym_unary_expr,
      sym_binary_expr,
  [511] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(4), 1,
      sym__atom,
    STATE(16), 2,
      sym__term,
      sym__literal,
    ACTIONS(25), 3,
      sym_number,
      sym_string,
      sym_hole,
    STATE(14), 3,
      sym__expr,
      sym_unary_expr,
      sym_binary_expr,
  [541] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(4), 1,
      sym__atom,
    STATE(16), 2,
      sym__term,
      sym__literal,
    ACTIONS(25), 3,
      sym_number,
      sym_string,
      sym_hole,
    STATE(12), 3,
      sym__expr,
      sym_unary_expr,
      sym_binary_expr,
  [571] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(4), 1,
      sym__atom,
    STATE(16), 2,
      sym__term,
      sym__literal,
    ACTIONS(25), 3,
      sym_number,
      sym_string,
      sym_hole,
    STATE(10), 3,
      sym__expr,
      sym_unary_expr,
      sym_binary_expr,
  [601] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(4), 1,
      sym__atom,
    STATE(16), 2,
      sym__term,
      sym__literal,
    ACTIONS(25), 3,
      sym_number,
      sym_string,
      sym_hole,
    STATE(7), 3,
      sym__expr,
      sym_unary_expr,
      sym_binary_expr,
  [631] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
    ACTIONS(29), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(27), 7,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [653] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_PLUS,
    ACTIONS(47), 1,
      anon_sym_STAR,
    ACTIONS(49), 1,
      anon_sym_SLASH,
    STATE(20), 1,
      sym_compare_op,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [682] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 1,
      anon_sym_ATdef,
    ACTIONS(74), 1,
      anon_sym_ATextern,
    ACTIONS(77), 1,
      sym_identifier,
    STATE(69), 1,
      sym__atom,
    STATE(27), 6,
      sym__statement,
      sym_typedef,
      sym_extern,
      sym_fact,
      sym_rule,
      aux_sym_source_file_repeat1,
  [709] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_ATdef,
    ACTIONS(9), 1,
      anon_sym_ATextern,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    STATE(69), 1,
      sym__atom,
    STATE(27), 6,
      sym__statement,
      sym_typedef,
      sym_extern,
      sym_fact,
      sym_rule,
      aux_sym_source_file_repeat1,
  [736] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_PLUS,
    ACTIONS(47), 1,
      anon_sym_STAR,
    ACTIONS(49), 1,
      anon_sym_SLASH,
    ACTIONS(82), 1,
      anon_sym_RPAREN,
    ACTIONS(84), 1,
      anon_sym_COMMA,
    STATE(46), 1,
      aux_sym_argument_list_repeat1,
  [761] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 6,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_identifier,
      sym_number,
      sym_string,
      sym_hole,
  [773] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_PLUS,
    ACTIONS(47), 1,
      anon_sym_STAR,
    ACTIONS(49), 1,
      anon_sym_SLASH,
    ACTIONS(88), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
  [793] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_PLUS,
    ACTIONS(47), 1,
      anon_sym_STAR,
    ACTIONS(49), 1,
      anon_sym_SLASH,
    ACTIONS(90), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [813] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_DOT,
    ACTIONS(94), 2,
      anon_sym_input,
      anon_sym_output,
    STATE(33), 2,
      sym_qualifier,
      aux_sym_typedef_repeat1,
  [828] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_PLUS,
    ACTIONS(47), 1,
      anon_sym_STAR,
    ACTIONS(49), 1,
      anon_sym_SLASH,
    ACTIONS(97), 1,
      anon_sym_RPAREN,
  [847] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_DOT,
    ACTIONS(101), 2,
      anon_sym_input,
      anon_sym_output,
    STATE(36), 2,
      sym_qualifier,
      aux_sym_typedef_repeat1,
  [862] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(101), 2,
      anon_sym_input,
      anon_sym_output,
    STATE(33), 2,
      sym_qualifier,
      aux_sym_typedef_repeat1,
  [877] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 4,
      ts_builtin_sym_end,
      anon_sym_ATdef,
      anon_sym_ATextern,
      sym_identifier,
  [887] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_DOT,
    STATE(67), 1,
      sym_type,
    ACTIONS(109), 2,
      anon_sym_u32,
      anon_sym_string,
  [901] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 4,
      ts_builtin_sym_end,
      anon_sym_ATdef,
      anon_sym_ATextern,
      sym_identifier,
  [911] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 4,
      ts_builtin_sym_end,
      anon_sym_ATdef,
      anon_sym_ATextern,
      sym_identifier,
  [921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 4,
      ts_builtin_sym_end,
      anon_sym_ATdef,
      anon_sym_ATextern,
      sym_identifier,
  [931] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(57), 1,
      sym_type,
    STATE(63), 1,
      sym_type_list,
    ACTIONS(109), 2,
      anon_sym_u32,
      anon_sym_string,
  [945] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(57), 1,
      sym_type,
    STATE(64), 1,
      sym_type_list,
    ACTIONS(109), 2,
      anon_sym_u32,
      anon_sym_string,
  [959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 4,
      ts_builtin_sym_end,
      anon_sym_ATdef,
      anon_sym_ATextern,
      sym_identifier,
  [969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 4,
      ts_builtin_sym_end,
      anon_sym_ATdef,
      anon_sym_ATextern,
      sym_identifier,
  [979] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_COMMA,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      aux_sym_argument_list_repeat1,
  [992] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_COMMA,
    ACTIONS(123), 1,
      anon_sym_DOT,
    STATE(52), 1,
      aux_sym_clause_list_repeat1,
  [1005] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_RPAREN,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    STATE(48), 1,
      aux_sym_argument_list_repeat1,
  [1018] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_RPAREN,
    ACTIONS(132), 1,
      anon_sym_COMMA,
    STATE(53), 1,
      aux_sym_type_list_repeat1,
  [1031] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 3,
      anon_sym_DOT,
      anon_sym_input,
      anon_sym_output,
  [1040] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_DOT,
    ACTIONS(138), 1,
      anon_sym_COMMA,
    STATE(51), 1,
      aux_sym_clause_list_repeat1,
  [1053] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_COMMA,
    ACTIONS(141), 1,
      anon_sym_DOT,
    STATE(51), 1,
      aux_sym_clause_list_repeat1,
  [1066] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    STATE(53), 1,
      aux_sym_type_list_repeat1,
  [1079] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(59), 1,
      sym_type,
    ACTIONS(109), 2,
      anon_sym_u32,
      anon_sym_string,
  [1090] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_COMMA,
    ACTIONS(148), 1,
      anon_sym_DOT,
    STATE(51), 1,
      aux_sym_clause_list_repeat1,
  [1103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COMMA,
  [1112] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_COMMA,
    ACTIONS(152), 1,
      anon_sym_RPAREN,
    STATE(49), 1,
      aux_sym_type_list_repeat1,
  [1125] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(154), 1,
      anon_sym_COLON_DASH,
  [1135] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
  [1151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_DOT,
  [1158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_RPAREN,
  [1165] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_RPAREN,
  [1172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_RPAREN,
  [1179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_RPAREN,
  [1186] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
  [1193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_DOT,
  [1200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
  [1207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_DOT,
  [1214] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
  [1221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
  [1228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      sym_identifier,
  [1235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 24,
  [SMALL_STATE(4)] = 60,
  [SMALL_STATE(5)] = 81,
  [SMALL_STATE(6)] = 102,
  [SMALL_STATE(7)] = 135,
  [SMALL_STATE(8)] = 156,
  [SMALL_STATE(9)] = 185,
  [SMALL_STATE(10)] = 218,
  [SMALL_STATE(11)] = 239,
  [SMALL_STATE(12)] = 272,
  [SMALL_STATE(13)] = 297,
  [SMALL_STATE(14)] = 318,
  [SMALL_STATE(15)] = 343,
  [SMALL_STATE(16)] = 370,
  [SMALL_STATE(17)] = 391,
  [SMALL_STATE(18)] = 421,
  [SMALL_STATE(19)] = 451,
  [SMALL_STATE(20)] = 481,
  [SMALL_STATE(21)] = 511,
  [SMALL_STATE(22)] = 541,
  [SMALL_STATE(23)] = 571,
  [SMALL_STATE(24)] = 601,
  [SMALL_STATE(25)] = 631,
  [SMALL_STATE(26)] = 653,
  [SMALL_STATE(27)] = 682,
  [SMALL_STATE(28)] = 709,
  [SMALL_STATE(29)] = 736,
  [SMALL_STATE(30)] = 761,
  [SMALL_STATE(31)] = 773,
  [SMALL_STATE(32)] = 793,
  [SMALL_STATE(33)] = 813,
  [SMALL_STATE(34)] = 828,
  [SMALL_STATE(35)] = 847,
  [SMALL_STATE(36)] = 862,
  [SMALL_STATE(37)] = 877,
  [SMALL_STATE(38)] = 887,
  [SMALL_STATE(39)] = 901,
  [SMALL_STATE(40)] = 911,
  [SMALL_STATE(41)] = 921,
  [SMALL_STATE(42)] = 931,
  [SMALL_STATE(43)] = 945,
  [SMALL_STATE(44)] = 959,
  [SMALL_STATE(45)] = 969,
  [SMALL_STATE(46)] = 979,
  [SMALL_STATE(47)] = 992,
  [SMALL_STATE(48)] = 1005,
  [SMALL_STATE(49)] = 1018,
  [SMALL_STATE(50)] = 1031,
  [SMALL_STATE(51)] = 1040,
  [SMALL_STATE(52)] = 1053,
  [SMALL_STATE(53)] = 1066,
  [SMALL_STATE(54)] = 1079,
  [SMALL_STATE(55)] = 1090,
  [SMALL_STATE(56)] = 1103,
  [SMALL_STATE(57)] = 1112,
  [SMALL_STATE(58)] = 1125,
  [SMALL_STATE(59)] = 1135,
  [SMALL_STATE(60)] = 1143,
  [SMALL_STATE(61)] = 1151,
  [SMALL_STATE(62)] = 1158,
  [SMALL_STATE(63)] = 1165,
  [SMALL_STATE(64)] = 1172,
  [SMALL_STATE(65)] = 1179,
  [SMALL_STATE(66)] = 1186,
  [SMALL_STATE(67)] = 1193,
  [SMALL_STATE(68)] = 1200,
  [SMALL_STATE(69)] = 1207,
  [SMALL_STATE(70)] = 1214,
  [SMALL_STATE(71)] = 1221,
  [SMALL_STATE(72)] = 1228,
  [SMALL_STATE(73)] = 1235,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__term, 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__term, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__term, 1, .production_id = 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__term, 1, .production_id = 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 3, .production_id = 5),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 3, .production_id = 5),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expr, 3, .production_id = 6),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expr, 3, .production_id = 6),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 2, .production_id = 2),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 2, .production_id = 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atom, 4, .production_id = 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atom, 4, .production_id = 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause_list, 1, .production_id = 8),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1, .production_id = 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 1, .production_id = 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clause_list_repeat1, 2, .production_id = 10),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(72),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(71),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1, .production_id = 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compare_op, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 3, .production_id = 11),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, .production_id = 5),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typedef_repeat1, 2),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typedef_repeat1, 2), SHIFT_REPEAT(50),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 2, .production_id = 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern, 6, .production_id = 7),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 7, .production_id = 9),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef, 7, .production_id = 7),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef, 6, .production_id = 7),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern, 7, .production_id = 7),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2, .production_id = 4),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause_list, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, .production_id = 4),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, .production_id = 4), SHIFT_REPEAT(17),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_list, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualifier, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clause_list_repeat1, 2),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_clause_list_repeat1, 2), SHIFT_REPEAT(9),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause_list, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_list_repeat1, 2),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_list_repeat1, 2), SHIFT_REPEAT(54),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause_list, 2, .production_id = 8),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_list, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [174] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
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
