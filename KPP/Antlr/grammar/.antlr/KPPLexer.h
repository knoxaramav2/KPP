
// Generated from c:\Users\MMI\Documents\tmpdev\KPP\KPP\Antlr\grammar\KPP.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  KPPLexer : public antlr4::Lexer {
public:
  enum {
    PP_SYM = 1, PP_IMPORT = 2, D_CLASS = 3, D_INTERFACE = 4, P_PUBLIC = 5, 
    P_PRIVATE = 6, P_INTERNAL = 7, P_INHERIT = 8, G_ASSEMBLY = 9, G_DOT = 10, 
    G_ENTRY = 11, G_ELLIPSE = 12, CM_GTR = 13, CM_LSS = 14, CM_EQU = 15, 
    CM_GTR_EQU = 16, CM_LSS_EQU = 17, A_SET = 18, A_ADD = 19, A_SUBTRACT = 20, 
    A_MULTIPLY = 21, A_DIVIDE = 22, A_EXPONENT = 23, A_MODULO = 24, A_SET_SUM = 25, 
    A_SET_DIFFERENCE = 26, A_SET_PRODUCT = 27, A_SET_QUOTIENT = 28, A_INCREMENT = 29, 
    A_DECRIMENT = 30, L_AND = 31, L_OR = 32, L_NAND = 33, L_NOR = 34, L_XOR = 35, 
    L_XNOR = 36, L_NOT = 37, BL_AND = 38, BL_OR = 39, BL_INV = 40, BL_LEFT = 41, 
    BL_RIGHT = 42, C_IF = 43, C_ELSE = 44, C_WHILE = 45, C_FOR = 46, C_GOTO = 47, 
    C_BREAK = 48, C_SKIP = 49, C_IN = 50, L_BRACKET = 51, R_BRACKET = 52, 
    L_PARANTH = 53, R_PARANTH = 54, L_BRACE = 55, R_BRACE = 56, LINE_COMMENT = 57, 
    BLOCK_COMMENT = 58, COMMA = 59, INTEGER = 60, DECIMAL = 61, IDENTIFIER = 62, 
    SEMI = 63, WS = 64
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

