
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


//----------------- RulesContext ------------------------------------------------------------------

KPPParser::RulesContext::RulesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KPPParser::RulesContext::EOF() {
  return getToken(KPPParser::EOF, 0);
}

std::vector<KPPParser::AsmContext *> KPPParser::RulesContext::asm() {
  return getRuleContexts<KPPParser::AsmContext>();
}

KPPParser::AsmContext* KPPParser::RulesContext::asm(size_t i) {
  return getRuleContext<KPPParser::AsmContext>(i);
}


size_t KPPParser::RulesContext::getRuleIndex() const {
  return KPPParser::RuleRules;
}

void KPPParser::RulesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRules(this);
}

void KPPParser::RulesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRules(this);
}

KPPParser::RulesContext* KPPParser::rules() {
  RulesContext *_localctx = _tracker.createInstance<RulesContext>(_ctx, getState());
  enterRule(_localctx, 0, KPPParser::RuleRules);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(63); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(62);
      asm();
      setState(65); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == KPPParser::T__7

    || _la == KPPParser::ASSEMBLY);
    setState(67);
    match(KPPParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AsmContext ------------------------------------------------------------------

KPPParser::AsmContext::AsmContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KPPParser::AssemblyContext* KPPParser::AsmContext::assembly() {
  return getRuleContext<KPPParser::AssemblyContext>(0);
}

KPPParser::Symbol_idContext* KPPParser::AsmContext::symbol_id() {
  return getRuleContext<KPPParser::Symbol_idContext>(0);
}

KPPParser::BlockContext* KPPParser::AsmContext::block() {
  return getRuleContext<KPPParser::BlockContext>(0);
}


size_t KPPParser::AsmContext::getRuleIndex() const {
  return KPPParser::RuleAsm;
}

void KPPParser::AsmContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAsm(this);
}

void KPPParser::AsmContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAsm(this);
}

KPPParser::AsmContext* KPPParser::asm() {
  AsmContext *_localctx = _tracker.createInstance<AsmContext>(_ctx, getState());
  enterRule(_localctx, 2, KPPParser::RuleAsm);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(69);
    assembly();
    setState(70);
    symbol_id();
    setState(71);
    block();
   
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

std::vector<KPPParser::ClassContext *> KPPParser::BlockContext::class() {
  return getRuleContexts<KPPParser::ClassContext>();
}

KPPParser::ClassContext* KPPParser::BlockContext::class(size_t i) {
  return getRuleContext<KPPParser::ClassContext>(i);
}

std::vector<KPPParser::FunctionContext *> KPPParser::BlockContext::function() {
  return getRuleContexts<KPPParser::FunctionContext>();
}

KPPParser::FunctionContext* KPPParser::BlockContext::function(size_t i) {
  return getRuleContext<KPPParser::FunctionContext>(i);
}

std::vector<KPPParser::BlockContext *> KPPParser::BlockContext::block() {
  return getRuleContexts<KPPParser::BlockContext>();
}

KPPParser::BlockContext* KPPParser::BlockContext::block(size_t i) {
  return getRuleContext<KPPParser::BlockContext>(i);
}

std::vector<KPPParser::ExpressionContext *> KPPParser::BlockContext::expression() {
  return getRuleContexts<KPPParser::ExpressionContext>();
}

KPPParser::ExpressionContext* KPPParser::BlockContext::expression(size_t i) {
  return getRuleContext<KPPParser::ExpressionContext>(i);
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
  enterRule(_localctx, 4, KPPParser::RuleBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(92);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(73);
      match(KPPParser::L_BRACE);
      setState(76); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(76);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
        case 1: {
          setState(74);
          class();
          break;
        }

        case 2: {
          setState(75);
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
        setState(78); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << KPPParser::T__0)
        | (1ULL << KPPParser::T__1)
        | (1ULL << KPPParser::T__2)
        | (1ULL << KPPParser::T__3)
        | (1ULL << KPPParser::T__4)
        | (1ULL << KPPParser::T__5)
        | (1ULL << KPPParser::T__6)
        | (1ULL << KPPParser::T__7)
        | (1ULL << KPPParser::IF)
        | (1ULL << KPPParser::ELSE)
        | (1ULL << KPPParser::WHILE)
        | (1ULL << KPPParser::FOREACH)
        | (1ULL << KPPParser::CONTINUE)
        | (1ULL << KPPParser::BREAK)
        | (1ULL << KPPParser::RETURN)
        | (1ULL << KPPParser::GOTO)
        | (1ULL << KPPParser::SET)
        | (1ULL << KPPParser::ADD)
        | (1ULL << KPPParser::SUBTRACT)
        | (1ULL << KPPParser::MULTIPLY)
        | (1ULL << KPPParser::DIVIDE)
        | (1ULL << KPPParser::EXPONENT)
        | (1ULL << KPPParser::MODULO)
        | (1ULL << KPPParser::SET_SUM)
        | (1ULL << KPPParser::SET_DIFFERENCE)
        | (1ULL << KPPParser::SET_PRODUCT)
        | (1ULL << KPPParser::SET_QUOTIENT)
        | (1ULL << KPPParser::INCREMENT)
        | (1ULL << KPPParser::DECRIMENT)
        | (1ULL << KPPParser::LOGIC_OR)
        | (1ULL << KPPParser::LOGIC_AND)
        | (1ULL << KPPParser::LOGIC_NOT)
        | (1ULL << KPPParser::LOGIC_NAND)
        | (1ULL << KPPParser::LOGIC_NOR)
        | (1ULL << KPPParser::LOGIC_XOR)
        | (1ULL << KPPParser::LOGIC_XNOR)
        | (1ULL << KPPParser::GTR)
        | (1ULL << KPPParser::LSS)
        | (1ULL << KPPParser::EQU)
        | (1ULL << KPPParser::GTR_EQU)
        | (1ULL << KPPParser::LSS_EQU)
        | (1ULL << KPPParser::BITWISE_AND)
        | (1ULL << KPPParser::BITWISE_OR)
        | (1ULL << KPPParser::BITWISE_INVERT)
        | (1ULL << KPPParser::CLASS)
        | (1ULL << KPPParser::THIS)
        | (1ULL << KPPParser::TRUE)
        | (1ULL << KPPParser::FALSE)
        | (1ULL << KPPParser::ASSEMBLY)
        | (1ULL << KPPParser::JOINT)
        | (1ULL << KPPParser::DOT)
        | (1ULL << KPPParser::L_BRACKET)
        | (1ULL << KPPParser::R_BRACKET)
        | (1ULL << KPPParser::L_PARANTH)
        | (1ULL << KPPParser::R_PARANTH)
        | (1ULL << KPPParser::L_BRACE)
        | (1ULL << KPPParser::LINE_COMMENT)
        | (1ULL << KPPParser::BLOCK_COMMENT)
        | (1ULL << KPPParser::DECIMAL)
        | (1ULL << KPPParser::IDENTIFIER)
        | (1ULL << KPPParser::SEMI)
        | (1ULL << KPPParser::WS))) != 0));
      setState(80);
      match(KPPParser::R_BRACE);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(81);
      match(KPPParser::L_BRACE);
      setState(87); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(87);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          setState(82);
          class();
          break;
        }

        case 2: {
          setState(83);
          function();
          break;
        }

        case 3: {
          setState(84);
          block();
          break;
        }

        case 4: {
          setState(85);
          expression(0);
          break;
        }

        case 5: {
          setState(86);
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
        setState(89); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << KPPParser::T__0)
        | (1ULL << KPPParser::T__1)
        | (1ULL << KPPParser::T__2)
        | (1ULL << KPPParser::T__3)
        | (1ULL << KPPParser::T__4)
        | (1ULL << KPPParser::T__5)
        | (1ULL << KPPParser::T__6)
        | (1ULL << KPPParser::T__7)
        | (1ULL << KPPParser::IF)
        | (1ULL << KPPParser::ELSE)
        | (1ULL << KPPParser::WHILE)
        | (1ULL << KPPParser::FOREACH)
        | (1ULL << KPPParser::CONTINUE)
        | (1ULL << KPPParser::BREAK)
        | (1ULL << KPPParser::RETURN)
        | (1ULL << KPPParser::GOTO)
        | (1ULL << KPPParser::SET)
        | (1ULL << KPPParser::ADD)
        | (1ULL << KPPParser::SUBTRACT)
        | (1ULL << KPPParser::MULTIPLY)
        | (1ULL << KPPParser::DIVIDE)
        | (1ULL << KPPParser::EXPONENT)
        | (1ULL << KPPParser::MODULO)
        | (1ULL << KPPParser::SET_SUM)
        | (1ULL << KPPParser::SET_DIFFERENCE)
        | (1ULL << KPPParser::SET_PRODUCT)
        | (1ULL << KPPParser::SET_QUOTIENT)
        | (1ULL << KPPParser::INCREMENT)
        | (1ULL << KPPParser::DECRIMENT)
        | (1ULL << KPPParser::LOGIC_OR)
        | (1ULL << KPPParser::LOGIC_AND)
        | (1ULL << KPPParser::LOGIC_NOT)
        | (1ULL << KPPParser::LOGIC_NAND)
        | (1ULL << KPPParser::LOGIC_NOR)
        | (1ULL << KPPParser::LOGIC_XOR)
        | (1ULL << KPPParser::LOGIC_XNOR)
        | (1ULL << KPPParser::GTR)
        | (1ULL << KPPParser::LSS)
        | (1ULL << KPPParser::EQU)
        | (1ULL << KPPParser::GTR_EQU)
        | (1ULL << KPPParser::LSS_EQU)
        | (1ULL << KPPParser::BITWISE_AND)
        | (1ULL << KPPParser::BITWISE_OR)
        | (1ULL << KPPParser::BITWISE_INVERT)
        | (1ULL << KPPParser::CLASS)
        | (1ULL << KPPParser::THIS)
        | (1ULL << KPPParser::TRUE)
        | (1ULL << KPPParser::FALSE)
        | (1ULL << KPPParser::ASSEMBLY)
        | (1ULL << KPPParser::JOINT)
        | (1ULL << KPPParser::DOT)
        | (1ULL << KPPParser::L_BRACKET)
        | (1ULL << KPPParser::R_BRACKET)
        | (1ULL << KPPParser::L_PARANTH)
        | (1ULL << KPPParser::R_PARANTH)
        | (1ULL << KPPParser::L_BRACE)
        | (1ULL << KPPParser::LINE_COMMENT)
        | (1ULL << KPPParser::BLOCK_COMMENT)
        | (1ULL << KPPParser::DECIMAL)
        | (1ULL << KPPParser::IDENTIFIER)
        | (1ULL << KPPParser::SEMI)
        | (1ULL << KPPParser::WS))) != 0));
      setState(91);
      match(KPPParser::R_BRACE);
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

