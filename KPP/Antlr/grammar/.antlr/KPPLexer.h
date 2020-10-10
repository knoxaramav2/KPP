
// Generated from c:\Users\MMI\Documents\tmpdev\KPP\KPP\Antlr\grammar\KPP.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  KPPLexer : public antlr4::Lexer {
public:
  enum {
    PP_SYM = 1, PP_IMPORT = 2, D_CLASS = 3, P_PUBLIC = 4, P_PRIVATE = 5, 
    P_INTERNAL = 6, P_INHERIT = 7, G_ASSEMBLY = 8, G_DOT = 9, G_ENTRY = 10, 
    G_ELLIPSE = 11, CM_GTR = 12, CM_LSS = 13, CM_EQU = 14, CM_GTR_EQU = 15, 
    CM_LSS_EQU = 16, A_SET = 17, A_ADD = 18, A_SUBTRACT = 19, A_MULTIPLY = 20, 
    A_DIVIDE = 21, A_EXPONENT = 22, A_MODULO = 23, A_SET_SUM = 24, A_SET_DIFFERENCE = 25, 
    A_SET_PRODUCT = 26, A_SET_QUOTIENT = 27, A_INCREMENT = 28, A_DECRIMENT = 29, 
    L_AND = 30, L_OR = 31, L_NAND = 32, L_NOR = 33, L_XOR = 34, L_XNOR = 35, 
    L_NOT = 36, BL_AND = 37, BL_OR = 38, BL_INV = 39, BL_LEFT = 40, BL_RIGHT = 41, 
    C_IF = 42, C_ELSE = 43, C_WHILE = 44, C_FOR = 45, C_GOTO = 46, C_BREAK = 47, 
    C_SKIP = 48, C_IN = 49, L_BRACKET = 50, R_BRACKET = 51, L_PARANTH = 52, 
    R_PARANTH = 53, L_BRACE = 54, R_BRACE = 55, LINE_COMMENT = 56, BLOCK_COMMENT = 57, 
    COMMA = 58, INTEGER = 59, DECIMAL = 60, IDENTIFIER = 61, SEMI = 62, 
    WS = 63
  };

  KPPLexer(antlr4::CharStream *input);
  ~KPPLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

