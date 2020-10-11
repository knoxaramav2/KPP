
// Generated from KPP.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "KPPParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by KPPParser.
 */
class  KPPListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterKpp(KPPParser::KppContext *ctx) = 0;
  virtual void exitKpp(KPPParser::KppContext *ctx) = 0;

  virtual void enterSection(KPPParser::SectionContext *ctx) = 0;
  virtual void exitSection(KPPParser::SectionContext *ctx) = 0;

  virtual void enterNamespacedecl(KPPParser::NamespacedeclContext *ctx) = 0;
  virtual void exitNamespacedecl(KPPParser::NamespacedeclContext *ctx) = 0;

  virtual void enterSymbol_id(KPPParser::Symbol_idContext *ctx) = 0;
  virtual void exitSymbol_id(KPPParser::Symbol_idContext *ctx) = 0;

  virtual void enterBlock(KPPParser::BlockContext *ctx) = 0;
  virtual void exitBlock(KPPParser::BlockContext *ctx) = 0;

  virtual void enterClassblock(KPPParser::ClassblockContext *ctx) = 0;
  virtual void exitClassblock(KPPParser::ClassblockContext *ctx) = 0;

  virtual void enterClassdeclblock(KPPParser::ClassdeclblockContext *ctx) = 0;
  virtual void exitClassdeclblock(KPPParser::ClassdeclblockContext *ctx) = 0;

  virtual void enterAccessdeclblock(KPPParser::AccessdeclblockContext *ctx) = 0;
  virtual void exitAccessdeclblock(KPPParser::AccessdeclblockContext *ctx) = 0;

  virtual void enterExpr(KPPParser::ExprContext *ctx) = 0;
  virtual void exitExpr(KPPParser::ExprContext *ctx) = 0;

  virtual void enterClassDecl(KPPParser::ClassDeclContext *ctx) = 0;
  virtual void exitClassDecl(KPPParser::ClassDeclContext *ctx) = 0;

  virtual void enterPreproc(KPPParser::PreprocContext *ctx) = 0;
  virtual void exitPreproc(KPPParser::PreprocContext *ctx) = 0;

  virtual void enterPp_import(KPPParser::Pp_importContext *ctx) = 0;
  virtual void exitPp_import(KPPParser::Pp_importContext *ctx) = 0;

  virtual void enterEntrydecl(KPPParser::EntrydeclContext *ctx) = 0;
  virtual void exitEntrydecl(KPPParser::EntrydeclContext *ctx) = 0;

  virtual void enterMethodDecl(KPPParser::MethodDeclContext *ctx) = 0;
  virtual void exitMethodDecl(KPPParser::MethodDeclContext *ctx) = 0;

  virtual void enterMethodCall(KPPParser::MethodCallContext *ctx) = 0;
  virtual void exitMethodCall(KPPParser::MethodCallContext *ctx) = 0;

  virtual void enterSetexpr(KPPParser::SetexprContext *ctx) = 0;
  virtual void exitSetexpr(KPPParser::SetexprContext *ctx) = 0;

  virtual void enterSet(KPPParser::SetContext *ctx) = 0;
  virtual void exitSet(KPPParser::SetContext *ctx) = 0;

  virtual void enterLoopexp(KPPParser::LoopexpContext *ctx) = 0;
  virtual void exitLoopexp(KPPParser::LoopexpContext *ctx) = 0;

  virtual void enterLoopgroup(KPPParser::LoopgroupContext *ctx) = 0;
  virtual void exitLoopgroup(KPPParser::LoopgroupContext *ctx) = 0;

  virtual void enterLoop3group(KPPParser::Loop3groupContext *ctx) = 0;
  virtual void exitLoop3group(KPPParser::Loop3groupContext *ctx) = 0;

  virtual void enterLoopeach(KPPParser::LoopeachContext *ctx) = 0;
  virtual void exitLoopeach(KPPParser::LoopeachContext *ctx) = 0;

  virtual void enterGroup(KPPParser::GroupContext *ctx) = 0;
  virtual void exitGroup(KPPParser::GroupContext *ctx) = 0;

  virtual void enterVardecl(KPPParser::VardeclContext *ctx) = 0;
  virtual void exitVardecl(KPPParser::VardeclContext *ctx) = 0;

  virtual void enterArraydecl(KPPParser::ArraydeclContext *ctx) = 0;
  virtual void exitArraydecl(KPPParser::ArraydeclContext *ctx) = 0;

  virtual void enterIfexp(KPPParser::IfexpContext *ctx) = 0;
  virtual void exitIfexp(KPPParser::IfexpContext *ctx) = 0;

  virtual void enterElseexp(KPPParser::ElseexpContext *ctx) = 0;
  virtual void exitElseexp(KPPParser::ElseexpContext *ctx) = 0;

  virtual void enterMathExpr(KPPParser::MathExprContext *ctx) = 0;
  virtual void exitMathExpr(KPPParser::MathExprContext *ctx) = 0;

  virtual void enterCompExpr(KPPParser::CompExprContext *ctx) = 0;
  virtual void exitCompExpr(KPPParser::CompExprContext *ctx) = 0;

  virtual void enterValue(KPPParser::ValueContext *ctx) = 0;
  virtual void exitValue(KPPParser::ValueContext *ctx) = 0;

  virtual void enterBinCompOps(KPPParser::BinCompOpsContext *ctx) = 0;
  virtual void exitBinCompOps(KPPParser::BinCompOpsContext *ctx) = 0;

  virtual void enterUnaryLogic(KPPParser::UnaryLogicContext *ctx) = 0;
  virtual void exitUnaryLogic(KPPParser::UnaryLogicContext *ctx) = 0;

  virtual void enterUnaryOp(KPPParser::UnaryOpContext *ctx) = 0;
  virtual void exitUnaryOp(KPPParser::UnaryOpContext *ctx) = 0;

  virtual void enterBinMathOps(KPPParser::BinMathOpsContext *ctx) = 0;
  virtual void exitBinMathOps(KPPParser::BinMathOpsContext *ctx) = 0;

  virtual void enterLr_math_ops(KPPParser::Lr_math_opsContext *ctx) = 0;
  virtual void exitLr_math_ops(KPPParser::Lr_math_opsContext *ctx) = 0;

  virtual void enterNumber(KPPParser::NumberContext *ctx) = 0;
  virtual void exitNumber(KPPParser::NumberContext *ctx) = 0;


};