//----------------- ClassContext ------------------------------------------------------------------

KPPParser::ClassContext::ClassContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KPPParser::ClassContext::CLASS() {
  return getToken(KPPParser::CLASS, 0);
}

KPPParser::Symbol_idContext* KPPParser::ClassContext::symbol_id() {
  return getRuleContext<KPPParser::Symbol_idContext>(0);
}

KPPParser::BlockContext* KPPParser::ClassContext::block() {
  return getRuleContext<KPPParser::BlockContext>(0);
}


size_t KPPParser::ClassContext::getRuleIndex() const {
  return KPPParser::RuleClass;
}

void KPPParser::ClassContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClass(this);
}

void KPPParser::ClassContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClass(this);
}

KPPParser::ClassContext* KPPParser::class() {
  ClassContext *_localctx = _tracker.createInstance<ClassContext>(_ctx, getState());
  enterRule(_localctx, 6, KPPParser::RuleClass);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(94);
    match(KPPParser::CLASS);
    setState(95);
    symbol_id();
    setState(96);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

KPPParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KPPParser::CallContext* KPPParser::StatementContext::call() {
  return getRuleContext<KPPParser::CallContext>(0);
}

KPPParser::SemiContext* KPPParser::StatementContext::semi() {
  return getRuleContext<KPPParser::SemiContext>(0);
}

std::vector<KPPParser::ExpressionContext *> KPPParser::StatementContext::expression() {
  return getRuleContexts<KPPParser::ExpressionContext>();
}

KPPParser::ExpressionContext* KPPParser::StatementContext::expression(size_t i) {
  return getRuleContext<KPPParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> KPPParser::StatementContext::IDENTIFIER() {
  return getTokens(KPPParser::IDENTIFIER);
}

tree::TerminalNode* KPPParser::StatementContext::IDENTIFIER(size_t i) {
  return getToken(KPPParser::IDENTIFIER, i);
}

KPPParser::GroupContext* KPPParser::StatementContext::group() {
  return getRuleContext<KPPParser::GroupContext>(0);
}

KPPParser::BlockContext* KPPParser::StatementContext::block() {
  return getRuleContext<KPPParser::BlockContext>(0);
}


size_t KPPParser::StatementContext::getRuleIndex() const {
  return KPPParser::RuleStatement;
}

void KPPParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void KPPParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

KPPParser::StatementContext* KPPParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 8, KPPParser::RuleStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(112);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(98);
      call();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(102);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << KPPParser::T__0)
        | (1ULL << KPPParser::T__1)
        | (1ULL << KPPParser::T__2)
        | (1ULL << KPPParser::T__3)
        | (1ULL << KPPParser::T__4)
        | (1ULL << KPPParser::T__5)
        | (1ULL << KPPParser::T__6)
        | (1ULL << KPPParser::IF)
        | (1ULL << KPPParser::ELSE)
        | (1ULL << KPPParser::WHILE)
        | (1ULL << KPPParser::FOREACH)
        | (1ULL << KPPParser::CONTINUE)
        | (1ULL << KPPParser::BREAK)
        | (1ULL << KPPParser::RETURN)
        | (1ULL << KPPParser::GOTO)
        | (1ULL << KPPParser::INCREMENT)
        | (1ULL << KPPParser::DECRIMENT)
        | (1ULL << KPPParser::LOGIC_NOT)
        | (1ULL << KPPParser::CLASS)
        | (1ULL << KPPParser::TRUE)
        | (1ULL << KPPParser::FALSE)
        | (1ULL << KPPParser::L_PARANTH)
        | (1ULL << KPPParser::IDENTIFIER))) != 0)) {
        setState(99);
        expression(0);
        setState(104);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(105);
      semi();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(106);
      match(KPPParser::IDENTIFIER);
      setState(107);
      match(KPPParser::IDENTIFIER);
      setState(108);
      group();
      setState(109);
      block();
      setState(110);
      semi();
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

//----------------- ExpressionContext ------------------------------------------------------------------

KPPParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KPPParser::Assign_exprContext* KPPParser::ExpressionContext::assign_expr() {
  return getRuleContext<KPPParser::Assign_exprContext>(0);
}

KPPParser::Var_declContext* KPPParser::ExpressionContext::var_decl() {
  return getRuleContext<KPPParser::Var_declContext>(0);
}

KPPParser::Symbol_idContext* KPPParser::ExpressionContext::symbol_id() {
  return getRuleContext<KPPParser::Symbol_idContext>(0);
}

KPPParser::GroupContext* KPPParser::ExpressionContext::group() {
  return getRuleContext<KPPParser::GroupContext>(0);
}

KPPParser::Unary_opsContext* KPPParser::ExpressionContext::unary_ops() {
  return getRuleContext<KPPParser::Unary_opsContext>(0);
}

std::vector<KPPParser::ExpressionContext *> KPPParser::ExpressionContext::expression() {
  return getRuleContexts<KPPParser::ExpressionContext>();
}

KPPParser::ExpressionContext* KPPParser::ExpressionContext::expression(size_t i) {
  return getRuleContext<KPPParser::ExpressionContext>(i);
}

KPPParser::BoolContext* KPPParser::ExpressionContext::bool() {
  return getRuleContext<KPPParser::BoolContext>(0);
}

KPPParser::Type_specifierContext* KPPParser::ExpressionContext::type_specifier() {
  return getRuleContext<KPPParser::Type_specifierContext>(0);
}

KPPParser::BinaryContext* KPPParser::ExpressionContext::binary() {
  return getRuleContext<KPPParser::BinaryContext>(0);
}


size_t KPPParser::ExpressionContext::getRuleIndex() const {
  return KPPParser::RuleExpression;
}

void KPPParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void KPPParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


KPPParser::ExpressionContext* KPPParser::expression() {
   return expression(0);
}

KPPParser::ExpressionContext* KPPParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  KPPParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  KPPParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 10;
  enterRecursionRule(_localctx, 10, KPPParser::RuleExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(126);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      setState(115);
      assign_expr();
      break;
    }

    case 2: {
      setState(116);
      var_decl();
      break;
    }

    case 3: {
      setState(117);
      symbol_id();
      break;
    }

    case 4: {
      setState(118);
      group();
      break;
    }

    case 5: {
      setState(119);
      unary_ops();
      setState(120);
      expression(4);
      break;
    }

    case 6: {
      setState(122);
      bool();
      break;
    }

    case 7: {
      setState(123);
      type_specifier(0);
      setState(124);
      symbol_id();
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(134);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExpression);
        setState(128);

        if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
        setState(129);
        binary();
        setState(130);
        expression(4); 
      }
      setState(136);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- CallContext ------------------------------------------------------------------

KPPParser::CallContext::CallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KPPParser::Symbol_idContext* KPPParser::CallContext::symbol_id() {
  return getRuleContext<KPPParser::Symbol_idContext>(0);
}

KPPParser::GroupContext* KPPParser::CallContext::group() {
  return getRuleContext<KPPParser::GroupContext>(0);
}


size_t KPPParser::CallContext::getRuleIndex() const {
  return KPPParser::RuleCall;
}

void KPPParser::CallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCall(this);
}

void KPPParser::CallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCall(this);
}

KPPParser::CallContext* KPPParser::call() {
  CallContext *_localctx = _tracker.createInstance<CallContext>(_ctx, getState());
  enterRule(_localctx, 12, KPPParser::RuleCall);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(137);
    symbol_id();
    setState(138);
    group();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionContext ------------------------------------------------------------------

KPPParser::FunctionContext::FunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KPPParser::Function_declContext* KPPParser::FunctionContext::function_decl() {
  return getRuleContext<KPPParser::Function_declContext>(0);
}

KPPParser::Function_callContext* KPPParser::FunctionContext::function_call() {
  return getRuleContext<KPPParser::Function_callContext>(0);
}


size_t KPPParser::FunctionContext::getRuleIndex() const {
  return KPPParser::RuleFunction;
}

void KPPParser::FunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction(this);
}

void KPPParser::FunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction(this);
}

