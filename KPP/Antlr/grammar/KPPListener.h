
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

  virtual void enterNamespace(KPPParser::NamespaceContext *ctx) = 0;
  virtual void exitNamespace(KPPParser::NamespaceContext *ctx) = 0;

  virtual void enterDef_field(KPPParser::Def_fieldContext *ctx) = 0;
  virtual void exitDef_field(KPPParser::Def_fieldContext *ctx) = 0;

  virtual void enterS_class(KPPParser::S_classContext *ctx) = 0;
  virtual void exitS_class(KPPParser::S_classContext *ctx) = 0;

  virtual void enterS_struct(KPPParser::S_structContext *ctx) = 0;
  virtual void exitS_struct(KPPParser::S_structContext *ctx) = 0;

  virtual void enterS_func(KPPParser::S_funcContext *ctx) = 0;
  virtual void exitS_func(KPPParser::S_funcContext *ctx) = 0;

  virtual void enterS_global(KPPParser::S_globalContext *ctx) = 0;
  virtual void exitS_global(KPPParser::S_globalContext *ctx) = 0;

  virtual void enterS_shared(KPPParser::S_sharedContext *ctx) = 0;
  virtual void exitS_shared(KPPParser::S_sharedContext *ctx) = 0;


};

