
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

  virtual void enterKpp(KPPParser::KppContext * /*ctx*/) override { }
  virtual void exitKpp(KPPParser::KppContext * /*ctx*/) override { }

  virtual void enterSection(KPPParser::SectionContext * /*ctx*/) override { }
  virtual void exitSection(KPPParser::SectionContext * /*ctx*/) override { }

  virtual void enterNamespacedecl(KPPParser::NamespacedeclContext * /*ctx*/) override { }
  virtual void exitNamespacedecl(KPPParser::NamespacedeclContext * /*ctx*/) override { }

  virtual void enterSymbol_id(KPPParser::Symbol_idContext * /*ctx*/) override { }
  virtual void exitSymbol_id(KPPParser::Symbol_idContext * /*ctx*/) override { }

  virtual void enterBlock(KPPParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(KPPParser::BlockContext * /*ctx*/) override { }

  virtual void enterClassblock(KPPParser::ClassblockContext * /*ctx*/) override { }
  virtual void exitClassblock(KPPParser::ClassblockContext * /*ctx*/) override { }

  virtual void enterClassdeclblock(KPPParser::ClassdeclblockContext * /*ctx*/) override { }
  virtual void exitClassdeclblock(KPPParser::ClassdeclblockContext * /*ctx*/) override { }

  virtual void enterAccessdeclblock(KPPParser::AccessdeclblockContext * /*ctx*/) override { }
  virtual void exitAccessdeclblock(KPPParser::AccessdeclblockContext * /*ctx*/) override { }

  virtual void enterExpr(KPPParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(KPPParser::ExprContext * /*ctx*/) override { }

  virtual void enterClassDecl(KPPParser::ClassDeclContext * /*ctx*/) override { }
  virtual void exitClassDecl(KPPParser::ClassDeclContext * /*ctx*/) override { }

  virtual void enterPreproc(KPPParser::PreprocContext * /*ctx*/) override { }
  virtual void exitPreproc(KPPParser::PreprocContext * /*ctx*/) override { }

  virtual void enterPp_import(KPPParser::Pp_importContext * /*ctx*/) override { }
  virtual void exitPp_import(KPPParser::Pp_importContext * /*ctx*/) override { }

  virtual void enterEntrydecl(KPPParser::EntrydeclContext * /*ctx*/) override { }
  virtual void exitEntrydecl(KPPParser::EntrydeclContext * /*ctx*/) override { }

  virtual void enterMethodDecl(KPPParser::MethodDeclContext * /*ctx*/) override { }
  virtual void exitMethodDecl(KPPParser::MethodDeclContext * /*ctx*/) override { }

  virtual void enterMethodCall(KPPParser::MethodCallContext * /*ctx*/) override { }
  virtual void exitMethodCall(KPPParser::MethodCallContext * /*ctx*/) override { }

  virtual void enterSetexpr(KPPParser::SetexprContext * /*ctx*/) override { }
  virtual void exitSetexpr(KPPParser::SetexprContext * /*ctx*/) override { }

  virtual void enterSet(KPPParser::SetContext * /*ctx*/) override { }
  virtual void exitSet(KPPParser::SetContext * /*ctx*/) override { }

  virtual void enterLoopexp(KPPParser::LoopexpContext * /*ctx*/) override { }
  virtual void exitLoopexp(KPPParser::LoopexpContext * /*ctx*/) override { }

  virtual void enterLoopgroup(KPPParser::LoopgroupContext * /*ctx*/) override { }
  virtual void exitLoopgroup(KPPParser::LoopgroupContext * /*ctx*/) override { }

  virtual void enterLoop3group(KPPParser::Loop3groupContext * /*ctx*/) override { }
  virtual void exitLoop3group(KPPParser::Loop3groupContext * /*ctx*/) override { }

  virtual void enterLoopeach(KPPParser::LoopeachContext * /*ctx*/) override { }
  virtual void exitLoopeach(KPPParser::LoopeachContext * /*ctx*/) override { }

  virtual void enterGroup(KPPParser::GroupContext * /*ctx*/) override { }
  virtual void exitGroup(KPPParser::GroupContext * /*ctx*/) override { }

  virtual void enterVardecl(KPPParser::VardeclContext * /*ctx*/) override { }
  virtual void exitVardecl(KPPParser::VardeclContext * /*ctx*/) override { }

  virtual void enterArraydecl(KPPParser::ArraydeclContext * /*ctx*/) override { }
  virtual void exitArraydecl(KPPParser::ArraydeclContext * /*ctx*/) override { }

  virtual void enterIfexp(KPPParser::IfexpContext * /*ctx*/) override { }
  virtual void exitIfexp(KPPParser::IfexpContext * /*ctx*/) override { }

  virtual void enterElseexp(KPPParser::ElseexpContext * /*ctx*/) override { }
  virtual void exitElseexp(KPPParser::ElseexpContext * /*ctx*/) override { }

  virtual void enterMathExpr(KPPParser::MathExprContext * /*ctx*/) override { }
  virtual void exitMathExpr(KPPParser::MathExprContext * /*ctx*/) override { }

  virtual void enterCompExpr(KPPParser::CompExprContext * /*ctx*/) override { }
  virtual void exitCompExpr(KPPParser::CompExprContext * /*ctx*/) override { }

  virtual void enterValue(KPPParser::ValueContext * /*ctx*/) override { }
  virtual void exitValue(KPPParser::ValueContext * /*ctx*/) override { }

  virtual void enterBinCompOps(KPPParser::BinCompOpsContext * /*ctx*/) override { }
  virtual void exitBinCompOps(KPPParser::BinCompOpsContext * /*ctx*/) override { }

  virtual void enterUnaryLogic(KPPParser::UnaryLogicContext * /*ctx*/) override { }
  virtual void exitUnaryLogic(KPPParser::UnaryLogicContext * /*ctx*/) override { }

  virtual void enterUnaryOp(KPPParser::UnaryOpContext * /*ctx*/) override { }
  virtual void exitUnaryOp(KPPParser::UnaryOpContext * /*ctx*/) override { }

  virtual void enterBinMathOps(KPPParser::BinMathOpsContext * /*ctx*/) override { }
  virtual void exitBinMathOps(KPPParser::BinMathOpsContext * /*ctx*/) override { }

  virtual void enterLr_math_ops(KPPParser::Lr_math_opsContext * /*ctx*/) override { }
  virtual void exitLr_math_ops(KPPParser::Lr_math_opsContext * /*ctx*/) override { }

  virtual void enterNumber(KPPParser::NumberContext * /*ctx*/) override { }
  virtual void exitNumber(KPPParser::NumberContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

