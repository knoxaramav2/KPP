
// Generated from KPP.g4 by ANTLR 4.7.2


#include "KPPListener.h"

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

void KPPParser::KppContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterKpp(this);
}

void KPPParser::KppContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitKpp(this);
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
    setState(71); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(70);
      section();
      setState(73); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == KPPParser::PP_SYM

    || _la == KPPParser::G_ASSEMBLY);
    setState(75);
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

void KPPParser::SectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSection(this);
}

void KPPParser::SectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSection(this);
}

KPPParser::SectionContext* KPPParser::section() {
  SectionContext *_localctx = _tracker.createInstance<SectionContext>(_ctx, getState());
  enterRule(_localctx, 2, KPPParser::RuleSection);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(79);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KPPParser::PP_SYM: {
        enterOuterAlt(_localctx, 1);
        setState(77);
        preproc();
        break;
      }

      case KPPParser::G_ASSEMBLY: {
        enterOuterAlt(_localctx, 2);
        setState(78);
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

void KPPParser::NamespacedeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamespacedecl(this);
}

void KPPParser::NamespacedeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamespacedecl(this);
}

KPPParser::NamespacedeclContext* KPPParser::namespacedecl() {
  NamespacedeclContext *_localctx = _tracker.createInstance<NamespacedeclContext>(_ctx, getState());
  enterRule(_localctx, 4, KPPParser::RuleNamespacedecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(81);
    match(KPPParser::G_ASSEMBLY);
    setState(82);
    symbol_id();
    setState(83);
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

void KPPParser::Symbol_idContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSymbol_id(this);
}

void KPPParser::Symbol_idContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSymbol_id(this);
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
    setState(85);
    match(KPPParser::IDENTIFIER);
    setState(90);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 1 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1 + 1) {
        setState(86);
        match(KPPParser::G_DOT);
        setState(87);
        match(KPPParser::IDENTIFIER); 
      }
      setState(92);
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

void KPPParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void KPPParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
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
    setState(93);
    match(KPPParser::L_BRACE);
    setState(98);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << KPPParser::PP_SYM)
      | (1ULL << KPPParser::PP_IMPORT)
      | (1ULL << KPPParser::D_CLASS)
      | (1ULL << KPPParser::P_PUBLIC)
      | (1ULL << KPPParser::P_PRIVATE)
      | (1ULL << KPPParser::P_INTERNAL)
      | (1ULL << KPPParser::P_INHERIT)
      | (1ULL << KPPParser::G_ASSEMBLY)
      | (1ULL << KPPParser::G_DOT)
      | (1ULL << KPPParser::G_ENTRY)
      | (1ULL << KPPParser::G_ELLIPSE)
      | (1ULL << KPPParser::CM_GTR)
      | (1ULL << KPPParser::CM_LSS)
      | (1ULL << KPPParser::CM_EQU)
      | (1ULL << KPPParser::CM_GTR_EQU)
      | (1ULL << KPPParser::CM_LSS_EQU)
      | (1ULL << KPPParser::A_SET)
      | (1ULL << KPPParser::A_ADD)
      | (1ULL << KPPParser::A_SUBTRACT)
      | (1ULL << KPPParser::A_MULTIPLY)
      | (1ULL << KPPParser::A_DIVIDE)
      | (1ULL << KPPParser::A_EXPONENT)
      | (1ULL << KPPParser::A_MODULO)
      | (1ULL << KPPParser::A_SET_SUM)
      | (1ULL << KPPParser::A_SET_DIFFERENCE)
      | (1ULL << KPPParser::A_SET_PRODUCT)
      | (1ULL << KPPParser::A_SET_QUOTIENT)
      | (1ULL << KPPParser::A_INCREMENT)
      | (1ULL << KPPParser::A_DECRIMENT)
      | (1ULL << KPPParser::L_AND)
      | (1ULL << KPPParser::L_OR)
      | (1ULL << KPPParser::L_NAND)
      | (1ULL << KPPParser::L_NOR)
      | (1ULL << KPPParser::L_XOR)
      | (1ULL << KPPParser::L_XNOR)
      | (1ULL << KPPParser::L_NOT)
      | (1ULL << KPPParser::BL_AND)
      | (1ULL << KPPParser::BL_OR)
      | (1ULL << KPPParser::BL_INV)
      | (1ULL << KPPParser::BL_LEFT)
      | (1ULL << KPPParser::BL_RIGHT)
      | (1ULL << KPPParser::C_IF)
      | (1ULL << KPPParser::C_ELSE)
      | (1ULL << KPPParser::C_WHILE)
      | (1ULL << KPPParser::C_FOR)
      | (1ULL << KPPParser::C_GOTO)
      | (1ULL << KPPParser::C_BREAK)
      | (1ULL << KPPParser::C_SKIP)
      | (1ULL << KPPParser::C_IN)
      | (1ULL << KPPParser::L_BRACKET)
      | (1ULL << KPPParser::R_BRACKET)
      | (1ULL << KPPParser::L_PARANTH)
      | (1ULL << KPPParser::R_PARANTH)
      | (1ULL << KPPParser::L_BRACE)
      | (1ULL << KPPParser::LINE_COMMENT)
      | (1ULL << KPPParser::BLOCK_COMMENT)
      | (1ULL << KPPParser::COMMA)
      | (1ULL << KPPParser::INTEGER)
      | (1ULL << KPPParser::DECIMAL)
      | (1ULL << KPPParser::IDENTIFIER)
      | (1ULL << KPPParser::SEMI)
      | (1ULL << KPPParser::WS))) != 0)) {
      setState(96);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
      case 1: {
        setState(94);
        expr();
        break;
      }

      case 2: {
        setState(95);
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
      setState(100);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(101);
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

void KPPParser::ClassblockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassblock(this);
}

void KPPParser::ClassblockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassblock(this);
}

KPPParser::ClassblockContext* KPPParser::classblock() {
  ClassblockContext *_localctx = _tracker.createInstance<ClassblockContext>(_ctx, getState());
  enterRule(_localctx, 10, KPPParser::RuleClassblock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(103);
    match(KPPParser::L_BRACE);

    setState(104);
    classdeclblock();
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

void KPPParser::ClassdeclblockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassdeclblock(this);
}

void KPPParser::ClassdeclblockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassdeclblock(this);
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
    setState(110);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << KPPParser::P_PUBLIC)
      | (1ULL << KPPParser::P_PRIVATE)
      | (1ULL << KPPParser::P_INTERNAL)
      | (1ULL << KPPParser::P_INHERIT))) != 0)) {
      setState(107);
      accessdeclblock();
      setState(112);
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

void KPPParser::AccessdeclblockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAccessdeclblock(this);
}

void KPPParser::AccessdeclblockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAccessdeclblock(this);
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
    setState(113);
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
    setState(114);
    match(KPPParser::L_BRACE);
    setState(120);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KPPParser::IDENTIFIER) {
      setState(115);
      vardecl();
      setState(116);
      match(KPPParser::SEMI);
      setState(122);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(123);
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

std::vector<KPPParser::ClassDeclContext *> KPPParser::ExprContext::classDecl() {
  return getRuleContexts<KPPParser::ClassDeclContext>();
}

KPPParser::ClassDeclContext* KPPParser::ExprContext::classDecl(size_t i) {
  return getRuleContext<KPPParser::ClassDeclContext>(i);
}

std::vector<KPPParser::EntrydeclContext *> KPPParser::ExprContext::entrydecl() {
  return getRuleContexts<KPPParser::EntrydeclContext>();
}

KPPParser::EntrydeclContext* KPPParser::ExprContext::entrydecl(size_t i) {
  return getRuleContext<KPPParser::EntrydeclContext>(i);
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

void KPPParser::ExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr(this);
}

void KPPParser::ExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr(this);
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
    setState(140); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(140);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
      case 1: {
        setState(125);
        preproc();
        break;
      }

      case 2: {
        setState(126);
        binMathOps();
        break;
      }

      case 3: {
        setState(127);
        binCompOps();
        break;
      }

      case 4: {
        setState(128);
        group();
        break;
      }

      case 5: {
        setState(129);
        match(KPPParser::A_SUBTRACT);
        setState(130);
        expr();
        break;
      }

      case 6: {
        setState(131);
        ifexp();
        break;
      }

      case 7: {
        setState(132);
        loopexp();
        break;
      }

      case 8: {
        setState(133);
        classDecl();
        break;
      }

      case 9: {
        setState(134);
        entrydecl();
        break;
      }

      case 10: {
        setState(135);
        methodDecl();
        break;
      }

      case 11: {
        setState(136);
        methodCall();
        break;
      }

      case 12: {
        setState(137);
        vardecl();
        break;
      }

      case 13: {
        setState(138);
        symbol_id();
        break;
      }

      case 14: {
        setState(139);
        number();
        break;
      }

      }
      setState(142); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << KPPParser::PP_SYM)
      | (1ULL << KPPParser::D_CLASS)
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
    setState(144);
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