KPPParser::FunctionContext* KPPParser::function() {
  FunctionContext *_localctx = _tracker.createInstance<FunctionContext>(_ctx, getState());
  enterRule(_localctx, 14, KPPParser::RuleFunction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(142);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(140);
      function_decl();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(141);
      function_call();
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

//----------------- Function_declContext ------------------------------------------------------------------

KPPParser::Function_declContext::Function_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KPPParser::IdentifierContext* KPPParser::Function_declContext::identifier() {
  return getRuleContext<KPPParser::IdentifierContext>(0);
}

KPPParser::Function_callContext* KPPParser::Function_declContext::function_call() {
  return getRuleContext<KPPParser::Function_callContext>(0);
}

KPPParser::BlockContext* KPPParser::Function_declContext::block() {
  return getRuleContext<KPPParser::BlockContext>(0);
}


size_t KPPParser::Function_declContext::getRuleIndex() const {
  return KPPParser::RuleFunction_decl;
}

void KPPParser::Function_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_decl(this);
}

void KPPParser::Function_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_decl(this);
}

KPPParser::Function_declContext* KPPParser::function_decl() {
  Function_declContext *_localctx = _tracker.createInstance<Function_declContext>(_ctx, getState());
  enterRule(_localctx, 16, KPPParser::RuleFunction_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(144);
    identifier();
    setState(145);
    function_call();
    setState(146);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_callContext ------------------------------------------------------------------

KPPParser::Function_callContext::Function_callContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KPPParser::IdentifierContext* KPPParser::Function_callContext::identifier() {
  return getRuleContext<KPPParser::IdentifierContext>(0);
}

KPPParser::GroupContext* KPPParser::Function_callContext::group() {
  return getRuleContext<KPPParser::GroupContext>(0);
}


size_t KPPParser::Function_callContext::getRuleIndex() const {
  return KPPParser::RuleFunction_call;
}

void KPPParser::Function_callContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_call(this);
}

void KPPParser::Function_callContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_call(this);
}

KPPParser::Function_callContext* KPPParser::function_call() {
  Function_callContext *_localctx = _tracker.createInstance<Function_callContext>(_ctx, getState());
  enterRule(_localctx, 18, KPPParser::RuleFunction_call);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(148);
    identifier();
    setState(149);
    group();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Assign_exprContext ------------------------------------------------------------------

KPPParser::Assign_exprContext::Assign_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KPPParser::IdentifierContext* KPPParser::Assign_exprContext::identifier() {
  return getRuleContext<KPPParser::IdentifierContext>(0);
}

KPPParser::Assign_opsContext* KPPParser::Assign_exprContext::assign_ops() {
  return getRuleContext<KPPParser::Assign_opsContext>(0);
}

KPPParser::Value_idContext* KPPParser::Assign_exprContext::value_id() {
  return getRuleContext<KPPParser::Value_idContext>(0);
}

KPPParser::ExpressionContext* KPPParser::Assign_exprContext::expression() {
  return getRuleContext<KPPParser::ExpressionContext>(0);
}


size_t KPPParser::Assign_exprContext::getRuleIndex() const {
  return KPPParser::RuleAssign_expr;
}

void KPPParser::Assign_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssign_expr(this);
}

void KPPParser::Assign_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssign_expr(this);
}

KPPParser::Assign_exprContext* KPPParser::assign_expr() {
  Assign_exprContext *_localctx = _tracker.createInstance<Assign_exprContext>(_ctx, getState());
  enterRule(_localctx, 20, KPPParser::RuleAssign_expr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(151);
    identifier();
    setState(152);
    assign_ops();
    setState(155);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      setState(153);
      value_id();
      break;
    }

    case 2: {
      setState(154);
      expression(0);
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

//----------------- Var_declContext ------------------------------------------------------------------

KPPParser::Var_declContext::Var_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KPPParser::IdentifierContext* KPPParser::Var_declContext::identifier() {
  return getRuleContext<KPPParser::IdentifierContext>(0);
}

KPPParser::Assign_exprContext* KPPParser::Var_declContext::assign_expr() {
  return getRuleContext<KPPParser::Assign_exprContext>(0);
}

KPPParser::Symbol_idContext* KPPParser::Var_declContext::symbol_id() {
  return getRuleContext<KPPParser::Symbol_idContext>(0);
}


size_t KPPParser::Var_declContext::getRuleIndex() const {
  return KPPParser::RuleVar_decl;
}

void KPPParser::Var_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVar_decl(this);
}

void KPPParser::Var_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVar_decl(this);
}

KPPParser::Var_declContext* KPPParser::var_decl() {
  Var_declContext *_localctx = _tracker.createInstance<Var_declContext>(_ctx, getState());
  enterRule(_localctx, 22, KPPParser::RuleVar_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(163);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(157);
      identifier();
      setState(158);
      assign_expr();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(160);
      identifier();
      setState(161);
      symbol_id();
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

KPPParser::ExpressionContext* KPPParser::GroupContext::expression() {
  return getRuleContext<KPPParser::ExpressionContext>(0);
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
  enterRule(_localctx, 24, KPPParser::RuleGroup);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(165);
    match(KPPParser::L_PARANTH);
    setState(168);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      setState(166);
      expression(0);
      break;
    }

    case 2: {
      setState(167);
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
    setState(170);
    match(KPPParser::R_PARANTH);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Asm_idContext ------------------------------------------------------------------

KPPParser::Asm_idContext::Asm_idContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KPPParser::Asm_idContext::IDENTIFIER() {
  return getToken(KPPParser::IDENTIFIER, 0);
}

std::vector<KPPParser::IdentifierContext *> KPPParser::Asm_idContext::identifier() {
  return getRuleContexts<KPPParser::IdentifierContext>();
}

KPPParser::IdentifierContext* KPPParser::Asm_idContext::identifier(size_t i) {
  return getRuleContext<KPPParser::IdentifierContext>(i);
}

std::vector<tree::TerminalNode *> KPPParser::Asm_idContext::DOT() {
  return getTokens(KPPParser::DOT);
}

tree::TerminalNode* KPPParser::Asm_idContext::DOT(size_t i) {
  return getToken(KPPParser::DOT, i);
}


size_t KPPParser::Asm_idContext::getRuleIndex() const {
  return KPPParser::RuleAsm_id;
}

void KPPParser::Asm_idContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAsm_id(this);
}

void KPPParser::Asm_idContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAsm_id(this);
}

KPPParser::Asm_idContext* KPPParser::asm_id() {
  Asm_idContext *_localctx = _tracker.createInstance<Asm_idContext>(_ctx, getState());
  enterRule(_localctx, 26, KPPParser::RuleAsm_id);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(177);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    while (alt != 1 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1 + 1) {
        setState(172);
        identifier();
        setState(173);
        match(KPPParser::DOT); 
      }
      setState(179);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    }
    setState(180);
    match(KPPParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Value_idContext ------------------------------------------------------------------

KPPParser::Value_idContext::Value_idContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KPPParser::Value_idContext::DECIMAL() {
  return getToken(KPPParser::DECIMAL, 0);
}

tree::TerminalNode* KPPParser::Value_idContext::IDENTIFIER() {
  return getToken(KPPParser::IDENTIFIER, 0);
}

KPPParser::Logic_idContext* KPPParser::Value_idContext::logic_id() {
  return getRuleContext<KPPParser::Logic_idContext>(0);
}


size_t KPPParser::Value_idContext::getRuleIndex() const {
  return KPPParser::RuleValue_id;
}

void KPPParser::Value_idContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValue_id(this);
}

void KPPParser::Value_idContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValue_id(this);
}

KPPParser::Value_idContext* KPPParser::value_id() {
  Value_idContext *_localctx = _tracker.createInstance<Value_idContext>(_ctx, getState());
  enterRule(_localctx, 28, KPPParser::RuleValue_id);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(185);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KPPParser::DECIMAL: {
        enterOuterAlt(_localctx, 1);
        setState(182);
        match(KPPParser::DECIMAL);
        break;
      }

      case KPPParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(183);
        match(KPPParser::IDENTIFIER);
        break;
      }

      case KPPParser::TRUE:
      case KPPParser::FALSE: {
        enterOuterAlt(_localctx, 3);
        setState(184);
        logic_id();
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

std::vector<tree::TerminalNode *> KPPParser::Symbol_idContext::DOT() {
  return getTokens(KPPParser::DOT);
}

tree::TerminalNode* KPPParser::Symbol_idContext::DOT(size_t i) {
  return getToken(KPPParser::DOT, i);
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
  enterRule(_localctx, 30, KPPParser::RuleSymbol_id);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(187);
    match(KPPParser::IDENTIFIER);
    setState(192);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    while (alt != 1 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1 + 1) {
        setState(188);
        match(KPPParser::DOT);
        setState(189);
        match(KPPParser::IDENTIFIER); 
      }
      setState(194);
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

//----------------- Logic_idContext ------------------------------------------------------------------

KPPParser::Logic_idContext::Logic_idContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KPPParser::Logic_idContext::TRUE() {
  return getToken(KPPParser::TRUE, 0);
}

tree::TerminalNode* KPPParser::Logic_idContext::FALSE() {
  return getToken(KPPParser::FALSE, 0);
}


size_t KPPParser::Logic_idContext::getRuleIndex() const {
  return KPPParser::RuleLogic_id;
}

void KPPParser::Logic_idContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogic_id(this);
}

void KPPParser::Logic_idContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogic_id(this);
}

