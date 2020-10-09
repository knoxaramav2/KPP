
// Generated from KPP.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  KPPLexer : public antlr4::Lexer {
public:
  enum {
    CM_GTR = 1, CM_LSS = 2, CM_EQU = 3, CM_GTR_EQU = 4, CM_LSS_EQU = 5, 
    A_SET = 6, A_ADD = 7, A_SUBTRACT = 8, A_MULTIPLY = 9, A_DIVIDE = 10, 
    A_EXPONENT = 11, A_MODULO = 12, A_SET_SUM = 13, A_SET_DIFFERENCE = 14, 
    A_SET_PRODUCT = 15, A_SET_QUOTIENT = 16, A_INCREMENT = 17, A_DECRIMENT = 18, 
    L_AND = 19, L_OR = 20, L_NAND = 21, L_NOR = 22, L_XOR = 23, L_XNOR = 24, 
    L_NOT = 25, BL_AND = 26, BL_OR = 27, BL_INV = 28, BL_LEFT = 29, BL_RIGHT = 30, 
    C_IF = 31, C_ELSE = 32, C_WHILE = 33, C_FOR = 34, C_GOTO = 35, C_BREAK = 36, 
    C_SKIP = 37, L_BRACKET = 38, R_BRACKET = 39, L_PARANTH = 40, R_PARANTH = 41, 
    L_BRACE = 42, R_BRACE = 43, LINE_COMMENT = 44, BLOCK_COMMENT = 45, DECIMAL = 46, 
    INTEGER = 47, IDENTIFIER = 48, SEMI = 49, WS = 50
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

