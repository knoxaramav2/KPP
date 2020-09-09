
// Generated from KPP.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "KPPListener.h"


/**
 * This class provides an empty implementation of KPPListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  KPPBaseListener : public KPPListener {
public:

  virtual void enterRules(KPPParser::RulesContext * /*ctx*/) override { }
  virtual void exitRules(KPPParser::RulesContext * /*ctx*/) override { }

  virtual void enterAsm(KPPParser::AsmContext * /*ctx*/) override { }
  virtual void exitAsm(KPPParser::AsmContext * /*ctx*/) override { }

  virtual void enterBlock(KPPParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(KPPParser::BlockContext * /*ctx*/) override { }

  virtual void enterClass(KPPParser::ClassContext * /*ctx*/) override { }
  virtual void exitClass(KPPParser::ClassContext * /*ctx*/) override { }

  virtual void enterStatement(KPPParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(KPPParser::StatementContext * /*ctx*/) override { }

  virtual void enterExpression(KPPParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(KPPParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterCall(KPPParser::CallContext * /*ctx*/) override { }
  virtual void exitCall(KPPParser::CallContext * /*ctx*/) override { }

  virtual void enterFunction(KPPParser::FunctionContext * /*ctx*/) override { }
  virtual void exitFunction(KPPParser::FunctionContext * /*ctx*/) override { }

  virtual void enterFunction_decl(KPPParser::Function_declContext * /*ctx*/) override { }
  virtual void exitFunction_decl(KPPParser::Function_declContext * /*ctx*/) override { }

  virtual void enterFunction_call(KPPParser::Function_callContext * /*ctx*/) override { }
  virtual void exitFunction_call(KPPParser::Function_callContext * /*ctx*/) override { }

  virtual void enterAssign_expr(KPPParser::Assign_exprContext * /*ctx*/) override { }
  virtual void exitAssign_expr(KPPParser::Assign_exprContext * /*ctx*/) override { }

  virtual void enterVar_decl(KPPParser::Var_declContext * /*ctx*/) override { }
  virtual void exitVar_decl(KPPParser::Var_declContext * /*ctx*/) override { }

  virtual void enterGroup(KPPParser::GroupContext * /*ctx*/) override { }
  virtual void exitGroup(KPPParser::GroupContext * /*ctx*/) override { }

  virtual void enterAsm_id(KPPParser::Asm_idContext * /*ctx*/) override { }
  virtual void exitAsm_id(KPPParser::Asm_idContext * /*ctx*/) override { }

  virtual void enterValue_id(KPPParser::Value_idContext * /*ctx*/) override { }
  virtual void exitValue_id(KPPParser::Value_idContext * /*ctx*/) override { }

  virtual void enterSymbol_id(KPPParser::Symbol_idContext * /*ctx*/) override { }
  virtual void exitSymbol_id(KPPParser::Symbol_idContext * /*ctx*/) override { }

  virtual void enterLogic_id(KPPParser::Logic_idContext * /*ctx*/) override { }
  virtual void exitLogic_id(KPPParser::Logic_idContext * /*ctx*/) override { }

  virtual void enterIdentifier(KPPParser::IdentifierContext * /*ctx*/) override { }
  virtual void exitIdentifier(KPPParser::IdentifierContext * /*ctx*/) override { }

  virtual void enterControl_block(KPPParser::Control_blockContext * /*ctx*/) override { }
  virtual void exitControl_block(KPPParser::Control_blockContext * /*ctx*/) override { }

  virtual void enterControl_id(KPPParser::Control_idContext * /*ctx*/) override { }
  virtual void exitControl_id(KPPParser::Control_idContext * /*ctx*/) override { }

  virtual void enterUnary_ops(KPPParser::Unary_opsContext * /*ctx*/) override { }
  virtual void exitUnary_ops(KPPParser::Unary_opsContext * /*ctx*/) override { }

  virtual void enterBinary_arith_ops(KPPParser::Binary_arith_opsContext * /*ctx*/) override { }
  virtual void exitBinary_arith_ops(KPPParser::Binary_arith_opsContext * /*ctx*/) override { }

  virtual void enterAssign_ops(KPPParser::Assign_opsContext * /*ctx*/) override { }
  virtual void exitAssign_ops(KPPParser::Assign_opsContext * /*ctx*/) override { }

  virtual void enterBinary_logic_ops(KPPParser::Binary_logic_opsContext * /*ctx*/) override { }
  virtual void exitBinary_logic_ops(KPPParser::Binary_logic_opsContext * /*ctx*/) override { }

  virtual void enterBinary(KPPParser::BinaryContext * /*ctx*/) override { }
  virtual void exitBinary(KPPParser::BinaryContext * /*ctx*/) override { }

  virtual void enterBool(KPPParser::BoolContext * /*ctx*/) override { }
  virtual void exitBool(KPPParser::BoolContext * /*ctx*/) override { }

  virtual void enterArith_expr(KPPParser::Arith_exprContext * /*ctx*/) override { }
  virtual void exitArith_expr(KPPParser::Arith_exprContext * /*ctx*/) override { }

  virtual void enterType_specifier(KPPParser::Type_specifierContext * /*ctx*/) override { }
  virtual void exitType_specifier(KPPParser::Type_specifierContext * /*ctx*/) override { }

  virtual void enterArray(KPPParser::ArrayContext * /*ctx*/) override { }
  virtual void exitArray(KPPParser::ArrayContext * /*ctx*/) override { }

  virtual void enterAssembly(KPPParser::AssemblyContext * /*ctx*/) override { }
  virtual void exitAssembly(KPPParser::AssemblyContext * /*ctx*/) override { }

  virtual void enterSemi(KPPParser::SemiContext * /*ctx*/) override { }
  virtual void exitSemi(KPPParser::SemiContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

