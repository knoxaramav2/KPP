
// Generated from ../../grammar/KPP.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  KPPLexer : public antlr4::Lexer {
public:
  enum {
    B_AND = 1, B_OR = 2, B_XOR = 3, B_INVERT = 4, B_LSHIFT = 5, B_RSHIFT = 6, 
    L_NOT = 7, L_AND = 8, L_OR = 9, L_NAND = 10, L_NOR = 11, L_XOR = 12, 
    L_XNOR = 13, L_EQUALS = 14, L_NOT_EQUALS = 15, L_GREATER = 16, L_LESS = 17, 
    L_GREATER_EQU = 18, L_LESS_EQU = 19, S_SET = 20, S_SUM_SET = 21, S_DIF_SET = 22, 
    S_MULT_SET = 23, S_INC_OR_SET = 24, S_EXC_OR_SET = 25, S_LSHIFT_SET = 26, 
    S_RSHIFT_SET = 27, M_ADD = 28, M_SUB = 29, M_MULT = 30, M_DIV = 31, 
    M_POW = 32, C_FOR = 33, C_EACH = 34, C_WHILE = 35, C_CONTINUE = 36, 
    C_BREAK = 37, C_GOTO = 38, C_LABEL = 39, T_STATEMENT = 40, DECIMAL = 41, 
    IDENTIFIER = 42, WS = 43
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

