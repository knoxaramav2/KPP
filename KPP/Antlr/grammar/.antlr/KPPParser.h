
// Generated from c:\Users\MMI\Documents\tmpdev\KPP\KPP\Antlr\grammar\KPP.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  KPPParser : public antlr4::Parser {
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

  enum {
    RuleKpp = 0, RuleSection = 1, RuleNamespacedecl = 2, RuleSymbol_id = 3, 
    RuleBlock = 4, RuleClassblock = 5, RuleClassdeclblock = 6, RuleAccessdeclblock = 7, 
    RuleExpr = 8, RuleInterfaceDecl = 9, RuleClassDecl = 10, RuleInheritList = 11, 
    RulePreproc = 12, RulePp_import = 13, RuleEntryDecl = 14, RuleMethodDecl = 15, 
    RuleMethodCall = 16, RuleSetexpr = 17, RuleSet = 18, RuleLoopexp = 19, 
    RuleLoopgroup = 20, RuleLoop3group = 21, RuleLoopeach = 22, RuleGroup = 23, 
    RuleVardecl = 24, RuleArraydecl = 25, RuleIfexp = 26, RuleElseexp = 27, 
    RuleMathExpr = 28, RuleCompExpr = 29, RuleValue = 30, RuleBinCompOps = 31, 
    RuleUnaryLogic = 32, RuleUnaryOp = 33, RuleBinMathOps = 34, RuleLr_math_ops = 35, 
    RuleNumber = 36
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
  class InterfaceDeclContext;
  class ClassDeclContext;
  class InheritListContext;
  class PreprocContext;
  class Pp_importContext;
  class EntryDeclContext;
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
    std::vector<SetexprContext *> setexpr();
    SetexprContext* setexpr(size_t i);
    std::vector<MathExprContext *> mathExpr();
    MathExprContext* mathExpr(size_t i);
    std::vector<CompExprContext *> compExpr();
    CompExprContext* compExpr(size_t i);
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
    std::vector<InterfaceDeclContext *> interfaceDecl();
    InterfaceDeclContext* interfaceDecl(size_t i);
    std::vector<ClassDeclContext *> classDecl();
    ClassDeclContext* classDecl(size_t i);
    std::vector<EntryDeclContext *> entryDecl();
    EntryDeclContext* entryDecl(size_t i);
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

  class  InterfaceDeclContext : public antlr4::ParserRuleContext {
  public:
    InterfaceDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *D_INTERFACE();
    std::vector<Symbol_idContext *> symbol_id();
    Symbol_idContext* symbol_id(size_t i);
    antlr4::tree::TerminalNode *L_BRACE();
    antlr4::tree::TerminalNode *R_BRACE();
    antlr4::tree::TerminalNode *SEMI();
    std::vector<antlr4::tree::TerminalNode *> L_BRACKET();
    antlr4::tree::TerminalNode* L_BRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> R_BRACKET();
    antlr4::tree::TerminalNode* R_BRACKET(size_t i);

   
  };

  InterfaceDeclContext* interfaceDecl();

  class  ClassDeclContext : public antlr4::ParserRuleContext {
  public:
    ClassDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *D_CLASS();
    Symbol_idContext *symbol_id();
    ClassblockContext *classblock();
    InheritListContext *inheritList();

   
  };

  ClassDeclContext* classDecl();

  class  InheritListContext : public antlr4::ParserRuleContext {
  public:
    InheritListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_BRACKET();
    antlr4::tree::TerminalNode *R_BRACKET();
    std::vector<Symbol_idContext *> symbol_id();
    Symbol_idContext* symbol_id(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

   
  };

  InheritListContext* inheritList();

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

  class  EntryDeclContext : public antlr4::ParserRuleContext {
  public:
    EntryDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *G_ENTRY();
    BlockContext *block();
    GroupContext *group();

   
  };

  EntryDeclContext* entryDecl();

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
    BinMathOpsContext *binMathOps();

   
  };

  MathExprContext* mathExpr();

  class  CompExprContext : public antlr4::ParserRuleContext {
  public:
    CompExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
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

