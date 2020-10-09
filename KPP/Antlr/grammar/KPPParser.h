
// Generated from KPP.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  KPPParser : public antlr4::Parser {
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
    INTEGER = 47, IDENTIFIER = 48, SEMI = 49, WS = 50, T_NAMESPACE = 51, 
    T_CLASS = 52
  };

  enum {
    RuleKpp = 0, RuleSection = 1, RuleNamespace = 2, RuleDef_field = 3, 
    RuleS_class = 4, RuleS_struct = 5, RuleS_func = 6, RuleS_global = 7, 
    RuleS_shared = 8
  };

  KPPParser(antlr4::TokenStream *input);
  ~KPPParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class KppContext;
  class SectionContext;
  class NamespaceContext;
  class Def_fieldContext;
  class S_classContext;
  class S_structContext;
  class S_funcContext;
  class S_globalContext;
  class S_sharedContext; 

  class  KppContext : public antlr4::ParserRuleContext {
  public:
    KppContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<SectionContext *> section();
    SectionContext* section(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  KppContext* kpp();

  class  SectionContext : public antlr4::ParserRuleContext {
  public:
    SectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NamespaceContext *namespace();
    Def_fieldContext *def_field();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SectionContext* section();

  class  NamespaceContext : public antlr4::ParserRuleContext {
  public:
    NamespaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_NAMESPACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NamespaceContext* namespace();

  class  Def_fieldContext : public antlr4::ParserRuleContext {
  public:
    Def_fieldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    S_classContext *s_class();
    S_structContext *s_struct();
    S_funcContext *s_func();
    S_globalContext *s_global();
    S_sharedContext *s_shared();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Def_fieldContext* def_field();

  class  S_classContext : public antlr4::ParserRuleContext {
  public:
    S_classContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_CLASS();
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  S_classContext* s_class();

  class  S_structContext : public antlr4::ParserRuleContext {
  public:
    S_structContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  S_structContext* s_struct();

  class  S_funcContext : public antlr4::ParserRuleContext {
  public:
    S_funcContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  S_funcContext* s_func();

  class  S_globalContext : public antlr4::ParserRuleContext {
  public:
    S_globalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  S_globalContext* s_global();

  class  S_sharedContext : public antlr4::ParserRuleContext {
  public:
    S_sharedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  S_sharedContext* s_shared();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