KPPParser::Logic_idContext* KPPParser::logic_id() {
  Logic_idContext *_localctx = _tracker.createInstance<Logic_idContext>(_ctx, getState());
  enterRule(_localctx, 32, KPPParser::RuleLogic_id);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(195);
    _la = _input->LA(1);
    if (!(_la == KPPParser::TRUE

    || _la == KPPParser::FALSE)) {
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

//----------------- IdentifierContext ------------------------------------------------------------------

KPPParser::IdentifierContext::IdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KPPParser::Type_specifierContext* KPPParser::IdentifierContext::type_specifier() {
  return getRuleContext<KPPParser::Type_specifierContext>(0);
}

KPPParser::Symbol_idContext* KPPParser::IdentifierContext::symbol_id() {
  return getRuleContext<KPPParser::Symbol_idContext>(0);
}

KPPParser::Control_blockContext* KPPParser::IdentifierContext::control_block() {
  return getRuleContext<KPPParser::Control_blockContext>(0);
}

tree::TerminalNode* KPPParser::IdentifierContext::RETURN() {
  return getToken(KPPParser::RETURN, 0);
}

KPPParser::Control_idContext* KPPParser::IdentifierContext::control_id() {
  return getRuleContext<KPPParser::Control_idContext>(0);
}


size_t KPPParser::IdentifierContext::getRuleIndex() const {
  return KPPParser::RuleIdentifier;
}

void KPPParser::IdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifier(this);
}

void KPPParser::IdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifier(this);
}

KPPParser::IdentifierContext* KPPParser::identifier() {
  IdentifierContext *_localctx = _tracker.createInstance<IdentifierContext>(_ctx, getState());
  enterRule(_localctx, 34, KPPParser::RuleIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(202);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(197);
      type_specifier(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(198);
      symbol_id();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(199);
      control_block();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(200);
      match(KPPParser::RETURN);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(201);
      control_id();
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

//----------------- Control_blockContext ------------------------------------------------------------------

KPPParser::Control_blockContext::Control_blockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KPPParser::Control_blockContext::IF() {
  return getToken(KPPParser::IF, 0);
}

tree::TerminalNode* KPPParser::Control_blockContext::ELSE() {
  return getToken(KPPParser::ELSE, 0);
}

tree::TerminalNode* KPPParser::Control_blockContext::WHILE() {
  return getToken(KPPParser::WHILE, 0);
}

tree::TerminalNode* KPPParser::Control_blockContext::FOREACH() {
  return getToken(KPPParser::FOREACH, 0);
}


size_t KPPParser::Control_blockContext::getRuleIndex() const {
  return KPPParser::RuleControl_block;
}

void KPPParser::Control_blockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterControl_block(this);
}

void KPPParser::Control_blockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitControl_block(this);
}

KPPParser::Control_blockContext* KPPParser::control_block() {
  Control_blockContext *_localctx = _tracker.createInstance<Control_blockContext>(_ctx, getState());
  enterRule(_localctx, 36, KPPParser::RuleControl_block);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(204);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << KPPParser::IF)
      | (1ULL << KPPParser::ELSE)
      | (1ULL << KPPParser::WHILE)
      | (1ULL << KPPParser::FOREACH))) != 0))) {
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

//----------------- Control_idContext ------------------------------------------------------------------

KPPParser::Control_idContext::Control_idContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KPPParser::Control_idContext::CONTINUE() {
  return getToken(KPPParser::CONTINUE, 0);
}

tree::TerminalNode* KPPParser::Control_idContext::BREAK() {
  return getToken(KPPParser::BREAK, 0);
}

tree::TerminalNode* KPPParser::Control_idContext::GOTO() {
  return getToken(KPPParser::GOTO, 0);
}

tree::TerminalNode* KPPParser::Control_idContext::RETURN() {
  return getToken(KPPParser::RETURN, 0);
}


size_t KPPParser::Control_idContext::getRuleIndex() const {
  return KPPParser::RuleControl_id;
}

void KPPParser::Control_idContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterControl_id(this);
}

void KPPParser::Control_idContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitControl_id(this);
}

KPPParser::Control_idContext* KPPParser::control_id() {
  Control_idContext *_localctx = _tracker.createInstance<Control_idContext>(_ctx, getState());
  enterRule(_localctx, 38, KPPParser::RuleControl_id);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(206);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << KPPParser::CONTINUE)
      | (1ULL << KPPParser::BREAK)
      | (1ULL << KPPParser::RETURN)
      | (1ULL << KPPParser::GOTO))) != 0))) {
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

//----------------- Unary_opsContext ------------------------------------------------------------------

KPPParser::Unary_opsContext::Unary_opsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KPPParser::Unary_opsContext::INCREMENT() {
  return getToken(KPPParser::INCREMENT, 0);
}

tree::TerminalNode* KPPParser::Unary_opsContext::DECRIMENT() {
  return getToken(KPPParser::DECRIMENT, 0);
}

tree::TerminalNode* KPPParser::Unary_opsContext::LOGIC_NOT() {
  return getToken(KPPParser::LOGIC_NOT, 0);
}


size_t KPPParser::Unary_opsContext::getRuleIndex() const {
  return KPPParser::RuleUnary_ops;
}

void KPPParser::Unary_opsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnary_ops(this);
}

void KPPParser::Unary_opsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnary_ops(this);
}

KPPParser::Unary_opsContext* KPPParser::unary_ops() {
  Unary_opsContext *_localctx = _tracker.createInstance<Unary_opsContext>(_ctx, getState());
  enterRule(_localctx, 40, KPPParser::RuleUnary_ops);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(208);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << KPPParser::INCREMENT)
      | (1ULL << KPPParser::DECRIMENT)
      | (1ULL << KPPParser::LOGIC_NOT))) != 0))) {
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

//----------------- Binary_arith_opsContext ------------------------------------------------------------------

KPPParser::Binary_arith_opsContext::Binary_arith_opsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KPPParser::Binary_arith_opsContext::SET() {
  return getToken(KPPParser::SET, 0);
}

tree::TerminalNode* KPPParser::Binary_arith_opsContext::ADD() {
  return getToken(KPPParser::ADD, 0);
}

tree::TerminalNode* KPPParser::Binary_arith_opsContext::SUBTRACT() {
  return getToken(KPPParser::SUBTRACT, 0);
}

tree::TerminalNode* KPPParser::Binary_arith_opsContext::MULTIPLY() {
  return getToken(KPPParser::MULTIPLY, 0);
}

tree::TerminalNode* KPPParser::Binary_arith_opsContext::DIVIDE() {
  return getToken(KPPParser::DIVIDE, 0);
}

tree::TerminalNode* KPPParser::Binary_arith_opsContext::EXPONENT() {
  return getToken(KPPParser::EXPONENT, 0);
}

tree::TerminalNode* KPPParser::Binary_arith_opsContext::MODULO() {
  return getToken(KPPParser::MODULO, 0);
}

tree::TerminalNode* KPPParser::Binary_arith_opsContext::SET_SUM() {
  return getToken(KPPParser::SET_SUM, 0);
}

tree::TerminalNode* KPPParser::Binary_arith_opsContext::SET_DIFFERENCE() {
  return getToken(KPPParser::SET_DIFFERENCE, 0);
}

tree::TerminalNode* KPPParser::Binary_arith_opsContext::SET_PRODUCT() {
  return getToken(KPPParser::SET_PRODUCT, 0);
}

tree::TerminalNode* KPPParser::Binary_arith_opsContext::SET_QUOTIENT() {
  return getToken(KPPParser::SET_QUOTIENT, 0);
}


size_t KPPParser::Binary_arith_opsContext::getRuleIndex() const {
  return KPPParser::RuleBinary_arith_ops;
}

void KPPParser::Binary_arith_opsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBinary_arith_ops(this);
}

void KPPParser::Binary_arith_opsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBinary_arith_ops(this);
}

KPPParser::Binary_arith_opsContext* KPPParser::binary_arith_ops() {
  Binary_arith_opsContext *_localctx = _tracker.createInstance<Binary_arith_opsContext>(_ctx, getState());
  enterRule(_localctx, 42, KPPParser::RuleBinary_arith_ops);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(210);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << KPPParser::SET)
      | (1ULL << KPPParser::ADD)
      | (1ULL << KPPParser::SUBTRACT)
      | (1ULL << KPPParser::MULTIPLY)
      | (1ULL << KPPParser::DIVIDE)
      | (1ULL << KPPParser::EXPONENT)
      | (1ULL << KPPParser::MODULO)
      | (1ULL << KPPParser::SET_SUM)
      | (1ULL << KPPParser::SET_DIFFERENCE)
      | (1ULL << KPPParser::SET_PRODUCT)
      | (1ULL << KPPParser::SET_QUOTIENT))) != 0))) {
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

//----------------- Assign_opsContext ------------------------------------------------------------------

KPPParser::Assign_opsContext::Assign_opsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KPPParser::Assign_opsContext::SET() {
  return getToken(KPPParser::SET, 0);
}

tree::TerminalNode* KPPParser::Assign_opsContext::SET_SUM() {
  return getToken(KPPParser::SET_SUM, 0);
}

tree::TerminalNode* KPPParser::Assign_opsContext::SET_DIFFERENCE() {
  return getToken(KPPParser::SET_DIFFERENCE, 0);
}

tree::TerminalNode* KPPParser::Assign_opsContext::SET_PRODUCT() {
  return getToken(KPPParser::SET_PRODUCT, 0);
}

tree::TerminalNode* KPPParser::Assign_opsContext::SET_QUOTIENT() {
  return getToken(KPPParser::SET_QUOTIENT, 0);
}


size_t KPPParser::Assign_opsContext::getRuleIndex() const {
  return KPPParser::RuleAssign_ops;
}

void KPPParser::Assign_opsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssign_ops(this);
}

