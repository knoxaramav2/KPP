
// Generated from c:\Users\MMI\Documents\tmpdev\KPP\KPP\Antlr\grammar\KPP.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  KPPParser : public antlr4::Parser {
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

  enum {
    RuleKpp = 0, RuleSection = 1, RuleNamespacedecl = 2, RuleSymbol_id = 3, 
    RuleBlock = 4, RuleClassblock = 5, RuleClassdeclblock = 6, RuleAccessdeclblock = 7, 
    RuleExpr = 8, RuleClassDecl = 9, RuleMethodDecl = 10, RuleMethodCall = 11, 
    RuleVardecl = 12, RuleSetexpr = 13, RuleSet = 14, RuleLoopexp = 15, 
    RuleGroup = 16, RuleIfexp = 17, RuleElseexp = 18, RuleMathExpr = 19, 
    RuleCompExpr = 20, RuleValue = 21, RuleBinCompOps = 22, RuleUnaryLogic = 23, 
    RuleUnaryOp = 24, RuleBinMathOps = 25, RuleLr_math_ops = 26
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
  class NamespacedeclContext;
  class Symbol_idContext;
  class BlockContext;
  class ClassblockContext;
  class ClassdeclblockContext;
  class AccessdeclblockContext;
  class ExprContext;
  class ClassDeclContext;
  class MethodDeclContext;
  class MethodCallContext;
  class VardeclContext;
  class SetexprContext;
  class SetContext;
  class LoopexpContext;
  class GroupContext;
  class IfexpContext;
  class ElseexpContext;
  class MathExprContext;
  class CompExprContext;
  class ValueContext;
  class BinCompOpsContext;
  class UnaryLogicContext;
  class UnaryOpContext;
  class BinMathOpsContext;
  class Lr_math_opsContext; 

  class  KppContext : public antlr4::ParserRuleContext {
  public:
    KppContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<SectionContext *> section();
    SectionContext* section(size_t i);

   
  };

  KppContext* kpp();

  class  SectionContext : public antlr4::ParserRuleContext {
  public:
    SectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NamespacedeclContext *namespacedecl();

   
  };

  SectionContext* section();

  class  NamespacedeclContext : public antlr4::ParserRuleContext {
  public:
    NamespacedeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *G_ASSEMBLY();
    Symbol_idContext *symbol_id();
    BlockContext *block();

   
  };

  NamespacedeclContext* namespacedecl();

  class  Symbol_idContext : public antlr4::ParserRuleContext {
  public:
    Symbol_idContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> G_DOT();
    antlr4::tree::TerminalNode* G_DOT(size_t i);

   
  };

  Symbol_idContext* symbol_id();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_BRACE();
    std::vector<antlr4::tree::TerminalNode *> R_BRACE();
    antlr4::tree::TerminalNode* R_BRACE(size_t i);
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

   
  };

  BlockContext* block();

  class  ClassblockContext : public antlr4::ParserRuleContext {
  public:
    ClassblockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_BRACE();
    antlr4::tree::TerminalNode *R_BRACE();
    ClassdeclblockContext *classdeclblock();

   
  };

  ClassblockContext* classblock();

  class  ClassdeclblockContext : public antlr4::ParserRuleContext {
  public:
    ClassdeclblockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AccessdeclblockContext *> accessdeclblock();
    AccessdeclblockContext* accessdeclblock(size_t i);

   
  };

  ClassdeclblockContext* classdeclblock();

  class  AccessdeclblockContext : public antlr4::ParserRuleContext {
  public:
    AccessdeclblockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_BRACE();
    antlr4::tree::TerminalNode *R_BRACE();
    antlr4::tree::TerminalNode *P_PUBLIC();
    antlr4::tree::TerminalNode *P_PRIVATE();
    antlr4::tree::TerminalNode *P_INTERNAL();
    antlr4::tree::TerminalNode *P_INHERIT();
    std::vector<VardeclContext *> vardecl();
    VardeclContext* vardecl(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);

   
  };

  AccessdeclblockContext* accessdeclblock();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SEMI();
    std::vector<BinMathOpsContext *> binMathOps();
    BinMathOpsContext* binMathOps(size_t i);
    std::vector<BinCompOpsContext *> binCompOps();
    BinCompOpsContext* binCompOps(size_t i);
    std::vector<GroupContext *> group();
    GroupContext* group(size_t i);
    std::vector<antlr4::tree::TerminalNode *> A_SUBTRACT();
    antlr4::tree::TerminalNode* A_SUBTRACT(size_t i);
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<IfexpContext *> ifexp();
    IfexpContext* ifexp(size_t i);
    std::vector<LoopexpContext *> loopexp();
    LoopexpContext* loopexp(size_t i);
    std::vector<ClassDeclContext *> classDecl();
    ClassDeclContext* classDecl(size_t i);
    std::vector<MethodDeclContext *> methodDecl();
    MethodDeclContext* methodDecl(size_t i);
    std::vector<MethodCallContext *> methodCall();
    MethodCallContext* methodCall(size_t i);
    std::vector<Symbol_idContext *> symbol_id();
    Symbol_idContext* symbol_id(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NUMBER();
    antlr4::tree::TerminalNode* NUMBER(size_t i);

   
  };

  ExprContext* expr();

  class  ClassDeclContext : public antlr4::ParserRuleContext {
  public:
    ClassDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *D_CLASS();
    Symbol_idContext *symbol_id();
    ClassblockContext *classblock();

   
  };

  ClassDeclContext* classDecl();

  class  MethodDeclContext : public antlr4::ParserRuleContext {
  public:
    MethodDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Symbol_idContext *> symbol_id();
    Symbol_idContext* symbol_id(size_t i);
    antlr4::tree::TerminalNode *L_PARANTH();
    antlr4::tree::TerminalNode *R_PARANTH();
    BlockContext *block();

   
  };

  MethodDeclContext* methodDecl();

  class  MethodCallContext : public antlr4::ParserRuleContext {
  public:
    MethodCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Symbol_idContext *symbol_id();
    antlr4::tree::TerminalNode *L_PARANTH();
    GroupContext *group();
    antlr4::tree::TerminalNode *R_PARANTH();
    antlr4::tree::TerminalNode *SEMI();

   
  };

  MethodCallContext* methodCall();

  class  VardeclContext : public antlr4::ParserRuleContext {
  public:
    VardeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

   
  };

  VardeclContext* vardecl();

  class  SetexprContext : public antlr4::ParserRuleContext {
  public:
    SetexprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Symbol_idContext *symbol_id();
    SetContext *set();
    ValueContext *value();
    SetexprContext *setexpr();
    ExprContext *expr();

   
  };

  SetexprContext* setexpr();
  SetexprContext* setexpr(int precedence);
  class  SetContext : public antlr4::ParserRuleContext {
  public:
    SetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *A_SET();
    antlr4::tree::TerminalNode *A_SET_DIFFERENCE();
    antlr4::tree::TerminalNode *A_SET_PRODUCT();
    antlr4::tree::TerminalNode *A_SET_QUOTIENT();
    antlr4::tree::TerminalNode *A_SET_SUM();

   
  };

  SetContext* set();

  class  LoopexpContext : public antlr4::ParserRuleContext {
  public:
    LoopexpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *C_FOR();
    antlr4::tree::TerminalNode *L_PARANTH();
    GroupContext *group();
    antlr4::tree::TerminalNode *R_PARANTH();
    ExprContext *expr();
    BlockContext *block();

   
  };

  LoopexpContext* loopexp();

  class  GroupContext : public antlr4::ParserRuleContext {
  public:
    GroupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_PARANTH();
    std::vector<antlr4::tree::TerminalNode *> R_PARANTH();
    antlr4::tree::TerminalNode* R_PARANTH(size_t i);
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

   
  };

  GroupContext* group();

  class  IfexpContext : public antlr4::ParserRuleContext {
  public:
    IfexpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *C_IF();
    antlr4::tree::TerminalNode *L_PARANTH();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *R_PARANTH();
    BlockContext *block();
    ElseexpContext *elseexp();

   
  };

  IfexpContext* ifexp();

  class  ElseexpContext : public antlr4::ParserRuleContext {
  public:
    ElseexpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *C_ELSE();
    ExprContext *expr();
    BlockContext *block();
    antlr4::tree::TerminalNode *C_IF();

   
  };

  ElseexpContext* elseexp();

  class  MathExprContext : public antlr4::ParserRuleContext {
  public:
    MathExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    BinMathOpsContext *binMathOps();

   
  };

  MathExprContext* mathExpr();

  class  CompExprContext : public antlr4::ParserRuleContext {
  public:
    CompExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    BinCompOpsContext *binCompOps();

   
  };

  CompExprContext* compExpr();

  class  ValueContext : public antlr4::ParserRuleContext {
  public:
    ValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Symbol_idContext *symbol_id();
    antlr4::tree::TerminalNode *NUMBER();

   
  };

  ValueContext* value();

  class  BinCompOpsContext : public antlr4::ParserRuleContext {
  public:
    BinCompOpsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CM_EQU();
    antlr4::tree::TerminalNode *CM_GTR();
    antlr4::tree::TerminalNode *CM_GTR_EQU();
    antlr4::tree::TerminalNode *CM_LSS();
    antlr4::tree::TerminalNode *CM_LSS_EQU();

   
  };

  BinCompOpsContext* binCompOps();

  class  UnaryLogicContext : public antlr4::ParserRuleContext {
  public:
    UnaryLogicContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_NOT();

   
  };

  UnaryLogicContext* unaryLogic();

  class  UnaryOpContext : public antlr4::ParserRuleContext {
  public:
    UnaryOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BL_INV();

   
  };

  UnaryOpContext* unaryOp();

  class  BinMathOpsContext : public antlr4::ParserRuleContext {
  public:
    BinMathOpsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *A_ADD();
    antlr4::tree::TerminalNode *A_SUBTRACT();
    antlr4::tree::TerminalNode *A_MULTIPLY();
    antlr4::tree::TerminalNode *A_DIVIDE();
    antlr4::tree::TerminalNode *A_EXPONENT();
    antlr4::tree::TerminalNode *A_MODULO();

   
  };

  BinMathOpsContext* binMathOps();

  class  Lr_math_opsContext : public antlr4::ParserRuleContext {
  public:
    Lr_math_opsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *A_INCREMENT();
    Symbol_idContext *symbol_id();
    antlr4::tree::TerminalNode *A_DECRIMENT();

   
  };

  Lr_math_opsContext* lr_math_ops();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool setexprSempred(SetexprContext *_localctx, size_t predicateIndex);

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