size_t KPPParser::ClassDeclContext::getRuleIndex() const {
  return KPPParser::RuleClassDecl;
}

void KPPParser::ClassDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassDecl(this);
}

void KPPParser::ClassDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassDecl(this);
}

KPPParser::ClassDeclContext* KPPParser::classDecl() {
  ClassDeclContext *_localctx = _tracker.createInstance<ClassDeclContext>(_ctx, getState());
  enterRule(_localctx, 18, KPPParser::RuleClassDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(146);
    match(KPPParser::D_CLASS);
    setState(147);
    symbol_id();
    setState(148);
    classblock();
   
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

void KPPParser::PreprocContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreproc(this);
}

void KPPParser::PreprocContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreproc(this);
}

KPPParser::PreprocContext* KPPParser::preproc() {
  PreprocContext *_localctx = _tracker.createInstance<PreprocContext>(_ctx, getState());
  enterRule(_localctx, 20, KPPParser::RulePreproc);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(150);
    match(KPPParser::PP_SYM);

    setState(151);
    pp_import();
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

void KPPParser::Pp_importContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPp_import(this);
}

void KPPParser::Pp_importContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPp_import(this);
}

KPPParser::Pp_importContext* KPPParser::pp_import() {
  Pp_importContext *_localctx = _tracker.createInstance<Pp_importContext>(_ctx, getState());
  enterRule(_localctx, 22, KPPParser::RulePp_import);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(154);
    match(KPPParser::PP_IMPORT);
    setState(155);
    symbol_id();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EntrydeclContext ------------------------------------------------------------------

KPPParser::EntrydeclContext::EntrydeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KPPParser::EntrydeclContext::G_ENTRY() {
  return getToken(KPPParser::G_ENTRY, 0);
}

KPPParser::BlockContext* KPPParser::EntrydeclContext::block() {
  return getRuleContext<KPPParser::BlockContext>(0);
}

KPPParser::GroupContext* KPPParser::EntrydeclContext::group() {
  return getRuleContext<KPPParser::GroupContext>(0);
}


size_t KPPParser::EntrydeclContext::getRuleIndex() const {
  return KPPParser::RuleEntrydecl;
}

void KPPParser::EntrydeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEntrydecl(this);
}

void KPPParser::EntrydeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEntrydecl(this);
}

KPPParser::EntrydeclContext* KPPParser::entrydecl() {
  EntrydeclContext *_localctx = _tracker.createInstance<EntrydeclContext>(_ctx, getState());
  enterRule(_localctx, 24, KPPParser::RuleEntrydecl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(157);
    match(KPPParser::G_ENTRY);
    setState(159);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KPPParser::L_PARANTH) {
      setState(158);
      group();
    }
    setState(161);
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

void KPPParser::MethodDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodDecl(this);
}

void KPPParser::MethodDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodDecl(this);
}

KPPParser::MethodDeclContext* KPPParser::methodDecl() {
  MethodDeclContext *_localctx = _tracker.createInstance<MethodDeclContext>(_ctx, getState());
  enterRule(_localctx, 26, KPPParser::RuleMethodDecl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(163);
    symbol_id();
    setState(164);
    symbol_id();
    setState(166);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KPPParser::L_PARANTH) {
      setState(165);
      group();
    }
    setState(168);
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

void KPPParser::MethodCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodCall(this);
}

void KPPParser::MethodCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodCall(this);
}

KPPParser::MethodCallContext* KPPParser::methodCall() {
  MethodCallContext *_localctx = _tracker.createInstance<MethodCallContext>(_ctx, getState());
  enterRule(_localctx, 28, KPPParser::RuleMethodCall);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(170);
    symbol_id();
    setState(171);
    match(KPPParser::L_PARANTH);
    setState(172);
    group();
    setState(173);
    match(KPPParser::R_PARANTH);
    setState(174);
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

void KPPParser::SetexprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSetexpr(this);
}

void KPPParser::SetexprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSetexpr(this);
}


KPPParser::SetexprContext* KPPParser::setexpr() {
   return setexpr(0);
}

KPPParser::SetexprContext* KPPParser::setexpr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  KPPParser::SetexprContext *_localctx = _tracker.createInstance<SetexprContext>(_ctx, parentState);
  KPPParser::SetexprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 30;
  enterRecursionRule(_localctx, 30, KPPParser::RuleSetexpr, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(177);
    symbol_id();
    setState(178);
    set();
    setState(179);
    value();
    _ctx->stop = _input->LT(-1);
    setState(187);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<SetexprContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleSetexpr);
        setState(181);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(182);
        set();
        setState(183);
        expr(); 
      }
      setState(189);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
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

void KPPParser::SetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSet(this);
}

void KPPParser::SetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSet(this);
}

KPPParser::SetContext* KPPParser::set() {
  SetContext *_localctx = _tracker.createInstance<SetContext>(_ctx, getState());
  enterRule(_localctx, 32, KPPParser::RuleSet);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(190);
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

void KPPParser::LoopexpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoopexp(this);
}

void KPPParser::LoopexpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoopexp(this);
}

KPPParser::LoopexpContext* KPPParser::loopexp() {
  LoopexpContext *_localctx = _tracker.createInstance<LoopexpContext>(_ctx, getState());
  enterRule(_localctx, 34, KPPParser::RuleLoopexp);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(192);
    match(KPPParser::C_FOR);
    setState(193);
    loopgroup();
    setState(196);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KPPParser::PP_SYM:
      case KPPParser::D_CLASS:
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
        setState(194);
        expr();
        break;
      }

      case KPPParser::L_BRACE: {
        setState(195);
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

void KPPParser::LoopgroupContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoopgroup(this);
}

void KPPParser::LoopgroupContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoopgroup(this);
}

KPPParser::LoopgroupContext* KPPParser::loopgroup() {
  LoopgroupContext *_localctx = _tracker.createInstance<LoopgroupContext>(_ctx, getState());
  enterRule(_localctx, 36, KPPParser::RuleLoopgroup);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(198);
    match(KPPParser::L_PARANTH);
    setState(202);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      setState(199);
      loop3group();
      break;
    }

    case 2: {
      setState(200);
      loopeach();
      break;
    }

    case 3: {
      setState(201);
      match(KPPParser::INTEGER);
      break;
    }

    }
    setState(204);
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

void KPPParser::Loop3groupContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoop3group(this);
}

void KPPParser::Loop3groupContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoop3group(this);
}

KPPParser::Loop3groupContext* KPPParser::loop3group() {
  Loop3groupContext *_localctx = _tracker.createInstance<Loop3groupContext>(_ctx, getState());
  enterRule(_localctx, 38, KPPParser::RuleLoop3group);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(207);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KPPParser::IDENTIFIER) {
      setState(206);
      vardecl();
    }
    setState(209);
    match(KPPParser::SEMI);
    setState(211);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << KPPParser::PP_SYM)
      | (1ULL << KPPParser::D_CLASS)
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
      setState(210);
      expr();
    }
    setState(213);
    match(KPPParser::SEMI);
    setState(215);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << KPPParser::PP_SYM)
      | (1ULL << KPPParser::D_CLASS)
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
      setState(214);
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

void KPPParser::LoopeachContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoopeach(this);
}

void KPPParser::LoopeachContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoopeach(this);
}

KPPParser::LoopeachContext* KPPParser::loopeach() {
  LoopeachContext *_localctx = _tracker.createInstance<LoopeachContext>(_ctx, getState());
  enterRule(_localctx, 40, KPPParser::RuleLoopeach);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(217);
    symbol_id();
    setState(218);
    match(KPPParser::C_IN);
    setState(219);
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

void KPPParser::GroupContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGroup(this);
}

void KPPParser::GroupContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGroup(this);
}

