
// Generated from KPP.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  KPPLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, IF = 9, ELSE = 10, WHILE = 11, FOREACH = 12, CONTINUE = 13, 
    BREAK = 14, RETURN = 15, GOTO = 16, SET = 17, ADD = 18, SUBTRACT = 19, 
    MULTIPLY = 20, DIVIDE = 21, EXPONENT = 22, MODULO = 23, SET_SUM = 24, 
    SET_DIFFERENCE = 25, SET_PRODUCT = 26, SET_QUOTIENT = 27, INCREMENT = 28, 
    DECRIMENT = 29, LOGIC_OR = 30, LOGIC_AND = 31, LOGIC_NOT = 32, LOGIC_NAND = 33, 
    LOGIC_NOR = 34, LOGIC_XOR = 35, LOGIC_XNOR = 36, GTR = 37, LSS = 38, 
    EQU = 39, GTR_EQU = 40, LSS_EQU = 41, BITWISE_AND = 42, BITWISE_OR = 43, 
    BITWISE_INVERT = 44, CLASS = 45, THIS = 46, TRUE = 47, FALSE = 48, ASSEMBLY = 49, 
    JOINT = 50, DOT = 51, L_BRACKET = 52, R_BRACKET = 53, L_PARANTH = 54, 
    R_PARANTH = 55, L_BRACE = 56, R_BRACE = 57, LINE_COMMENT = 58, BLOCK_COMMENT = 59, 
    DECIMAL = 60, IDENTIFIER = 61, SEMI = 62, WS = 63
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