void KPPParser::Assign_opsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssign_ops(this);
}

KPPParser::Assign_opsContext* KPPParser::assign_ops() {
  Assign_opsContext *_localctx = _tracker.createInstance<Assign_opsContext>(_ctx, getState());
  enterRule(_localctx, 44, KPPParser::RuleAssign_ops);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(212);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << KPPParser::SET)
      | (1ULL << KPPParser::SET_SUM)
      | (1ULL << KPPParser::SET_DIFFERENCE)
      | (1ULL << KPPParser::SET_PRODUCT)
      | (1ULL << KPPParser::SET_QUOTIENT))) != 0))) {
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

//----------------- Binary_logic_opsContext ------------------------------------------------------------------

KPPParser::Binary_logic_opsContext::Binary_logic_opsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KPPParser::Binary_logic_opsContext::LOGIC_OR() {
  return getToken(KPPParser::LOGIC_OR, 0);
}

tree::TerminalNode* KPPParser::Binary_logic_opsContext::LOGIC_AND() {
  return getToken(KPPParser::LOGIC_AND, 0);
}

tree::TerminalNode* KPPParser::Binary_logic_opsContext::LOGIC_NOT() {
  return getToken(KPPParser::LOGIC_NOT, 0);
}

tree::TerminalNode* KPPParser::Binary_logic_opsContext::LOGIC_NAND() {
  return getToken(KPPParser::LOGIC_NAND, 0);
}

tree::TerminalNode* KPPParser::Binary_logic_opsContext::LOGIC_NOR() {
  return getToken(KPPParser::LOGIC_NOR, 0);
}

tree::TerminalNode* KPPParser::Binary_logic_opsContext::LOGIC_XOR() {
  return getToken(KPPParser::LOGIC_XOR, 0);
}

tree::TerminalNode* KPPParser::Binary_logic_opsContext::LOGIC_XNOR() {
  return getToken(KPPParser::LOGIC_XNOR, 0);
}

tree::TerminalNode* KPPParser::Binary_logic_opsContext::GTR() {
  return getToken(KPPParser::GTR, 0);
}

tree::TerminalNode* KPPParser::Binary_logic_opsContext::LSS() {
  return getToken(KPPParser::LSS, 0);
}

tree::TerminalNode* KPPParser::Binary_logic_opsContext::EQU() {
  return getToken(KPPParser::EQU, 0);
}

tree::TerminalNode* KPPParser::Binary_logic_opsContext::GTR_EQU() {
  return getToken(KPPParser::GTR_EQU, 0);
}

tree::TerminalNode* KPPParser::Binary_logic_opsContext::LSS_EQU() {
  return getToken(KPPParser::LSS_EQU, 0);
}


size_t KPPParser::Binary_logic_opsContext::getRuleIndex() const {
  return KPPParser::RuleBinary_logic_ops;
}

void KPPParser::Binary_logic_opsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBinary_logic_ops(this);
}

void KPPParser::Binary_logic_opsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBinary_logic_ops(this);
}

KPPParser::Binary_logic_opsContext* KPPParser::binary_logic_ops() {
  Binary_logic_opsContext *_localctx = _tracker.createInstance<Binary_logic_opsContext>(_ctx, getState());
  enterRule(_localctx, 46, KPPParser::RuleBinary_logic_ops);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(214);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << KPPParser::LOGIC_OR)
      | (1ULL << KPPParser::LOGIC_AND)
      | (1ULL << KPPParser::LOGIC_NOT)
      | (1ULL << KPPParser::LOGIC_NAND)
      | (1ULL << KPPParser::LOGIC_NOR)
      | (1ULL << KPPParser::LOGIC_XOR)
      | (1ULL << KPPParser::LOGIC_XNOR)
      | (1ULL << KPPParser::GTR)
      | (1ULL << KPPParser::LSS)
      | (1ULL << KPPParser::EQU)
      | (1ULL << KPPParser::GTR_EQU)
      | (1ULL << KPPParser::LSS_EQU))) != 0))) {
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

//----------------- BinaryContext ------------------------------------------------------------------

KPPParser::BinaryContext::BinaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KPPParser::Binary_arith_opsContext* KPPParser::BinaryContext::binary_arith_ops() {
  return getRuleContext<KPPParser::Binary_arith_opsContext>(0);
}

KPPParser::Binary_logic_opsContext* KPPParser::BinaryContext::binary_logic_ops() {
  return getRuleContext<KPPParser::Binary_logic_opsContext>(0);
}


size_t KPPParser::BinaryContext::getRuleIndex() const {
  return KPPParser::RuleBinary;
}

void KPPParser::BinaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBinary(this);
}

void KPPParser::BinaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBinary(this);
}

KPPParser::BinaryContext* KPPParser::binary() {
  BinaryContext *_localctx = _tracker.createInstance<BinaryContext>(_ctx, getState());
  enterRule(_localctx, 48, KPPParser::RuleBinary);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(218);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KPPParser::SET:
      case KPPParser::ADD:
      case KPPParser::SUBTRACT:
      case KPPParser::MULTIPLY:
      case KPPParser::DIVIDE:
      case KPPParser::EXPONENT:
      case KPPParser::MODULO:
      case KPPParser::SET_SUM:
      case KPPParser::SET_DIFFERENCE:
      case KPPParser::SET_PRODUCT:
      case KPPParser::SET_QUOTIENT: {
        enterOuterAlt(_localctx, 1);
        setState(216);
        binary_arith_ops();
        break;
      }

      case KPPParser::LOGIC_OR:
      case KPPParser::LOGIC_AND:
      case KPPParser::LOGIC_NOT:
      case KPPParser::LOGIC_NAND:
      case KPPParser::LOGIC_NOR:
      case KPPParser::LOGIC_XOR:
      case KPPParser::LOGIC_XNOR:
      case KPPParser::GTR:
      case KPPParser::LSS:
      case KPPParser::EQU:
      case KPPParser::GTR_EQU:
      case KPPParser::LSS_EQU: {
        enterOuterAlt(_localctx, 2);
        setState(217);
        binary_logic_ops();
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

//----------------- BoolContext ------------------------------------------------------------------

KPPParser::BoolContext::BoolContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KPPParser::BoolContext::TRUE() {
  return getToken(KPPParser::TRUE, 0);
}

tree::TerminalNode* KPPParser::BoolContext::FALSE() {
  return getToken(KPPParser::FALSE, 0);
}


size_t KPPParser::BoolContext::getRuleIndex() const {
  return KPPParser::RuleBool;
}

void KPPParser::BoolContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBool(this);
}

void KPPParser::BoolContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBool(this);
}

KPPParser::BoolContext* KPPParser::bool() {
  BoolContext *_localctx = _tracker.createInstance<BoolContext>(_ctx, getState());
  enterRule(_localctx, 50, KPPParser::RuleBool);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(220);
    _la = _input->LA(1);
    if (!(_la == KPPParser::TRUE

    || _la == KPPParser::FALSE)) {
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

//----------------- Arith_exprContext ------------------------------------------------------------------

KPPParser::Arith_exprContext::Arith_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KPPParser::Arith_exprContext::L_PARANTH() {
  return getToken(KPPParser::L_PARANTH, 0);
}

std::vector<KPPParser::Arith_exprContext *> KPPParser::Arith_exprContext::arith_expr() {
  return getRuleContexts<KPPParser::Arith_exprContext>();
}

KPPParser::Arith_exprContext* KPPParser::Arith_exprContext::arith_expr(size_t i) {
  return getRuleContext<KPPParser::Arith_exprContext>(i);
}

tree::TerminalNode* KPPParser::Arith_exprContext::R_PARANTH() {
  return getToken(KPPParser::R_PARANTH, 0);
}

KPPParser::Value_idContext* KPPParser::Arith_exprContext::value_id() {
  return getRuleContext<KPPParser::Value_idContext>(0);
}

tree::TerminalNode* KPPParser::Arith_exprContext::SUBTRACT() {
  return getToken(KPPParser::SUBTRACT, 0);
}

tree::TerminalNode* KPPParser::Arith_exprContext::INCREMENT() {
  return getToken(KPPParser::INCREMENT, 0);
}

tree::TerminalNode* KPPParser::Arith_exprContext::DECRIMENT() {
  return getToken(KPPParser::DECRIMENT, 0);
}

KPPParser::Binary_arith_opsContext* KPPParser::Arith_exprContext::binary_arith_ops() {
  return getRuleContext<KPPParser::Binary_arith_opsContext>(0);
}


size_t KPPParser::Arith_exprContext::getRuleIndex() const {
  return KPPParser::RuleArith_expr;
}

void KPPParser::Arith_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArith_expr(this);
}

void KPPParser::Arith_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArith_expr(this);
}


KPPParser::Arith_exprContext* KPPParser::arith_expr() {
   return arith_expr(0);
}