KPPParser::GroupContext* KPPParser::group() {
  GroupContext *_localctx = _tracker.createInstance<GroupContext>(_ctx, getState());
  enterRule(_localctx, 42, KPPParser::RuleGroup);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(257);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(221);
      match(KPPParser::L_PARANTH);
      setState(234);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << KPPParser::PP_SYM)
        | (1ULL << KPPParser::PP_IMPORT)
        | (1ULL << KPPParser::D_CLASS)
        | (1ULL << KPPParser::P_PUBLIC)
        | (1ULL << KPPParser::P_PRIVATE)
        | (1ULL << KPPParser::P_INTERNAL)
        | (1ULL << KPPParser::P_INHERIT)
        | (1ULL << KPPParser::G_ASSEMBLY)
        | (1ULL << KPPParser::G_DOT)
        | (1ULL << KPPParser::G_ENTRY)
        | (1ULL << KPPParser::G_ELLIPSE)
        | (1ULL << KPPParser::CM_GTR)
        | (1ULL << KPPParser::CM_LSS)
        | (1ULL << KPPParser::CM_EQU)
        | (1ULL << KPPParser::CM_GTR_EQU)
        | (1ULL << KPPParser::CM_LSS_EQU)
        | (1ULL << KPPParser::A_SET)
        | (1ULL << KPPParser::A_ADD)
        | (1ULL << KPPParser::A_SUBTRACT)
        | (1ULL << KPPParser::A_MULTIPLY)
        | (1ULL << KPPParser::A_DIVIDE)
        | (1ULL << KPPParser::A_EXPONENT)
        | (1ULL << KPPParser::A_MODULO)
        | (1ULL << KPPParser::A_SET_SUM)
        | (1ULL << KPPParser::A_SET_DIFFERENCE)
        | (1ULL << KPPParser::A_SET_PRODUCT)
        | (1ULL << KPPParser::A_SET_QUOTIENT)
        | (1ULL << KPPParser::A_INCREMENT)
        | (1ULL << KPPParser::A_DECRIMENT)
        | (1ULL << KPPParser::L_AND)
        | (1ULL << KPPParser::L_OR)
        | (1ULL << KPPParser::L_NAND)
        | (1ULL << KPPParser::L_NOR)
        | (1ULL << KPPParser::L_XOR)
        | (1ULL << KPPParser::L_XNOR)
        | (1ULL << KPPParser::L_NOT)
        | (1ULL << KPPParser::BL_AND)
        | (1ULL << KPPParser::BL_OR)
        | (1ULL << KPPParser::BL_INV)
        | (1ULL << KPPParser::BL_LEFT)
        | (1ULL << KPPParser::BL_RIGHT)
        | (1ULL << KPPParser::C_IF)
        | (1ULL << KPPParser::C_ELSE)
        | (1ULL << KPPParser::C_WHILE)
        | (1ULL << KPPParser::C_FOR)
        | (1ULL << KPPParser::C_GOTO)
        | (1ULL << KPPParser::C_BREAK)
        | (1ULL << KPPParser::C_SKIP)
        | (1ULL << KPPParser::C_IN)
        | (1ULL << KPPParser::L_BRACKET)
        | (1ULL << KPPParser::R_BRACKET)
        | (1ULL << KPPParser::L_PARANTH)
        | (1ULL << KPPParser::L_BRACE)
        | (1ULL << KPPParser::R_BRACE)
        | (1ULL << KPPParser::LINE_COMMENT)
        | (1ULL << KPPParser::BLOCK_COMMENT)
        | (1ULL << KPPParser::COMMA)
        | (1ULL << KPPParser::INTEGER)
        | (1ULL << KPPParser::DECIMAL)
        | (1ULL << KPPParser::IDENTIFIER)
        | (1ULL << KPPParser::SEMI)
        | (1ULL << KPPParser::WS))) != 0)) {
        setState(224);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
        case 1: {
          setState(222);
          vardecl();
          break;
        }

        case 2: {
          setState(223);
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
        setState(231);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << KPPParser::PP_SYM)
          | (1ULL << KPPParser::PP_IMPORT)
          | (1ULL << KPPParser::D_CLASS)
          | (1ULL << KPPParser::P_PUBLIC)
          | (1ULL << KPPParser::P_PRIVATE)
          | (1ULL << KPPParser::P_INTERNAL)
          | (1ULL << KPPParser::P_INHERIT)
          | (1ULL << KPPParser::G_ASSEMBLY)
          | (1ULL << KPPParser::G_DOT)
          | (1ULL << KPPParser::G_ENTRY)
          | (1ULL << KPPParser::G_ELLIPSE)
          | (1ULL << KPPParser::CM_GTR)
          | (1ULL << KPPParser::CM_LSS)
          | (1ULL << KPPParser::CM_EQU)
          | (1ULL << KPPParser::CM_GTR_EQU)
          | (1ULL << KPPParser::CM_LSS_EQU)
          | (1ULL << KPPParser::A_SET)
          | (1ULL << KPPParser::A_ADD)
          | (1ULL << KPPParser::A_SUBTRACT)
          | (1ULL << KPPParser::A_MULTIPLY)
          | (1ULL << KPPParser::A_DIVIDE)
          | (1ULL << KPPParser::A_EXPONENT)
          | (1ULL << KPPParser::A_MODULO)
          | (1ULL << KPPParser::A_SET_SUM)
          | (1ULL << KPPParser::A_SET_DIFFERENCE)
          | (1ULL << KPPParser::A_SET_PRODUCT)
          | (1ULL << KPPParser::A_SET_QUOTIENT)
          | (1ULL << KPPParser::A_INCREMENT)
          | (1ULL << KPPParser::A_DECRIMENT)
          | (1ULL << KPPParser::L_AND)
          | (1ULL << KPPParser::L_OR)
          | (1ULL << KPPParser::L_NAND)
          | (1ULL << KPPParser::L_NOR)
          | (1ULL << KPPParser::L_XOR)
          | (1ULL << KPPParser::L_XNOR)
          | (1ULL << KPPParser::L_NOT)
          | (1ULL << KPPParser::BL_AND)
          | (1ULL << KPPParser::BL_OR)
          | (1ULL << KPPParser::BL_INV)
          | (1ULL << KPPParser::BL_LEFT)
          | (1ULL << KPPParser::BL_RIGHT)
          | (1ULL << KPPParser::C_IF)
          | (1ULL << KPPParser::C_ELSE)
          | (1ULL << KPPParser::C_WHILE)
          | (1ULL << KPPParser::C_FOR)
          | (1ULL << KPPParser::C_GOTO)
          | (1ULL << KPPParser::C_BREAK)
          | (1ULL << KPPParser::C_SKIP)
          | (1ULL << KPPParser::C_IN)
          | (1ULL << KPPParser::L_BRACKET)
          | (1ULL << KPPParser::R_BRACKET)
          | (1ULL << KPPParser::L_PARANTH)
          | (1ULL << KPPParser::L_BRACE)
          | (1ULL << KPPParser::R_BRACE)
          | (1ULL << KPPParser::LINE_COMMENT)
          | (1ULL << KPPParser::BLOCK_COMMENT)
          | (1ULL << KPPParser::COMMA)
          | (1ULL << KPPParser::INTEGER)
          | (1ULL << KPPParser::DECIMAL)
          | (1ULL << KPPParser::IDENTIFIER)
          | (1ULL << KPPParser::SEMI)
          | (1ULL << KPPParser::WS))) != 0)) {
          setState(229);
          _errHandler->sync(this);
          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
          case 1: {
            setState(226);
            match(KPPParser::COMMA);
            setState(227);
            vardecl();
            break;
          }

          case 2: {
            setState(228);
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
          setState(233);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(236);
      match(KPPParser::R_PARANTH);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(237);
      match(KPPParser::L_PARANTH);
      setState(254);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << KPPParser::PP_SYM)
        | (1ULL << KPPParser::PP_IMPORT)
        | (1ULL << KPPParser::D_CLASS)
        | (1ULL << KPPParser::P_PUBLIC)
        | (1ULL << KPPParser::P_PRIVATE)
        | (1ULL << KPPParser::P_INTERNAL)
        | (1ULL << KPPParser::P_INHERIT)
        | (1ULL << KPPParser::G_ASSEMBLY)
        | (1ULL << KPPParser::G_DOT)
        | (1ULL << KPPParser::G_ENTRY)
        | (1ULL << KPPParser::G_ELLIPSE)
        | (1ULL << KPPParser::CM_GTR)
        | (1ULL << KPPParser::CM_LSS)
        | (1ULL << KPPParser::CM_EQU)
        | (1ULL << KPPParser::CM_GTR_EQU)
        | (1ULL << KPPParser::CM_LSS_EQU)
        | (1ULL << KPPParser::A_SET)
        | (1ULL << KPPParser::A_ADD)
        | (1ULL << KPPParser::A_SUBTRACT)
        | (1ULL << KPPParser::A_MULTIPLY)
        | (1ULL << KPPParser::A_DIVIDE)
        | (1ULL << KPPParser::A_EXPONENT)
        | (1ULL << KPPParser::A_MODULO)
        | (1ULL << KPPParser::A_SET_SUM)
        | (1ULL << KPPParser::A_SET_DIFFERENCE)
        | (1ULL << KPPParser::A_SET_PRODUCT)
        | (1ULL << KPPParser::A_SET_QUOTIENT)
        | (1ULL << KPPParser::A_INCREMENT)
        | (1ULL << KPPParser::A_DECRIMENT)
        | (1ULL << KPPParser::L_AND)
        | (1ULL << KPPParser::L_OR)
        | (1ULL << KPPParser::L_NAND)
        | (1ULL << KPPParser::L_NOR)
        | (1ULL << KPPParser::L_XOR)
        | (1ULL << KPPParser::L_XNOR)
        | (1ULL << KPPParser::L_NOT)
        | (1ULL << KPPParser::BL_AND)
        | (1ULL << KPPParser::BL_OR)
        | (1ULL << KPPParser::BL_INV)
        | (1ULL << KPPParser::BL_LEFT)
        | (1ULL << KPPParser::BL_RIGHT)
        | (1ULL << KPPParser::C_IF)
        | (1ULL << KPPParser::C_ELSE)
        | (1ULL << KPPParser::C_WHILE)
        | (1ULL << KPPParser::C_FOR)
        | (1ULL << KPPParser::C_GOTO)
        | (1ULL << KPPParser::C_BREAK)
        | (1ULL << KPPParser::C_SKIP)
        | (1ULL << KPPParser::C_IN)
        | (1ULL << KPPParser::L_BRACKET)
        | (1ULL << KPPParser::R_BRACKET)
        | (1ULL << KPPParser::L_PARANTH)
        | (1ULL << KPPParser::L_BRACE)
        | (1ULL << KPPParser::R_BRACE)
        | (1ULL << KPPParser::LINE_COMMENT)
        | (1ULL << KPPParser::BLOCK_COMMENT)
        | (1ULL << KPPParser::COMMA)
        | (1ULL << KPPParser::INTEGER)
        | (1ULL << KPPParser::DECIMAL)
        | (1ULL << KPPParser::IDENTIFIER)
        | (1ULL << KPPParser::SEMI)
        | (1ULL << KPPParser::WS))) != 0)) {
        setState(242);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
        case 1: {
          setState(238);
          symbol_id();
          setState(239);
          symbol_id();
          break;
        }

        case 2: {
          setState(241);
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
        setState(251);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << KPPParser::PP_SYM)
          | (1ULL << KPPParser::PP_IMPORT)
          | (1ULL << KPPParser::D_CLASS)
          | (1ULL << KPPParser::P_PUBLIC)
          | (1ULL << KPPParser::P_PRIVATE)
          | (1ULL << KPPParser::P_INTERNAL)
          | (1ULL << KPPParser::P_INHERIT)
          | (1ULL << KPPParser::G_ASSEMBLY)
          | (1ULL << KPPParser::G_DOT)
          | (1ULL << KPPParser::G_ENTRY)
          | (1ULL << KPPParser::G_ELLIPSE)
          | (1ULL << KPPParser::CM_GTR)
          | (1ULL << KPPParser::CM_LSS)
          | (1ULL << KPPParser::CM_EQU)
          | (1ULL << KPPParser::CM_GTR_EQU)
          | (1ULL << KPPParser::CM_LSS_EQU)
          | (1ULL << KPPParser::A_SET)
          | (1ULL << KPPParser::A_ADD)
          | (1ULL << KPPParser::A_SUBTRACT)
          | (1ULL << KPPParser::A_MULTIPLY)
          | (1ULL << KPPParser::A_DIVIDE)
          | (1ULL << KPPParser::A_EXPONENT)
          | (1ULL << KPPParser::A_MODULO)
          | (1ULL << KPPParser::A_SET_SUM)
          | (1ULL << KPPParser::A_SET_DIFFERENCE)
          | (1ULL << KPPParser::A_SET_PRODUCT)
          | (1ULL << KPPParser::A_SET_QUOTIENT)
          | (1ULL << KPPParser::A_INCREMENT)
          | (1ULL << KPPParser::A_DECRIMENT)
          | (1ULL << KPPParser::L_AND)
          | (1ULL << KPPParser::L_OR)
          | (1ULL << KPPParser::L_NAND)
          | (1ULL << KPPParser::L_NOR)
          | (1ULL << KPPParser::L_XOR)
          | (1ULL << KPPParser::L_XNOR)
          | (1ULL << KPPParser::L_NOT)
          | (1ULL << KPPParser::BL_AND)
          | (1ULL << KPPParser::BL_OR)
          | (1ULL << KPPParser::BL_INV)
          | (1ULL << KPPParser::BL_LEFT)
          | (1ULL << KPPParser::BL_RIGHT)
          | (1ULL << KPPParser::C_IF)
          | (1ULL << KPPParser::C_ELSE)
          | (1ULL << KPPParser::C_WHILE)
          | (1ULL << KPPParser::C_FOR)
          | (1ULL << KPPParser::C_GOTO)
          | (1ULL << KPPParser::C_BREAK)
          | (1ULL << KPPParser::C_SKIP)
          | (1ULL << KPPParser::C_IN)
          | (1ULL << KPPParser::L_BRACKET)
          | (1ULL << KPPParser::R_BRACKET)
          | (1ULL << KPPParser::L_PARANTH)
          | (1ULL << KPPParser::L_BRACE)
          | (1ULL << KPPParser::R_BRACE)
          | (1ULL << KPPParser::LINE_COMMENT)
          | (1ULL << KPPParser::BLOCK_COMMENT)
          | (1ULL << KPPParser::COMMA)
          | (1ULL << KPPParser::INTEGER)
          | (1ULL << KPPParser::DECIMAL)
          | (1ULL << KPPParser::IDENTIFIER)
          | (1ULL << KPPParser::SEMI)
          | (1ULL << KPPParser::WS))) != 0)) {
          setState(249);
          _errHandler->sync(this);
          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
          case 1: {
            setState(244);
            match(KPPParser::COMMA);
            setState(245);
            symbol_id();
            setState(246);
            symbol_id();
            break;
          }

          case 2: {
            setState(248);
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
          setState(253);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(256);
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

void KPPParser::VardeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVardecl(this);
}

void KPPParser::VardeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVardecl(this);
}

