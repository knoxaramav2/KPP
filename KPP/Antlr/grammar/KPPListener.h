
// Generated from KPP.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "KPPParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by KPPParser.
 */
class  KPPListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterRules(KPPParser::RulesContext *ctx) = 0;
  virtual void exitRules(KPPParser::RulesContext *ctx) = 0;

  virtual void enterAsm(KPPParser::AsmContext *ctx) = 0;
  virtual void exitAsm(KPPParser::AsmContext *ctx) = 0;

  virtual void enterBlock(KPPParser::BlockContext *ctx) = 0;
  virtual void exitBlock(KPPParser::BlockContext *ctx) = 0;

  virtual void enterClass(KPPParser::ClassContext *ctx) = 0;
  virtual void exitClass(KPPParser::ClassContext *ctx) = 0;

  virtual void enterStatement(KPPParser::StatementContext *ctx) = 0;
  virtual void exitStatement(KPPParser::StatementContext *ctx) = 0;

  virtual void enterExpression(KPPParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(KPPParser::ExpressionContext *ctx) = 0;

  virtual void enterCall(KPPParser::CallContext *ctx) = 0;
  virtual void exitCall(KPPParser::CallContext *ctx) = 0;

  virtual void enterFunction(KPPParser::FunctionContext *ctx) = 0;
  virtual void exitFunction(KPPParser::FunctionContext *ctx) = 0;

  virtual void enterFunction_decl(KPPParser::Function_declContext *ctx) = 0;
  virtual void exitFunction_decl(KPPParser::Function_declContext *ctx) = 0;

  virtual void enterFunction_call(KPPParser::Function_callContext *ctx) = 0;
  virtual void exitFunction_call(KPPParser::Function_callContext *ctx) = 0;

  virtual void enterAssign_expr(KPPParser::Assign_exprContext *ctx) = 0;
  virtual void exitAssign_expr(KPPParser::Assign_exprContext *ctx) = 0;

  virtual void enterVar_decl(KPPParser::Var_declContext *ctx) = 0;
  virtual void exitVar_decl(KPPParser::Var_declContext *ctx) = 0;

  virtual void enterGroup(KPPParser::GroupContext *ctx) = 0;
  virtual void exitGroup(KPPParser::GroupContext *ctx) = 0;

  virtual void enterAsm_id(KPPParser::Asm_idContext *ctx) = 0;
  virtual void exitAsm_id(KPPParser::Asm_idContext *ctx) = 0;

  virtual void enterValue_id(KPPParser::Value_idContext *ctx) = 0;
  virtual void exitValue_id(KPPParser::Value_idContext *ctx) = 0;

  virtual void enterSymbol_id(KPPParser::Symbol_idContext *ctx) = 0;
  virtual void exitSymbol_id(KPPParser::Symbol_idContext *ctx) = 0;

  virtual void enterLogic_id(KPPParser::Logic_idContext *ctx) = 0;
  virtual void exitLogic_id(KPPParser::Logic_idContext *ctx) = 0;

  virtual void enterIdentifier(KPPParser::IdentifierContext *ctx) = 0;
  virtual void exitIdentifier(KPPParser::IdentifierContext *ctx) = 0;

  virtual void enterControl_block(KPPParser::Control_blockContext *ctx) = 0;
  virtual void exitControl_block(KPPParser::Control_blockContext *ctx) = 0;

  virtual void enterControl_id(KPPParser::Control_idContext *ctx) = 0;
  virtual void exitControl_id(KPPParser::Control_idContext *ctx) = 0;

  virtual void enterUnary_ops(KPPParser::Unary_opsContext *ctx) = 0;
  virtual void exitUnary_ops(KPPParser::Unary_opsContext *ctx) = 0;

  virtual void enterBinary_arith_ops(KPPParser::Binary_arith_opsContext *ctx) = 0;
  virtual void exitBinary_arith_ops(KPPParser::Binary_arith_opsContext *ctx) = 0;

  virtual void enterAssign_ops(KPPParser::Assign_opsContext *ctx) = 0;
  virtual void exitAssign_ops(KPPParser::Assign_opsContext *ctx) = 0;

  virtual void enterBinary_logic_ops(KPPParser::Binary_logic_opsContext *ctx) = 0;
  virtual void exitBinary_logic_ops(KPPParser::Binary_logic_opsContext *ctx) = 0;

  virtual void enterBinary(KPPParser::BinaryContext *ctx) = 0;
  virtual void exitBinary(KPPParser::BinaryContext *ctx) = 0;

  virtual void enterBool(KPPParser::BoolContext *ctx) = 0;
  virtual void exitBool(KPPParser::BoolContext *ctx) = 0;

  virtual void enterArith_expr(KPPParser::Arith_exprContext *ctx) = 0;
  virtual void exitArith_expr(KPPParser::Arith_exprContext *ctx) = 0;

  virtual void enterType_specifier(KPPParser::Type_specifierContext *ctx) = 0;
  virtual void exitType_specifier(KPPParser::Type_specifierContext *ctx) = 0;

  virtual void enterArray(KPPParser::ArrayContext *ctx) = 0;
  virtual void exitArray(KPPParser::ArrayContext *ctx) = 0;

  virtual void enterAssembly(KPPParser::AssemblyContext *ctx) = 0;
  virtual void exitAssembly(KPPParser::AssemblyContext *ctx) = 0;

  virtual void enterSemi(KPPParser::SemiContext *ctx) = 0;
  virtual void exitSemi(KPPParser::SemiContext *ctx) = 0;


};

