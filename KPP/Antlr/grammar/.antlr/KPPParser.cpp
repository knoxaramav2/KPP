
// Generated from c:\Users\MMI\Documents\tmpdev\KPP\KPP\Antlr\grammar\KPP.g4 by ANTLR 4.7.1



#include "KPPParser.h"


using namespace antlrcpp;
using namespace antlr4;

KPPParser::KPPParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

KPPParser::~KPPParser() {
  delete _interpreter;
}

std::string KPPParser::getGrammarFileName() const {
  return "KPP.g4";
}

const std::vector<std::string>& KPPParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& KPPParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- KppContext ------------------------------------------------------------------

KPPParser::KppContext::KppContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KPPParser::KppContext::EOF() {
  return getToken(KPPParser::EOF, 0);
}

std::vector<KPPParser::SectionContext *> KPPParser::KppContext::section() {
  return getRuleContexts<KPPParser::SectionContext>();
}

KPPParser::SectionContext* KPPParser::KppContext::section(size_t i) {
  return getRuleContext<KPPParser::SectionContext>(i);
}


size_t KPPParser::KppContext::getRuleIndex() const {
  return KPPParser::RuleKpp;
}


KPPParser::KppContext* KPPParser::kpp() {
  KppContext *_localctx = _tracker.createInstance<KppContext>(_ctx, getState());
  enterRule(_localctx, 0, KPPParser::RuleKpp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(75); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(74);
      section();
      setState(77); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == KPPParser::PP_SYM

    || _la == KPPParser::G_ASSEMBLY);
    setState(79);
    match(KPPParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SectionContext ------------------------------------------------------------------

KPPParser::SectionContext::SectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KPPParser::PreprocContext* KPPParser::SectionContext::preproc() {
  return getRuleContext<KPPParser::PreprocContext>(0);
}

KPPParser::NamespacedeclContext* KPPParser::SectionContext::namespacedecl() {
  return getRuleContext<KPPParser::NamespacedeclContext>(0);
}


size_t KPPParser::SectionContext::getRuleIndex() const {
  return KPPParser::RuleSection;
}


KPPParser::SectionContext* KPPParser::section() {
  SectionContext *_localctx = _tracker.createInstance<SectionContext>(_ctx, getState());
  enterRule(_localctx, 2, KPPParser::RuleSection);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(83);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KPPParser::PP_SYM: {
        enterOuterAlt(_localctx, 1);
        setState(81);
        preproc();
        break;
      }

      case KPPParser::G_ASSEMBLY: {
        enterOuterAlt(_localctx, 2);
        setState(82);
        namespacedecl();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamespacedeclContext ------------------------------------------------------------------

KPPParser::NamespacedeclContext::NamespacedeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KPPParser::NamespacedeclContext::G_ASSEMBLY() {
  return getToken(KPPParser::G_ASSEMBLY, 0);
}

KPPParser::Symbol_idContext* KPPParser::NamespacedeclContext::symbol_id() {
  return getRuleContext<KPPParser::Symbol_idContext>(0);
}

KPPParser::BlockContext* KPPParser::NamespacedeclContext::block() {
  return getRuleContext<KPPParser::BlockContext>(0);
}


size_t KPPParser::NamespacedeclContext::getRuleIndex() const {
  return KPPParser::RuleNamespacedecl;
}


KPPParser::NamespacedeclContext* KPPParser::namespacedecl() {
  NamespacedeclContext *_localctx = _tracker.createInstance<NamespacedeclContext>(_ctx, getState());
  enterRule(_localctx, 4, KPPParser::RuleNamespacedecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(85);
    match(KPPParser::G_ASSEMBLY);
    setState(86);
    symbol_id();
    setState(87);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Symbol_idContext ------------------------------------------------------------------

KPPParser::Symbol_idContext::Symbol_idContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> KPPParser::Symbol_idContext::IDENTIFIER() {
  return getTokens(KPPParser::IDENTIFIER);
}

tree::TerminalNode* KPPParser::Symbol_idContext::IDENTIFIER(size_t i) {
  return getToken(KPPParser::IDENTIFIER, i);
}

std::vector<tree::TerminalNode *> KPPParser::Symbol_idContext::G_DOT() {
  return getTokens(KPPParser::G_DOT);
}

tree::TerminalNode* KPPParser::Symbol_idContext::G_DOT(size_t i) {
  return getToken(KPPParser::G_DOT, i);
}


size_t KPPParser::Symbol_idContext::getRuleIndex() const {
  return KPPParser::RuleSymbol_id;
}


KPPParser::Symbol_idContext* KPPParser::symbol_id() {
  Symbol_idContext *_localctx = _tracker.createInstance<Symbol_idContext>(_ctx, getState());
  enterRule(_localctx, 6, KPPParser::RuleSymbol_id);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(89);
    match(KPPParser::IDENTIFIER);
    setState(94);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 1 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1 + 1) {
        setState(90);
        match(KPPParser::G_DOT);
        setState(91);
        match(KPPParser::IDENTIFIER); 
      }
      setState(96);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

KPPParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KPPParser::BlockContext::L_BRACE() {
  return getToken(KPPParser::L_BRACE, 0);
}

std::vector<tree::TerminalNode *> KPPParser::BlockContext::R_BRACE() {
  return getTokens(KPPParser::R_BRACE);
}

tree::TerminalNode* KPPParser::BlockContext::R_BRACE(size_t i) {
  return getToken(KPPParser::R_BRACE, i);
}

std::vector<KPPParser::ExprContext *> KPPParser::BlockContext::expr() {
  return getRuleContexts<KPPParser::ExprContext>();
}

KPPParser::ExprContext* KPPParser::BlockContext::expr(size_t i) {
  return getRuleContext<KPPParser::ExprContext>(i);
}


size_t KPPParser::BlockContext::getRuleIndex() const {
  return KPPParser::RuleBlock;
}


KPPParser::BlockContext* KPPParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 8, KPPParser::RuleBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(97);
    match(KPPParser::L_BRACE);
    setState(102);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 1) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 1)) & ((1ULL << (KPPParser::PP_SYM - 1))
      | (1ULL << (KPPParser::PP_IMPORT - 1))
      | (1ULL << (KPPParser::D_CLASS - 1))
      | (1ULL << (KPPParser::D_INTERFACE - 1))
      | (1ULL << (KPPParser::P_PUBLIC - 1))
      | (1ULL << (KPPParser::P_PRIVATE - 1))
      | (1ULL << (KPPParser::P_INTERNAL - 1))
      | (1ULL << (KPPParser::P_INHERIT - 1))
      | (1ULL << (KPPParser::G_ASSEMBLY - 1))
      | (1ULL << (KPPParser::G_DOT - 1))
      | (1ULL << (KPPParser::G_ENTRY - 1))
      | (1ULL << (KPPParser::G_ELLIPSE - 1))
      | (1ULL << (KPPParser::CM_GTR - 1))
      | (1ULL << (KPPParser::CM_LSS - 1))
      | (1ULL << (KPPParser::CM_EQU - 1))
      | (1ULL << (KPPParser::CM_GTR_EQU - 1))
      | (1ULL << (KPPParser::CM_LSS_EQU - 1))
      | (1ULL << (KPPParser::A_SET - 1))
      | (1ULL << (KPPParser::A_ADD - 1))
      | (1ULL << (KPPParser::A_SUBTRACT - 1))
      | (1ULL << (KPPParser::A_MULTIPLY - 1))
      | (1ULL << (KPPParser::A_DIVIDE - 1))
      | (1ULL << (KPPParser::A_EXPONENT - 1))
      | (1ULL << (KPPParser::A_MODULO - 1))
      | (1ULL << (KPPParser::A_SET_SUM - 1))
      | (1ULL << (KPPParser::A_SET_DIFFERENCE - 1))
      | (1ULL << (KPPParser::A_SET_PRODUCT - 1))
      | (1ULL << (KPPParser::A_SET_QUOTIENT - 1))
      | (1ULL << (KPPParser::A_INCREMENT - 1))
      | (1ULL << (KPPParser::A_DECRIMENT - 1))
      | (1ULL << (KPPParser::L_AND - 1))
      | (1ULL << (KPPParser::L_OR - 1))
      | (1ULL << (KPPParser::L_NAND - 1))
      | (1ULL << (KPPParser::L_NOR - 1))
      | (1ULL << (KPPParser::L_XOR - 1))
      | (1ULL << (KPPParser::L_XNOR - 1))
      | (1ULL << (KPPParser::L_NOT - 1))
      | (1ULL << (KPPParser::BL_AND - 1))
      | (1ULL << (KPPParser::BL_OR - 1))
      | (1ULL << (KPPParser::BL_INV - 1))
      | (1ULL << (KPPParser::BL_LEFT - 1))
      | (1ULL << (KPPParser::BL_RIGHT - 1))
      | (1ULL << (KPPParser::C_IF - 1))
      | (1ULL << (KPPParser::C_ELSE - 1))
      | (1ULL << (KPPParser::C_WHILE - 1))
      | (1ULL << (KPPParser::C_FOR - 1))
      | (1ULL << (KPPParser::C_GOTO - 1))
      | (1ULL << (KPPParser::C_BREAK - 1))
      | (1ULL << (KPPParser::C_SKIP - 1))
      | (1ULL << (KPPParser::C_IN - 1))
      | (1ULL << (KPPParser::L_BRACKET - 1))
      | (1ULL << (KPPParser::R_BRACKET - 1))
      | (1ULL << (KPPParser::L_PARANTH - 1))
      | (1ULL << (KPPParser::R_PARANTH - 1))
      | (1ULL << (KPPParser::L_BRACE - 1))
      | (1ULL << (KPPParser::LINE_COMMENT - 1))
      | (1ULL << (KPPParser::BLOCK_COMMENT - 1))
      | (1ULL << (KPPParser::COMMA - 1))
      | (1ULL << (KPPParser::INTEGER - 1))
      | (1ULL << (KPPParser::DECIMAL - 1))
      | (1ULL << (KPPParser::IDENTIFIER - 1))
      | (1ULL << (KPPParser::SEMI - 1))
      | (1ULL << (KPPParser::WS - 1)))) != 0)) {
      setState(100);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
      case 1: {
        setState(98);
        expr();
        break;
      }

      case 2: {
        setState(99);
        _la = _input->LA(1);
        if (_la == 0 || _la == Token::EOF || (_la == KPPParser::R_BRACE)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      }
      setState(104);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(105);
    match(KPPParser::R_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassblockContext ------------------------------------------------------------------

KPPParser::ClassblockContext::ClassblockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KPPParser::ClassblockContext::L_BRACE() {
  return getToken(KPPParser::L_BRACE, 0);
}

tree::TerminalNode* KPPParser::ClassblockContext::R_BRACE() {
  return getToken(KPPParser::R_BRACE, 0);
}

KPPParser::ClassdeclblockContext* KPPParser::ClassblockContext::classdeclblock() {
  return getRuleContext<KPPParser::ClassdeclblockContext>(0);
}


size_t KPPParser::ClassblockContext::getRuleIndex() const {
  return KPPParser::RuleClassblock;
}


KPPParser::ClassblockContext* KPPParser::classblock() {
  ClassblockContext *_localctx = _tracker.createInstance<ClassblockContext>(_ctx, getState());
  enterRule(_localctx, 10, KPPParser::RuleClassblock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(107);
    match(KPPParser::L_BRACE);

    setState(108);
    classdeclblock();
    setState(109);
    match(KPPParser::R_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassdeclblockContext ------------------------------------------------------------------

KPPParser::ClassdeclblockContext::ClassdeclblockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KPPParser::AccessdeclblockContext *> KPPParser::ClassdeclblockContext::accessdeclblock() {
  return getRuleContexts<KPPParser::AccessdeclblockContext>();
}

KPPParser::AccessdeclblockContext* KPPParser::ClassdeclblockContext::accessdeclblock(size_t i) {
  return getRuleContext<KPPParser::AccessdeclblockContext>(i);
}


size_t KPPParser::ClassdeclblockContext::getRuleIndex() const {
  return KPPParser::RuleClassdeclblock;
}


KPPParser::ClassdeclblockContext* KPPParser::classdeclblock() {
  ClassdeclblockContext *_localctx = _tracker.createInstance<ClassdeclblockContext>(_ctx, getState());
  enterRule(_localctx, 12, KPPParser::RuleClassdeclblock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(114);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << KPPParser::P_PUBLIC)
      | (1ULL << KPPParser::P_PRIVATE)
      | (1ULL << KPPParser::P_INTERNAL)
      | (1ULL << KPPParser::P_INHERIT))) != 0)) {
      setState(111);
      accessdeclblock();
      setState(116);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AccessdeclblockContext ------------------------------------------------------------------

KPPParser::AccessdeclblockContext::AccessdeclblockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KPPParser::AccessdeclblockContext::L_BRACE() {
  return getToken(KPPParser::L_BRACE, 0);
}

tree::TerminalNode* KPPParser::AccessdeclblockContext::R_BRACE() {
  return getToken(KPPParser::R_BRACE, 0);
}

tree::TerminalNode* KPPParser::AccessdeclblockContext::P_PUBLIC() {
  return getToken(KPPParser::P_PUBLIC, 0);
}

tree::TerminalNode* KPPParser::AccessdeclblockContext::P_PRIVATE() {
  return getToken(KPPParser::P_PRIVATE, 0);
}

tree::TerminalNode* KPPParser::AccessdeclblockContext::P_INTERNAL() {
  return getToken(KPPParser::P_INTERNAL, 0);
}

tree::TerminalNode* KPPParser::AccessdeclblockContext::P_INHERIT() {
  return getToken(KPPParser::P_INHERIT, 0);
}

std::vector<KPPParser::VardeclContext *> KPPParser::AccessdeclblockContext::vardecl() {
  return getRuleContexts<KPPParser::VardeclContext>();
}

KPPParser::VardeclContext* KPPParser::AccessdeclblockContext::vardecl(size_t i) {
  return getRuleContext<KPPParser::VardeclContext>(i);
}

std::vector<tree::TerminalNode *> KPPParser::AccessdeclblockContext::SEMI() {
  return getTokens(KPPParser::SEMI);
}

tree::TerminalNode* KPPParser::AccessdeclblockContext::SEMI(size_t i) {
  return getToken(KPPParser::SEMI, i);
}


size_t KPPParser::AccessdeclblockContext::getRuleIndex() const {
  return KPPParser::RuleAccessdeclblock;
}


KPPParser::AccessdeclblockContext* KPPParser::accessdeclblock() {
  AccessdeclblockContext *_localctx = _tracker.createInstance<AccessdeclblockContext>(_ctx, getState());
  enterRule(_localctx, 14, KPPParser::RuleAccessdeclblock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(117);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << KPPParser::P_PUBLIC)
      | (1ULL << KPPParser::P_PRIVATE)
      | (1ULL << KPPParser::P_INTERNAL)
      | (1ULL << KPPParser::P_INHERIT))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(118);
    match(KPPParser::L_BRACE);
    setState(124);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KPPParser::IDENTIFIER) {
      setState(119);
      vardecl();
      setState(120);
      match(KPPParser::SEMI);
      setState(126);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(127);
    match(KPPParser::R_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

KPPParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KPPParser::ExprContext::SEMI() {
  return getToken(KPPParser::SEMI, 0);
}

std::vector<KPPParser::PreprocContext *> KPPParser::ExprContext::preproc() {
  return getRuleContexts<KPPParser::PreprocContext>();
}

KPPParser::PreprocContext* KPPParser::ExprContext::preproc(size_t i) {
  return getRuleContext<KPPParser::PreprocContext>(i);
}

std::vector<KPPParser::SetexprContext *> KPPParser::ExprContext::setexpr() {
  return getRuleContexts<KPPParser::SetexprContext>();
}

KPPParser::SetexprContext* KPPParser::ExprContext::setexpr(size_t i) {
  return getRuleContext<KPPParser::SetexprContext>(i);
}

std::vector<KPPParser::MathExprContext *> KPPParser::ExprContext::mathExpr() {
  return getRuleContexts<KPPParser::MathExprContext>();
}

KPPParser::MathExprContext* KPPParser::ExprContext::mathExpr(size_t i) {
  return getRuleContext<KPPParser::MathExprContext>(i);
}

std::vector<KPPParser::CompExprContext *> KPPParser::ExprContext::compExpr() {
  return getRuleContexts<KPPParser::CompExprContext>();
}

KPPParser::CompExprContext* KPPParser::ExprContext::compExpr(size_t i) {
  return getRuleContext<KPPParser::CompExprContext>(i);
}

std::vector<KPPParser::BinMathOpsContext *> KPPParser::ExprContext::binMathOps() {
  return getRuleContexts<KPPParser::BinMathOpsContext>();
}

KPPParser::BinMathOpsContext* KPPParser::ExprContext::binMathOps(size_t i) {
  return getRuleContext<KPPParser::BinMathOpsContext>(i);
}

std::vector<KPPParser::BinCompOpsContext *> KPPParser::ExprContext::binCompOps() {
  return getRuleContexts<KPPParser::BinCompOpsContext>();
}

KPPParser::BinCompOpsContext* KPPParser::ExprContext::binCompOps(size_t i) {
  return getRuleContext<KPPParser::BinCompOpsContext>(i);
}

std::vector<KPPParser::GroupContext *> KPPParser::ExprContext::group() {
  return getRuleContexts<KPPParser::GroupContext>();
}

KPPParser::GroupContext* KPPParser::ExprContext::group(size_t i) {
  return getRuleContext<KPPParser::GroupContext>(i);
}

std::vector<tree::TerminalNode *> KPPParser::ExprContext::A_SUBTRACT() {
  return getTokens(KPPParser::A_SUBTRACT);
}

tree::TerminalNode* KPPParser::ExprContext::A_SUBTRACT(size_t i) {
  return getToken(KPPParser::A_SUBTRACT, i);
}

std::vector<KPPParser::ExprContext *> KPPParser::ExprContext::expr() {
  return getRuleContexts<KPPParser::ExprContext>();
}

KPPParser::ExprContext* KPPParser::ExprContext::expr(size_t i) {
  return getRuleContext<KPPParser::ExprContext>(i);
}

std::vector<KPPParser::IfexpContext *> KPPParser::ExprContext::ifexp() {
  return getRuleContexts<KPPParser::IfexpContext>();
}

KPPParser::IfexpContext* KPPParser::ExprContext::ifexp(size_t i) {
  return getRuleContext<KPPParser::IfexpContext>(i);
}

std::vector<KPPParser::LoopexpContext *> KPPParser::ExprContext::loopexp() {
  return getRuleContexts<KPPParser::LoopexpContext>();
}

KPPParser::LoopexpContext* KPPParser::ExprContext::loopexp(size_t i) {
  return getRuleContext<KPPParser::LoopexpContext>(i);
}

std::vector<KPPParser::InterfaceDeclContext *> KPPParser::ExprContext::interfaceDecl() {
  return getRuleContexts<KPPParser::InterfaceDeclContext>();
}

KPPParser::InterfaceDeclContext* KPPParser::ExprContext::interfaceDecl(size_t i) {
  return getRuleContext<KPPParser::InterfaceDeclContext>(i);
}

std::vector<KPPParser::ClassDeclContext *> KPPParser::ExprContext::classDecl() {
  return getRuleContexts<KPPParser::ClassDeclContext>();
}

KPPParser::ClassDeclContext* KPPParser::ExprContext::classDecl(size_t i) {
  return getRuleContext<KPPParser::ClassDeclContext>(i);
}

std::vector<KPPParser::EntryDeclContext *> KPPParser::ExprContext::entryDecl() {
  return getRuleContexts<KPPParser::EntryDeclContext>();
}

KPPParser::EntryDeclContext* KPPParser::ExprContext::entryDecl(size_t i) {
  return getRuleContext<KPPParser::EntryDeclContext>(i);
}

std::vector<KPPParser::MethodDeclContext *> KPPParser::ExprContext::methodDecl() {
  return getRuleContexts<KPPParser::MethodDeclContext>();
}

KPPParser::MethodDeclContext* KPPParser::ExprContext::methodDecl(size_t i) {
  return getRuleContext<KPPParser::MethodDeclContext>(i);
}

std::vector<KPPParser::MethodCallContext *> KPPParser::ExprContext::methodCall() {
  return getRuleContexts<KPPParser::MethodCallContext>();
}

KPPParser::MethodCallContext* KPPParser::ExprContext::methodCall(size_t i) {
  return getRuleContext<KPPParser::MethodCallContext>(i);
}

std::vector<KPPParser::VardeclContext *> KPPParser::ExprContext::vardecl() {
  return getRuleContexts<KPPParser::VardeclContext>();
}

KPPParser::VardeclContext* KPPParser::ExprContext::vardecl(size_t i) {
  return getRuleContext<KPPParser::VardeclContext>(i);
}

std::vector<KPPParser::Symbol_idContext *> KPPParser::ExprContext::symbol_id() {
  return getRuleContexts<KPPParser::Symbol_idContext>();
}

KPPParser::Symbol_idContext* KPPParser::ExprContext::symbol_id(size_t i) {
  return getRuleContext<KPPParser::Symbol_idContext>(i);
}

std::vector<KPPParser::NumberContext *> KPPParser::ExprContext::number() {
  return getRuleContexts<KPPParser::NumberContext>();
}

KPPParser::NumberContext* KPPParser::ExprContext::number(size_t i) {
  return getRuleContext<KPPParser::NumberContext>(i);
}


size_t KPPParser::ExprContext::getRuleIndex() const {
  return KPPParser::RuleExpr;
}


KPPParser::ExprContext* KPPParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 16, KPPParser::RuleExpr);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(148); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(148);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
      case 1: {
        setState(129);
        preproc();
        break;
      }

      case 2: {
        setState(130);
        setexpr(0);
        break;
      }

      case 3: {
        setState(131);
        mathExpr();
        break;
      }

      case 4: {
        setState(132);
        compExpr();
        break;
      }

      case 5: {
        setState(133);
        binMathOps();
        break;
      }

      case 6: {
        setState(134);
        binCompOps();
        break;
      }

      case 7: {
        setState(135);
        group();
        break;
      }

      case 8: {
        setState(136);
        match(KPPParser::A_SUBTRACT);
        setState(137);
        expr();
        break;
      }

      case 9: {
        setState(138);
        ifexp();
        break;
      }

      case 10: {
        setState(139);
        loopexp();
        break;
      }

      case 11: {
        setState(140);
        interfaceDecl();
        break;
      }

      case 12: {
        setState(141);
        classDecl();
        break;
      }

      case 13: {
        setState(142);
        entryDecl();
        break;
      }

      case 14: {
        setState(143);
        methodDecl();
        break;
      }

      case 15: {
        setState(144);
        methodCall();
        break;
      }

      case 16: {
        setState(145);
        vardecl();
        break;
      }

      case 17: {
        setState(146);
        symbol_id();
        break;
      }

      case 18: {
        setState(147);
        number();
        break;
      }

      }
      setState(150); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << KPPParser::PP_SYM)
      | (1ULL << KPPParser::D_CLASS)
      | (1ULL << KPPParser::D_INTERFACE)
      | (1ULL << KPPParser::G_ENTRY)
      | (1ULL << KPPParser::CM_GTR)
      | (1ULL << KPPParser::CM_LSS)
      | (1ULL << KPPParser::CM_EQU)
      | (1ULL << KPPParser::CM_GTR_EQU)
      | (1ULL << KPPParser::CM_LSS_EQU)
      | (1ULL << KPPParser::A_ADD)
      | (1ULL << KPPParser::A_SUBTRACT)
      | (1ULL << KPPParser::A_MULTIPLY)
      | (1ULL << KPPParser::A_DIVIDE)
      | (1ULL << KPPParser::A_EXPONENT)
      | (1ULL << KPPParser::A_MODULO)
      | (1ULL << KPPParser::C_IF)
      | (1ULL << KPPParser::C_FOR)
      | (1ULL << KPPParser::L_PARANTH)
      | (1ULL << KPPParser::INTEGER)
      | (1ULL << KPPParser::DECIMAL)
      | (1ULL << KPPParser::IDENTIFIER))) != 0));
    setState(152);
    match(KPPParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceDeclContext ------------------------------------------------------------------

KPPParser::InterfaceDeclContext::InterfaceDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KPPParser::InterfaceDeclContext::D_INTERFACE() {
  return getToken(KPPParser::D_INTERFACE, 0);
}

std::vector<KPPParser::Symbol_idContext *> KPPParser::InterfaceDeclContext::symbol_id() {
  return getRuleContexts<KPPParser::Symbol_idContext>();
}

KPPParser::Symbol_idContext* KPPParser::InterfaceDeclContext::symbol_id(size_t i) {
  return getRuleContext<KPPParser::Symbol_idContext>(i);
}

tree::TerminalNode* KPPParser::InterfaceDeclContext::L_BRACE() {
  return getToken(KPPParser::L_BRACE, 0);
}

tree::TerminalNode* KPPParser::InterfaceDeclContext::R_BRACE() {
  return getToken(KPPParser::R_BRACE, 0);
}

tree::TerminalNode* KPPParser::InterfaceDeclContext::SEMI() {
  return getToken(KPPParser::SEMI, 0);
}

std::vector<tree::TerminalNode *> KPPParser::InterfaceDeclContext::L_BRACKET() {
  return getTokens(KPPParser::L_BRACKET);
}

tree::TerminalNode* KPPParser::InterfaceDeclContext::L_BRACKET(size_t i) {
  return getToken(KPPParser::L_BRACKET, i);
}

std::vector<tree::TerminalNode *> KPPParser::InterfaceDeclContext::R_BRACKET() {
  return getTokens(KPPParser::R_BRACKET);
}

tree::TerminalNode* KPPParser::InterfaceDeclContext::R_BRACKET(size_t i) {
  return getToken(KPPParser::R_BRACKET, i);
}


size_t KPPParser::InterfaceDeclContext::getRuleIndex() const {
  return KPPParser::RuleInterfaceDecl;
}


KPPParser::InterfaceDeclContext* KPPParser::interfaceDecl() {
  InterfaceDeclContext *_localctx = _tracker.createInstance<InterfaceDeclContext>(_ctx, getState());
  enterRule(_localctx, 18, KPPParser::RuleInterfaceDecl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(154);
    match(KPPParser::D_INTERFACE);
    setState(155);
    symbol_id();
    setState(164);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KPPParser::L_BRACKET) {
      setState(160); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(156);
        match(KPPParser::L_BRACKET);
        setState(157);
        symbol_id();
        setState(158);
        match(KPPParser::R_BRACKET);
        setState(162); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == KPPParser::L_BRACKET);
    }
    setState(166);
    match(KPPParser::L_BRACE);


    setState(168);
    match(KPPParser::R_BRACE);
    setState(169);
    match(KPPParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassDeclContext ------------------------------------------------------------------

KPPParser::ClassDeclContext::ClassDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KPPParser::ClassDeclContext::D_CLASS() {
  return getToken(KPPParser::D_CLASS, 0);
}

KPPParser::Symbol_idContext* KPPParser::ClassDeclContext::symbol_id() {
  return getRuleContext<KPPParser::Symbol_idContext>(0);
}

KPPParser::ClassblockContext* KPPParser::ClassDeclContext::classblock() {
  return getRuleContext<KPPParser::ClassblockContext>(0);
}

KPPParser::InheritListContext* KPPParser::ClassDeclContext::inheritList() {
  return getRuleContext<KPPParser::InheritListContext>(0);
}


size_t KPPParser::ClassDeclContext::getRuleIndex() const {
  return KPPParser::RuleClassDecl;
}


KPPParser::ClassDeclContext* KPPParser::classDecl() {
  ClassDeclContext *_localctx = _tracker.createInstance<ClassDeclContext>(_ctx, getState());
  enterRule(_localctx, 20, KPPParser::RuleClassDecl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(171);
    match(KPPParser::D_CLASS);
    setState(172);
    symbol_id();
    setState(174);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KPPParser::L_BRACKET) {
      setState(173);
      inheritList();
    }
    setState(176);
    classblock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InheritListContext ------------------------------------------------------------------

KPPParser::InheritListContext::InheritListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KPPParser::InheritListContext::L_BRACKET() {
  return getToken(KPPParser::L_BRACKET, 0);
}

tree::TerminalNode* KPPParser::InheritListContext::R_BRACKET() {
  return getToken(KPPParser::R_BRACKET, 0);
}

std::vector<KPPParser::Symbol_idContext *> KPPParser::InheritListContext::symbol_id() {
  return getRuleContexts<KPPParser::Symbol_idContext>();
}

KPPParser::Symbol_idContext* KPPParser::InheritListContext::symbol_id(size_t i) {
  return getRuleContext<KPPParser::Symbol_idContext>(i);
}

std::vector<tree::TerminalNode *> KPPParser::InheritListContext::COMMA() {
  return getTokens(KPPParser::COMMA);
}

tree::TerminalNode* KPPParser::InheritListContext::COMMA(size_t i) {
  return getToken(KPPParser::COMMA, i);
}


size_t KPPParser::InheritListContext::getRuleIndex() const {
  return KPPParser::RuleInheritList;
}


KPPParser::InheritListContext* KPPParser::inheritList() {
  InheritListContext *_localctx = _tracker.createInstance<InheritListContext>(_ctx, getState());
  enterRule(_localctx, 22, KPPParser::RuleInheritList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(178);
    match(KPPParser::L_BRACKET);

    setState(179);
    symbol_id();
    setState(186);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KPPParser::COMMA) {
      setState(182); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(180);
        match(KPPParser::COMMA);
        setState(181);
        symbol_id();
        setState(184); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == KPPParser::COMMA);
    }
    setState(188);
    match(KPPParser::R_BRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PreprocContext ------------------------------------------------------------------

KPPParser::PreprocContext::PreprocContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KPPParser::PreprocContext::PP_SYM() {
  return getToken(KPPParser::PP_SYM, 0);
}

tree::TerminalNode* KPPParser::PreprocContext::SEMI() {
  return getToken(KPPParser::SEMI, 0);
}

KPPParser::Pp_importContext* KPPParser::PreprocContext::pp_import() {
  return getRuleContext<KPPParser::Pp_importContext>(0);
}


size_t KPPParser::PreprocContext::getRuleIndex() const {
  return KPPParser::RulePreproc;
}


KPPParser::PreprocContext* KPPParser::preproc() {
  PreprocContext *_localctx = _tracker.createInstance<PreprocContext>(_ctx, getState());
  enterRule(_localctx, 24, KPPParser::RulePreproc);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(190);
    match(KPPParser::PP_SYM);

    setState(191);
    pp_import();
    setState(192);
    match(KPPParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pp_importContext ------------------------------------------------------------------

KPPParser::Pp_importContext::Pp_importContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KPPParser::Pp_importContext::PP_IMPORT() {
  return getToken(KPPParser::PP_IMPORT, 0);
}

KPPParser::Symbol_idContext* KPPParser::Pp_importContext::symbol_id() {
  return getRuleContext<KPPParser::Symbol_idContext>(0);
}


size_t KPPParser::Pp_importContext::getRuleIndex() const {
  return KPPParser::RulePp_import;
}


KPPParser::Pp_importContext* KPPParser::pp_import() {
  Pp_importContext *_localctx = _tracker.createInstance<Pp_importContext>(_ctx, getState());
  enterRule(_localctx, 26, KPPParser::RulePp_import);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(194);
    match(KPPParser::PP_IMPORT);
    setState(195);
    symbol_id();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EntryDeclContext ------------------------------------------------------------------

KPPParser::EntryDeclContext::EntryDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KPPParser::EntryDeclContext::G_ENTRY() {
  return getToken(KPPParser::G_ENTRY, 0);
}

KPPParser::BlockContext* KPPParser::EntryDeclContext::block() {
  return getRuleContext<KPPParser::BlockContext>(0);
}

KPPParser::GroupContext* KPPParser::EntryDeclContext::group() {
  return getRuleContext<KPPParser::GroupContext>(0);
}


size_t KPPParser::EntryDeclContext::getRuleIndex() const {
  return KPPParser::RuleEntryDecl;
}


KPPParser::EntryDeclContext* KPPParser::entryDecl() {
  EntryDeclContext *_localctx = _tracker.createInstance<EntryDeclContext>(_ctx, getState());
  enterRule(_localctx, 28, KPPParser::RuleEntryDecl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(197);
    match(KPPParser::G_ENTRY);
    setState(199);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KPPParser::L_PARANTH) {
      setState(198);
      group();
    }
    setState(201);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodDeclContext ------------------------------------------------------------------

KPPParser::MethodDeclContext::MethodDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KPPParser::Symbol_idContext *> KPPParser::MethodDeclContext::symbol_id() {
  return getRuleContexts<KPPParser::Symbol_idContext>();
}

KPPParser::Symbol_idContext* KPPParser::MethodDeclContext::symbol_id(size_t i) {
  return getRuleContext<KPPParser::Symbol_idContext>(i);
}

KPPParser::BlockContext* KPPParser::MethodDeclContext::block() {
  return getRuleContext<KPPParser::BlockContext>(0);
}

KPPParser::GroupContext* KPPParser::MethodDeclContext::group() {
  return getRuleContext<KPPParser::GroupContext>(0);
}


size_t KPPParser::MethodDeclContext::getRuleIndex() const {
  return KPPParser::RuleMethodDecl;
}


KPPParser::MethodDeclContext* KPPParser::methodDecl() {
  MethodDeclContext *_localctx = _tracker.createInstance<MethodDeclContext>(_ctx, getState());
  enterRule(_localctx, 30, KPPParser::RuleMethodDecl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(203);
    symbol_id();
    setState(204);
    symbol_id();
    setState(206);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KPPParser::L_PARANTH) {
      setState(205);
      group();
    }
    setState(208);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodCallContext ------------------------------------------------------------------

KPPParser::MethodCallContext::MethodCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KPPParser::Symbol_idContext* KPPParser::MethodCallContext::symbol_id() {
  return getRuleContext<KPPParser::Symbol_idContext>(0);
}

tree::TerminalNode* KPPParser::MethodCallContext::L_PARANTH() {
  return getToken(KPPParser::L_PARANTH, 0);
}

KPPParser::GroupContext* KPPParser::MethodCallContext::group() {
  return getRuleContext<KPPParser::GroupContext>(0);
}

tree::TerminalNode* KPPParser::MethodCallContext::R_PARANTH() {
  return getToken(KPPParser::R_PARANTH, 0);
}

tree::TerminalNode* KPPParser::MethodCallContext::SEMI() {
  return getToken(KPPParser::SEMI, 0);
}


size_t KPPParser::MethodCallContext::getRuleIndex() const {
  return KPPParser::RuleMethodCall;
}


KPPParser::MethodCallContext* KPPParser::methodCall() {
  MethodCallContext *_localctx = _tracker.createInstance<MethodCallContext>(_ctx, getState());
  enterRule(_localctx, 32, KPPParser::RuleMethodCall);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(210);
    symbol_id();
    setState(211);
    match(KPPParser::L_PARANTH);
    setState(212);
    group();
    setState(213);
    match(KPPParser::R_PARANTH);
    setState(214);
    match(KPPParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SetexprContext ------------------------------------------------------------------

KPPParser::SetexprContext::SetexprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KPPParser::Symbol_idContext* KPPParser::SetexprContext::symbol_id() {
  return getRuleContext<KPPParser::Symbol_idContext>(0);
}

KPPParser::SetContext* KPPParser::SetexprContext::set() {
  return getRuleContext<KPPParser::SetContext>(0);
}

KPPParser::ValueContext* KPPParser::SetexprContext::value() {
  return getRuleContext<KPPParser::ValueContext>(0);
}

KPPParser::SetexprContext* KPPParser::SetexprContext::setexpr() {
  return getRuleContext<KPPParser::SetexprContext>(0);
}

KPPParser::ExprContext* KPPParser::SetexprContext::expr() {
  return getRuleContext<KPPParser::ExprContext>(0);
}


size_t KPPParser::SetexprContext::getRuleIndex() const {
  return KPPParser::RuleSetexpr;
}



KPPParser::SetexprContext* KPPParser::setexpr() {
   return setexpr(0);
}

KPPParser::SetexprContext* KPPParser::setexpr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  KPPParser::SetexprContext *_localctx = _tracker.createInstance<SetexprContext>(_ctx, parentState);
  KPPParser::SetexprContext *previousContext = _localctx;
  size_t startState = 34;
  enterRecursionRule(_localctx, 34, KPPParser::RuleSetexpr, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(217);
    symbol_id();
    setState(218);
    set();
    setState(219);
    value();
    _ctx->stop = _input->LT(-1);
    setState(227);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<SetexprContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleSetexpr);
        setState(221);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(222);
        set();
        setState(223);
        expr(); 
      }
      setState(229);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- SetContext ------------------------------------------------------------------

KPPParser::SetContext::SetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KPPParser::SetContext::A_SET() {
  return getToken(KPPParser::A_SET, 0);
}

tree::TerminalNode* KPPParser::SetContext::A_SET_DIFFERENCE() {
  return getToken(KPPParser::A_SET_DIFFERENCE, 0);
}

tree::TerminalNode* KPPParser::SetContext::A_SET_PRODUCT() {
  return getToken(KPPParser::A_SET_PRODUCT, 0);
}

tree::TerminalNode* KPPParser::SetContext::A_SET_QUOTIENT() {
  return getToken(KPPParser::A_SET_QUOTIENT, 0);
}

tree::TerminalNode* KPPParser::SetContext::A_SET_SUM() {
  return getToken(KPPParser::A_SET_SUM, 0);
}


size_t KPPParser::SetContext::getRuleIndex() const {
  return KPPParser::RuleSet;
}


KPPParser::SetContext* KPPParser::set() {
  SetContext *_localctx = _tracker.createInstance<SetContext>(_ctx, getState());
  enterRule(_localctx, 36, KPPParser::RuleSet);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(230);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << KPPParser::A_SET)
      | (1ULL << KPPParser::A_SET_SUM)
      | (1ULL << KPPParser::A_SET_DIFFERENCE)
      | (1ULL << KPPParser::A_SET_PRODUCT)
      | (1ULL << KPPParser::A_SET_QUOTIENT))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoopexpContext ------------------------------------------------------------------

KPPParser::LoopexpContext::LoopexpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KPPParser::LoopexpContext::C_FOR() {
  return getToken(KPPParser::C_FOR, 0);
}

KPPParser::LoopgroupContext* KPPParser::LoopexpContext::loopgroup() {
  return getRuleContext<KPPParser::LoopgroupContext>(0);
}

KPPParser::ExprContext* KPPParser::LoopexpContext::expr() {
  return getRuleContext<KPPParser::ExprContext>(0);
}

KPPParser::BlockContext* KPPParser::LoopexpContext::block() {
  return getRuleContext<KPPParser::BlockContext>(0);
}


size_t KPPParser::LoopexpContext::getRuleIndex() const {
  return KPPParser::RuleLoopexp;
}


KPPParser::LoopexpContext* KPPParser::loopexp() {
  LoopexpContext *_localctx = _tracker.createInstance<LoopexpContext>(_ctx, getState());
  enterRule(_localctx, 38, KPPParser::RuleLoopexp);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(232);
    match(KPPParser::C_FOR);
    setState(233);
    loopgroup();
    setState(236);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KPPParser::PP_SYM:
      case KPPParser::D_CLASS:
      case KPPParser::D_INTERFACE:
      case KPPParser::G_ENTRY:
      case KPPParser::CM_GTR:
      case KPPParser::CM_LSS:
      case KPPParser::CM_EQU:
      case KPPParser::CM_GTR_EQU:
      case KPPParser::CM_LSS_EQU:
      case KPPParser::A_ADD:
      case KPPParser::A_SUBTRACT:
      case KPPParser::A_MULTIPLY:
      case KPPParser::A_DIVIDE:
      case KPPParser::A_EXPONENT:
      case KPPParser::A_MODULO:
      case KPPParser::C_IF:
      case KPPParser::C_FOR:
      case KPPParser::L_PARANTH:
      case KPPParser::INTEGER:
      case KPPParser::DECIMAL:
      case KPPParser::IDENTIFIER: {
        setState(234);
        expr();
        break;
      }

      case KPPParser::L_BRACE: {
        setState(235);
        block();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoopgroupContext ------------------------------------------------------------------

KPPParser::LoopgroupContext::LoopgroupContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KPPParser::LoopgroupContext::L_PARANTH() {
  return getToken(KPPParser::L_PARANTH, 0);
}

tree::TerminalNode* KPPParser::LoopgroupContext::R_PARANTH() {
  return getToken(KPPParser::R_PARANTH, 0);
}

KPPParser::Loop3groupContext* KPPParser::LoopgroupContext::loop3group() {
  return getRuleContext<KPPParser::Loop3groupContext>(0);
}

KPPParser::LoopeachContext* KPPParser::LoopgroupContext::loopeach() {
  return getRuleContext<KPPParser::LoopeachContext>(0);
}

tree::TerminalNode* KPPParser::LoopgroupContext::INTEGER() {
  return getToken(KPPParser::INTEGER, 0);
}


size_t KPPParser::LoopgroupContext::getRuleIndex() const {
  return KPPParser::RuleLoopgroup;
}


KPPParser::LoopgroupContext* KPPParser::loopgroup() {
  LoopgroupContext *_localctx = _tracker.createInstance<LoopgroupContext>(_ctx, getState());
  enterRule(_localctx, 40, KPPParser::RuleLoopgroup);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(238);
    match(KPPParser::L_PARANTH);
    setState(242);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      setState(239);
      loop3group();
      break;
    }

    case 2: {
      setState(240);
      loopeach();
      break;
    }

    case 3: {
      setState(241);
      match(KPPParser::INTEGER);
      break;
    }

    }
    setState(244);
    match(KPPParser::R_PARANTH);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Loop3groupContext ------------------------------------------------------------------

KPPParser::Loop3groupContext::Loop3groupContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> KPPParser::Loop3groupContext::SEMI() {
  return getTokens(KPPParser::SEMI);
}

tree::TerminalNode* KPPParser::Loop3groupContext::SEMI(size_t i) {
  return getToken(KPPParser::SEMI, i);
}

KPPParser::VardeclContext* KPPParser::Loop3groupContext::vardecl() {
  return getRuleContext<KPPParser::VardeclContext>(0);
}

std::vector<KPPParser::ExprContext *> KPPParser::Loop3groupContext::expr() {
  return getRuleContexts<KPPParser::ExprContext>();
}

KPPParser::ExprContext* KPPParser::Loop3groupContext::expr(size_t i) {
  return getRuleContext<KPPParser::ExprContext>(i);
}


size_t KPPParser::Loop3groupContext::getRuleIndex() const {
  return KPPParser::RuleLoop3group;
}


KPPParser::Loop3groupContext* KPPParser::loop3group() {
  Loop3groupContext *_localctx = _tracker.createInstance<Loop3groupContext>(_ctx, getState());
  enterRule(_localctx, 42, KPPParser::RuleLoop3group);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(247);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KPPParser::IDENTIFIER) {
      setState(246);
      vardecl();
    }
    setState(249);
    match(KPPParser::SEMI);
    setState(251);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << KPPParser::PP_SYM)
      | (1ULL << KPPParser::D_CLASS)
      | (1ULL << KPPParser::D_INTERFACE)
      | (1ULL << KPPParser::G_ENTRY)
      | (1ULL << KPPParser::CM_GTR)
      | (1ULL << KPPParser::CM_LSS)
      | (1ULL << KPPParser::CM_EQU)
      | (1ULL << KPPParser::CM_GTR_EQU)
      | (1ULL << KPPParser::CM_LSS_EQU)
      | (1ULL << KPPParser::A_ADD)
      | (1ULL << KPPParser::A_SUBTRACT)
      | (1ULL << KPPParser::A_MULTIPLY)
      | (1ULL << KPPParser::A_DIVIDE)
      | (1ULL << KPPParser::A_EXPONENT)
      | (1ULL << KPPParser::A_MODULO)
      | (1ULL << KPPParser::C_IF)
      | (1ULL << KPPParser::C_FOR)
      | (1ULL << KPPParser::L_PARANTH)
      | (1ULL << KPPParser::INTEGER)
      | (1ULL << KPPParser::DECIMAL)
      | (1ULL << KPPParser::IDENTIFIER))) != 0)) {
      setState(250);
      expr();
    }
    setState(253);
    match(KPPParser::SEMI);
    setState(255);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << KPPParser::PP_SYM)
      | (1ULL << KPPParser::D_CLASS)
      | (1ULL << KPPParser::D_INTERFACE)
      | (1ULL << KPPParser::G_ENTRY)
      | (1ULL << KPPParser::CM_GTR)
      | (1ULL << KPPParser::CM_LSS)
      | (1ULL << KPPParser::CM_EQU)
      | (1ULL << KPPParser::CM_GTR_EQU)
      | (1ULL << KPPParser::CM_LSS_EQU)
      | (1ULL << KPPParser::A_ADD)
      | (1ULL << KPPParser::A_SUBTRACT)
      | (1ULL << KPPParser::A_MULTIPLY)
      | (1ULL << KPPParser::A_DIVIDE)
      | (1ULL << KPPParser::A_EXPONENT)
      | (1ULL << KPPParser::A_MODULO)
      | (1ULL << KPPParser::C_IF)
      | (1ULL << KPPParser::C_FOR)
      | (1ULL << KPPParser::L_PARANTH)
      | (1ULL << KPPParser::INTEGER)
      | (1ULL << KPPParser::DECIMAL)
      | (1ULL << KPPParser::IDENTIFIER))) != 0)) {
      setState(254);
      expr();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoopeachContext ------------------------------------------------------------------

KPPParser::LoopeachContext::LoopeachContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KPPParser::Symbol_idContext *> KPPParser::LoopeachContext::symbol_id() {
  return getRuleContexts<KPPParser::Symbol_idContext>();
}

KPPParser::Symbol_idContext* KPPParser::LoopeachContext::symbol_id(size_t i) {
  return getRuleContext<KPPParser::Symbol_idContext>(i);
}

tree::TerminalNode* KPPParser::LoopeachContext::C_IN() {
  return getToken(KPPParser::C_IN, 0);
}


size_t KPPParser::LoopeachContext::getRuleIndex() const {
  return KPPParser::RuleLoopeach;
}


KPPParser::LoopeachContext* KPPParser::loopeach() {
  LoopeachContext *_localctx = _tracker.createInstance<LoopeachContext>(_ctx, getState());
  enterRule(_localctx, 44, KPPParser::RuleLoopeach);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(257);
    symbol_id();
    setState(258);
    match(KPPParser::C_IN);
    setState(259);
    symbol_id();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GroupContext ------------------------------------------------------------------

KPPParser::GroupContext::GroupContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KPPParser::GroupContext::L_PARANTH() {
  return getToken(KPPParser::L_PARANTH, 0);
}

std::vector<tree::TerminalNode *> KPPParser::GroupContext::R_PARANTH() {
  return getTokens(KPPParser::R_PARANTH);
}

tree::TerminalNode* KPPParser::GroupContext::R_PARANTH(size_t i) {
  return getToken(KPPParser::R_PARANTH, i);
}

std::vector<KPPParser::VardeclContext *> KPPParser::GroupContext::vardecl() {
  return getRuleContexts<KPPParser::VardeclContext>();
}

KPPParser::VardeclContext* KPPParser::GroupContext::vardecl(size_t i) {
  return getRuleContext<KPPParser::VardeclContext>(i);
}

std::vector<tree::TerminalNode *> KPPParser::GroupContext::COMMA() {
  return getTokens(KPPParser::COMMA);
}

tree::TerminalNode* KPPParser::GroupContext::COMMA(size_t i) {
  return getToken(KPPParser::COMMA, i);
}

std::vector<KPPParser::Symbol_idContext *> KPPParser::GroupContext::symbol_id() {
  return getRuleContexts<KPPParser::Symbol_idContext>();
}

KPPParser::Symbol_idContext* KPPParser::GroupContext::symbol_id(size_t i) {
  return getRuleContext<KPPParser::Symbol_idContext>(i);
}


size_t KPPParser::GroupContext::getRuleIndex() const {
  return KPPParser::RuleGroup;
}


KPPParser::GroupContext* KPPParser::group() {
  GroupContext *_localctx = _tracker.createInstance<GroupContext>(_ctx, getState());
  enterRule(_localctx, 46, KPPParser::RuleGroup);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(297);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(261);
      match(KPPParser::L_PARANTH);
      setState(274);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (((((_la - 1) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 1)) & ((1ULL << (KPPParser::PP_SYM - 1))
        | (1ULL << (KPPParser::PP_IMPORT - 1))
        | (1ULL << (KPPParser::D_CLASS - 1))
        | (1ULL << (KPPParser::D_INTERFACE - 1))
        | (1ULL << (KPPParser::P_PUBLIC - 1))
        | (1ULL << (KPPParser::P_PRIVATE - 1))
        | (1ULL << (KPPParser::P_INTERNAL - 1))
        | (1ULL << (KPPParser::P_INHERIT - 1))
        | (1ULL << (KPPParser::G_ASSEMBLY - 1))
        | (1ULL << (KPPParser::G_DOT - 1))
        | (1ULL << (KPPParser::G_ENTRY - 1))
        | (1ULL << (KPPParser::G_ELLIPSE - 1))
        | (1ULL << (KPPParser::CM_GTR - 1))
        | (1ULL << (KPPParser::CM_LSS - 1))
        | (1ULL << (KPPParser::CM_EQU - 1))
        | (1ULL << (KPPParser::CM_GTR_EQU - 1))
        | (1ULL << (KPPParser::CM_LSS_EQU - 1))
        | (1ULL << (KPPParser::A_SET - 1))
        | (1ULL << (KPPParser::A_ADD - 1))
        | (1ULL << (KPPParser::A_SUBTRACT - 1))
        | (1ULL << (KPPParser::A_MULTIPLY - 1))
        | (1ULL << (KPPParser::A_DIVIDE - 1))
        | (1ULL << (KPPParser::A_EXPONENT - 1))
        | (1ULL << (KPPParser::A_MODULO - 1))
        | (1ULL << (KPPParser::A_SET_SUM - 1))
        | (1ULL << (KPPParser::A_SET_DIFFERENCE - 1))
        | (1ULL << (KPPParser::A_SET_PRODUCT - 1))
        | (1ULL << (KPPParser::A_SET_QUOTIENT - 1))
        | (1ULL << (KPPParser::A_INCREMENT - 1))
        | (1ULL << (KPPParser::A_DECRIMENT - 1))
        | (1ULL << (KPPParser::L_AND - 1))
        | (1ULL << (KPPParser::L_OR - 1))
        | (1ULL << (KPPParser::L_NAND - 1))
        | (1ULL << (KPPParser::L_NOR - 1))
        | (1ULL << (KPPParser::L_XOR - 1))
        | (1ULL << (KPPParser::L_XNOR - 1))
        | (1ULL << (KPPParser::L_NOT - 1))
        | (1ULL << (KPPParser::BL_AND - 1))
        | (1ULL << (KPPParser::BL_OR - 1))
        | (1ULL << (KPPParser::BL_INV - 1))
        | (1ULL << (KPPParser::BL_LEFT - 1))
        | (1ULL << (KPPParser::BL_RIGHT - 1))
        | (1ULL << (KPPParser::C_IF - 1))
        | (1ULL << (KPPParser::C_ELSE - 1))
        | (1ULL << (KPPParser::C_WHILE - 1))
        | (1ULL << (KPPParser::C_FOR - 1))
        | (1ULL << (KPPParser::C_GOTO - 1))
        | (1ULL << (KPPParser::C_BREAK - 1))
        | (1ULL << (KPPParser::C_SKIP - 1))
        | (1ULL << (KPPParser::C_IN - 1))
        | (1ULL << (KPPParser::L_BRACKET - 1))
        | (1ULL << (KPPParser::R_BRACKET - 1))
        | (1ULL << (KPPParser::L_PARANTH - 1))
        | (1ULL << (KPPParser::L_BRACE - 1))
        | (1ULL << (KPPParser::R_BRACE - 1))
        | (1ULL << (KPPParser::LINE_COMMENT - 1))
        | (1ULL << (KPPParser::BLOCK_COMMENT - 1))
        | (1ULL << (KPPParser::COMMA - 1))
        | (1ULL << (KPPParser::INTEGER - 1))
        | (1ULL << (KPPParser::DECIMAL - 1))
        | (1ULL << (KPPParser::IDENTIFIER - 1))
        | (1ULL << (KPPParser::SEMI - 1))
        | (1ULL << (KPPParser::WS - 1)))) != 0)) {
        setState(264);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
        case 1: {
          setState(262);
          vardecl();
          break;
        }

        case 2: {
          setState(263);
          _la = _input->LA(1);
          if (_la == 0 || _la == Token::EOF || (_la == KPPParser::R_PARANTH)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          break;
        }

        }
        setState(271);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (((((_la - 1) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 1)) & ((1ULL << (KPPParser::PP_SYM - 1))
          | (1ULL << (KPPParser::PP_IMPORT - 1))
          | (1ULL << (KPPParser::D_CLASS - 1))
          | (1ULL << (KPPParser::D_INTERFACE - 1))
          | (1ULL << (KPPParser::P_PUBLIC - 1))
          | (1ULL << (KPPParser::P_PRIVATE - 1))
          | (1ULL << (KPPParser::P_INTERNAL - 1))
          | (1ULL << (KPPParser::P_INHERIT - 1))
          | (1ULL << (KPPParser::G_ASSEMBLY - 1))
          | (1ULL << (KPPParser::G_DOT - 1))
          | (1ULL << (KPPParser::G_ENTRY - 1))
          | (1ULL << (KPPParser::G_ELLIPSE - 1))
          | (1ULL << (KPPParser::CM_GTR - 1))
          | (1ULL << (KPPParser::CM_LSS - 1))
          | (1ULL << (KPPParser::CM_EQU - 1))
          | (1ULL << (KPPParser::CM_GTR_EQU - 1))
          | (1ULL << (KPPParser::CM_LSS_EQU - 1))
          | (1ULL << (KPPParser::A_SET - 1))
          | (1ULL << (KPPParser::A_ADD - 1))
          | (1ULL << (KPPParser::A_SUBTRACT - 1))
          | (1ULL << (KPPParser::A_MULTIPLY - 1))
          | (1ULL << (KPPParser::A_DIVIDE - 1))
          | (1ULL << (KPPParser::A_EXPONENT - 1))
          | (1ULL << (KPPParser::A_MODULO - 1))
          | (1ULL << (KPPParser::A_SET_SUM - 1))
          | (1ULL << (KPPParser::A_SET_DIFFERENCE - 1))
          | (1ULL << (KPPParser::A_SET_PRODUCT - 1))
          | (1ULL << (KPPParser::A_SET_QUOTIENT - 1))
          | (1ULL << (KPPParser::A_INCREMENT - 1))
          | (1ULL << (KPPParser::A_DECRIMENT - 1))
          | (1ULL << (KPPParser::L_AND - 1))
          | (1ULL << (KPPParser::L_OR - 1))
          | (1ULL << (KPPParser::L_NAND - 1))
          | (1ULL << (KPPParser::L_NOR - 1))
          | (1ULL << (KPPParser::L_XOR - 1))
          | (1ULL << (KPPParser::L_XNOR - 1))
          | (1ULL << (KPPParser::L_NOT - 1))
          | (1ULL << (KPPParser::BL_AND - 1))
          | (1ULL << (KPPParser::BL_OR - 1))
          | (1ULL << (KPPParser::BL_INV - 1))
          | (1ULL << (KPPParser::BL_LEFT - 1))
          | (1ULL << (KPPParser::BL_RIGHT - 1))
          | (1ULL << (KPPParser::C_IF - 1))
          | (1ULL << (KPPParser::C_ELSE - 1))
          | (1ULL << (KPPParser::C_WHILE - 1))
          | (1ULL << (KPPParser::C_FOR - 1))
          | (1ULL << (KPPParser::C_GOTO - 1))
          | (1ULL << (KPPParser::C_BREAK - 1))
          | (1ULL << (KPPParser::C_SKIP - 1))
          | (1ULL << (KPPParser::C_IN - 1))
          | (1ULL << (KPPParser::L_BRACKET - 1))
          | (1ULL << (KPPParser::R_BRACKET - 1))
          | (1ULL << (KPPParser::L_PARANTH - 1))
          | (1ULL << (KPPParser::L_BRACE - 1))
          | (1ULL << (KPPParser::R_BRACE - 1))
          | (1ULL << (KPPParser::LINE_COMMENT - 1))
          | (1ULL << (KPPParser::BLOCK_COMMENT - 1))
          | (1ULL << (KPPParser::COMMA - 1))
          | (1ULL << (KPPParser::INTEGER - 1))
          | (1ULL << (KPPParser::DECIMAL - 1))
          | (1ULL << (KPPParser::IDENTIFIER - 1))
          | (1ULL << (KPPParser::SEMI - 1))
          | (1ULL << (KPPParser::WS - 1)))) != 0)) {
          setState(269);
          _errHandler->sync(this);
          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
          case 1: {
            setState(266);
            match(KPPParser::COMMA);
            setState(267);
            vardecl();
            break;
          }

          case 2: {
            setState(268);
            _la = _input->LA(1);
            if (_la == 0 || _la == Token::EOF || (_la == KPPParser::R_PARANTH)) {
            _errHandler->recoverInline(this);
            }
            else {
              _errHandler->reportMatch(this);
              consume();
            }
            break;
          }

          }
          setState(273);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(276);
      match(KPPParser::R_PARANTH);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(277);
      match(KPPParser::L_PARANTH);
      setState(294);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (((((_la - 1) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 1)) & ((1ULL << (KPPParser::PP_SYM - 1))
        | (1ULL << (KPPParser::PP_IMPORT - 1))
        | (1ULL << (KPPParser::D_CLASS - 1))
        | (1ULL << (KPPParser::D_INTERFACE - 1))
        | (1ULL << (KPPParser::P_PUBLIC - 1))
        | (1ULL << (KPPParser::P_PRIVATE - 1))
        | (1ULL << (KPPParser::P_INTERNAL - 1))
        | (1ULL << (KPPParser::P_INHERIT - 1))
        | (1ULL << (KPPParser::G_ASSEMBLY - 1))
        | (1ULL << (KPPParser::G_DOT - 1))
        | (1ULL << (KPPParser::G_ENTRY - 1))
        | (1ULL << (KPPParser::G_ELLIPSE - 1))
        | (1ULL << (KPPParser::CM_GTR - 1))
        | (1ULL << (KPPParser::CM_LSS - 1))
        | (1ULL << (KPPParser::CM_EQU - 1))
        | (1ULL << (KPPParser::CM_GTR_EQU - 1))
        | (1ULL << (KPPParser::CM_LSS_EQU - 1))
        | (1ULL << (KPPParser::A_SET - 1))
        | (1ULL << (KPPParser::A_ADD - 1))
        | (1ULL << (KPPParser::A_SUBTRACT - 1))
        | (1ULL << (KPPParser::A_MULTIPLY - 1))
        | (1ULL << (KPPParser::A_DIVIDE - 1))
        | (1ULL << (KPPParser::A_EXPONENT - 1))
        | (1ULL << (KPPParser::A_MODULO - 1))
        | (1ULL << (KPPParser::A_SET_SUM - 1))
        | (1ULL << (KPPParser::A_SET_DIFFERENCE - 1))
        | (1ULL << (KPPParser::A_SET_PRODUCT - 1))
        | (1ULL << (KPPParser::A_SET_QUOTIENT - 1))
        | (1ULL << (KPPParser::A_INCREMENT - 1))
        | (1ULL << (KPPParser::A_DECRIMENT - 1))
        | (1ULL << (KPPParser::L_AND - 1))
        | (1ULL << (KPPParser::L_OR - 1))
        | (1ULL << (KPPParser::L_NAND - 1))
        | (1ULL << (KPPParser::L_NOR - 1))
        | (1ULL << (KPPParser::L_XOR - 1))
        | (1ULL << (KPPParser::L_XNOR - 1))
        | (1ULL << (KPPParser::L_NOT - 1))
        | (1ULL << (KPPParser::BL_AND - 1))
        | (1ULL << (KPPParser::BL_OR - 1))
        | (1ULL << (KPPParser::BL_INV - 1))
        | (1ULL << (KPPParser::BL_LEFT - 1))
        | (1ULL << (KPPParser::BL_RIGHT - 1))
        | (1ULL << (KPPParser::C_IF - 1))
        | (1ULL << (KPPParser::C_ELSE - 1))
        | (1ULL << (KPPParser::C_WHILE - 1))
        | (1ULL << (KPPParser::C_FOR - 1))
        | (1ULL << (KPPParser::C_GOTO - 1))
        | (1ULL << (KPPParser::C_BREAK - 1))
        | (1ULL << (KPPParser::C_SKIP - 1))
        | (1ULL << (KPPParser::C_IN - 1))
        | (1ULL << (KPPParser::L_BRACKET - 1))
        | (1ULL << (KPPParser::R_BRACKET - 1))
        | (1ULL << (KPPParser::L_PARANTH - 1))
        | (1ULL << (KPPParser::L_BRACE - 1))
        | (1ULL << (KPPParser::R_BRACE - 1))
        | (1ULL << (KPPParser::LINE_COMMENT - 1))
        | (1ULL << (KPPParser::BLOCK_COMMENT - 1))
        | (1ULL << (KPPParser::COMMA - 1))
        | (1ULL << (KPPParser::INTEGER - 1))
        | (1ULL << (KPPParser::DECIMAL - 1))
        | (1ULL << (KPPParser::IDENTIFIER - 1))
        | (1ULL << (KPPParser::SEMI - 1))
        | (1ULL << (KPPParser::WS - 1)))) != 0)) {
        setState(282);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
        case 1: {
          setState(278);
          symbol_id();
          setState(279);
          symbol_id();
          break;
        }

        case 2: {
          setState(281);
          _la = _input->LA(1);
          if (_la == 0 || _la == Token::EOF || (_la == KPPParser::R_PARANTH)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          break;
        }

        }
        setState(291);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (((((_la - 1) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 1)) & ((1ULL << (KPPParser::PP_SYM - 1))
          | (1ULL << (KPPParser::PP_IMPORT - 1))
          | (1ULL << (KPPParser::D_CLASS - 1))
          | (1ULL << (KPPParser::D_INTERFACE - 1))
          | (1ULL << (KPPParser::P_PUBLIC - 1))
          | (1ULL << (KPPParser::P_PRIVATE - 1))
          | (1ULL << (KPPParser::P_INTERNAL - 1))
          | (1ULL << (KPPParser::P_INHERIT - 1))
          | (1ULL << (KPPParser::G_ASSEMBLY - 1))
          | (1ULL << (KPPParser::G_DOT - 1))
          | (1ULL << (KPPParser::G_ENTRY - 1))
          | (1ULL << (KPPParser::G_ELLIPSE - 1))
          | (1ULL << (KPPParser::CM_GTR - 1))
          | (1ULL << (KPPParser::CM_LSS - 1))
          | (1ULL << (KPPParser::CM_EQU - 1))
          | (1ULL << (KPPParser::CM_GTR_EQU - 1))
          | (1ULL << (KPPParser::CM_LSS_EQU - 1))
          | (1ULL << (KPPParser::A_SET - 1))
          | (1ULL << (KPPParser::A_ADD - 1))
          | (1ULL << (KPPParser::A_SUBTRACT - 1))
          | (1ULL << (KPPParser::A_MULTIPLY - 1))
          | (1ULL << (KPPParser::A_DIVIDE - 1))
          | (1ULL << (KPPParser::A_EXPONENT - 1))
          | (1ULL << (KPPParser::A_MODULO - 1))
          | (1ULL << (KPPParser::A_SET_SUM - 1))
          | (1ULL << (KPPParser::A_SET_DIFFERENCE - 1))
          | (1ULL << (KPPParser::A_SET_PRODUCT - 1))
          | (1ULL << (KPPParser::A_SET_QUOTIENT - 1))
          | (1ULL << (KPPParser::A_INCREMENT - 1))
          | (1ULL << (KPPParser::A_DECRIMENT - 1))
          | (1ULL << (KPPParser::L_AND - 1))
          | (1ULL << (KPPParser::L_OR - 1))
          | (1ULL << (KPPParser::L_NAND - 1))
          | (1ULL << (KPPParser::L_NOR - 1))
          | (1ULL << (KPPParser::L_XOR - 1))
          | (1ULL << (KPPParser::L_XNOR - 1))
          | (1ULL << (KPPParser::L_NOT - 1))
          | (1ULL << (KPPParser::BL_AND - 1))
          | (1ULL << (KPPParser::BL_OR - 1))
          | (1ULL << (KPPParser::BL_INV - 1))
          | (1ULL << (KPPParser::BL_LEFT - 1))
          | (1ULL << (KPPParser::BL_RIGHT - 1))
          | (1ULL << (KPPParser::C_IF - 1))
          | (1ULL << (KPPParser::C_ELSE - 1))
          | (1ULL << (KPPParser::C_WHILE - 1))
          | (1ULL << (KPPParser::C_FOR - 1))
          | (1ULL << (KPPParser::C_GOTO - 1))
          | (1ULL << (KPPParser::C_BREAK - 1))
          | (1ULL << (KPPParser::C_SKIP - 1))
          | (1ULL << (KPPParser::C_IN - 1))
          | (1ULL << (KPPParser::L_BRACKET - 1))
          | (1ULL << (KPPParser::R_BRACKET - 1))
          | (1ULL << (KPPParser::L_PARANTH - 1))
          | (1ULL << (KPPParser::L_BRACE - 1))
          | (1ULL << (KPPParser::R_BRACE - 1))
          | (1ULL << (KPPParser::LINE_COMMENT - 1))
          | (1ULL << (KPPParser::BLOCK_COMMENT - 1))
          | (1ULL << (KPPParser::COMMA - 1))
          | (1ULL << (KPPParser::INTEGER - 1))
          | (1ULL << (KPPParser::DECIMAL - 1))
          | (1ULL << (KPPParser::IDENTIFIER - 1))
          | (1ULL << (KPPParser::SEMI - 1))
          | (1ULL << (KPPParser::WS - 1)))) != 0)) {
          setState(289);
          _errHandler->sync(this);
          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
          case 1: {
            setState(284);
            match(KPPParser::COMMA);
            setState(285);
            symbol_id();
            setState(286);
            symbol_id();
            break;
          }

          case 2: {
            setState(288);
            _la = _input->LA(1);
            if (_la == 0 || _la == Token::EOF || (_la == KPPParser::R_PARANTH)) {
            _errHandler->recoverInline(this);
            }
            else {
              _errHandler->reportMatch(this);
              consume();
            }
            break;
          }

          }
          setState(293);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(296);
      match(KPPParser::R_PARANTH);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VardeclContext ------------------------------------------------------------------

KPPParser::VardeclContext::VardeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KPPParser::Symbol_idContext *> KPPParser::VardeclContext::symbol_id() {
  return getRuleContexts<KPPParser::Symbol_idContext>();
}

KPPParser::Symbol_idContext* KPPParser::VardeclContext::symbol_id(size_t i) {
  return getRuleContext<KPPParser::Symbol_idContext>(i);
}

KPPParser::ArraydeclContext* KPPParser::VardeclContext::arraydecl() {
  return getRuleContext<KPPParser::ArraydeclContext>(0);
}


size_t KPPParser::VardeclContext::getRuleIndex() const {
  return KPPParser::RuleVardecl;
}


KPPParser::VardeclContext* KPPParser::vardecl() {
  VardeclContext *_localctx = _tracker.createInstance<VardeclContext>(_ctx, getState());
  enterRule(_localctx, 48, KPPParser::RuleVardecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(303);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(299);
      symbol_id();
      setState(300);
      symbol_id();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(302);
      arraydecl();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArraydeclContext ------------------------------------------------------------------

KPPParser::ArraydeclContext::ArraydeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KPPParser::Symbol_idContext *> KPPParser::ArraydeclContext::symbol_id() {
  return getRuleContexts<KPPParser::Symbol_idContext>();
}

KPPParser::Symbol_idContext* KPPParser::ArraydeclContext::symbol_id(size_t i) {
  return getRuleContext<KPPParser::Symbol_idContext>(i);
}

tree::TerminalNode* KPPParser::ArraydeclContext::L_BRACKET() {
  return getToken(KPPParser::L_BRACKET, 0);
}

tree::TerminalNode* KPPParser::ArraydeclContext::R_BRACKET() {
  return getToken(KPPParser::R_BRACKET, 0);
}

KPPParser::NumberContext* KPPParser::ArraydeclContext::number() {
  return getRuleContext<KPPParser::NumberContext>(0);
}


size_t KPPParser::ArraydeclContext::getRuleIndex() const {
  return KPPParser::RuleArraydecl;
}


KPPParser::ArraydeclContext* KPPParser::arraydecl() {
  ArraydeclContext *_localctx = _tracker.createInstance<ArraydeclContext>(_ctx, getState());
  enterRule(_localctx, 50, KPPParser::RuleArraydecl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(305);
    symbol_id();
    setState(306);
    match(KPPParser::L_BRACKET);
    setState(308);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KPPParser::INTEGER

    || _la == KPPParser::DECIMAL) {
      setState(307);
      number();
    }
    setState(310);
    match(KPPParser::R_BRACKET);
    setState(311);
    symbol_id();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfexpContext ------------------------------------------------------------------

KPPParser::IfexpContext::IfexpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KPPParser::IfexpContext::C_IF() {
  return getToken(KPPParser::C_IF, 0);
}

tree::TerminalNode* KPPParser::IfexpContext::L_PARANTH() {
  return getToken(KPPParser::L_PARANTH, 0);
}

std::vector<KPPParser::ExprContext *> KPPParser::IfexpContext::expr() {
  return getRuleContexts<KPPParser::ExprContext>();
}

KPPParser::ExprContext* KPPParser::IfexpContext::expr(size_t i) {
  return getRuleContext<KPPParser::ExprContext>(i);
}

tree::TerminalNode* KPPParser::IfexpContext::R_PARANTH() {
  return getToken(KPPParser::R_PARANTH, 0);
}

KPPParser::BlockContext* KPPParser::IfexpContext::block() {
  return getRuleContext<KPPParser::BlockContext>(0);
}

KPPParser::ElseexpContext* KPPParser::IfexpContext::elseexp() {
  return getRuleContext<KPPParser::ElseexpContext>(0);
}


size_t KPPParser::IfexpContext::getRuleIndex() const {
  return KPPParser::RuleIfexp;
}


KPPParser::IfexpContext* KPPParser::ifexp() {
  IfexpContext *_localctx = _tracker.createInstance<IfexpContext>(_ctx, getState());
  enterRule(_localctx, 52, KPPParser::RuleIfexp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(313);
    match(KPPParser::C_IF);
    setState(314);
    match(KPPParser::L_PARANTH);
    setState(315);
    expr();
    setState(316);
    match(KPPParser::R_PARANTH);
    setState(319);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KPPParser::PP_SYM:
      case KPPParser::D_CLASS:
      case KPPParser::D_INTERFACE:
      case KPPParser::G_ENTRY:
      case KPPParser::CM_GTR:
      case KPPParser::CM_LSS:
      case KPPParser::CM_EQU:
      case KPPParser::CM_GTR_EQU:
      case KPPParser::CM_LSS_EQU:
      case KPPParser::A_ADD:
      case KPPParser::A_SUBTRACT:
      case KPPParser::A_MULTIPLY:
      case KPPParser::A_DIVIDE:
      case KPPParser::A_EXPONENT:
      case KPPParser::A_MODULO:
      case KPPParser::C_IF:
      case KPPParser::C_FOR:
      case KPPParser::L_PARANTH:
      case KPPParser::INTEGER:
      case KPPParser::DECIMAL:
      case KPPParser::IDENTIFIER: {
        setState(317);
        expr();
        break;
      }

      case KPPParser::L_BRACE: {
        setState(318);
        block();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(322);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KPPParser::C_ELSE) {
      setState(321);
      elseexp();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElseexpContext ------------------------------------------------------------------

KPPParser::ElseexpContext::ElseexpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KPPParser::ElseexpContext::C_ELSE() {
  return getToken(KPPParser::C_ELSE, 0);
}

KPPParser::ExprContext* KPPParser::ElseexpContext::expr() {
  return getRuleContext<KPPParser::ExprContext>(0);
}

KPPParser::BlockContext* KPPParser::ElseexpContext::block() {
  return getRuleContext<KPPParser::BlockContext>(0);
}

tree::TerminalNode* KPPParser::ElseexpContext::C_IF() {
  return getToken(KPPParser::C_IF, 0);
}


size_t KPPParser::ElseexpContext::getRuleIndex() const {
  return KPPParser::RuleElseexp;
}


KPPParser::ElseexpContext* KPPParser::elseexp() {
  ElseexpContext *_localctx = _tracker.createInstance<ElseexpContext>(_ctx, getState());
  enterRule(_localctx, 54, KPPParser::RuleElseexp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(324);
    match(KPPParser::C_ELSE);
    setState(328);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
    case 1: {
      setState(325);
      expr();
      break;
    }

    case 2: {
      setState(326);
      block();
      break;
    }

    case 3: {
      setState(327);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == KPPParser::C_IF)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MathExprContext ------------------------------------------------------------------

KPPParser::MathExprContext::MathExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KPPParser::BinMathOpsContext* KPPParser::MathExprContext::binMathOps() {
  return getRuleContext<KPPParser::BinMathOpsContext>(0);
}


size_t KPPParser::MathExprContext::getRuleIndex() const {
  return KPPParser::RuleMathExpr;
}


KPPParser::MathExprContext* KPPParser::mathExpr() {
  MathExprContext *_localctx = _tracker.createInstance<MathExprContext>(_ctx, getState());
  enterRule(_localctx, 56, KPPParser::RuleMathExpr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(330);
    binMathOps();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompExprContext ------------------------------------------------------------------

KPPParser::CompExprContext::CompExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KPPParser::BinCompOpsContext* KPPParser::CompExprContext::binCompOps() {
  return getRuleContext<KPPParser::BinCompOpsContext>(0);
}


size_t KPPParser::CompExprContext::getRuleIndex() const {
  return KPPParser::RuleCompExpr;
}


KPPParser::CompExprContext* KPPParser::compExpr() {
  CompExprContext *_localctx = _tracker.createInstance<CompExprContext>(_ctx, getState());
  enterRule(_localctx, 58, KPPParser::RuleCompExpr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(332);
    binCompOps();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValueContext ------------------------------------------------------------------

KPPParser::ValueContext::ValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KPPParser::Symbol_idContext* KPPParser::ValueContext::symbol_id() {
  return getRuleContext<KPPParser::Symbol_idContext>(0);
}

KPPParser::NumberContext* KPPParser::ValueContext::number() {
  return getRuleContext<KPPParser::NumberContext>(0);
}


size_t KPPParser::ValueContext::getRuleIndex() const {
  return KPPParser::RuleValue;
}


KPPParser::ValueContext* KPPParser::value() {
  ValueContext *_localctx = _tracker.createInstance<ValueContext>(_ctx, getState());
  enterRule(_localctx, 60, KPPParser::RuleValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(336);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KPPParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(334);
        symbol_id();
        break;
      }

      case KPPParser::INTEGER:
      case KPPParser::DECIMAL: {
        enterOuterAlt(_localctx, 2);
        setState(335);
        number();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BinCompOpsContext ------------------------------------------------------------------

KPPParser::BinCompOpsContext::BinCompOpsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KPPParser::BinCompOpsContext::CM_EQU() {
  return getToken(KPPParser::CM_EQU, 0);
}

tree::TerminalNode* KPPParser::BinCompOpsContext::CM_GTR() {
  return getToken(KPPParser::CM_GTR, 0);
}

tree::TerminalNode* KPPParser::BinCompOpsContext::CM_GTR_EQU() {
  return getToken(KPPParser::CM_GTR_EQU, 0);
}

tree::TerminalNode* KPPParser::BinCompOpsContext::CM_LSS() {
  return getToken(KPPParser::CM_LSS, 0);
}

tree::TerminalNode* KPPParser::BinCompOpsContext::CM_LSS_EQU() {
  return getToken(KPPParser::CM_LSS_EQU, 0);
}


size_t KPPParser::BinCompOpsContext::getRuleIndex() const {
  return KPPParser::RuleBinCompOps;
}


KPPParser::BinCompOpsContext* KPPParser::binCompOps() {
  BinCompOpsContext *_localctx = _tracker.createInstance<BinCompOpsContext>(_ctx, getState());
  enterRule(_localctx, 62, KPPParser::RuleBinCompOps);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(338);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << KPPParser::CM_GTR)
      | (1ULL << KPPParser::CM_LSS)
      | (1ULL << KPPParser::CM_EQU)
      | (1ULL << KPPParser::CM_GTR_EQU)
      | (1ULL << KPPParser::CM_LSS_EQU))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryLogicContext ------------------------------------------------------------------

KPPParser::UnaryLogicContext::UnaryLogicContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KPPParser::UnaryLogicContext::L_NOT() {
  return getToken(KPPParser::L_NOT, 0);
}


size_t KPPParser::UnaryLogicContext::getRuleIndex() const {
  return KPPParser::RuleUnaryLogic;
}


KPPParser::UnaryLogicContext* KPPParser::unaryLogic() {
  UnaryLogicContext *_localctx = _tracker.createInstance<UnaryLogicContext>(_ctx, getState());
  enterRule(_localctx, 64, KPPParser::RuleUnaryLogic);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(340);
    match(KPPParser::L_NOT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryOpContext ------------------------------------------------------------------

KPPParser::UnaryOpContext::UnaryOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KPPParser::UnaryOpContext::BL_INV() {
  return getToken(KPPParser::BL_INV, 0);
}


size_t KPPParser::UnaryOpContext::getRuleIndex() const {
  return KPPParser::RuleUnaryOp;
}


KPPParser::UnaryOpContext* KPPParser::unaryOp() {
  UnaryOpContext *_localctx = _tracker.createInstance<UnaryOpContext>(_ctx, getState());
  enterRule(_localctx, 66, KPPParser::RuleUnaryOp);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(342);
    match(KPPParser::BL_INV);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BinMathOpsContext ------------------------------------------------------------------

KPPParser::BinMathOpsContext::BinMathOpsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KPPParser::BinMathOpsContext::A_ADD() {
  return getToken(KPPParser::A_ADD, 0);
}

tree::TerminalNode* KPPParser::BinMathOpsContext::A_SUBTRACT() {
  return getToken(KPPParser::A_SUBTRACT, 0);
}

tree::TerminalNode* KPPParser::BinMathOpsContext::A_MULTIPLY() {
  return getToken(KPPParser::A_MULTIPLY, 0);
}

tree::TerminalNode* KPPParser::BinMathOpsContext::A_DIVIDE() {
  return getToken(KPPParser::A_DIVIDE, 0);
}

tree::TerminalNode* KPPParser::BinMathOpsContext::A_EXPONENT() {
  return getToken(KPPParser::A_EXPONENT, 0);
}

tree::TerminalNode* KPPParser::BinMathOpsContext::A_MODULO() {
  return getToken(KPPParser::A_MODULO, 0);
}


size_t KPPParser::BinMathOpsContext::getRuleIndex() const {
  return KPPParser::RuleBinMathOps;
}


KPPParser::BinMathOpsContext* KPPParser::binMathOps() {
  BinMathOpsContext *_localctx = _tracker.createInstance<BinMathOpsContext>(_ctx, getState());
  enterRule(_localctx, 68, KPPParser::RuleBinMathOps);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(344);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << KPPParser::A_ADD)
      | (1ULL << KPPParser::A_SUBTRACT)
      | (1ULL << KPPParser::A_MULTIPLY)
      | (1ULL << KPPParser::A_DIVIDE)
      | (1ULL << KPPParser::A_EXPONENT)
      | (1ULL << KPPParser::A_MODULO))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Lr_math_opsContext ------------------------------------------------------------------

KPPParser::Lr_math_opsContext::Lr_math_opsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KPPParser::Lr_math_opsContext::A_INCREMENT() {
  return getToken(KPPParser::A_INCREMENT, 0);
}

KPPParser::Symbol_idContext* KPPParser::Lr_math_opsContext::symbol_id() {
  return getRuleContext<KPPParser::Symbol_idContext>(0);
}

tree::TerminalNode* KPPParser::Lr_math_opsContext::A_DECRIMENT() {
  return getToken(KPPParser::A_DECRIMENT, 0);
}


size_t KPPParser::Lr_math_opsContext::getRuleIndex() const {
  return KPPParser::RuleLr_math_ops;
}


KPPParser::Lr_math_opsContext* KPPParser::lr_math_ops() {
  Lr_math_opsContext *_localctx = _tracker.createInstance<Lr_math_opsContext>(_ctx, getState());
  enterRule(_localctx, 70, KPPParser::RuleLr_math_ops);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(356);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(346);
      match(KPPParser::A_INCREMENT);
      setState(347);
      symbol_id();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(348);
      match(KPPParser::A_DECRIMENT);
      setState(349);
      symbol_id();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(350);
      symbol_id();
      setState(351);
      match(KPPParser::A_INCREMENT);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(353);
      symbol_id();
      setState(354);
      match(KPPParser::A_DECRIMENT);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

KPPParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KPPParser::NumberContext::DECIMAL() {
  return getToken(KPPParser::DECIMAL, 0);
}

tree::TerminalNode* KPPParser::NumberContext::INTEGER() {
  return getToken(KPPParser::INTEGER, 0);
}


size_t KPPParser::NumberContext::getRuleIndex() const {
  return KPPParser::RuleNumber;
}


KPPParser::NumberContext* KPPParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 72, KPPParser::RuleNumber);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(358);
    _la = _input->LA(1);
    if (!(_la == KPPParser::INTEGER

    || _la == KPPParser::DECIMAL)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool KPPParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 17: return setexprSempred(dynamic_cast<SetexprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool KPPParser::setexprSempred(SetexprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> KPPParser::_decisionToDFA;
atn::PredictionContextCache KPPParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN KPPParser::_atn;
std::vector<uint16_t> KPPParser::_serializedATN;

std::vector<std::string> KPPParser::_ruleNames = {
  "kpp", "section", "namespacedecl", "symbol_id", "block", "classblock", 
  "classdeclblock", "accessdeclblock", "expr", "interfaceDecl", "classDecl", 
  "inheritList", "preproc", "pp_import", "entryDecl", "methodDecl", "methodCall", 
  "setexpr", "set", "loopexp", "loopgroup", "loop3group", "loopeach", "group", 
  "vardecl", "arraydecl", "ifexp", "elseexp", "mathExpr", "compExpr", "value", 
  "binCompOps", "unaryLogic", "unaryOp", "binMathOps", "lr_math_ops", "number"
};

std::vector<std::string> KPPParser::_literalNames = {
  "", "'$'", "'import'", "'class'", "'contract'", "'public'", "'private'", 
  "'internal'", "'legacy'", "'__asm__'", "'.'", "'entry'", "'...'", "'>'", 
  "'<'", "'=='", "'>='", "'<='", "'='", "'+'", "'-'", "'*'", "'/'", "'**'", 
  "'%'", "'+='", "'-='", "'*='", "'/='", "'++'", "'--'", "'&&'", "'||'", 
  "'!&'", "'!|'", "'^|'", "'^!|'", "'!'", "'&'", "'|'", "'~'", "'<<'", "'>>'", 
  "'if'", "'else'", "'while'", "'for'", "'goto'", "'break'", "'skip'", "'in'", 
  "'['", "']'", "'('", "')'", "'{'", "'}'", "", "", "','", "", "", "", "';'"
};

std::vector<std::string> KPPParser::_symbolicNames = {
  "", "PP_SYM", "PP_IMPORT", "D_CLASS", "D_INTERFACE", "P_PUBLIC", "P_PRIVATE", 
  "P_INTERNAL", "P_INHERIT", "G_ASSEMBLY", "G_DOT", "G_ENTRY", "G_ELLIPSE", 
  "CM_GTR", "CM_LSS", "CM_EQU", "CM_GTR_EQU", "CM_LSS_EQU", "A_SET", "A_ADD", 
  "A_SUBTRACT", "A_MULTIPLY", "A_DIVIDE", "A_EXPONENT", "A_MODULO", "A_SET_SUM", 
  "A_SET_DIFFERENCE", "A_SET_PRODUCT", "A_SET_QUOTIENT", "A_INCREMENT", 
  "A_DECRIMENT", "L_AND", "L_OR", "L_NAND", "L_NOR", "L_XOR", "L_XNOR", 
  "L_NOT", "BL_AND", "BL_OR", "BL_INV", "BL_LEFT", "BL_RIGHT", "C_IF", "C_ELSE", 
  "C_WHILE", "C_FOR", "C_GOTO", "C_BREAK", "C_SKIP", "C_IN", "L_BRACKET", 
  "R_BRACKET", "L_PARANTH", "R_PARANTH", "L_BRACE", "R_BRACE", "LINE_COMMENT", 
  "BLOCK_COMMENT", "COMMA", "INTEGER", "DECIMAL", "IDENTIFIER", "SEMI", 
  "WS"
};

dfa::Vocabulary KPPParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> KPPParser::_tokenNames;

KPPParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x42, 0x16b, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x3, 0x2, 0x6, 0x2, 0x4e, 0xa, 0x2, 0xd, 
    0x2, 0xe, 0x2, 0x4f, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 
    0x56, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x7, 0x5, 0x5f, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x62, 0xb, 
    0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0x67, 0xa, 0x6, 0xc, 0x6, 
    0xe, 0x6, 0x6a, 0xb, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x8, 0x7, 0x8, 0x73, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 
    0x76, 0xb, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 
    0x9, 0x7d, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x80, 0xb, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x6, 0xa, 0x97, 
    0xa, 0xa, 0xd, 0xa, 0xe, 0xa, 0x98, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x6, 0xb, 0xa3, 0xa, 0xb, 
    0xd, 0xb, 0xe, 0xb, 0xa4, 0x5, 0xb, 0xa7, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 
    0xb1, 0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x6, 0xd, 0xb9, 0xa, 0xd, 0xd, 0xd, 0xe, 0xd, 0xba, 0x5, 0xd, 0xbd, 
    0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0xca, 
    0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 
    0x11, 0xd1, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x7, 
    0x13, 0xe4, 0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 0xe7, 0xb, 0x13, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0xef, 
    0xa, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 0xf5, 
    0xa, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x5, 0x17, 0xfa, 0xa, 0x17, 
    0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0xfe, 0xa, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x5, 0x17, 0x102, 0xa, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x10b, 0xa, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x7, 0x19, 0x110, 0xa, 0x19, 0xc, 0x19, 0xe, 0x19, 
    0x113, 0xb, 0x19, 0x5, 0x19, 0x115, 0xa, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x11d, 0xa, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x7, 0x19, 0x124, 
    0xa, 0x19, 0xc, 0x19, 0xe, 0x19, 0x127, 0xb, 0x19, 0x5, 0x19, 0x129, 
    0xa, 0x19, 0x3, 0x19, 0x5, 0x19, 0x12c, 0xa, 0x19, 0x3, 0x1a, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x132, 0xa, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 
    0x3, 0x1b, 0x5, 0x1b, 0x137, 0xa, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 
    0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x5, 
    0x1c, 0x142, 0xa, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 0x145, 0xa, 0x1c, 0x3, 
    0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 0x14b, 0xa, 0x1d, 
    0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x5, 
    0x20, 0x153, 0xa, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 0x3, 0x22, 
    0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 
    0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 
    0x3, 0x25, 0x5, 0x25, 0x167, 0xa, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 
    0x3, 0x60, 0x3, 0x24, 0x27, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 
    0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 
    0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 
    0x42, 0x44, 0x46, 0x48, 0x4a, 0x2, 0xa, 0x3, 0x2, 0x3a, 0x3a, 0x3, 0x2, 
    0x7, 0xa, 0x4, 0x2, 0x14, 0x14, 0x1b, 0x1e, 0x3, 0x2, 0x38, 0x38, 0x3, 
    0x2, 0x2d, 0x2d, 0x3, 0x2, 0xf, 0x13, 0x3, 0x2, 0x15, 0x1a, 0x3, 0x2, 
    0x3e, 0x3f, 0x2, 0x180, 0x2, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x4, 0x55, 0x3, 
    0x2, 0x2, 0x2, 0x6, 0x57, 0x3, 0x2, 0x2, 0x2, 0x8, 0x5b, 0x3, 0x2, 0x2, 
    0x2, 0xa, 0x63, 0x3, 0x2, 0x2, 0x2, 0xc, 0x6d, 0x3, 0x2, 0x2, 0x2, 0xe, 
    0x74, 0x3, 0x2, 0x2, 0x2, 0x10, 0x77, 0x3, 0x2, 0x2, 0x2, 0x12, 0x96, 
    0x3, 0x2, 0x2, 0x2, 0x14, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x16, 0xad, 0x3, 
    0x2, 0x2, 0x2, 0x18, 0xb4, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xc0, 0x3, 0x2, 
    0x2, 0x2, 0x1c, 0xc4, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xc7, 0x3, 0x2, 0x2, 
    0x2, 0x20, 0xcd, 0x3, 0x2, 0x2, 0x2, 0x22, 0xd4, 0x3, 0x2, 0x2, 0x2, 
    0x24, 0xda, 0x3, 0x2, 0x2, 0x2, 0x26, 0xe8, 0x3, 0x2, 0x2, 0x2, 0x28, 
    0xea, 0x3, 0x2, 0x2, 0x2, 0x2a, 0xf0, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xf9, 
    0x3, 0x2, 0x2, 0x2, 0x2e, 0x103, 0x3, 0x2, 0x2, 0x2, 0x30, 0x12b, 0x3, 
    0x2, 0x2, 0x2, 0x32, 0x131, 0x3, 0x2, 0x2, 0x2, 0x34, 0x133, 0x3, 0x2, 
    0x2, 0x2, 0x36, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x38, 0x146, 0x3, 0x2, 0x2, 
    0x2, 0x3a, 0x14c, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x14e, 0x3, 0x2, 0x2, 0x2, 
    0x3e, 0x152, 0x3, 0x2, 0x2, 0x2, 0x40, 0x154, 0x3, 0x2, 0x2, 0x2, 0x42, 
    0x156, 0x3, 0x2, 0x2, 0x2, 0x44, 0x158, 0x3, 0x2, 0x2, 0x2, 0x46, 0x15a, 
    0x3, 0x2, 0x2, 0x2, 0x48, 0x166, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x168, 0x3, 
    0x2, 0x2, 0x2, 0x4c, 0x4e, 0x5, 0x4, 0x3, 0x2, 0x4d, 0x4c, 0x3, 0x2, 
    0x2, 0x2, 0x4e, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x4d, 0x3, 0x2, 0x2, 
    0x2, 0x4f, 0x50, 0x3, 0x2, 0x2, 0x2, 0x50, 0x51, 0x3, 0x2, 0x2, 0x2, 
    0x51, 0x52, 0x7, 0x2, 0x2, 0x3, 0x52, 0x3, 0x3, 0x2, 0x2, 0x2, 0x53, 
    0x56, 0x5, 0x1a, 0xe, 0x2, 0x54, 0x56, 0x5, 0x6, 0x4, 0x2, 0x55, 0x53, 
    0x3, 0x2, 0x2, 0x2, 0x55, 0x54, 0x3, 0x2, 0x2, 0x2, 0x56, 0x5, 0x3, 
    0x2, 0x2, 0x2, 0x57, 0x58, 0x7, 0xb, 0x2, 0x2, 0x58, 0x59, 0x5, 0x8, 
    0x5, 0x2, 0x59, 0x5a, 0x5, 0xa, 0x6, 0x2, 0x5a, 0x7, 0x3, 0x2, 0x2, 
    0x2, 0x5b, 0x60, 0x7, 0x40, 0x2, 0x2, 0x5c, 0x5d, 0x7, 0xc, 0x2, 0x2, 
    0x5d, 0x5f, 0x7, 0x40, 0x2, 0x2, 0x5e, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x5f, 
    0x62, 0x3, 0x2, 0x2, 0x2, 0x60, 0x61, 0x3, 0x2, 0x2, 0x2, 0x60, 0x5e, 
    0x3, 0x2, 0x2, 0x2, 0x61, 0x9, 0x3, 0x2, 0x2, 0x2, 0x62, 0x60, 0x3, 
    0x2, 0x2, 0x2, 0x63, 0x68, 0x7, 0x39, 0x2, 0x2, 0x64, 0x67, 0x5, 0x12, 
    0xa, 0x2, 0x65, 0x67, 0xa, 0x2, 0x2, 0x2, 0x66, 0x64, 0x3, 0x2, 0x2, 
    0x2, 0x66, 0x65, 0x3, 0x2, 0x2, 0x2, 0x67, 0x6a, 0x3, 0x2, 0x2, 0x2, 
    0x68, 0x66, 0x3, 0x2, 0x2, 0x2, 0x68, 0x69, 0x3, 0x2, 0x2, 0x2, 0x69, 
    0x6b, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x68, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x6c, 
    0x7, 0x3a, 0x2, 0x2, 0x6c, 0xb, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6e, 0x7, 
    0x39, 0x2, 0x2, 0x6e, 0x6f, 0x5, 0xe, 0x8, 0x2, 0x6f, 0x70, 0x7, 0x3a, 
    0x2, 0x2, 0x70, 0xd, 0x3, 0x2, 0x2, 0x2, 0x71, 0x73, 0x5, 0x10, 0x9, 
    0x2, 0x72, 0x71, 0x3, 0x2, 0x2, 0x2, 0x73, 0x76, 0x3, 0x2, 0x2, 0x2, 
    0x74, 0x72, 0x3, 0x2, 0x2, 0x2, 0x74, 0x75, 0x3, 0x2, 0x2, 0x2, 0x75, 
    0xf, 0x3, 0x2, 0x2, 0x2, 0x76, 0x74, 0x3, 0x2, 0x2, 0x2, 0x77, 0x78, 
    0x9, 0x3, 0x2, 0x2, 0x78, 0x7e, 0x7, 0x39, 0x2, 0x2, 0x79, 0x7a, 0x5, 
    0x32, 0x1a, 0x2, 0x7a, 0x7b, 0x7, 0x41, 0x2, 0x2, 0x7b, 0x7d, 0x3, 0x2, 
    0x2, 0x2, 0x7c, 0x79, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x80, 0x3, 0x2, 0x2, 
    0x2, 0x7e, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7f, 0x3, 0x2, 0x2, 0x2, 
    0x7f, 0x81, 0x3, 0x2, 0x2, 0x2, 0x80, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x81, 
    0x82, 0x7, 0x3a, 0x2, 0x2, 0x82, 0x11, 0x3, 0x2, 0x2, 0x2, 0x83, 0x97, 
    0x5, 0x1a, 0xe, 0x2, 0x84, 0x97, 0x5, 0x24, 0x13, 0x2, 0x85, 0x97, 0x5, 
    0x3a, 0x1e, 0x2, 0x86, 0x97, 0x5, 0x3c, 0x1f, 0x2, 0x87, 0x97, 0x5, 
    0x46, 0x24, 0x2, 0x88, 0x97, 0x5, 0x40, 0x21, 0x2, 0x89, 0x97, 0x5, 
    0x30, 0x19, 0x2, 0x8a, 0x8b, 0x7, 0x16, 0x2, 0x2, 0x8b, 0x97, 0x5, 0x12, 
    0xa, 0x2, 0x8c, 0x97, 0x5, 0x36, 0x1c, 0x2, 0x8d, 0x97, 0x5, 0x28, 0x15, 
    0x2, 0x8e, 0x97, 0x5, 0x14, 0xb, 0x2, 0x8f, 0x97, 0x5, 0x16, 0xc, 0x2, 
    0x90, 0x97, 0x5, 0x1e, 0x10, 0x2, 0x91, 0x97, 0x5, 0x20, 0x11, 0x2, 
    0x92, 0x97, 0x5, 0x22, 0x12, 0x2, 0x93, 0x97, 0x5, 0x32, 0x1a, 0x2, 
    0x94, 0x97, 0x5, 0x8, 0x5, 0x2, 0x95, 0x97, 0x5, 0x4a, 0x26, 0x2, 0x96, 
    0x83, 0x3, 0x2, 0x2, 0x2, 0x96, 0x84, 0x3, 0x2, 0x2, 0x2, 0x96, 0x85, 
    0x3, 0x2, 0x2, 0x2, 0x96, 0x86, 0x3, 0x2, 0x2, 0x2, 0x96, 0x87, 0x3, 
    0x2, 0x2, 0x2, 0x96, 0x88, 0x3, 0x2, 0x2, 0x2, 0x96, 0x89, 0x3, 0x2, 
    0x2, 0x2, 0x96, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x96, 0x8c, 0x3, 0x2, 0x2, 
    0x2, 0x96, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x96, 0x8e, 0x3, 0x2, 0x2, 0x2, 
    0x96, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x96, 0x90, 0x3, 0x2, 0x2, 0x2, 0x96, 
    0x91, 0x3, 0x2, 0x2, 0x2, 0x96, 0x92, 0x3, 0x2, 0x2, 0x2, 0x96, 0x93, 
    0x3, 0x2, 0x2, 0x2, 0x96, 0x94, 0x3, 0x2, 0x2, 0x2, 0x96, 0x95, 0x3, 
    0x2, 0x2, 0x2, 0x97, 0x98, 0x3, 0x2, 0x2, 0x2, 0x98, 0x96, 0x3, 0x2, 
    0x2, 0x2, 0x98, 0x99, 0x3, 0x2, 0x2, 0x2, 0x99, 0x9a, 0x3, 0x2, 0x2, 
    0x2, 0x9a, 0x9b, 0x7, 0x41, 0x2, 0x2, 0x9b, 0x13, 0x3, 0x2, 0x2, 0x2, 
    0x9c, 0x9d, 0x7, 0x6, 0x2, 0x2, 0x9d, 0xa6, 0x5, 0x8, 0x5, 0x2, 0x9e, 
    0x9f, 0x7, 0x35, 0x2, 0x2, 0x9f, 0xa0, 0x5, 0x8, 0x5, 0x2, 0xa0, 0xa1, 
    0x7, 0x36, 0x2, 0x2, 0xa1, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x9e, 0x3, 
    0x2, 0x2, 0x2, 0xa3, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa2, 0x3, 0x2, 
    0x2, 0x2, 0xa4, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa7, 0x3, 0x2, 0x2, 
    0x2, 0xa6, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa7, 0x3, 0x2, 0x2, 0x2, 
    0xa7, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xa9, 0x7, 0x39, 0x2, 0x2, 0xa9, 
    0xaa, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xab, 0x7, 0x3a, 0x2, 0x2, 0xab, 0xac, 
    0x7, 0x41, 0x2, 0x2, 0xac, 0x15, 0x3, 0x2, 0x2, 0x2, 0xad, 0xae, 0x7, 
    0x5, 0x2, 0x2, 0xae, 0xb0, 0x5, 0x8, 0x5, 0x2, 0xaf, 0xb1, 0x5, 0x18, 
    0xd, 0x2, 0xb0, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xb1, 0x3, 0x2, 0x2, 
    0x2, 0xb1, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb3, 0x5, 0xc, 0x7, 0x2, 
    0xb3, 0x17, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb5, 0x7, 0x35, 0x2, 0x2, 0xb5, 
    0xbc, 0x5, 0x8, 0x5, 0x2, 0xb6, 0xb7, 0x7, 0x3d, 0x2, 0x2, 0xb7, 0xb9, 
    0x5, 0x8, 0x5, 0x2, 0xb8, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xba, 0x3, 
    0x2, 0x2, 0x2, 0xba, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xba, 0xbb, 0x3, 0x2, 
    0x2, 0x2, 0xbb, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xb8, 0x3, 0x2, 0x2, 
    0x2, 0xbc, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xbe, 0x3, 0x2, 0x2, 0x2, 
    0xbe, 0xbf, 0x7, 0x36, 0x2, 0x2, 0xbf, 0x19, 0x3, 0x2, 0x2, 0x2, 0xc0, 
    0xc1, 0x7, 0x3, 0x2, 0x2, 0xc1, 0xc2, 0x5, 0x1c, 0xf, 0x2, 0xc2, 0xc3, 
    0x7, 0x41, 0x2, 0x2, 0xc3, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc5, 0x7, 
    0x4, 0x2, 0x2, 0xc5, 0xc6, 0x5, 0x8, 0x5, 0x2, 0xc6, 0x1d, 0x3, 0x2, 
    0x2, 0x2, 0xc7, 0xc9, 0x7, 0xd, 0x2, 0x2, 0xc8, 0xca, 0x5, 0x30, 0x19, 
    0x2, 0xc9, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xca, 0x3, 0x2, 0x2, 0x2, 
    0xca, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xcc, 0x5, 0xa, 0x6, 0x2, 0xcc, 
    0x1f, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xce, 0x5, 0x8, 0x5, 0x2, 0xce, 0xd0, 
    0x5, 0x8, 0x5, 0x2, 0xcf, 0xd1, 0x5, 0x30, 0x19, 0x2, 0xd0, 0xcf, 0x3, 
    0x2, 0x2, 0x2, 0xd0, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xd2, 0x3, 0x2, 
    0x2, 0x2, 0xd2, 0xd3, 0x5, 0xa, 0x6, 0x2, 0xd3, 0x21, 0x3, 0x2, 0x2, 
    0x2, 0xd4, 0xd5, 0x5, 0x8, 0x5, 0x2, 0xd5, 0xd6, 0x7, 0x37, 0x2, 0x2, 
    0xd6, 0xd7, 0x5, 0x30, 0x19, 0x2, 0xd7, 0xd8, 0x7, 0x38, 0x2, 0x2, 0xd8, 
    0xd9, 0x7, 0x41, 0x2, 0x2, 0xd9, 0x23, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdb, 
    0x8, 0x13, 0x1, 0x2, 0xdb, 0xdc, 0x5, 0x8, 0x5, 0x2, 0xdc, 0xdd, 0x5, 
    0x26, 0x14, 0x2, 0xdd, 0xde, 0x5, 0x3e, 0x20, 0x2, 0xde, 0xe5, 0x3, 
    0x2, 0x2, 0x2, 0xdf, 0xe0, 0xc, 0x3, 0x2, 0x2, 0xe0, 0xe1, 0x5, 0x26, 
    0x14, 0x2, 0xe1, 0xe2, 0x5, 0x12, 0xa, 0x2, 0xe2, 0xe4, 0x3, 0x2, 0x2, 
    0x2, 0xe3, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe7, 0x3, 0x2, 0x2, 0x2, 
    0xe5, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xe6, 
    0x25, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe5, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xe9, 
    0x9, 0x4, 0x2, 0x2, 0xe9, 0x27, 0x3, 0x2, 0x2, 0x2, 0xea, 0xeb, 0x7, 
    0x30, 0x2, 0x2, 0xeb, 0xee, 0x5, 0x2a, 0x16, 0x2, 0xec, 0xef, 0x5, 0x12, 
    0xa, 0x2, 0xed, 0xef, 0x5, 0xa, 0x6, 0x2, 0xee, 0xec, 0x3, 0x2, 0x2, 
    0x2, 0xee, 0xed, 0x3, 0x2, 0x2, 0x2, 0xef, 0x29, 0x3, 0x2, 0x2, 0x2, 
    0xf0, 0xf4, 0x7, 0x37, 0x2, 0x2, 0xf1, 0xf5, 0x5, 0x2c, 0x17, 0x2, 0xf2, 
    0xf5, 0x5, 0x2e, 0x18, 0x2, 0xf3, 0xf5, 0x7, 0x3e, 0x2, 0x2, 0xf4, 0xf1, 
    0x3, 0x2, 0x2, 0x2, 0xf4, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf3, 0x3, 
    0x2, 0x2, 0x2, 0xf4, 0xf5, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf6, 0x3, 0x2, 
    0x2, 0x2, 0xf6, 0xf7, 0x7, 0x38, 0x2, 0x2, 0xf7, 0x2b, 0x3, 0x2, 0x2, 
    0x2, 0xf8, 0xfa, 0x5, 0x32, 0x1a, 0x2, 0xf9, 0xf8, 0x3, 0x2, 0x2, 0x2, 
    0xf9, 0xfa, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xfb, 0x3, 0x2, 0x2, 0x2, 0xfb, 
    0xfd, 0x7, 0x41, 0x2, 0x2, 0xfc, 0xfe, 0x5, 0x12, 0xa, 0x2, 0xfd, 0xfc, 
    0x3, 0x2, 0x2, 0x2, 0xfd, 0xfe, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xff, 0x3, 
    0x2, 0x2, 0x2, 0xff, 0x101, 0x7, 0x41, 0x2, 0x2, 0x100, 0x102, 0x5, 
    0x12, 0xa, 0x2, 0x101, 0x100, 0x3, 0x2, 0x2, 0x2, 0x101, 0x102, 0x3, 
    0x2, 0x2, 0x2, 0x102, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x103, 0x104, 0x5, 0x8, 
    0x5, 0x2, 0x104, 0x105, 0x7, 0x34, 0x2, 0x2, 0x105, 0x106, 0x5, 0x8, 
    0x5, 0x2, 0x106, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x107, 0x114, 0x7, 0x37, 
    0x2, 0x2, 0x108, 0x10b, 0x5, 0x32, 0x1a, 0x2, 0x109, 0x10b, 0xa, 0x5, 
    0x2, 0x2, 0x10a, 0x108, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x109, 0x3, 0x2, 
    0x2, 0x2, 0x10b, 0x111, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x10d, 0x7, 0x3d, 
    0x2, 0x2, 0x10d, 0x110, 0x5, 0x32, 0x1a, 0x2, 0x10e, 0x110, 0xa, 0x5, 
    0x2, 0x2, 0x10f, 0x10c, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x10e, 0x3, 0x2, 
    0x2, 0x2, 0x110, 0x113, 0x3, 0x2, 0x2, 0x2, 0x111, 0x10f, 0x3, 0x2, 
    0x2, 0x2, 0x111, 0x112, 0x3, 0x2, 0x2, 0x2, 0x112, 0x115, 0x3, 0x2, 
    0x2, 0x2, 0x113, 0x111, 0x3, 0x2, 0x2, 0x2, 0x114, 0x10a, 0x3, 0x2, 
    0x2, 0x2, 0x114, 0x115, 0x3, 0x2, 0x2, 0x2, 0x115, 0x116, 0x3, 0x2, 
    0x2, 0x2, 0x116, 0x12c, 0x7, 0x38, 0x2, 0x2, 0x117, 0x128, 0x7, 0x37, 
    0x2, 0x2, 0x118, 0x119, 0x5, 0x8, 0x5, 0x2, 0x119, 0x11a, 0x5, 0x8, 
    0x5, 0x2, 0x11a, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x11d, 0xa, 0x5, 
    0x2, 0x2, 0x11c, 0x118, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x11b, 0x3, 0x2, 
    0x2, 0x2, 0x11d, 0x125, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x11f, 0x7, 0x3d, 
    0x2, 0x2, 0x11f, 0x120, 0x5, 0x8, 0x5, 0x2, 0x120, 0x121, 0x5, 0x8, 
    0x5, 0x2, 0x121, 0x124, 0x3, 0x2, 0x2, 0x2, 0x122, 0x124, 0xa, 0x5, 
    0x2, 0x2, 0x123, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x123, 0x122, 0x3, 0x2, 
    0x2, 0x2, 0x124, 0x127, 0x3, 0x2, 0x2, 0x2, 0x125, 0x123, 0x3, 0x2, 
    0x2, 0x2, 0x125, 0x126, 0x3, 0x2, 0x2, 0x2, 0x126, 0x129, 0x3, 0x2, 
    0x2, 0x2, 0x127, 0x125, 0x3, 0x2, 0x2, 0x2, 0x128, 0x11c, 0x3, 0x2, 
    0x2, 0x2, 0x128, 0x129, 0x3, 0x2, 0x2, 0x2, 0x129, 0x12a, 0x3, 0x2, 
    0x2, 0x2, 0x12a, 0x12c, 0x7, 0x38, 0x2, 0x2, 0x12b, 0x107, 0x3, 0x2, 
    0x2, 0x2, 0x12b, 0x117, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x31, 0x3, 0x2, 0x2, 
    0x2, 0x12d, 0x12e, 0x5, 0x8, 0x5, 0x2, 0x12e, 0x12f, 0x5, 0x8, 0x5, 
    0x2, 0x12f, 0x132, 0x3, 0x2, 0x2, 0x2, 0x130, 0x132, 0x5, 0x34, 0x1b, 
    0x2, 0x131, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x131, 0x130, 0x3, 0x2, 0x2, 
    0x2, 0x132, 0x33, 0x3, 0x2, 0x2, 0x2, 0x133, 0x134, 0x5, 0x8, 0x5, 0x2, 
    0x134, 0x136, 0x7, 0x35, 0x2, 0x2, 0x135, 0x137, 0x5, 0x4a, 0x26, 0x2, 
    0x136, 0x135, 0x3, 0x2, 0x2, 0x2, 0x136, 0x137, 0x3, 0x2, 0x2, 0x2, 
    0x137, 0x138, 0x3, 0x2, 0x2, 0x2, 0x138, 0x139, 0x7, 0x36, 0x2, 0x2, 
    0x139, 0x13a, 0x5, 0x8, 0x5, 0x2, 0x13a, 0x35, 0x3, 0x2, 0x2, 0x2, 0x13b, 
    0x13c, 0x7, 0x2d, 0x2, 0x2, 0x13c, 0x13d, 0x7, 0x37, 0x2, 0x2, 0x13d, 
    0x13e, 0x5, 0x12, 0xa, 0x2, 0x13e, 0x141, 0x7, 0x38, 0x2, 0x2, 0x13f, 
    0x142, 0x5, 0x12, 0xa, 0x2, 0x140, 0x142, 0x5, 0xa, 0x6, 0x2, 0x141, 
    0x13f, 0x3, 0x2, 0x2, 0x2, 0x141, 0x140, 0x3, 0x2, 0x2, 0x2, 0x142, 
    0x144, 0x3, 0x2, 0x2, 0x2, 0x143, 0x145, 0x5, 0x38, 0x1d, 0x2, 0x144, 
    0x143, 0x3, 0x2, 0x2, 0x2, 0x144, 0x145, 0x3, 0x2, 0x2, 0x2, 0x145, 
    0x37, 0x3, 0x2, 0x2, 0x2, 0x146, 0x14a, 0x7, 0x2e, 0x2, 0x2, 0x147, 
    0x14b, 0x5, 0x12, 0xa, 0x2, 0x148, 0x14b, 0x5, 0xa, 0x6, 0x2, 0x149, 
    0x14b, 0xa, 0x6, 0x2, 0x2, 0x14a, 0x147, 0x3, 0x2, 0x2, 0x2, 0x14a, 
    0x148, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x149, 0x3, 0x2, 0x2, 0x2, 0x14b, 
    0x39, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x14d, 0x5, 0x46, 0x24, 0x2, 0x14d, 
    0x3b, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x14f, 0x5, 0x40, 0x21, 0x2, 0x14f, 
    0x3d, 0x3, 0x2, 0x2, 0x2, 0x150, 0x153, 0x5, 0x8, 0x5, 0x2, 0x151, 0x153, 
    0x5, 0x4a, 0x26, 0x2, 0x152, 0x150, 0x3, 0x2, 0x2, 0x2, 0x152, 0x151, 
    0x3, 0x2, 0x2, 0x2, 0x153, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x154, 0x155, 0x9, 
    0x7, 0x2, 0x2, 0x155, 0x41, 0x3, 0x2, 0x2, 0x2, 0x156, 0x157, 0x7, 0x27, 
    0x2, 0x2, 0x157, 0x43, 0x3, 0x2, 0x2, 0x2, 0x158, 0x159, 0x7, 0x2a, 
    0x2, 0x2, 0x159, 0x45, 0x3, 0x2, 0x2, 0x2, 0x15a, 0x15b, 0x9, 0x8, 0x2, 
    0x2, 0x15b, 0x47, 0x3, 0x2, 0x2, 0x2, 0x15c, 0x15d, 0x7, 0x1f, 0x2, 
    0x2, 0x15d, 0x167, 0x5, 0x8, 0x5, 0x2, 0x15e, 0x15f, 0x7, 0x20, 0x2, 
    0x2, 0x15f, 0x167, 0x5, 0x8, 0x5, 0x2, 0x160, 0x161, 0x5, 0x8, 0x5, 
    0x2, 0x161, 0x162, 0x7, 0x1f, 0x2, 0x2, 0x162, 0x167, 0x3, 0x2, 0x2, 
    0x2, 0x163, 0x164, 0x5, 0x8, 0x5, 0x2, 0x164, 0x165, 0x7, 0x20, 0x2, 
    0x2, 0x165, 0x167, 0x3, 0x2, 0x2, 0x2, 0x166, 0x15c, 0x3, 0x2, 0x2, 
    0x2, 0x166, 0x15e, 0x3, 0x2, 0x2, 0x2, 0x166, 0x160, 0x3, 0x2, 0x2, 
    0x2, 0x166, 0x163, 0x3, 0x2, 0x2, 0x2, 0x167, 0x49, 0x3, 0x2, 0x2, 0x2, 
    0x168, 0x169, 0x9, 0x9, 0x2, 0x2, 0x169, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x28, 
    0x4f, 0x55, 0x60, 0x66, 0x68, 0x74, 0x7e, 0x96, 0x98, 0xa4, 0xa6, 0xb0, 
    0xba, 0xbc, 0xc9, 0xd0, 0xe5, 0xee, 0xf4, 0xf9, 0xfd, 0x101, 0x10a, 
    0x10f, 0x111, 0x114, 0x11c, 0x123, 0x125, 0x128, 0x12b, 0x131, 0x136, 
    0x141, 0x144, 0x14a, 0x152, 0x166, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

KPPParser::Initializer KPPParser::_init;