KPPParser::VardeclContext* KPPParser::vardecl() {
  VardeclContext *_localctx = _tracker.createInstance<VardeclContext>(_ctx, getState());
  enterRule(_localctx, 44, KPPParser::RuleVardecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(263);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(259);
      symbol_id();
      setState(260);
      symbol_id();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(262);
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

void KPPParser::ArraydeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArraydecl(this);
}

void KPPParser::ArraydeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArraydecl(this);
}

KPPParser::ArraydeclContext* KPPParser::arraydecl() {
  ArraydeclContext *_localctx = _tracker.createInstance<ArraydeclContext>(_ctx, getState());
  enterRule(_localctx, 46, KPPParser::RuleArraydecl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(265);
    symbol_id();
    setState(266);
    match(KPPParser::L_BRACKET);
    setState(268);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KPPParser::INTEGER

    || _la == KPPParser::DECIMAL) {
      setState(267);
      number();
    }
    setState(270);
    match(KPPParser::R_BRACKET);
    setState(271);
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

void KPPParser::IfexpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfexp(this);
}

void KPPParser::IfexpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfexp(this);
}

KPPParser::IfexpContext* KPPParser::ifexp() {
  IfexpContext *_localctx = _tracker.createInstance<IfexpContext>(_ctx, getState());
  enterRule(_localctx, 48, KPPParser::RuleIfexp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(273);
    match(KPPParser::C_IF);
    setState(274);
    match(KPPParser::L_PARANTH);
    setState(275);
    expr();
    setState(276);
    match(KPPParser::R_PARANTH);
    setState(279);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KPPParser::PP_SYM:
      case KPPParser::D_CLASS:
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
        setState(277);
        expr();
        break;
      }

      case KPPParser::L_BRACE: {
        setState(278);
        block();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(282);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KPPParser::C_ELSE) {
      setState(281);
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

void KPPParser::ElseexpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElseexp(this);
}

void KPPParser::ElseexpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElseexp(this);
}

