
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

  virtual void enterNamespace(KPPParser::NamespaceContext * /*ctx*/) override { }
  virtual void exitNamespace(KPPParser::NamespaceContext * /*ctx*/) override { }

  virtual void enterDef_field(KPPParser::Def_fieldContext * /*ctx*/) override { }
  virtual void exitDef_field(KPPParser::Def_fieldContext * /*ctx*/) override { }

  virtual void enterS_class(KPPParser::S_classContext * /*ctx*/) override { }
  virtual void exitS_class(KPPParser::S_classContext * /*ctx*/) override { }

  virtual void enterS_struct(KPPParser::S_structContext * /*ctx*/) override { }
  virtual void exitS_struct(KPPParser::S_structContext * /*ctx*/) override { }

  virtual void enterS_func(KPPParser::S_funcContext * /*ctx*/) override { }
  virtual void exitS_func(KPPParser::S_funcContext * /*ctx*/) override { }

  virtual void enterS_global(KPPParser::S_globalContext * /*ctx*/) override { }
  virtual void exitS_global(KPPParser::S_globalContext * /*ctx*/) override { }

  virtual void enterS_shared(KPPParser::S_sharedContext * /*ctx*/) override { }
  virtual void exitS_shared(KPPParser::S_sharedContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

