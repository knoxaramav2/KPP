
// Generated from c:\Users\MMI\Documents\tmpdev\KPP\KPP\Antlr\grammar\KPP.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  KPPLexer : public antlr4::Lexer {
public:
  enum {
    D_CLASS = 1, P_PUBLIC = 2, P_PRIVATE = 3, P_INTERNAL = 4, P_INHERIT = 5, 
    G_ASSEMBLY = 6, G_DOT = 7, CM_GTR = 8, CM_LSS = 9, CM_EQU = 10, CM_GTR_EQU = 11, 
    CM_LSS_EQU = 12, A_SET = 13, A_ADD = 14, A_SUBTRACT = 15, A_MULTIPLY = 16, 
    A_DIVIDE = 17, A_EXPONENT = 18, A_MODULO = 19, A_SET_SUM = 20, A_SET_DIFFERENCE = 21, 
    A_SET_PRODUCT = 22, A_SET_QUOTIENT = 23, A_INCREMENT = 24, A_DECRIMENT = 25, 
    L_AND = 26, L_OR = 27, L_NAND = 28, L_NOR = 29, L_XOR = 30, L_XNOR = 31, 
    L_NOT = 32, BL_AND = 33, BL_OR = 34, BL_INV = 35, BL_LEFT = 36, BL_RIGHT = 37, 
    C_IF = 38, C_ELSE = 39, C_WHILE = 40, C_FOR = 41, C_GOTO = 42, C_BREAK = 43, 
    C_SKIP = 44, L_BRACKET = 45, R_BRACKET = 46, L_PARANTH = 47, R_PARANTH = 48, 
    L_BRACE = 49, R_BRACE = 50, LINE_COMMENT = 51, BLOCK_COMMENT = 52, COMMA = 53, 
    NUMBER = 54, DECIMAL = 55, INTEGER = 56, IDENTIFIER = 57, SEMI = 58, 
    WS = 59
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