KPPParser::ElseexpContext* KPPParser::elseexp() {
  ElseexpContext *_localctx = _tracker.createInstance<ElseexpContext>(_ctx, getState());
  enterRule(_localctx, 50, KPPParser::RuleElseexp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(284);
    match(KPPParser::C_ELSE);
    setState(288);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
    case 1: {
      setState(285);
      expr();
      break;
    }

    case 2: {
      setState(286);
      block();
      break;
    }

    case 3: {
      setState(287);
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

std::vector<KPPParser::ExprContext *> KPPParser::MathExprContext::expr() {
  return getRuleContexts<KPPParser::ExprContext>();
}

KPPParser::ExprContext* KPPParser::MathExprContext::expr(size_t i) {
  return getRuleContext<KPPParser::ExprContext>(i);
}

KPPParser::BinMathOpsContext* KPPParser::MathExprContext::binMathOps() {
  return getRuleContext<KPPParser::BinMathOpsContext>(0);
}


size_t KPPParser::MathExprContext::getRuleIndex() const {
  return KPPParser::RuleMathExpr;
}

void KPPParser::MathExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMathExpr(this);
}

void KPPParser::MathExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMathExpr(this);
}

KPPParser::MathExprContext* KPPParser::mathExpr() {
  MathExprContext *_localctx = _tracker.createInstance<MathExprContext>(_ctx, getState());
  enterRule(_localctx, 52, KPPParser::RuleMathExpr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(290);
    expr();
    setState(291);
    binMathOps();
    setState(292);
    expr();
   
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

std::vector<KPPParser::ExprContext *> KPPParser::CompExprContext::expr() {
  return getRuleContexts<KPPParser::ExprContext>();
}

KPPParser::ExprContext* KPPParser::CompExprContext::expr(size_t i) {
  return getRuleContext<KPPParser::ExprContext>(i);
}

KPPParser::BinCompOpsContext* KPPParser::CompExprContext::binCompOps() {
  return getRuleContext<KPPParser::BinCompOpsContext>(0);
}


size_t KPPParser::CompExprContext::getRuleIndex() const {
  return KPPParser::RuleCompExpr;
}

void KPPParser::CompExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompExpr(this);
}

void KPPParser::CompExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompExpr(this);
}

KPPParser::CompExprContext* KPPParser::compExpr() {
  CompExprContext *_localctx = _tracker.createInstance<CompExprContext>(_ctx, getState());
  enterRule(_localctx, 54, KPPParser::RuleCompExpr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(294);
    expr();
    setState(295);
    binCompOps();
    setState(296);
    expr();
   
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

void KPPParser::ValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValue(this);
}

void KPPParser::ValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValue(this);
}

KPPParser::ValueContext* KPPParser::value() {
  ValueContext *_localctx = _tracker.createInstance<ValueContext>(_ctx, getState());
  enterRule(_localctx, 56, KPPParser::RuleValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(300);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KPPParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(298);
        symbol_id();
        break;
      }

      case KPPParser::INTEGER:
      case KPPParser::DECIMAL: {
        enterOuterAlt(_localctx, 2);
        setState(299);
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

void KPPParser::BinCompOpsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBinCompOps(this);
}

void KPPParser::BinCompOpsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBinCompOps(this);
}

KPPParser::BinCompOpsContext* KPPParser::binCompOps() {
  BinCompOpsContext *_localctx = _tracker.createInstance<BinCompOpsContext>(_ctx, getState());
  enterRule(_localctx, 58, KPPParser::RuleBinCompOps);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(302);
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

void KPPParser::UnaryLogicContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryLogic(this);
}

void KPPParser::UnaryLogicContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryLogic(this);
}

KPPParser::UnaryLogicContext* KPPParser::unaryLogic() {
  UnaryLogicContext *_localctx = _tracker.createInstance<UnaryLogicContext>(_ctx, getState());
  enterRule(_localctx, 60, KPPParser::RuleUnaryLogic);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(304);
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

void KPPParser::UnaryOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryOp(this);
}

void KPPParser::UnaryOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryOp(this);
}

KPPParser::UnaryOpContext* KPPParser::unaryOp() {
  UnaryOpContext *_localctx = _tracker.createInstance<UnaryOpContext>(_ctx, getState());
  enterRule(_localctx, 62, KPPParser::RuleUnaryOp);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(306);
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

void KPPParser::BinMathOpsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBinMathOps(this);
}

void KPPParser::BinMathOpsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBinMathOps(this);
}

KPPParser::BinMathOpsContext* KPPParser::binMathOps() {
  BinMathOpsContext *_localctx = _tracker.createInstance<BinMathOpsContext>(_ctx, getState());
  enterRule(_localctx, 64, KPPParser::RuleBinMathOps);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(308);
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

void KPPParser::Lr_math_opsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLr_math_ops(this);
}

void KPPParser::Lr_math_opsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLr_math_ops(this);
}

KPPParser::Lr_math_opsContext* KPPParser::lr_math_ops() {
  Lr_math_opsContext *_localctx = _tracker.createInstance<Lr_math_opsContext>(_ctx, getState());
  enterRule(_localctx, 66, KPPParser::RuleLr_math_ops);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(320);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(310);
      match(KPPParser::A_INCREMENT);
      setState(311);
      symbol_id();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(312);
      match(KPPParser::A_DECRIMENT);
      setState(313);
      symbol_id();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(314);
      symbol_id();
      setState(315);
      match(KPPParser::A_INCREMENT);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(317);
      symbol_id();
      setState(318);
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

void KPPParser::NumberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumber(this);
}

void KPPParser::NumberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumber(this);
}

KPPParser::NumberContext* KPPParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 68, KPPParser::RuleNumber);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(322);
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
    case 15: return setexprSempred(dynamic_cast<SetexprContext *>(context), predicateIndex);

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
  "classdeclblock", "accessdeclblock", "expr", "classDecl", "preproc", "pp_import", 
  "entrydecl", "methodDecl", "methodCall", "setexpr", "set", "loopexp", 
  "loopgroup", "loop3group", "loopeach", "group", "vardecl", "arraydecl", 
  "ifexp", "elseexp", "mathExpr", "compExpr", "value", "binCompOps", "unaryLogic", 
  "unaryOp", "binMathOps", "lr_math_ops", "number"
};

std::vector<std::string> KPPParser::_literalNames = {
  "", "'$'", "'import'", "'class'", "'public'", "'private'", "'internal'", 
  "'legacy'", "'__asm__'", "'.'", "'entry'", "'...'", "'>'", "'<'", "'=='", 
  "'>='", "'<='", "'='", "'+'", "'-'", "'*'", "'/'", "'**'", "'%'", "'+='", 
  "'-='", "'*='", "'/='", "'++'", "'--'", "'&&'", "'||'", "'!&'", "'!|'", 
  "'^|'", "'^!|'", "'!'", "'&'", "'|'", "'~'", "'<<'", "'>>'", "'if'", "'else'", 
  "'while'", "'for'", "'goto'", "'break'", "'skip'", "'in'", "'['", "']'", 
  "'('", "')'", "'{'", "'}'", "", "", "','", "", "", "", "';'"
};

