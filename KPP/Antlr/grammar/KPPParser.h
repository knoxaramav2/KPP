
// Generated from KPP.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  KPPParser : public antlr4::Parser {
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

  enum {
    RuleRules = 0, RuleAsm = 1, RuleBlock = 2, RuleClass = 3, RuleStatement = 4, 
    RuleExpression = 5, RuleCall = 6, RuleFunction = 7, RuleFunction_decl = 8, 
    RuleFunction_call = 9, RuleAssign_expr = 10, RuleVar_decl = 11, RuleGroup = 12, 
    RuleAsm_id = 13, RuleValue_id = 14, RuleSymbol_id = 15, RuleLogic_id = 16, 
    RuleIdentifier = 17, RuleControl_block = 18, RuleControl_id = 19, RuleUnary_ops = 20, 
    RuleBinary_arith_ops = 21, RuleAssign_ops = 22, RuleBinary_logic_ops = 23, 
    RuleBinary = 24, RuleBool = 25, RuleArith_expr = 26, RuleType_specifier = 27, 
    RuleArray = 28, RuleAssembly = 29, RuleSemi = 30
  };

  KPPParser(antlr4::TokenStream *input);
  ~KPPParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class RulesContext;
  class AsmContext;
  class BlockContext;
  class ClassContext;
  class StatementContext;
  class ExpressionContext;
  class CallContext;
  class FunctionContext;
  class Function_declContext;
  class Function_callContext;
  class Assign_exprContext;
  class Var_declContext;
  class GroupContext;
  class Asm_idContext;
  class Value_idContext;
  class Symbol_idContext;
  class Logic_idContext;
  class IdentifierContext;
  class Control_blockContext;
  class Control_idContext;
  class Unary_opsContext;
  class Binary_arith_opsContext;
  class Assign_opsContext;
  class Binary_logic_opsContext;
  class BinaryContext;
  class BoolContext;
  class Arith_exprContext;
  class Type_specifierContext;
  class ArrayContext;
  class AssemblyContext;
  class SemiContext; 

  class  RulesContext : public antlr4::ParserRuleContext {
  public:
    RulesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<AsmContext *> asm();
    AsmContext* asm(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RulesContext* rules();

  class  AsmContext : public antlr4::ParserRuleContext {
  public:
    AsmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssemblyContext *assembly();
    Symbol_idContext *symbol_id();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AsmContext* asm();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_BRACE();
    std::vector<antlr4::tree::TerminalNode *> R_BRACE();
    antlr4::tree::TerminalNode* R_BRACE(size_t i);
    std::vector<ClassContext *> class();
    ClassContext* class(size_t i);
    std::vector<FunctionContext *> function();
    FunctionContext* function(size_t i);
    std::vector<BlockContext *> block();
    BlockContext* block(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BlockContext* block();

  class  ClassContext : public antlr4::ParserRuleContext {
  public:
    ClassContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLASS();
    Symbol_idContext *symbol_id();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassContext* class();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CallContext *call();
    SemiContext *semi();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    GroupContext *group();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StatementContext* statement();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Assign_exprContext *assign_expr();
    Var_declContext *var_decl();
    Symbol_idContext *symbol_id();
    GroupContext *group();
    Unary_opsContext *unary_ops();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    BoolContext *bool();
    Type_specifierContext *type_specifier();
    BinaryContext *binary();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  CallContext : public antlr4::ParserRuleContext {
  public:
    CallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Symbol_idContext *symbol_id();
    GroupContext *group();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CallContext* call();

  class  FunctionContext : public antlr4::ParserRuleContext {
  public:
    FunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_declContext *function_decl();
    Function_callContext *function_call();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionContext* function();

  class  Function_declContext : public antlr4::ParserRuleContext {
  public:
    Function_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    Function_callContext *function_call();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_declContext* function_decl();

  class  Function_callContext : public antlr4::ParserRuleContext {
  public:
    Function_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    GroupContext *group();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_callContext* function_call();

  class  Assign_exprContext : public antlr4::ParserRuleContext {
  public:
    Assign_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    Assign_opsContext *assign_ops();
    Value_idContext *value_id();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Assign_exprContext* assign_expr();

  class  Var_declContext : public antlr4::ParserRuleContext {
  public:
    Var_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    Assign_exprContext *assign_expr();
    Symbol_idContext *symbol_id();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Var_declContext* var_decl();

  class  GroupContext : public antlr4::ParserRuleContext {
  public:
    GroupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_PARANTH();
    std::vector<antlr4::tree::TerminalNode *> R_PARANTH();
    antlr4::tree::TerminalNode* R_PARANTH(size_t i);
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GroupContext* group();

  class  Asm_idContext : public antlr4::ParserRuleContext {
  public:
    Asm_idContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Asm_idContext* asm_id();

  class  Value_idContext : public antlr4::ParserRuleContext {
  public:
    Value_idContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *IDENTIFIER();
    Logic_idContext *logic_id();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Value_idContext* value_id();

  class  Symbol_idContext : public antlr4::ParserRuleContext {
  public:
    Symbol_idContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Symbol_idContext* symbol_id();

  class  Logic_idContext : public antlr4::ParserRuleContext {
  public:
    Logic_idContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Logic_idContext* logic_id();

  class  IdentifierContext : public antlr4::ParserRuleContext {
  public:
    IdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_specifierContext *type_specifier();
    Symbol_idContext *symbol_id();
    Control_blockContext *control_block();
    antlr4::tree::TerminalNode *RETURN();
    Control_idContext *control_id();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IdentifierContext* identifier();

  class  Control_blockContext : public antlr4::ParserRuleContext {
  public:
    Control_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *ELSE();
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *FOREACH();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Control_blockContext* control_block();

  class  Control_idContext : public antlr4::ParserRuleContext {
  public:
    Control_idContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONTINUE();
    antlr4::tree::TerminalNode *BREAK();
    antlr4::tree::TerminalNode *GOTO();
    antlr4::tree::TerminalNode *RETURN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Control_idContext* control_id();

  class  Unary_opsContext : public antlr4::ParserRuleContext {
  public:
    Unary_opsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INCREMENT();
    antlr4::tree::TerminalNode *DECRIMENT();
    antlr4::tree::TerminalNode *LOGIC_NOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Unary_opsContext* unary_ops();

  class  Binary_arith_opsContext : public antlr4::ParserRuleContext {
  public:
    Binary_arith_opsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *SUBTRACT();
    antlr4::tree::TerminalNode *MULTIPLY();
    antlr4::tree::TerminalNode *DIVIDE();
    antlr4::tree::TerminalNode *EXPONENT();
    antlr4::tree::TerminalNode *MODULO();
    antlr4::tree::TerminalNode *SET_SUM();
    antlr4::tree::TerminalNode *SET_DIFFERENCE();
    antlr4::tree::TerminalNode *SET_PRODUCT();
    antlr4::tree::TerminalNode *SET_QUOTIENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Binary_arith_opsContext* binary_arith_ops();

  class  Assign_opsContext : public antlr4::ParserRuleContext {
  public:
    Assign_opsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *SET_SUM();
    antlr4::tree::TerminalNode *SET_DIFFERENCE();
    antlr4::tree::TerminalNode *SET_PRODUCT();
    antlr4::tree::TerminalNode *SET_QUOTIENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Assign_opsContext* assign_ops();

  class  Binary_logic_opsContext : public antlr4::ParserRuleContext {
  public:
    Binary_logic_opsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOGIC_OR();
    antlr4::tree::TerminalNode *LOGIC_AND();
    antlr4::tree::TerminalNode *LOGIC_NOT();
    antlr4::tree::TerminalNode *LOGIC_NAND();
    antlr4::tree::TerminalNode *LOGIC_NOR();
    antlr4::tree::TerminalNode *LOGIC_XOR();
    antlr4::tree::TerminalNode *LOGIC_XNOR();
    antlr4::tree::TerminalNode *GTR();
    antlr4::tree::TerminalNode *LSS();
    antlr4::tree::TerminalNode *EQU();
    antlr4::tree::TerminalNode *GTR_EQU();
    antlr4::tree::TerminalNode *LSS_EQU();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Binary_logic_opsContext* binary_logic_ops();

  class  BinaryContext : public antlr4::ParserRuleContext {
  public:
    BinaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Binary_arith_opsContext *binary_arith_ops();
    Binary_logic_opsContext *binary_logic_ops();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BinaryContext* binary();

  class  BoolContext : public antlr4::ParserRuleContext {
  public:
    BoolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BoolContext* bool();

  class  Arith_exprContext : public antlr4::ParserRuleContext {
  public:
    Arith_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_PARANTH();
    std::vector<Arith_exprContext *> arith_expr();
    Arith_exprContext* arith_expr(size_t i);
    antlr4::tree::TerminalNode *R_PARANTH();
    Value_idContext *value_id();
    antlr4::tree::TerminalNode *SUBTRACT();
    antlr4::tree::TerminalNode *INCREMENT();
    antlr4::tree::TerminalNode *DECRIMENT();
    Binary_arith_opsContext *binary_arith_ops();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Arith_exprContext* arith_expr();
  Arith_exprContext* arith_expr(int precedence);
  class  Type_specifierContext : public antlr4::ParserRuleContext {
  public:
    Type_specifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLASS();
    Type_specifierContext *type_specifier();
    ArrayContext *array();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Type_specifierContext* type_specifier();
  Type_specifierContext* type_specifier(int precedence);
  class  ArrayContext : public antlr4::ParserRuleContext {
  public:
    ArrayContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_BRACKET();
    antlr4::tree::TerminalNode *R_BRACKET();
    Value_idContext *value_id();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArrayContext* array();

  class  AssemblyContext : public antlr4::ParserRuleContext {
  public:
    AssemblyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSEMBLY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssemblyContext* assembly();

  class  SemiContext : public antlr4::ParserRuleContext {
  public:
    SemiContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SemiContext* semi();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);
  bool arith_exprSempred(Arith_exprContext *_localctx, size_t predicateIndex);
  bool type_specifierSempred(Type_specifierContext *_localctx, size_t predicateIndex);

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

