
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
    setState(55); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(54);
      section();
      setState(57); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == KPPParser::G_ASSEMBLY);
    setState(59);
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
    enterOuterAlt(_localctx, 1);
    setState(61);
    namespacedecl();
   
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
    setState(63);
    match(KPPParser::G_ASSEMBLY);
    setState(64);
    symbol_id();
    setState(65);
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
    setState(67);
    match(KPPParser::IDENTIFIER);
    setState(72);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    while (alt != 1 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1 + 1) {
        setState(68);
        match(KPPParser::G_DOT);
        setState(69);
        match(KPPParser::IDENTIFIER); 
      }
      setState(74);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
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
    setState(75);
    match(KPPParser::L_BRACE);
    setState(80);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << KPPParser::D_CLASS)
      | (1ULL << KPPParser::P_PUBLIC)
      | (1ULL << KPPParser::P_PRIVATE)
      | (1ULL << KPPParser::P_INTERNAL)
      | (1ULL << KPPParser::P_INHERIT)
      | (1ULL << KPPParser::G_ASSEMBLY)
      | (1ULL << KPPParser::G_DOT)
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
      | (1ULL << KPPParser::L_BRACKET)
      | (1ULL << KPPParser::R_BRACKET)
      | (1ULL << KPPParser::L_PARANTH)
      | (1ULL << KPPParser::R_PARANTH)
      | (1ULL << KPPParser::L_BRACE)
      | (1ULL << KPPParser::LINE_COMMENT)
      | (1ULL << KPPParser::BLOCK_COMMENT)
      | (1ULL << KPPParser::COMMA)
      | (1ULL << KPPParser::NUMBER)
      | (1ULL << KPPParser::DECIMAL)
      | (1ULL << KPPParser::INTEGER)
      | (1ULL << KPPParser::IDENTIFIER)
      | (1ULL << KPPParser::SEMI)
      | (1ULL << KPPParser::WS))) != 0)) {
      setState(78);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
      case 1: {
        setState(76);
        expr();
        break;
      }

      case 2: {
        setState(77);
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
      setState(82);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(83);
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
    setState(85);
    match(KPPParser::L_BRACE);

    setState(86);
    classdeclblock();
    setState(87);
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
    setState(92);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << KPPParser::P_PUBLIC)
      | (1ULL << KPPParser::P_PRIVATE)
      | (1ULL << KPPParser::P_INTERNAL)
      | (1ULL << KPPParser::P_INHERIT))) != 0)) {
      setState(89);
      accessdeclblock();
      setState(94);
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
    setState(95);
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
    setState(96);
    match(KPPParser::L_BRACE);
    setState(102);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KPPParser::SEMI) {
      setState(97);
      vardecl();
      setState(98);
      match(KPPParser::SEMI);
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

//----------------- ExprContext ------------------------------------------------------------------

KPPParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KPPParser::ExprContext::SEMI() {
  return getToken(KPPParser::SEMI, 0);
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

std::vector<KPPParser::Symbol_idContext *> KPPParser::ExprContext::symbol_id() {
  return getRuleContexts<KPPParser::Symbol_idContext>();
}

KPPParser::Symbol_idContext* KPPParser::ExprContext::symbol_id(size_t i) {
  return getRuleContext<KPPParser::Symbol_idContext>(i);
}

std::vector<tree::TerminalNode *> KPPParser::ExprContext::NUMBER() {
  return getTokens(KPPParser::NUMBER);
}

tree::TerminalNode* KPPParser::ExprContext::NUMBER(size_t i) {
  return getToken(KPPParser::NUMBER, i);
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
    setState(119); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(119);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
      case 1: {
        setState(107);
        binMathOps();
        break;
      }

      case 2: {
        setState(108);
        binCompOps();
        break;
      }

      case 3: {
        setState(109);
        group();
        break;
      }

      case 4: {
        setState(110);
        match(KPPParser::A_SUBTRACT);
        setState(111);
        expr();
        break;
      }

      case 5: {
        setState(112);
        ifexp();
        break;
      }

      case 6: {
        setState(113);
        loopexp();
        break;
      }

      case 7: {
        setState(114);
        classDecl();
        break;
      }

      case 8: {
        setState(115);
        methodDecl();
        break;
      }

      case 9: {
        setState(116);
        methodCall();
        break;
      }

      case 10: {
        setState(117);
        symbol_id();
        break;
      }

      case 11: {
        setState(118);
        match(KPPParser::NUMBER);
        break;
      }

      }
      setState(121); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << KPPParser::D_CLASS)
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
      | (1ULL << KPPParser::NUMBER)
      | (1ULL << KPPParser::IDENTIFIER))) != 0));
    setState(123);
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