std::vector<std::string> KPPParser::_symbolicNames = {
  "", "PP_SYM", "PP_IMPORT", "D_CLASS", "P_PUBLIC", "P_PRIVATE", "P_INTERNAL", 
  "P_INHERIT", "G_ASSEMBLY", "G_DOT", "G_ENTRY", "G_ELLIPSE", "CM_GTR", 
  "CM_LSS", "CM_EQU", "CM_GTR_EQU", "CM_LSS_EQU", "A_SET", "A_ADD", "A_SUBTRACT", 
  "A_MULTIPLY", "A_DIVIDE", "A_EXPONENT", "A_MODULO", "A_SET_SUM", "A_SET_DIFFERENCE", 
  "A_SET_PRODUCT", "A_SET_QUOTIENT", "A_INCREMENT", "A_DECRIMENT", "L_AND", 
  "L_OR", "L_NAND", "L_NOR", "L_XOR", "L_XNOR", "L_NOT", "BL_AND", "BL_OR", 
  "BL_INV", "BL_LEFT", "BL_RIGHT", "C_IF", "C_ELSE", "C_WHILE", "C_FOR", 
  "C_GOTO", "C_BREAK", "C_SKIP", "C_IN", "L_BRACKET", "R_BRACKET", "L_PARANTH", 
  "R_PARANTH", "L_BRACE", "R_BRACE", "LINE_COMMENT", "BLOCK_COMMENT", "COMMA", 
  "INTEGER", "DECIMAL", "IDENTIFIER", "SEMI", "WS"
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
    0x3, 0x41, 0x147, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x3, 0x2, 0x6, 
    0x2, 0x4a, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0x4b, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x3, 0x3, 0x3, 0x5, 0x3, 0x52, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x5b, 0xa, 0x5, 0xc, 
    0x5, 0xe, 0x5, 0x5e, 0xb, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 
    0x63, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x66, 0xb, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x7, 0x8, 0x6f, 0xa, 
    0x8, 0xc, 0x8, 0xe, 0x8, 0x72, 0xb, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0x79, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x7c, 
    0xb, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x6, 0xa, 0x8f, 0xa, 0xa, 0xd, 
    0xa, 0xe, 0xa, 0x90, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0xa2, 0xa, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0xa9, 0xa, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 0xbc, 0xa, 0x11, 0xc, 0x11, 
    0xe, 0x11, 0xbf, 0xb, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0xc7, 0xa, 0x13, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0xcd, 0xa, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x15, 0x5, 0x15, 0xd2, 0xa, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 
    0xd6, 0xa, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0xda, 0xa, 0x15, 0x3, 
    0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x5, 0x17, 0xe3, 0xa, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x7, 0x17, 
    0xe8, 0xa, 0x17, 0xc, 0x17, 0xe, 0x17, 0xeb, 0xb, 0x17, 0x5, 0x17, 0xed, 
    0xa, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 
    0x17, 0x5, 0x17, 0xf5, 0xa, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 
    0x17, 0x3, 0x17, 0x7, 0x17, 0xfc, 0xa, 0x17, 0xc, 0x17, 0xe, 0x17, 0xff, 
    0xb, 0x17, 0x5, 0x17, 0x101, 0xa, 0x17, 0x3, 0x17, 0x5, 0x17, 0x104, 
    0xa, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 0x10a, 
    0xa, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x10f, 0xa, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 
    0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x11a, 0xa, 0x1a, 0x3, 0x1a, 
    0x5, 0x1a, 0x11d, 0xa, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 
    0x5, 0x1b, 0x123, 0xa, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 
    0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x5, 
    0x1e, 0x12f, 0xa, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 
    0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 
    0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 
    0x3, 0x23, 0x5, 0x23, 0x143, 0xa, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 
    0x3, 0x5c, 0x3, 0x20, 0x25, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 
    0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 
    0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 
    0x42, 0x44, 0x46, 0x2, 0xa, 0x3, 0x2, 0x39, 0x39, 0x3, 0x2, 0x6, 0x9, 
    0x4, 0x2, 0x13, 0x13, 0x1a, 0x1d, 0x3, 0x2, 0x37, 0x37, 0x3, 0x2, 0x2c, 
    0x2c, 0x3, 0x2, 0xe, 0x12, 0x3, 0x2, 0x14, 0x19, 0x3, 0x2, 0x3d, 0x3e, 
    0x2, 0x155, 0x2, 0x49, 0x3, 0x2, 0x2, 0x2, 0x4, 0x51, 0x3, 0x2, 0x2, 
    0x2, 0x6, 0x53, 0x3, 0x2, 0x2, 0x2, 0x8, 0x57, 0x3, 0x2, 0x2, 0x2, 0xa, 
    0x5f, 0x3, 0x2, 0x2, 0x2, 0xc, 0x69, 0x3, 0x2, 0x2, 0x2, 0xe, 0x70, 
    0x3, 0x2, 0x2, 0x2, 0x10, 0x73, 0x3, 0x2, 0x2, 0x2, 0x12, 0x8e, 0x3, 
    0x2, 0x2, 0x2, 0x14, 0x94, 0x3, 0x2, 0x2, 0x2, 0x16, 0x98, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x9f, 0x3, 0x2, 0x2, 
    0x2, 0x1c, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xac, 0x3, 0x2, 0x2, 0x2, 
    0x20, 0xb2, 0x3, 0x2, 0x2, 0x2, 0x22, 0xc0, 0x3, 0x2, 0x2, 0x2, 0x24, 
    0xc2, 0x3, 0x2, 0x2, 0x2, 0x26, 0xc8, 0x3, 0x2, 0x2, 0x2, 0x28, 0xd1, 
    0x3, 0x2, 0x2, 0x2, 0x2a, 0xdb, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x103, 0x3, 
    0x2, 0x2, 0x2, 0x2e, 0x109, 0x3, 0x2, 0x2, 0x2, 0x30, 0x10b, 0x3, 0x2, 
    0x2, 0x2, 0x32, 0x113, 0x3, 0x2, 0x2, 0x2, 0x34, 0x11e, 0x3, 0x2, 0x2, 
    0x2, 0x36, 0x124, 0x3, 0x2, 0x2, 0x2, 0x38, 0x128, 0x3, 0x2, 0x2, 0x2, 
    0x3a, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x130, 0x3, 0x2, 0x2, 0x2, 0x3e, 
    0x132, 0x3, 0x2, 0x2, 0x2, 0x40, 0x134, 0x3, 0x2, 0x2, 0x2, 0x42, 0x136, 
    0x3, 0x2, 0x2, 0x2, 0x44, 0x142, 0x3, 0x2, 0x2, 0x2, 0x46, 0x144, 0x3, 
    0x2, 0x2, 0x2, 0x48, 0x4a, 0x5, 0x4, 0x3, 0x2, 0x49, 0x48, 0x3, 0x2, 
    0x2, 0x2, 0x4a, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x49, 0x3, 0x2, 0x2, 
    0x2, 0x4b, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4d, 0x3, 0x2, 0x2, 0x2, 
    0x4d, 0x4e, 0x7, 0x2, 0x2, 0x3, 0x4e, 0x3, 0x3, 0x2, 0x2, 0x2, 0x4f, 
    0x52, 0x5, 0x16, 0xc, 0x2, 0x50, 0x52, 0x5, 0x6, 0x4, 0x2, 0x51, 0x4f, 
    0x3, 0x2, 0x2, 0x2, 0x51, 0x50, 0x3, 0x2, 0x2, 0x2, 0x52, 0x5, 0x3, 
    0x2, 0x2, 0x2, 0x53, 0x54, 0x7, 0xa, 0x2, 0x2, 0x54, 0x55, 0x5, 0x8, 
    0x5, 0x2, 0x55, 0x56, 0x5, 0xa, 0x6, 0x2, 0x56, 0x7, 0x3, 0x2, 0x2, 
    0x2, 0x57, 0x5c, 0x7, 0x3f, 0x2, 0x2, 0x58, 0x59, 0x7, 0xb, 0x2, 0x2, 
    0x59, 0x5b, 0x7, 0x3f, 0x2, 0x2, 0x5a, 0x58, 0x3, 0x2, 0x2, 0x2, 0x5b, 
    0x5e, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5a, 
    0x3, 0x2, 0x2, 0x2, 0x5d, 0x9, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5c, 0x3, 
    0x2, 0x2, 0x2, 0x5f, 0x64, 0x7, 0x38, 0x2, 0x2, 0x60, 0x63, 0x5, 0x12, 
    0xa, 0x2, 0x61, 0x63, 0xa, 0x2, 0x2, 0x2, 0x62, 0x60, 0x3, 0x2, 0x2, 
    0x2, 0x62, 0x61, 0x3, 0x2, 0x2, 0x2, 0x63, 0x66, 0x3, 0x2, 0x2, 0x2, 
    0x64, 0x62, 0x3, 0x2, 0x2, 0x2, 0x64, 0x65, 0x3, 0x2, 0x2, 0x2, 0x65, 
    0x67, 0x3, 0x2, 0x2, 0x2, 0x66, 0x64, 0x3, 0x2, 0x2, 0x2, 0x67, 0x68, 
    0x7, 0x39, 0x2, 0x2, 0x68, 0xb, 0x3, 0x2, 0x2, 0x2, 0x69, 0x6a, 0x7, 
    0x38, 0x2, 0x2, 0x6a, 0x6b, 0x5, 0xe, 0x8, 0x2, 0x6b, 0x6c, 0x7, 0x39, 
    0x2, 0x2, 0x6c, 0xd, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6f, 0x5, 0x10, 0x9, 
    0x2, 0x6e, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x72, 0x3, 0x2, 0x2, 0x2, 
    0x70, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x70, 0x71, 0x3, 0x2, 0x2, 0x2, 0x71, 
    0xf, 0x3, 0x2, 0x2, 0x2, 0x72, 0x70, 0x3, 0x2, 0x2, 0x2, 0x73, 0x74, 
    0x9, 0x3, 0x2, 0x2, 0x74, 0x7a, 0x7, 0x38, 0x2, 0x2, 0x75, 0x76, 0x5, 
    0x2e, 0x18, 0x2, 0x76, 0x77, 0x7, 0x40, 0x2, 0x2, 0x77, 0x79, 0x3, 0x2, 
    0x2, 0x2, 0x78, 0x75, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7c, 0x3, 0x2, 0x2, 
    0x2, 0x7a, 0x78, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7b, 0x3, 0x2, 0x2, 0x2, 
    0x7b, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x7d, 
    0x7e, 0x7, 0x39, 0x2, 0x2, 0x7e, 0x11, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x8f, 
    0x5, 0x16, 0xc, 0x2, 0x80, 0x8f, 0x5, 0x42, 0x22, 0x2, 0x81, 0x8f, 0x5, 
    0x3c, 0x1f, 0x2, 0x82, 0x8f, 0x5, 0x2c, 0x17, 0x2, 0x83, 0x84, 0x7, 
    0x15, 0x2, 0x2, 0x84, 0x8f, 0x5, 0x12, 0xa, 0x2, 0x85, 0x8f, 0x5, 0x32, 
    0x1a, 0x2, 0x86, 0x8f, 0x5, 0x24, 0x13, 0x2, 0x87, 0x8f, 0x5, 0x14, 
    0xb, 0x2, 0x88, 0x8f, 0x5, 0x1a, 0xe, 0x2, 0x89, 0x8f, 0x5, 0x1c, 0xf, 
    0x2, 0x8a, 0x8f, 0x5, 0x1e, 0x10, 0x2, 0x8b, 0x8f, 0x5, 0x2e, 0x18, 
    0x2, 0x8c, 0x8f, 0x5, 0x8, 0x5, 0x2, 0x8d, 0x8f, 0x5, 0x46, 0x24, 0x2, 
    0x8e, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x80, 0x3, 0x2, 0x2, 0x2, 0x8e, 
    0x81, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x82, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x83, 
    0x3, 0x2, 0x2, 0x2, 0x8e, 0x85, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x86, 0x3, 
    0x2, 0x2, 0x2, 0x8e, 0x87, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x88, 0x3, 0x2, 
    0x2, 0x2, 0x8e, 0x89, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x8a, 0x3, 0x2, 0x2, 
    0x2, 0x8e, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x8c, 0x3, 0x2, 0x2, 0x2, 
    0x8e, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x90, 0x3, 0x2, 0x2, 0x2, 0x90, 
    0x8e, 0x3, 0x2, 0x2, 0x2, 0x90, 0x91, 0x3, 0x2, 0x2, 0x2, 0x91, 0x92, 
    0x3, 0x2, 0x2, 0x2, 0x92, 0x93, 0x7, 0x40, 0x2, 0x2, 0x93, 0x13, 0x3, 
    0x2, 0x2, 0x2, 0x94, 0x95, 0x7, 0x5, 0x2, 0x2, 0x95, 0x96, 0x5, 0x8, 
    0x5, 0x2, 0x96, 0x97, 0x5, 0xc, 0x7, 0x2, 0x97, 0x15, 0x3, 0x2, 0x2, 
    0x2, 0x98, 0x99, 0x7, 0x3, 0x2, 0x2, 0x99, 0x9a, 0x5, 0x18, 0xd, 0x2, 
    0x9a, 0x9b, 0x7, 0x40, 0x2, 0x2, 0x9b, 0x17, 0x3, 0x2, 0x2, 0x2, 0x9c, 
    0x9d, 0x7, 0x4, 0x2, 0x2, 0x9d, 0x9e, 0x5, 0x8, 0x5, 0x2, 0x9e, 0x19, 
    0x3, 0x2, 0x2, 0x2, 0x9f, 0xa1, 0x7, 0xc, 0x2, 0x2, 0xa0, 0xa2, 0x5, 
    0x2c, 0x17, 0x2, 0xa1, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xa1, 0xa2, 0x3, 0x2, 
    0x2, 0x2, 0xa2, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xa4, 0x5, 0xa, 0x6, 
    0x2, 0xa4, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa6, 0x5, 0x8, 0x5, 0x2, 
    0xa6, 0xa8, 0x5, 0x8, 0x5, 0x2, 0xa7, 0xa9, 0x5, 0x2c, 0x17, 0x2, 0xa8, 
    0xa7, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xaa, 
    0x3, 0x2, 0x2, 0x2, 0xaa, 0xab, 0x5, 0xa, 0x6, 0x2, 0xab, 0x1d, 0x3, 
    0x2, 0x2, 0x2, 0xac, 0xad, 0x5, 0x8, 0x5, 0x2, 0xad, 0xae, 0x7, 0x36, 
    0x2, 0x2, 0xae, 0xaf, 0x5, 0x2c, 0x17, 0x2, 0xaf, 0xb0, 0x7, 0x37, 0x2, 
    0x2, 0xb0, 0xb1, 0x7, 0x40, 0x2, 0x2, 0xb1, 0x1f, 0x3, 0x2, 0x2, 0x2, 
    0xb2, 0xb3, 0x8, 0x11, 0x1, 0x2, 0xb3, 0xb4, 0x5, 0x8, 0x5, 0x2, 0xb4, 
    0xb5, 0x5, 0x22, 0x12, 0x2, 0xb5, 0xb6, 0x5, 0x3a, 0x1e, 0x2, 0xb6, 
    0xbd, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb8, 0xc, 0x3, 0x2, 0x2, 0xb8, 0xb9, 
    0x5, 0x22, 0x12, 0x2, 0xb9, 0xba, 0x5, 0x12, 0xa, 0x2, 0xba, 0xbc, 0x3, 
    0x2, 0x2, 0x2, 0xbb, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xbf, 0x3, 0x2, 
    0x2, 0x2, 0xbd, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xbe, 0x3, 0x2, 0x2, 
    0x2, 0xbe, 0x21, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xbd, 0x3, 0x2, 0x2, 0x2, 
    0xc0, 0xc1, 0x9, 0x4, 0x2, 0x2, 0xc1, 0x23, 0x3, 0x2, 0x2, 0x2, 0xc2, 
    0xc3, 0x7, 0x2f, 0x2, 0x2, 0xc3, 0xc6, 0x5, 0x26, 0x14, 0x2, 0xc4, 0xc7, 
    0x5, 0x12, 0xa, 0x2, 0xc5, 0xc7, 0x5, 0xa, 0x6, 0x2, 0xc6, 0xc4, 0x3, 
    0x2, 0x2, 0x2, 0xc6, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xc7, 0x25, 0x3, 0x2, 
    0x2, 0x2, 0xc8, 0xcc, 0x7, 0x36, 0x2, 0x2, 0xc9, 0xcd, 0x5, 0x28, 0x15, 
    0x2, 0xca, 0xcd, 0x5, 0x2a, 0x16, 0x2, 0xcb, 0xcd, 0x7, 0x3d, 0x2, 0x2, 
    0xcc, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xca, 0x3, 0x2, 0x2, 0x2, 0xcc, 
    0xcb, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xce, 
    0x3, 0x2, 0x2, 0x2, 0xce, 0xcf, 0x7, 0x37, 0x2, 0x2, 0xcf, 0x27, 0x3, 
    0x2, 0x2, 0x2, 0xd0, 0xd2, 0x5, 0x2e, 0x18, 0x2, 0xd1, 0xd0, 0x3, 0x2, 
    0x2, 0x2, 0xd1, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd3, 0x3, 0x2, 0x2, 
    0x2, 0xd3, 0xd5, 0x7, 0x40, 0x2, 0x2, 0xd4, 0xd6, 0x5, 0x12, 0xa, 0x2, 
    0xd5, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd6, 
    0xd7, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xd9, 0x7, 0x40, 0x2, 0x2, 0xd8, 0xda, 
    0x5, 0x12, 0xa, 0x2, 0xd9, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xda, 0x3, 
    0x2, 0x2, 0x2, 0xda, 0x29, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xdc, 0x5, 0x8, 
    0x5, 0x2, 0xdc, 0xdd, 0x7, 0x33, 0x2, 0x2, 0xdd, 0xde, 0x5, 0x8, 0x5, 
    0x2, 0xde, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xec, 0x7, 0x36, 0x2, 0x2, 
    0xe0, 0xe3, 0x5, 0x2e, 0x18, 0x2, 0xe1, 0xe3, 0xa, 0x5, 0x2, 0x2, 0xe2, 
    0xe0, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xe9, 
    0x3, 0x2, 0x2, 0x2, 0xe4, 0xe5, 0x7, 0x3c, 0x2, 0x2, 0xe5, 0xe8, 0x5, 
    0x2e, 0x18, 0x2, 0xe6, 0xe8, 0xa, 0x5, 0x2, 0x2, 0xe7, 0xe4, 0x3, 0x2, 
    0x2, 0x2, 0xe7, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xeb, 0x3, 0x2, 0x2, 
    0x2, 0xe9, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xea, 0x3, 0x2, 0x2, 0x2, 
    0xea, 0xed, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xec, 
    0xe2, 0x3, 0x2, 0x2, 0x2, 0xec, 0xed, 0x3, 0x2, 0x2, 0x2, 0xed, 0xee, 
    0x3, 0x2, 0x2, 0x2, 0xee, 0x104, 0x7, 0x37, 0x2, 0x2, 0xef, 0x100, 0x7, 
    0x36, 0x2, 0x2, 0xf0, 0xf1, 0x5, 0x8, 0x5, 0x2, 0xf1, 0xf2, 0x5, 0x8, 
    0x5, 0x2, 0xf2, 0xf5, 0x3, 0x2, 0x2, 0x2, 0xf3, 0xf5, 0xa, 0x5, 0x2, 
    0x2, 0xf4, 0xf0, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf3, 0x3, 0x2, 0x2, 0x2, 
    0xf5, 0xfd, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf7, 0x7, 0x3c, 0x2, 0x2, 0xf7, 
    0xf8, 0x5, 0x8, 0x5, 0x2, 0xf8, 0xf9, 0x5, 0x8, 0x5, 0x2, 0xf9, 0xfc, 
    0x3, 0x2, 0x2, 0x2, 0xfa, 0xfc, 0xa, 0x5, 0x2, 0x2, 0xfb, 0xf6, 0x3, 
    0x2, 0x2, 0x2, 0xfb, 0xfa, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xff, 0x3, 0x2, 
    0x2, 0x2, 0xfd, 0xfb, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xfe, 0x3, 0x2, 0x2, 
    0x2, 0xfe, 0x101, 0x3, 0x2, 0x2, 0x2, 0xff, 0xfd, 0x3, 0x2, 0x2, 0x2, 
    0x100, 0xf4, 0x3, 0x2, 0x2, 0x2, 0x100, 0x101, 0x3, 0x2, 0x2, 0x2, 0x101, 
    0x102, 0x3, 0x2, 0x2, 0x2, 0x102, 0x104, 0x7, 0x37, 0x2, 0x2, 0x103, 
    0xdf, 0x3, 0x2, 0x2, 0x2, 0x103, 0xef, 0x3, 0x2, 0x2, 0x2, 0x104, 0x2d, 
    0x3, 0x2, 0x2, 0x2, 0x105, 0x106, 0x5, 0x8, 0x5, 0x2, 0x106, 0x107, 
    0x5, 0x8, 0x5, 0x2, 0x107, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x108, 0x10a, 
    0x5, 0x30, 0x19, 0x2, 0x109, 0x105, 0x3, 0x2, 0x2, 0x2, 0x109, 0x108, 
    0x3, 0x2, 0x2, 0x2, 0x10a, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x10c, 0x5, 
    0x8, 0x5, 0x2, 0x10c, 0x10e, 0x7, 0x34, 0x2, 0x2, 0x10d, 0x10f, 0x5, 
    0x46, 0x24, 0x2, 0x10e, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x10f, 0x3, 
    0x2, 0x2, 0x2, 0x10f, 0x110, 0x3, 0x2, 0x2, 0x2, 0x110, 0x111, 0x7, 
    0x35, 0x2, 0x2, 0x111, 0x112, 0x5, 0x8, 0x5, 0x2, 0x112, 0x31, 0x3, 
    0x2, 0x2, 0x2, 0x113, 0x114, 0x7, 0x2c, 0x2, 0x2, 0x114, 0x115, 0x7, 
    0x36, 0x2, 0x2, 0x115, 0x116, 0x5, 0x12, 0xa, 0x2, 0x116, 0x119, 0x7, 
    0x37, 0x2, 0x2, 0x117, 0x11a, 0x5, 0x12, 0xa, 0x2, 0x118, 0x11a, 0x5, 
    0xa, 0x6, 0x2, 0x119, 0x117, 0x3, 0x2, 0x2, 0x2, 0x119, 0x118, 0x3, 
    0x2, 0x2, 0x2, 0x11a, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x11d, 0x5, 
    0x34, 0x1b, 0x2, 0x11c, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x11d, 0x3, 
    0x2, 0x2, 0x2, 0x11d, 0x33, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x122, 0x7, 0x2d, 
    0x2, 0x2, 0x11f, 0x123, 0x5, 0x12, 0xa, 0x2, 0x120, 0x123, 0x5, 0xa, 
    0x6, 0x2, 0x121, 0x123, 0xa, 0x6, 0x2, 0x2, 0x122, 0x11f, 0x3, 0x2, 
    0x2, 0x2, 0x122, 0x120, 0x3, 0x2, 0x2, 0x2, 0x122, 0x121, 0x3, 0x2, 
    0x2, 0x2, 0x123, 0x35, 0x3, 0x2, 0x2, 0x2, 0x124, 0x125, 0x5, 0x12, 
    0xa, 0x2, 0x125, 0x126, 0x5, 0x42, 0x22, 0x2, 0x126, 0x127, 0x5, 0x12, 
    0xa, 0x2, 0x127, 0x37, 0x3, 0x2, 0x2, 0x2, 0x128, 0x129, 0x5, 0x12, 
    0xa, 0x2, 0x129, 0x12a, 0x5, 0x3c, 0x1f, 0x2, 0x12a, 0x12b, 0x5, 0x12, 
    0xa, 0x2, 0x12b, 0x39, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x12f, 0x5, 0x8, 0x5, 
    0x2, 0x12d, 0x12f, 0x5, 0x46, 0x24, 0x2, 0x12e, 0x12c, 0x3, 0x2, 0x2, 
    0x2, 0x12e, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x3b, 0x3, 0x2, 0x2, 0x2, 
    0x130, 0x131, 0x9, 0x7, 0x2, 0x2, 0x131, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x132, 
    0x133, 0x7, 0x26, 0x2, 0x2, 0x133, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x134, 
    0x135, 0x7, 0x29, 0x2, 0x2, 0x135, 0x41, 0x3, 0x2, 0x2, 0x2, 0x136, 
    0x137, 0x9, 0x8, 0x2, 0x2, 0x137, 0x43, 0x3, 0x2, 0x2, 0x2, 0x138, 0x139, 
    0x7, 0x1e, 0x2, 0x2, 0x139, 0x143, 0x5, 0x8, 0x5, 0x2, 0x13a, 0x13b, 
    0x7, 0x1f, 0x2, 0x2, 0x13b, 0x143, 0x5, 0x8, 0x5, 0x2, 0x13c, 0x13d, 
    0x5, 0x8, 0x5, 0x2, 0x13d, 0x13e, 0x7, 0x1e, 0x2, 0x2, 0x13e, 0x143, 
    0x3, 0x2, 0x2, 0x2, 0x13f, 0x140, 0x5, 0x8, 0x5, 0x2, 0x140, 0x141, 
    0x7, 0x1f, 0x2, 0x2, 0x141, 0x143, 0x3, 0x2, 0x2, 0x2, 0x142, 0x138, 
    0x3, 0x2, 0x2, 0x2, 0x142, 0x13a, 0x3, 0x2, 0x2, 0x2, 0x142, 0x13c, 
    0x3, 0x2, 0x2, 0x2, 0x142, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x143, 0x45, 0x3, 
    0x2, 0x2, 0x2, 0x144, 0x145, 0x9, 0x9, 0x2, 0x2, 0x145, 0x47, 0x3, 0x2, 
    0x2, 0x2, 0x23, 0x4b, 0x51, 0x5c, 0x62, 0x64, 0x70, 0x7a, 0x8e, 0x90, 
    0xa1, 0xa8, 0xbd, 0xc6, 0xcc, 0xd1, 0xd5, 0xd9, 0xe2, 0xe7, 0xe9, 0xec, 
    0xf4, 0xfb, 0xfd, 0x100, 0x103, 0x109, 0x10e, 0x119, 0x11c, 0x122, 0x12e, 
    0x142, 
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
