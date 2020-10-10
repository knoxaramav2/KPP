
// Generated from c:\Users\MMI\Documents\tmpdev\KPP\KPP\Antlr\grammar\KPP.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  KPPParser : public antlr4::Parser {
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

  enum {
    RuleKpp = 0, RuleSection = 1, RuleNamespacedecl = 2, RuleSymbol_id = 3, 
    RuleBlock = 4, RuleClassblock = 5, RuleClassdeclblock = 6, RuleAccessdeclblock = 7, 
    RuleExpr = 8, RuleClassDecl = 9, RulePreproc = 10, RulePp_import = 11, 
    RuleEntrydecl = 12, RuleMethodDecl = 13, RuleMethodCall = 14, RuleSetexpr = 15, 
    RuleSet = 16, RuleLoopexp = 17, RuleLoopgroup = 18, RuleLoop3group = 19, 
    RuleLoopeach = 20, RuleGroup = 21, RuleVardecl = 22, RuleArraydecl = 23, 
    RuleIfexp = 24, RuleElseexp = 25, RuleMathExpr = 26, RuleCompExpr = 27, 
    RuleValue = 28, RuleBinCompOps = 29, RuleUnaryLogic = 30, RuleUnaryOp = 31, 
    RuleBinMathOps = 32, RuleLr_math_ops = 33, RuleNumber = 34
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
  class PreprocContext;
  class Pp_importContext;
  class EntrydeclContext;
  class MethodDeclContext;
  class MethodCallContext;
  class SetexprContext;
  class SetContext;
  class LoopexpContext;
  class LoopgroupContext;
  class Loop3groupContext;
  class LoopeachContext;
  class GroupContext;
  class VardeclContext;
  class ArraydeclContext;
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
  class NumberContext; 

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
    PreprocContext *preproc();
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
    std::vector<PreprocContext *> preproc();
    PreprocContext* preproc(size_t i);
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
    std::vector<EntrydeclContext *> entrydecl();
    EntrydeclContext* entrydecl(size_t i);
    std::vector<MethodDeclContext *> methodDecl();
    MethodDeclContext* methodDecl(size_t i);
    std::vector<MethodCallContext *> methodCall();
    MethodCallContext* methodCall(size_t i);
    std::vector<VardeclContext *> vardecl();
    VardeclContext* vardecl(size_t i);
    std::vector<Symbol_idContext *> symbol_id();
    Symbol_idContext* symbol_id(size_t i);
    std::vector<NumberContext *> number();
    NumberContext* number(size_t i);

   
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

  class  PreprocContext : public antlr4::ParserRuleContext {
  public:
    PreprocContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PP_SYM();
    antlr4::tree::TerminalNode *SEMI();
    Pp_importContext *pp_import();

   
  };

  PreprocContext* preproc();

  class  Pp_importContext : public antlr4::ParserRuleContext {
  public:
    Pp_importContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PP_IMPORT();
    Symbol_idContext *symbol_id();

   
  };

  Pp_importContext* pp_import();

  class  EntrydeclContext : public antlr4::ParserRuleContext {
  public:
    EntrydeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *G_ENTRY();
    BlockContext *block();
    GroupContext *group();

   
  };

  EntrydeclContext* entrydecl();

  class  MethodDeclContext : public antlr4::ParserRuleContext {
  public:
    MethodDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Symbol_idContext *> symbol_id();
    Symbol_idContext* symbol_id(size_t i);
    BlockContext *block();
    GroupContext *group();

   
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
    LoopgroupContext *loopgroup();
    ExprContext *expr();
    BlockContext *block();

   
  };

  LoopexpContext* loopexp();

  class  LoopgroupContext : public antlr4::ParserRuleContext {
  public:
    LoopgroupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_PARANTH();
    antlr4::tree::TerminalNode *R_PARANTH();
    Loop3groupContext *loop3group();
    LoopeachContext *loopeach();
    antlr4::tree::TerminalNode *INTEGER();

   
  };

  LoopgroupContext* loopgroup();

  class  Loop3groupContext : public antlr4::ParserRuleContext {
  public:
    Loop3groupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);
    VardeclContext *vardecl();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

   
  };

  Loop3groupContext* loop3group();

  class  LoopeachContext : public antlr4::ParserRuleContext {
  public:
    LoopeachContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Symbol_idContext *> symbol_id();
    Symbol_idContext* symbol_id(size_t i);
    antlr4::tree::TerminalNode *C_IN();

   
  };

  LoopeachContext* loopeach();

  class  GroupContext : public antlr4::ParserRuleContext {
  public:
    GroupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_PARANTH();
    std::vector<antlr4::tree::TerminalNode *> R_PARANTH();
    antlr4::tree::TerminalNode* R_PARANTH(size_t i);
    std::vector<VardeclContext *> vardecl();
    VardeclContext* vardecl(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<Symbol_idContext *> symbol_id();
    Symbol_idContext* symbol_id(size_t i);

   
  };

  GroupContext* group();

  class  VardeclContext : public antlr4::ParserRuleContext {
  public:
    VardeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Symbol_idContext *> symbol_id();
    Symbol_idContext* symbol_id(size_t i);
    ArraydeclContext *arraydecl();

   
  };

  VardeclContext* vardecl();

  class  ArraydeclContext : public antlr4::ParserRuleContext {
  public:
    ArraydeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Symbol_idContext *> symbol_id();
    Symbol_idContext* symbol_id(size_t i);
    antlr4::tree::TerminalNode *L_BRACKET();
    antlr4::tree::TerminalNode *R_BRACKET();
    NumberContext *number();

   
  };

  ArraydeclContext* arraydecl();

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
    NumberContext *number();

   
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

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *INTEGER();

   
  };

  NumberContext* number();


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