KPPParser::Arith_exprContext* KPPParser::arith_expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  KPPParser::Arith_exprContext *_localctx = _tracker.createInstance<Arith_exprContext>(_ctx, parentState);
  KPPParser::Arith_exprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 52;
  enterRecursionRule(_localctx, 52, KPPParser::RuleArith_expr, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(232);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KPPParser::L_PARANTH: {
        setState(223);
        match(KPPParser::L_PARANTH);
        setState(224);
        arith_expr(0);
        setState(225);
        match(KPPParser::R_PARANTH);
        break;
      }

      case KPPParser::TRUE:
      case KPPParser::FALSE:
      case KPPParser::DECIMAL:
      case KPPParser::IDENTIFIER: {
        setState(227);
        value_id();
        break;
      }

      case KPPParser::SUBTRACT: {
        setState(228);
        match(KPPParser::SUBTRACT);
        setState(229);
        value_id();
        break;
      }

      case KPPParser::INCREMENT:
      case KPPParser::DECRIMENT: {
        setState(230);
        _la = _input->LA(1);
        if (!(_la == KPPParser::INCREMENT

        || _la == KPPParser::DECRIMENT)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(231);
        value_id();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(240);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Arith_exprContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleArith_expr);
        setState(234);

        if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
        setState(235);
        binary_arith_ops();
        setState(236);
        arith_expr(6); 
      }
      setState(242);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Type_specifierContext ------------------------------------------------------------------

KPPParser::Type_specifierContext::Type_specifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KPPParser::Type_specifierContext::CLASS() {
  return getToken(KPPParser::CLASS, 0);
}

KPPParser::Type_specifierContext* KPPParser::Type_specifierContext::type_specifier() {
  return getRuleContext<KPPParser::Type_specifierContext>(0);
}

KPPParser::ArrayContext* KPPParser::Type_specifierContext::array() {
  return getRuleContext<KPPParser::ArrayContext>(0);
}


size_t KPPParser::Type_specifierContext::getRuleIndex() const {
  return KPPParser::RuleType_specifier;
}

void KPPParser::Type_specifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType_specifier(this);
}

void KPPParser::Type_specifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType_specifier(this);
}


KPPParser::Type_specifierContext* KPPParser::type_specifier() {
   return type_specifier(0);
}

KPPParser::Type_specifierContext* KPPParser::type_specifier(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  KPPParser::Type_specifierContext *_localctx = _tracker.createInstance<Type_specifierContext>(_ctx, parentState);
  KPPParser::Type_specifierContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 54;
  enterRecursionRule(_localctx, 54, KPPParser::RuleType_specifier, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(244);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << KPPParser::T__0)
      | (1ULL << KPPParser::T__1)
      | (1ULL << KPPParser::T__2)
      | (1ULL << KPPParser::T__3)
      | (1ULL << KPPParser::T__4)
      | (1ULL << KPPParser::T__5)
      | (1ULL << KPPParser::T__6)
      | (1ULL << KPPParser::CLASS))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    _ctx->stop = _input->LT(-1);
    setState(250);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Type_specifierContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleType_specifier);
        setState(246);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(247);
        array(); 
      }
      setState(252);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ArrayContext ------------------------------------------------------------------

KPPParser::ArrayContext::ArrayContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KPPParser::ArrayContext::L_BRACKET() {
  return getToken(KPPParser::L_BRACKET, 0);
}

tree::TerminalNode* KPPParser::ArrayContext::R_BRACKET() {
  return getToken(KPPParser::R_BRACKET, 0);
}

KPPParser::Value_idContext* KPPParser::ArrayContext::value_id() {
  return getRuleContext<KPPParser::Value_idContext>(0);
}


size_t KPPParser::ArrayContext::getRuleIndex() const {
  return KPPParser::RuleArray;
}

void KPPParser::ArrayContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArray(this);
}

void KPPParser::ArrayContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArray(this);
}

KPPParser::ArrayContext* KPPParser::array() {
  ArrayContext *_localctx = _tracker.createInstance<ArrayContext>(_ctx, getState());
  enterRule(_localctx, 56, KPPParser::RuleArray);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(253);
    match(KPPParser::L_BRACKET);
    setState(255);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << KPPParser::TRUE)
      | (1ULL << KPPParser::FALSE)
      | (1ULL << KPPParser::DECIMAL)
      | (1ULL << KPPParser::IDENTIFIER))) != 0)) {
      setState(254);
      value_id();
    }
    setState(257);
    match(KPPParser::R_BRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssemblyContext ------------------------------------------------------------------

KPPParser::AssemblyContext::AssemblyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KPPParser::AssemblyContext::ASSEMBLY() {
  return getToken(KPPParser::ASSEMBLY, 0);
}


size_t KPPParser::AssemblyContext::getRuleIndex() const {
  return KPPParser::RuleAssembly;
}

void KPPParser::AssemblyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssembly(this);
}

void KPPParser::AssemblyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssembly(this);
}

KPPParser::AssemblyContext* KPPParser::assembly() {
  AssemblyContext *_localctx = _tracker.createInstance<AssemblyContext>(_ctx, getState());
  enterRule(_localctx, 58, KPPParser::RuleAssembly);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(259);
    _la = _input->LA(1);
    if (!(_la == KPPParser::T__7

    || _la == KPPParser::ASSEMBLY)) {
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

//----------------- SemiContext ------------------------------------------------------------------

KPPParser::SemiContext::SemiContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KPPParser::SemiContext::SEMI() {
  return getToken(KPPParser::SEMI, 0);
}


size_t KPPParser::SemiContext::getRuleIndex() const {
  return KPPParser::RuleSemi;
}

void KPPParser::SemiContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSemi(this);
}

void KPPParser::SemiContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSemi(this);
}

KPPParser::SemiContext* KPPParser::semi() {
  SemiContext *_localctx = _tracker.createInstance<SemiContext>(_ctx, getState());
  enterRule(_localctx, 60, KPPParser::RuleSemi);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(261);
    match(KPPParser::SEMI);
   
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
    case 5: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);
    case 26: return arith_exprSempred(dynamic_cast<Arith_exprContext *>(context), predicateIndex);
    case 27: return type_specifierSempred(dynamic_cast<Type_specifierContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool KPPParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

bool KPPParser::arith_exprSempred(Arith_exprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 5);

  default:
    break;
  }
  return true;
}

bool KPPParser::type_specifierSempred(Type_specifierContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 1);

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
  "rules", "asm", "block", "class", "statement", "expression", "call", "function", 
  "function_decl", "function_call", "assign_expr", "var_decl", "group", 
  "asm_id", "value_id", "symbol_id", "logic_id", "identifier", "control_block", 
  "control_id", "unary_ops", "binary_arith_ops", "assign_ops", "binary_logic_ops", 
  "binary", "bool", "arith_expr", "type_specifier", "array", "assembly", 
  "semi"
};

std::vector<std::string> KPPParser::_literalNames = {
  "", "'int'", "'sint'", "'double'", "'char'", "'byte'", "'string'", "'bool'", 
  "'asm'", "'if'", "'else'", "'while'", "'foreach'", "'continue'", "'break'", 
  "'return'", "'goto'", "'='", "'+'", "'-'", "'*'", "'/'", "'**'", "'%'", 
  "'+='", "'-='", "'*='", "'/='", "'++'", "'--'", "'||'", "'&&'", "'!'", 
  "'!&'", "'!|'", "'^|'", "'^!'", "'>'", "'<'", "'=='", "'>='", "'<='", 
  "'&'", "'|'", "'~'", "'class'", "'this'", "'true'", "'false'", "'assembly'", 
  "':'", "'.'", "'['", "']'", "'('", "')'", "'{'", "'}'", "", "", "", "", 
  "';'"
};