KPPParser::ClassDeclContext* KPPParser::classDecl() {
  ClassDeclContext *_localctx = _tracker.createInstance<ClassDeclContext>(_ctx, getState());
  enterRule(_localctx, 18, KPPParser::RuleClassDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(125);
    match(KPPParser::D_CLASS);
    setState(126);
    symbol_id();
    setState(127);
    classblock();
   
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

tree::TerminalNode* KPPParser::MethodDeclContext::L_PARANTH() {
  return getToken(KPPParser::L_PARANTH, 0);
}

tree::TerminalNode* KPPParser::MethodDeclContext::R_PARANTH() {
  return getToken(KPPParser::R_PARANTH, 0);
}

KPPParser::BlockContext* KPPParser::MethodDeclContext::block() {
  return getRuleContext<KPPParser::BlockContext>(0);
}


size_t KPPParser::MethodDeclContext::getRuleIndex() const {
  return KPPParser::RuleMethodDecl;
}


KPPParser::MethodDeclContext* KPPParser::methodDecl() {
  MethodDeclContext *_localctx = _tracker.createInstance<MethodDeclContext>(_ctx, getState());
  enterRule(_localctx, 20, KPPParser::RuleMethodDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(129);
    symbol_id();
    setState(130);
    symbol_id();
    setState(131);
    match(KPPParser::L_PARANTH);
    setState(132);
    match(KPPParser::R_PARANTH);
    setState(133);
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
  enterRule(_localctx, 22, KPPParser::RuleMethodCall);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(135);
    symbol_id();
    setState(136);
    match(KPPParser::L_PARANTH);
    setState(137);
    group();
    setState(138);
    match(KPPParser::R_PARANTH);
    setState(139);
    match(KPPParser::SEMI);
   
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


size_t KPPParser::VardeclContext::getRuleIndex() const {
  return KPPParser::RuleVardecl;
}


KPPParser::VardeclContext* KPPParser::vardecl() {
  VardeclContext *_localctx = _tracker.createInstance<VardeclContext>(_ctx, getState());
  enterRule(_localctx, 24, KPPParser::RuleVardecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);

   
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
  size_t startState = 26;
  enterRecursionRule(_localctx, 26, KPPParser::RuleSetexpr, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(144);
    symbol_id();
    setState(145);
    set();
    setState(146);
    value();
    _ctx->stop = _input->LT(-1);
    setState(154);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<SetexprContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleSetexpr);
        setState(148);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(149);
        set();
        setState(150);
        expr(); 
      }
      setState(156);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
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
  enterRule(_localctx, 28, KPPParser::RuleSet);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(157);
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

tree::TerminalNode* KPPParser::LoopexpContext::L_PARANTH() {
  return getToken(KPPParser::L_PARANTH, 0);
}

KPPParser::GroupContext* KPPParser::LoopexpContext::group() {
  return getRuleContext<KPPParser::GroupContext>(0);
}

tree::TerminalNode* KPPParser::LoopexpContext::R_PARANTH() {
  return getToken(KPPParser::R_PARANTH, 0);
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
  enterRule(_localctx, 30, KPPParser::RuleLoopexp);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(159);
    match(KPPParser::C_FOR);
    setState(160);
    match(KPPParser::L_PARANTH);
    setState(161);
    group();
    setState(162);
    match(KPPParser::R_PARANTH);
    setState(165);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KPPParser::D_CLASS:
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
      case KPPParser::NUMBER:
      case KPPParser::IDENTIFIER: {
        setState(163);
        expr();
        break;
      }

      case KPPParser::L_BRACE: {
        setState(164);
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

std::vector<KPPParser::ExprContext *> KPPParser::GroupContext::expr() {
  return getRuleContexts<KPPParser::ExprContext>();
}

KPPParser::ExprContext* KPPParser::GroupContext::expr(size_t i) {
  return getRuleContext<KPPParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> KPPParser::GroupContext::COMMA() {
  return getTokens(KPPParser::COMMA);
}

tree::TerminalNode* KPPParser::GroupContext::COMMA(size_t i) {
  return getToken(KPPParser::COMMA, i);
}


size_t KPPParser::GroupContext::getRuleIndex() const {
  return KPPParser::RuleGroup;
}


KPPParser::GroupContext* KPPParser::group() {
  GroupContext *_localctx = _tracker.createInstance<GroupContext>(_ctx, getState());
  enterRule(_localctx, 32, KPPParser::RuleGroup);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(167);
    match(KPPParser::L_PARANTH);
    setState(182);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << KPPParser::D_CLASS)
      | (1ULL << KPPParser::P_PUBLIC)
      | (1ULL << KPPParser::P_PRIVATE)
      | (1ULL << KPPParser::P_INTERNAL)
      | (1ULL << KPPParser::P_INHERIT)
      | (1ULL << KPPParser::G_ASSEMBLY)
      | (1ULL << KPPParser::G_DOT)
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
      | (1ULL << KPPParser::L_BRACKET)
      | (1ULL << KPPParser::R_BRACKET)
      | (1ULL << KPPParser::L_PARANTH)
      | (1ULL << KPPParser::L_BRACE)
      | (1ULL << KPPParser::R_BRACE)
      | (1ULL << KPPParser::LINE_COMMENT)
      | (1ULL << KPPParser::BLOCK_COMMENT)
      | (1ULL << KPPParser::COMMA)
      | (1ULL << KPPParser::NUMBER)
      | (1ULL << KPPParser::DECIMAL)
      | (1ULL << KPPParser::INTEGER)
      | (1ULL << KPPParser::IDENTIFIER)
      | (1ULL << KPPParser::SEMI)
      | (1ULL << KPPParser::WS))) != 0)) {
      setState(170);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
      case 1: {
        setState(168);
        expr();
        break;
      }

      case 2: {
        setState(169);
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
      setState(179);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KPPParser::COMMA) {
        setState(172);
        match(KPPParser::COMMA);
        setState(175);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
        case 1: {
          setState(173);
          expr();
          break;
        }

        case 2: {
          setState(174);
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
        setState(181);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(184);
    match(KPPParser::R_PARANTH);
   
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
  enterRule(_localctx, 34, KPPParser::RuleIfexp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(186);
    match(KPPParser::C_IF);
    setState(187);
    match(KPPParser::L_PARANTH);
    setState(188);
    expr();
    setState(189);
    match(KPPParser::R_PARANTH);
    setState(192);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KPPParser::D_CLASS:
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
      case KPPParser::NUMBER:
      case KPPParser::IDENTIFIER: {
        setState(190);
        expr();
        break;
      }

      case KPPParser::L_BRACE: {
        setState(191);
        block();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(195);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KPPParser::C_ELSE) {
      setState(194);
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
  enterRule(_localctx, 36, KPPParser::RuleElseexp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(197);
    match(KPPParser::C_ELSE);
    setState(201);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      setState(198);
      expr();
      break;
    }

    case 2: {
      setState(199);
      block();
      break;
    }

    case 3: {
      setState(200);
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


KPPParser::MathExprContext* KPPParser::mathExpr() {
  MathExprContext *_localctx = _tracker.createInstance<MathExprContext>(_ctx, getState());
  enterRule(_localctx, 38, KPPParser::RuleMathExpr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(203);
    expr();
    setState(204);
    binMathOps();
    setState(205);
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


KPPParser::CompExprContext* KPPParser::compExpr() {
  CompExprContext *_localctx = _tracker.createInstance<CompExprContext>(_ctx, getState());
  enterRule(_localctx, 40, KPPParser::RuleCompExpr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(207);
    expr();
    setState(208);
    binCompOps();
    setState(209);
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

tree::TerminalNode* KPPParser::ValueContext::NUMBER() {
  return getToken(KPPParser::NUMBER, 0);
}


size_t KPPParser::ValueContext::getRuleIndex() const {
  return KPPParser::RuleValue;
}


KPPParser::ValueContext* KPPParser::value() {
  ValueContext *_localctx = _tracker.createInstance<ValueContext>(_ctx, getState());
  enterRule(_localctx, 42, KPPParser::RuleValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(213);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KPPParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(211);
        symbol_id();
        break;
      }

      case KPPParser::NUMBER: {
        enterOuterAlt(_localctx, 2);
        setState(212);
        match(KPPParser::NUMBER);
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
  enterRule(_localctx, 44, KPPParser::RuleBinCompOps);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(215);
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
  enterRule(_localctx, 46, KPPParser::RuleUnaryLogic);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(217);
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
  enterRule(_localctx, 48, KPPParser::RuleUnaryOp);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(219);
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
  enterRule(_localctx, 50, KPPParser::RuleBinMathOps);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(221);
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
  enterRule(_localctx, 52, KPPParser::RuleLr_math_ops);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(233);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(223);
      match(KPPParser::A_INCREMENT);
      setState(224);
      symbol_id();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(225);
      match(KPPParser::A_DECRIMENT);
      setState(226);
      symbol_id();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(227);
      symbol_id();
      setState(228);
      match(KPPParser::A_INCREMENT);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(230);
      symbol_id();
      setState(231);
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

bool KPPParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 13: return setexprSempred(dynamic_cast<SetexprContext *>(context), predicateIndex);

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
  "classdeclblock", "accessdeclblock", "expr", "classDecl", "methodDecl", 
  "methodCall", "vardecl", "setexpr", "set", "loopexp", "group", "ifexp", 
  "elseexp", "mathExpr", "compExpr", "value", "binCompOps", "unaryLogic", 
  "unaryOp", "binMathOps", "lr_math_ops"
};

std::vector<std::string> KPPParser::_literalNames = {
  "", "'class'", "'public'", "'private'", "'internal'", "'legacy'", "'__asm__'", 
  "'.'", "'>'", "'<'", "'=='", "'>='", "'<='", "'='", "'+'", "'-'", "'*'", 
  "'/'", "'**'", "'%'", "'+='", "'-='", "'*='", "'/='", "'++'", "'--'", 
  "'&&'", "'||'", "'!&'", "'!|'", "'^|'", "'^!|'", "'!'", "'&'", "'|'", 
  "'~'", "'<<'", "'>>'", "'if'", "'else'", "'while'", "'for'", "'goto'", 
  "'break'", "'skip'", "'['", "']'", "'('", "')'", "'{'", "'}'", "", "", 
  "','", "", "", "", "", "';'"
};

std::vector<std::string> KPPParser::_symbolicNames = {
  "", "D_CLASS", "P_PUBLIC", "P_PRIVATE", "P_INTERNAL", "P_INHERIT", "G_ASSEMBLY", 
  "G_DOT", "CM_GTR", "CM_LSS", "CM_EQU", "CM_GTR_EQU", "CM_LSS_EQU", "A_SET", 
  "A_ADD", "A_SUBTRACT", "A_MULTIPLY", "A_DIVIDE", "A_EXPONENT", "A_MODULO", 
  "A_SET_SUM", "A_SET_DIFFERENCE", "A_SET_PRODUCT", "A_SET_QUOTIENT", "A_INCREMENT", 
  "A_DECRIMENT", "L_AND", "L_OR", "L_NAND", "L_NOR", "L_XOR", "L_XNOR", 
  "L_NOT", "BL_AND", "BL_OR", "BL_INV", "BL_LEFT", "BL_RIGHT", "C_IF", "C_ELSE", 
  "C_WHILE", "C_FOR", "C_GOTO", "C_BREAK", "C_SKIP", "L_BRACKET", "R_BRACKET", 
  "L_PARANTH", "R_PARANTH", "L_BRACE", "R_BRACE", "LINE_COMMENT", "BLOCK_COMMENT", 
  "COMMA", "NUMBER", "DECIMAL", "INTEGER", "IDENTIFIER", "SEMI", "WS"
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
    0x3, 0x3d, 0xee, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 0x9, 
    0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 
    0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 0x4, 
    0x1c, 0x9, 0x1c, 0x3, 0x2, 0x6, 0x2, 0x3a, 0xa, 0x2, 0xd, 0x2, 0xe, 
    0x2, 0x3b, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x49, 0xa, 
    0x5, 0xc, 0x5, 0xe, 0x5, 0x4c, 0xb, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x7, 0x6, 0x51, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x54, 0xb, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x7, 0x8, 
    0x5d, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x60, 0xb, 0x8, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0x67, 0xa, 0x9, 0xc, 0x9, 0xe, 
    0x9, 0x6a, 0xb, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x6, 0xa, 0x7a, 0xa, 0xa, 0xd, 0xa, 0xe, 0xa, 0x7b, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x7, 0xf, 0x9b, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x9e, 0xb, 0xf, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x5, 0x11, 0xa8, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x5, 0x12, 0xad, 0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 
    0x12, 0xb2, 0xa, 0x12, 0x7, 0x12, 0xb4, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 
    0xb7, 0xb, 0x12, 0x5, 0x12, 0xb9, 0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 
    0xc3, 0xa, 0x13, 0x3, 0x13, 0x5, 0x13, 0xc6, 0xa, 0x13, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0xcc, 0xa, 0x14, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
    0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0xd8, 0xa, 0x17, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 
    0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 
    0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 0xec, 0xa, 0x1c, 0x3, 0x1c, 
    0x3, 0x4a, 0x3, 0x1c, 0x1d, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 
    0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 
    0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x2, 0x9, 0x3, 0x2, 0x34, 
    0x34, 0x3, 0x2, 0x4, 0x7, 0x4, 0x2, 0xf, 0xf, 0x16, 0x19, 0x3, 0x2, 
    0x32, 0x32, 0x3, 0x2, 0x28, 0x28, 0x3, 0x2, 0xa, 0xe, 0x3, 0x2, 0x10, 
    0x15, 0x2, 0xf1, 0x2, 0x39, 0x3, 0x2, 0x2, 0x2, 0x4, 0x3f, 0x3, 0x2, 
    0x2, 0x2, 0x6, 0x41, 0x3, 0x2, 0x2, 0x2, 0x8, 0x45, 0x3, 0x2, 0x2, 0x2, 
    0xa, 0x4d, 0x3, 0x2, 0x2, 0x2, 0xc, 0x57, 0x3, 0x2, 0x2, 0x2, 0xe, 0x5e, 
    0x3, 0x2, 0x2, 0x2, 0x10, 0x61, 0x3, 0x2, 0x2, 0x2, 0x12, 0x79, 0x3, 
    0x2, 0x2, 0x2, 0x14, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x16, 0x83, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0x89, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x8f, 0x3, 0x2, 0x2, 
    0x2, 0x1c, 0x91, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x9f, 0x3, 0x2, 0x2, 0x2, 
    0x20, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x22, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x24, 
    0xbc, 0x3, 0x2, 0x2, 0x2, 0x26, 0xc7, 0x3, 0x2, 0x2, 0x2, 0x28, 0xcd, 
    0x3, 0x2, 0x2, 0x2, 0x2a, 0xd1, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xd7, 0x3, 
    0x2, 0x2, 0x2, 0x2e, 0xd9, 0x3, 0x2, 0x2, 0x2, 0x30, 0xdb, 0x3, 0x2, 
    0x2, 0x2, 0x32, 0xdd, 0x3, 0x2, 0x2, 0x2, 0x34, 0xdf, 0x3, 0x2, 0x2, 
    0x2, 0x36, 0xeb, 0x3, 0x2, 0x2, 0x2, 0x38, 0x3a, 0x5, 0x4, 0x3, 0x2, 
    0x39, 0x38, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x3b, 
    0x39, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3d, 
    0x3, 0x2, 0x2, 0x2, 0x3d, 0x3e, 0x7, 0x2, 0x2, 0x3, 0x3e, 0x3, 0x3, 
    0x2, 0x2, 0x2, 0x3f, 0x40, 0x5, 0x6, 0x4, 0x2, 0x40, 0x5, 0x3, 0x2, 
    0x2, 0x2, 0x41, 0x42, 0x7, 0x8, 0x2, 0x2, 0x42, 0x43, 0x5, 0x8, 0x5, 
    0x2, 0x43, 0x44, 0x5, 0xa, 0x6, 0x2, 0x44, 0x7, 0x3, 0x2, 0x2, 0x2, 
    0x45, 0x4a, 0x7, 0x3b, 0x2, 0x2, 0x46, 0x47, 0x7, 0x9, 0x2, 0x2, 0x47, 
    0x49, 0x7, 0x3b, 0x2, 0x2, 0x48, 0x46, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4c, 
    0x3, 0x2, 0x2, 0x2, 0x4a, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x48, 0x3, 
    0x2, 0x2, 0x2, 0x4b, 0x9, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4a, 0x3, 0x2, 
    0x2, 0x2, 0x4d, 0x52, 0x7, 0x33, 0x2, 0x2, 0x4e, 0x51, 0x5, 0x12, 0xa, 
    0x2, 0x4f, 0x51, 0xa, 0x2, 0x2, 0x2, 0x50, 0x4e, 0x3, 0x2, 0x2, 0x2, 
    0x50, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x51, 0x54, 0x3, 0x2, 0x2, 0x2, 0x52, 
    0x50, 0x3, 0x2, 0x2, 0x2, 0x52, 0x53, 0x3, 0x2, 0x2, 0x2, 0x53, 0x55, 
    0x3, 0x2, 0x2, 0x2, 0x54, 0x52, 0x3, 0x2, 0x2, 0x2, 0x55, 0x56, 0x7, 
    0x34, 0x2, 0x2, 0x56, 0xb, 0x3, 0x2, 0x2, 0x2, 0x57, 0x58, 0x7, 0x33, 
    0x2, 0x2, 0x58, 0x59, 0x5, 0xe, 0x8, 0x2, 0x59, 0x5a, 0x7, 0x34, 0x2, 
    0x2, 0x5a, 0xd, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x5d, 0x5, 0x10, 0x9, 0x2, 
    0x5c, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x60, 0x3, 0x2, 0x2, 0x2, 0x5e, 
    0x5c, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x5f, 0xf, 
    0x3, 0x2, 0x2, 0x2, 0x60, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x61, 0x62, 0x9, 
    0x3, 0x2, 0x2, 0x62, 0x68, 0x7, 0x33, 0x2, 0x2, 0x63, 0x64, 0x5, 0x1a, 
    0xe, 0x2, 0x64, 0x65, 0x7, 0x3c, 0x2, 0x2, 0x65, 0x67, 0x3, 0x2, 0x2, 
    0x2, 0x66, 0x63, 0x3, 0x2, 0x2, 0x2, 0x67, 0x6a, 0x3, 0x2, 0x2, 0x2, 
    0x68, 0x66, 0x3, 0x2, 0x2, 0x2, 0x68, 0x69, 0x3, 0x2, 0x2, 0x2, 0x69, 
    0x6b, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x68, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x6c, 
    0x7, 0x34, 0x2, 0x2, 0x6c, 0x11, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x7a, 0x5, 
    0x34, 0x1b, 0x2, 0x6e, 0x7a, 0x5, 0x2e, 0x18, 0x2, 0x6f, 0x7a, 0x5, 
    0x22, 0x12, 0x2, 0x70, 0x71, 0x7, 0x11, 0x2, 0x2, 0x71, 0x7a, 0x5, 0x12, 
    0xa, 0x2, 0x72, 0x7a, 0x5, 0x24, 0x13, 0x2, 0x73, 0x7a, 0x5, 0x20, 0x11, 
    0x2, 0x74, 0x7a, 0x5, 0x14, 0xb, 0x2, 0x75, 0x7a, 0x5, 0x16, 0xc, 0x2, 
    0x76, 0x7a, 0x5, 0x18, 0xd, 0x2, 0x77, 0x7a, 0x5, 0x8, 0x5, 0x2, 0x78, 
    0x7a, 0x7, 0x38, 0x2, 0x2, 0x79, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x79, 0x6e, 
    0x3, 0x2, 0x2, 0x2, 0x79, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x79, 0x70, 0x3, 
    0x2, 0x2, 0x2, 0x79, 0x72, 0x3, 0x2, 0x2, 0x2, 0x79, 0x73, 0x3, 0x2, 
    0x2, 0x2, 0x79, 0x74, 0x3, 0x2, 0x2, 0x2, 0x79, 0x75, 0x3, 0x2, 0x2, 
    0x2, 0x79, 0x76, 0x3, 0x2, 0x2, 0x2, 0x79, 0x77, 0x3, 0x2, 0x2, 0x2, 
    0x79, 0x78, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x7b, 
    0x79, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7d, 
    0x3, 0x2, 0x2, 0x2, 0x7d, 0x7e, 0x7, 0x3c, 0x2, 0x2, 0x7e, 0x13, 0x3, 
    0x2, 0x2, 0x2, 0x7f, 0x80, 0x7, 0x3, 0x2, 0x2, 0x80, 0x81, 0x5, 0x8, 
    0x5, 0x2, 0x81, 0x82, 0x5, 0xc, 0x7, 0x2, 0x82, 0x15, 0x3, 0x2, 0x2, 
    0x2, 0x83, 0x84, 0x5, 0x8, 0x5, 0x2, 0x84, 0x85, 0x5, 0x8, 0x5, 0x2, 
    0x85, 0x86, 0x7, 0x31, 0x2, 0x2, 0x86, 0x87, 0x7, 0x32, 0x2, 0x2, 0x87, 
    0x88, 0x5, 0xa, 0x6, 0x2, 0x88, 0x17, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8a, 
    0x5, 0x8, 0x5, 0x2, 0x8a, 0x8b, 0x7, 0x31, 0x2, 0x2, 0x8b, 0x8c, 0x5, 
    0x22, 0x12, 0x2, 0x8c, 0x8d, 0x7, 0x32, 0x2, 0x2, 0x8d, 0x8e, 0x7, 0x3c, 
    0x2, 0x2, 0x8e, 0x19, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x90, 0x3, 0x2, 0x2, 
    0x2, 0x90, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x91, 0x92, 0x8, 0xf, 0x1, 0x2, 
    0x92, 0x93, 0x5, 0x8, 0x5, 0x2, 0x93, 0x94, 0x5, 0x1e, 0x10, 0x2, 0x94, 
    0x95, 0x5, 0x2c, 0x17, 0x2, 0x95, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x96, 0x97, 
    0xc, 0x3, 0x2, 0x2, 0x97, 0x98, 0x5, 0x1e, 0x10, 0x2, 0x98, 0x99, 0x5, 
    0x12, 0xa, 0x2, 0x99, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x96, 0x3, 0x2, 
    0x2, 0x2, 0x9b, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9a, 0x3, 0x2, 0x2, 
    0x2, 0x9c, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x1d, 0x3, 0x2, 0x2, 0x2, 
    0x9e, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xa0, 0x9, 0x4, 0x2, 0x2, 0xa0, 
    0x1f, 0x3, 0x2, 0x2, 0x2, 0xa1, 0xa2, 0x7, 0x2b, 0x2, 0x2, 0xa2, 0xa3, 
    0x7, 0x31, 0x2, 0x2, 0xa3, 0xa4, 0x5, 0x22, 0x12, 0x2, 0xa4, 0xa7, 0x7, 
    0x32, 0x2, 0x2, 0xa5, 0xa8, 0x5, 0x12, 0xa, 0x2, 0xa6, 0xa8, 0x5, 0xa, 
    0x6, 0x2, 0xa7, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa6, 0x3, 0x2, 0x2, 
    0x2, 0xa8, 0x21, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xb8, 0x7, 0x31, 0x2, 0x2, 
    0xaa, 0xad, 0x5, 0x12, 0xa, 0x2, 0xab, 0xad, 0xa, 0x5, 0x2, 0x2, 0xac, 
    0xaa, 0x3, 0x2, 0x2, 0x2, 0xac, 0xab, 0x3, 0x2, 0x2, 0x2, 0xad, 0xb5, 
    0x3, 0x2, 0x2, 0x2, 0xae, 0xb1, 0x7, 0x37, 0x2, 0x2, 0xaf, 0xb2, 0x5, 
    0x12, 0xa, 0x2, 0xb0, 0xb2, 0xa, 0x5, 0x2, 0x2, 0xb1, 0xaf, 0x3, 0x2, 
    0x2, 0x2, 0xb1, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb4, 0x3, 0x2, 0x2, 
    0x2, 0xb3, 0xae, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb7, 0x3, 0x2, 0x2, 0x2, 
    0xb5, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xb6, 
    0xb9, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xac, 
    0x3, 0x2, 0x2, 0x2, 0xb8, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xba, 0x3, 
    0x2, 0x2, 0x2, 0xba, 0xbb, 0x7, 0x32, 0x2, 0x2, 0xbb, 0x23, 0x3, 0x2, 
    0x2, 0x2, 0xbc, 0xbd, 0x7, 0x28, 0x2, 0x2, 0xbd, 0xbe, 0x7, 0x31, 0x2, 
    0x2, 0xbe, 0xbf, 0x5, 0x12, 0xa, 0x2, 0xbf, 0xc2, 0x7, 0x32, 0x2, 0x2, 
    0xc0, 0xc3, 0x5, 0x12, 0xa, 0x2, 0xc1, 0xc3, 0x5, 0xa, 0x6, 0x2, 0xc2, 
    0xc0, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc5, 
    0x3, 0x2, 0x2, 0x2, 0xc4, 0xc6, 0x5, 0x26, 0x14, 0x2, 0xc5, 0xc4, 0x3, 
    0x2, 0x2, 0x2, 0xc5, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xc6, 0x25, 0x3, 0x2, 
    0x2, 0x2, 0xc7, 0xcb, 0x7, 0x29, 0x2, 0x2, 0xc8, 0xcc, 0x5, 0x12, 0xa, 
    0x2, 0xc9, 0xcc, 0x5, 0xa, 0x6, 0x2, 0xca, 0xcc, 0xa, 0x6, 0x2, 0x2, 
    0xcb, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xcb, 
    0xca, 0x3, 0x2, 0x2, 0x2, 0xcc, 0x27, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xce, 
    0x5, 0x12, 0xa, 0x2, 0xce, 0xcf, 0x5, 0x34, 0x1b, 0x2, 0xcf, 0xd0, 0x5, 
    0x12, 0xa, 0x2, 0xd0, 0x29, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xd2, 0x5, 0x12, 
    0xa, 0x2, 0xd2, 0xd3, 0x5, 0x2e, 0x18, 0x2, 0xd3, 0xd4, 0x5, 0x12, 0xa, 
    0x2, 0xd4, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd8, 0x5, 0x8, 0x5, 0x2, 
    0xd6, 0xd8, 0x7, 0x38, 0x2, 0x2, 0xd7, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xd7, 
    0xd6, 0x3, 0x2, 0x2, 0x2, 0xd8, 0x2d, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xda, 
    0x9, 0x7, 0x2, 0x2, 0xda, 0x2f, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xdc, 0x7, 
    0x22, 0x2, 0x2, 0xdc, 0x31, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xde, 0x7, 0x25, 
    0x2, 0x2, 0xde, 0x33, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xe0, 0x9, 0x8, 0x2, 
    0x2, 0xe0, 0x35, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xe2, 0x7, 0x1a, 0x2, 0x2, 
    0xe2, 0xec, 0x5, 0x8, 0x5, 0x2, 0xe3, 0xe4, 0x7, 0x1b, 0x2, 0x2, 0xe4, 
    0xec, 0x5, 0x8, 0x5, 0x2, 0xe5, 0xe6, 0x5, 0x8, 0x5, 0x2, 0xe6, 0xe7, 
    0x7, 0x1a, 0x2, 0x2, 0xe7, 0xec, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xe9, 0x5, 
    0x8, 0x5, 0x2, 0xe9, 0xea, 0x7, 0x1b, 0x2, 0x2, 0xea, 0xec, 0x3, 0x2, 
    0x2, 0x2, 0xeb, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xe3, 0x3, 0x2, 0x2, 
    0x2, 0xeb, 0xe5, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xe8, 0x3, 0x2, 0x2, 0x2, 
    0xec, 0x37, 0x3, 0x2, 0x2, 0x2, 0x15, 0x3b, 0x4a, 0x50, 0x52, 0x5e, 
    0x68, 0x79, 0x7b, 0x9c, 0xa7, 0xac, 0xb1, 0xb5, 0xb8, 0xc2, 0xc5, 0xcb, 
    0xd7, 0xeb, 
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