std::vector<std::string> KPPParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "IF", "ELSE", "WHILE", "FOREACH", 
  "CONTINUE", "BREAK", "RETURN", "GOTO", "SET", "ADD", "SUBTRACT", "MULTIPLY", 
  "DIVIDE", "EXPONENT", "MODULO", "SET_SUM", "SET_DIFFERENCE", "SET_PRODUCT", 
  "SET_QUOTIENT", "INCREMENT", "DECRIMENT", "LOGIC_OR", "LOGIC_AND", "LOGIC_NOT", 
  "LOGIC_NAND", "LOGIC_NOR", "LOGIC_XOR", "LOGIC_XNOR", "GTR", "LSS", "EQU", 
  "GTR_EQU", "LSS_EQU", "BITWISE_AND", "BITWISE_OR", "BITWISE_INVERT", "CLASS", 
  "THIS", "TRUE", "FALSE", "ASSEMBLY", "JOINT", "DOT", "L_BRACKET", "R_BRACKET", 
  "L_PARANTH", "R_PARANTH", "L_BRACE", "R_BRACE", "LINE_COMMENT", "BLOCK_COMMENT", 
  "DECIMAL", "IDENTIFIER", "SEMI", "WS"
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
    0x3, 0x41, 0x10a, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x3, 0x2, 0x6, 0x2, 0x42, 0xa, 
    0x2, 0xd, 0x2, 0xe, 0x2, 0x43, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x6, 0x4, 0x4f, 0xa, 
    0x4, 0xd, 0x4, 0xe, 0x4, 0x50, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x6, 0x4, 0x5a, 0xa, 0x4, 0xd, 0x4, 0xe, 
    0x4, 0x5b, 0x3, 0x4, 0x5, 0x4, 0x5f, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0x67, 0xa, 0x6, 0xc, 0x6, 
    0xe, 0x6, 0x6a, 0xb, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x73, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x81, 0xa, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x87, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 
    0x8a, 0xb, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x5, 
    0x9, 0x91, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 
    0x9e, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x5, 0xd, 0xa6, 0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 
    0xab, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 
    0xf, 0xb2, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0xb5, 0xb, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0xbc, 0xa, 0x10, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 0xc1, 0xa, 0x11, 0xc, 0x11, 0xe, 
    0x11, 0xc4, 0xb, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0xcd, 0xa, 0x13, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x5, 
    0x1a, 0xdd, 0xa, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 
    0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 
    0x3, 0x1c, 0x5, 0x1c, 0xeb, 0xa, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 
    0x3, 0x1c, 0x7, 0x1c, 0xf1, 0xa, 0x1c, 0xc, 0x1c, 0xe, 0x1c, 0xf4, 0xb, 
    0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x7, 0x1d, 
    0xfb, 0xa, 0x1d, 0xc, 0x1d, 0xe, 0x1d, 0xfe, 0xb, 0x1d, 0x3, 0x1e, 0x3, 
    0x1e, 0x5, 0x1e, 0x102, 0xa, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 
    0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x4, 0xb3, 0xc2, 0x5, 0xc, 
    0x36, 0x38, 0x21, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 
    0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 
    0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x2, 0xe, 0x3, 
    0x2, 0x3b, 0x3b, 0x3, 0x2, 0x39, 0x39, 0x3, 0x2, 0x31, 0x32, 0x3, 0x2, 
    0xb, 0xe, 0x3, 0x2, 0xf, 0x12, 0x4, 0x2, 0x1e, 0x1f, 0x22, 0x22, 0x3, 
    0x2, 0x13, 0x1d, 0x4, 0x2, 0x13, 0x13, 0x1a, 0x1d, 0x3, 0x2, 0x20, 0x2b, 
    0x3, 0x2, 0x1e, 0x1f, 0x4, 0x2, 0x3, 0x9, 0x2f, 0x2f, 0x4, 0x2, 0xa, 
    0xa, 0x33, 0x33, 0x2, 0x111, 0x2, 0x41, 0x3, 0x2, 0x2, 0x2, 0x4, 0x47, 
    0x3, 0x2, 0x2, 0x2, 0x6, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x8, 0x60, 0x3, 0x2, 
    0x2, 0x2, 0xa, 0x72, 0x3, 0x2, 0x2, 0x2, 0xc, 0x80, 0x3, 0x2, 0x2, 0x2, 
    0xe, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x10, 0x90, 0x3, 0x2, 0x2, 0x2, 0x12, 
    0x92, 0x3, 0x2, 0x2, 0x2, 0x14, 0x96, 0x3, 0x2, 0x2, 0x2, 0x16, 0x99, 
    0x3, 0x2, 0x2, 0x2, 0x18, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xa7, 0x3, 
    0x2, 0x2, 0x2, 0x1c, 0xb3, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xbb, 0x3, 0x2, 
    0x2, 0x2, 0x20, 0xbd, 0x3, 0x2, 0x2, 0x2, 0x22, 0xc5, 0x3, 0x2, 0x2, 
    0x2, 0x24, 0xcc, 0x3, 0x2, 0x2, 0x2, 0x26, 0xce, 0x3, 0x2, 0x2, 0x2, 
    0x28, 0xd0, 0x3, 0x2, 0x2, 0x2, 0x2a, 0xd2, 0x3, 0x2, 0x2, 0x2, 0x2c, 
    0xd4, 0x3, 0x2, 0x2, 0x2, 0x2e, 0xd6, 0x3, 0x2, 0x2, 0x2, 0x30, 0xd8, 
    0x3, 0x2, 0x2, 0x2, 0x32, 0xdc, 0x3, 0x2, 0x2, 0x2, 0x34, 0xde, 0x3, 
    0x2, 0x2, 0x2, 0x36, 0xea, 0x3, 0x2, 0x2, 0x2, 0x38, 0xf5, 0x3, 0x2, 
    0x2, 0x2, 0x3a, 0xff, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x105, 0x3, 0x2, 0x2, 
    0x2, 0x3e, 0x107, 0x3, 0x2, 0x2, 0x2, 0x40, 0x42, 0x5, 0x4, 0x3, 0x2, 
    0x41, 0x40, 0x3, 0x2, 0x2, 0x2, 0x42, 0x43, 0x3, 0x2, 0x2, 0x2, 0x43, 
    0x41, 0x3, 0x2, 0x2, 0x2, 0x43, 0x44, 0x3, 0x2, 0x2, 0x2, 0x44, 0x45, 
    0x3, 0x2, 0x2, 0x2, 0x45, 0x46, 0x7, 0x2, 0x2, 0x3, 0x46, 0x3, 0x3, 
    0x2, 0x2, 0x2, 0x47, 0x48, 0x5, 0x3c, 0x1f, 0x2, 0x48, 0x49, 0x5, 0x20, 
    0x11, 0x2, 0x49, 0x4a, 0x5, 0x6, 0x4, 0x2, 0x4a, 0x5, 0x3, 0x2, 0x2, 
    0x2, 0x4b, 0x4e, 0x7, 0x3a, 0x2, 0x2, 0x4c, 0x4f, 0x5, 0x8, 0x5, 0x2, 
    0x4d, 0x4f, 0xa, 0x2, 0x2, 0x2, 0x4e, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4e, 
    0x4d, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x50, 0x3, 0x2, 0x2, 0x2, 0x50, 0x4e, 
    0x3, 0x2, 0x2, 0x2, 0x50, 0x51, 0x3, 0x2, 0x2, 0x2, 0x51, 0x52, 0x3, 
    0x2, 0x2, 0x2, 0x52, 0x5f, 0x7, 0x3b, 0x2, 0x2, 0x53, 0x59, 0x7, 0x3a, 
    0x2, 0x2, 0x54, 0x5a, 0x5, 0x8, 0x5, 0x2, 0x55, 0x5a, 0x5, 0x10, 0x9, 
    0x2, 0x56, 0x5a, 0x5, 0x6, 0x4, 0x2, 0x57, 0x5a, 0x5, 0xc, 0x7, 0x2, 
    0x58, 0x5a, 0xa, 0x2, 0x2, 0x2, 0x59, 0x54, 0x3, 0x2, 0x2, 0x2, 0x59, 
    0x55, 0x3, 0x2, 0x2, 0x2, 0x59, 0x56, 0x3, 0x2, 0x2, 0x2, 0x59, 0x57, 
    0x3, 0x2, 0x2, 0x2, 0x59, 0x58, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5b, 0x3, 
    0x2, 0x2, 0x2, 0x5b, 0x59, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x5c, 0x3, 0x2, 
    0x2, 0x2, 0x5c, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5f, 0x7, 0x3b, 0x2, 
    0x2, 0x5e, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x53, 0x3, 0x2, 0x2, 0x2, 
    0x5f, 0x7, 0x3, 0x2, 0x2, 0x2, 0x60, 0x61, 0x7, 0x2f, 0x2, 0x2, 0x61, 
    0x62, 0x5, 0x20, 0x11, 0x2, 0x62, 0x63, 0x5, 0x6, 0x4, 0x2, 0x63, 0x9, 
    0x3, 0x2, 0x2, 0x2, 0x64, 0x73, 0x5, 0xe, 0x8, 0x2, 0x65, 0x67, 0x5, 
    0xc, 0x7, 0x2, 0x66, 0x65, 0x3, 0x2, 0x2, 0x2, 0x67, 0x6a, 0x3, 0x2, 
    0x2, 0x2, 0x68, 0x66, 0x3, 0x2, 0x2, 0x2, 0x68, 0x69, 0x3, 0x2, 0x2, 
    0x2, 0x69, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x68, 0x3, 0x2, 0x2, 0x2, 
    0x6b, 0x73, 0x5, 0x3e, 0x20, 0x2, 0x6c, 0x6d, 0x7, 0x3f, 0x2, 0x2, 0x6d, 
    0x6e, 0x7, 0x3f, 0x2, 0x2, 0x6e, 0x6f, 0x5, 0x1a, 0xe, 0x2, 0x6f, 0x70, 
    0x5, 0x6, 0x4, 0x2, 0x70, 0x71, 0x5, 0x3e, 0x20, 0x2, 0x71, 0x73, 0x3, 
    0x2, 0x2, 0x2, 0x72, 0x64, 0x3, 0x2, 0x2, 0x2, 0x72, 0x68, 0x3, 0x2, 
    0x2, 0x2, 0x72, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x73, 0xb, 0x3, 0x2, 0x2, 
    0x2, 0x74, 0x75, 0x8, 0x7, 0x1, 0x2, 0x75, 0x81, 0x5, 0x16, 0xc, 0x2, 
    0x76, 0x81, 0x5, 0x18, 0xd, 0x2, 0x77, 0x81, 0x5, 0x20, 0x11, 0x2, 0x78, 
    0x81, 0x5, 0x1a, 0xe, 0x2, 0x79, 0x7a, 0x5, 0x2a, 0x16, 0x2, 0x7a, 0x7b, 
    0x5, 0xc, 0x7, 0x6, 0x7b, 0x81, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x81, 0x5, 
    0x34, 0x1b, 0x2, 0x7d, 0x7e, 0x5, 0x38, 0x1d, 0x2, 0x7e, 0x7f, 0x5, 
    0x20, 0x11, 0x2, 0x7f, 0x81, 0x3, 0x2, 0x2, 0x2, 0x80, 0x74, 0x3, 0x2, 
    0x2, 0x2, 0x80, 0x76, 0x3, 0x2, 0x2, 0x2, 0x80, 0x77, 0x3, 0x2, 0x2, 
    0x2, 0x80, 0x78, 0x3, 0x2, 0x2, 0x2, 0x80, 0x79, 0x3, 0x2, 0x2, 0x2, 
    0x80, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x80, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x81, 
    0x88, 0x3, 0x2, 0x2, 0x2, 0x82, 0x83, 0xc, 0x5, 0x2, 0x2, 0x83, 0x84, 
    0x5, 0x32, 0x1a, 0x2, 0x84, 0x85, 0x5, 0xc, 0x7, 0x6, 0x85, 0x87, 0x3, 
    0x2, 0x2, 0x2, 0x86, 0x82, 0x3, 0x2, 0x2, 0x2, 0x87, 0x8a, 0x3, 0x2, 
    0x2, 0x2, 0x88, 0x86, 0x3, 0x2, 0x2, 0x2, 0x88, 0x89, 0x3, 0x2, 0x2, 
    0x2, 0x89, 0xd, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x88, 0x3, 0x2, 0x2, 0x2, 
    0x8b, 0x8c, 0x5, 0x20, 0x11, 0x2, 0x8c, 0x8d, 0x5, 0x1a, 0xe, 0x2, 0x8d, 
    0xf, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x91, 0x5, 0x12, 0xa, 0x2, 0x8f, 0x91, 
    0x5, 0x14, 0xb, 0x2, 0x90, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x90, 0x8f, 0x3, 
    0x2, 0x2, 0x2, 0x91, 0x11, 0x3, 0x2, 0x2, 0x2, 0x92, 0x93, 0x5, 0x24, 
    0x13, 0x2, 0x93, 0x94, 0x5, 0x14, 0xb, 0x2, 0x94, 0x95, 0x5, 0x6, 0x4, 
    0x2, 0x95, 0x13, 0x3, 0x2, 0x2, 0x2, 0x96, 0x97, 0x5, 0x24, 0x13, 0x2, 
    0x97, 0x98, 0x5, 0x1a, 0xe, 0x2, 0x98, 0x15, 0x3, 0x2, 0x2, 0x2, 0x99, 
    0x9a, 0x5, 0x24, 0x13, 0x2, 0x9a, 0x9d, 0x5, 0x2e, 0x18, 0x2, 0x9b, 
    0x9e, 0x5, 0x1e, 0x10, 0x2, 0x9c, 0x9e, 0x5, 0xc, 0x7, 0x2, 0x9d, 0x9b, 
    0x3, 0x2, 0x2, 0x2, 0x9d, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x17, 0x3, 
    0x2, 0x2, 0x2, 0x9f, 0xa0, 0x5, 0x24, 0x13, 0x2, 0xa0, 0xa1, 0x5, 0x16, 
    0xc, 0x2, 0xa1, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa3, 0x5, 0x24, 0x13, 
    0x2, 0xa3, 0xa4, 0x5, 0x20, 0x11, 0x2, 0xa4, 0xa6, 0x3, 0x2, 0x2, 0x2, 
    0xa5, 0x9f, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xa6, 
    0x19, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xaa, 0x7, 0x38, 0x2, 0x2, 0xa8, 0xab, 
    0x5, 0xc, 0x7, 0x2, 0xa9, 0xab, 0xa, 0x3, 0x2, 0x2, 0xaa, 0xa8, 0x3, 
    0x2, 0x2, 0x2, 0xaa, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xab, 0x3, 0x2, 
    0x2, 0x2, 0xab, 0xac, 0x3, 0x2, 0x2, 0x2, 0xac, 0xad, 0x7, 0x39, 0x2, 
    0x2, 0xad, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xae, 0xaf, 0x5, 0x24, 0x13, 0x2, 
    0xaf, 0xb0, 0x7, 0x35, 0x2, 0x2, 0xb0, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xb1, 
    0xae, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb4, 
    0x3, 0x2, 0x2, 0x2, 0xb3, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb6, 0x3, 
    0x2, 0x2, 0x2, 0xb5, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb7, 0x7, 0x3f, 
    0x2, 0x2, 0xb7, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xbc, 0x7, 0x3e, 0x2, 
    0x2, 0xb9, 0xbc, 0x7, 0x3f, 0x2, 0x2, 0xba, 0xbc, 0x5, 0x22, 0x12, 0x2, 
    0xbb, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xbb, 
    0xba, 0x3, 0x2, 0x2, 0x2, 0xbc, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xc2, 
    0x7, 0x3f, 0x2, 0x2, 0xbe, 0xbf, 0x7, 0x35, 0x2, 0x2, 0xbf, 0xc1, 0x7, 
    0x3f, 0x2, 0x2, 0xc0, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xc4, 0x3, 0x2, 
    0x2, 0x2, 0xc2, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc0, 0x3, 0x2, 0x2, 
    0x2, 0xc3, 0x21, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc2, 0x3, 0x2, 0x2, 0x2, 
    0xc5, 0xc6, 0x9, 0x4, 0x2, 0x2, 0xc6, 0x23, 0x3, 0x2, 0x2, 0x2, 0xc7, 
    0xcd, 0x5, 0x38, 0x1d, 0x2, 0xc8, 0xcd, 0x5, 0x20, 0x11, 0x2, 0xc9, 
    0xcd, 0x5, 0x26, 0x14, 0x2, 0xca, 0xcd, 0x7, 0x11, 0x2, 0x2, 0xcb, 0xcd, 
    0x5, 0x28, 0x15, 0x2, 0xcc, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xc8, 0x3, 
    0x2, 0x2, 0x2, 0xcc, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xca, 0x3, 0x2, 
    0x2, 0x2, 0xcc, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xcd, 0x25, 0x3, 0x2, 0x2, 
    0x2, 0xce, 0xcf, 0x9, 0x5, 0x2, 0x2, 0xcf, 0x27, 0x3, 0x2, 0x2, 0x2, 
    0xd0, 0xd1, 0x9, 0x6, 0x2, 0x2, 0xd1, 0x29, 0x3, 0x2, 0x2, 0x2, 0xd2, 
    0xd3, 0x9, 0x7, 0x2, 0x2, 0xd3, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd5, 
    0x9, 0x8, 0x2, 0x2, 0xd5, 0x2d, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd7, 0x9, 
    0x9, 0x2, 0x2, 0xd7, 0x2f, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd9, 0x9, 0xa, 
    0x2, 0x2, 0xd9, 0x31, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdd, 0x5, 0x2c, 0x17, 
    0x2, 0xdb, 0xdd, 0x5, 0x30, 0x19, 0x2, 0xdc, 0xda, 0x3, 0x2, 0x2, 0x2, 
    0xdc, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xdd, 0x33, 0x3, 0x2, 0x2, 0x2, 0xde, 
    0xdf, 0x9, 0x4, 0x2, 0x2, 0xdf, 0x35, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xe1, 
    0x8, 0x1c, 0x1, 0x2, 0xe1, 0xe2, 0x7, 0x38, 0x2, 0x2, 0xe2, 0xe3, 0x5, 
    0x36, 0x1c, 0x2, 0xe3, 0xe4, 0x7, 0x39, 0x2, 0x2, 0xe4, 0xeb, 0x3, 0x2, 
    0x2, 0x2, 0xe5, 0xeb, 0x5, 0x1e, 0x10, 0x2, 0xe6, 0xe7, 0x7, 0x15, 0x2, 
    0x2, 0xe7, 0xeb, 0x5, 0x1e, 0x10, 0x2, 0xe8, 0xe9, 0x9, 0xb, 0x2, 0x2, 
    0xe9, 0xeb, 0x5, 0x1e, 0x10, 0x2, 0xea, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xea, 
    0xe5, 0x3, 0x2, 0x2, 0x2, 0xea, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xea, 0xe8, 
    0x3, 0x2, 0x2, 0x2, 0xeb, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xec, 0xed, 0xc, 
    0x7, 0x2, 0x2, 0xed, 0xee, 0x5, 0x2c, 0x17, 0x2, 0xee, 0xef, 0x5, 0x36, 
    0x1c, 0x8, 0xef, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xec, 0x3, 0x2, 0x2, 
    0x2, 0xf1, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf0, 0x3, 0x2, 0x2, 0x2, 
    0xf2, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf3, 0x37, 0x3, 0x2, 0x2, 0x2, 0xf4, 
    0xf2, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf6, 0x8, 0x1d, 0x1, 0x2, 0xf6, 0xf7, 
    0x9, 0xc, 0x2, 0x2, 0xf7, 0xfc, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xf9, 0xc, 
    0x3, 0x2, 0x2, 0xf9, 0xfb, 0x5, 0x3a, 0x1e, 0x2, 0xfa, 0xf8, 0x3, 0x2, 
    0x2, 0x2, 0xfb, 0xfe, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xfa, 0x3, 0x2, 0x2, 
    0x2, 0xfc, 0xfd, 0x3, 0x2, 0x2, 0x2, 0xfd, 0x39, 0x3, 0x2, 0x2, 0x2, 
    0xfe, 0xfc, 0x3, 0x2, 0x2, 0x2, 0xff, 0x101, 0x7, 0x36, 0x2, 0x2, 0x100, 
    0x102, 0x5, 0x1e, 0x10, 0x2, 0x101, 0x100, 0x3, 0x2, 0x2, 0x2, 0x101, 
    0x102, 0x3, 0x2, 0x2, 0x2, 0x102, 0x103, 0x3, 0x2, 0x2, 0x2, 0x103, 
    0x104, 0x7, 0x37, 0x2, 0x2, 0x104, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x105, 
    0x106, 0x9, 0xd, 0x2, 0x2, 0x106, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x107, 0x108, 
    0x7, 0x40, 0x2, 0x2, 0x108, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x19, 0x43, 0x4e, 
    0x50, 0x59, 0x5b, 0x5e, 0x68, 0x72, 0x80, 0x88, 0x90, 0x9d, 0xa5, 0xaa, 
    0xb3, 0xbb, 0xc2, 0xcc, 0xdc, 0xea, 0xf2, 0xfc, 0x101, 
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
