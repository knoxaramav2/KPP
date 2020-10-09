
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
    setState(19); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(18);
      section();
      setState(21); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == KPPParser::T_NAMESPACE);
    setState(23);
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

KPPParser::NamespaceContext* KPPParser::SectionContext::namespace() {
  return getRuleContext<KPPParser::NamespaceContext>(0);
}

KPPParser::Def_fieldContext* KPPParser::SectionContext::def_field() {
  return getRuleContext<KPPParser::Def_fieldContext>(0);
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
    enterOuterAlt(_localctx, 1);
    setState(25);
    namespace();
    setState(26);
    def_field();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamespaceContext ------------------------------------------------------------------

KPPParser::NamespaceContext::NamespaceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KPPParser::NamespaceContext::T_NAMESPACE() {
  return getToken(KPPParser::T_NAMESPACE, 0);
}


size_t KPPParser::NamespaceContext::getRuleIndex() const {
  return KPPParser::RuleNamespace;
}

void KPPParser::NamespaceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamespace(this);
}

void KPPParser::NamespaceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamespace(this);
}

KPPParser::NamespaceContext* KPPParser::namespace() {
  NamespaceContext *_localctx = _tracker.createInstance<NamespaceContext>(_ctx, getState());
  enterRule(_localctx, 4, KPPParser::RuleNamespace);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(28);
    match(KPPParser::T_NAMESPACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Def_fieldContext ------------------------------------------------------------------

KPPParser::Def_fieldContext::Def_fieldContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KPPParser::S_classContext* KPPParser::Def_fieldContext::s_class() {
  return getRuleContext<KPPParser::S_classContext>(0);
}

KPPParser::S_structContext* KPPParser::Def_fieldContext::s_struct() {
  return getRuleContext<KPPParser::S_structContext>(0);
}

KPPParser::S_funcContext* KPPParser::Def_fieldContext::s_func() {
  return getRuleContext<KPPParser::S_funcContext>(0);
}

KPPParser::S_globalContext* KPPParser::Def_fieldContext::s_global() {
  return getRuleContext<KPPParser::S_globalContext>(0);
}

KPPParser::S_sharedContext* KPPParser::Def_fieldContext::s_shared() {
  return getRuleContext<KPPParser::S_sharedContext>(0);
}


size_t KPPParser::Def_fieldContext::getRuleIndex() const {
  return KPPParser::RuleDef_field;
}

void KPPParser::Def_fieldContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDef_field(this);
}

void KPPParser::Def_fieldContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDef_field(this);
}

KPPParser::Def_fieldContext* KPPParser::def_field() {
  Def_fieldContext *_localctx = _tracker.createInstance<Def_fieldContext>(_ctx, getState());
  enterRule(_localctx, 6, KPPParser::RuleDef_field);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(35);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(30);
      s_class();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(31);
      s_struct();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(32);
      s_func();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(33);
      s_global();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(34);
      s_shared();
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

//----------------- S_classContext ------------------------------------------------------------------

KPPParser::S_classContext::S_classContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KPPParser::S_classContext::T_CLASS() {
  return getToken(KPPParser::T_CLASS, 0);
}

tree::TerminalNode* KPPParser::S_classContext::IDENTIFIER() {
  return getToken(KPPParser::IDENTIFIER, 0);
}


size_t KPPParser::S_classContext::getRuleIndex() const {
  return KPPParser::RuleS_class;
}

void KPPParser::S_classContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterS_class(this);
}

void KPPParser::S_classContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitS_class(this);
}

KPPParser::S_classContext* KPPParser::s_class() {
  S_classContext *_localctx = _tracker.createInstance<S_classContext>(_ctx, getState());
  enterRule(_localctx, 8, KPPParser::RuleS_class);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(37);
    match(KPPParser::T_CLASS);
    setState(38);
    match(KPPParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- S_structContext ------------------------------------------------------------------

KPPParser::S_structContext::S_structContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t KPPParser::S_structContext::getRuleIndex() const {
  return KPPParser::RuleS_struct;
}

void KPPParser::S_structContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterS_struct(this);
}

void KPPParser::S_structContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitS_struct(this);
}

KPPParser::S_structContext* KPPParser::s_struct() {
  S_structContext *_localctx = _tracker.createInstance<S_structContext>(_ctx, getState());
  enterRule(_localctx, 10, KPPParser::RuleS_struct);

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

//----------------- S_funcContext ------------------------------------------------------------------

KPPParser::S_funcContext::S_funcContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t KPPParser::S_funcContext::getRuleIndex() const {
  return KPPParser::RuleS_func;
}

void KPPParser::S_funcContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterS_func(this);
}

void KPPParser::S_funcContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitS_func(this);
}

KPPParser::S_funcContext* KPPParser::s_func() {
  S_funcContext *_localctx = _tracker.createInstance<S_funcContext>(_ctx, getState());
  enterRule(_localctx, 12, KPPParser::RuleS_func);

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

//----------------- S_globalContext ------------------------------------------------------------------

KPPParser::S_globalContext::S_globalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t KPPParser::S_globalContext::getRuleIndex() const {
  return KPPParser::RuleS_global;
}

void KPPParser::S_globalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterS_global(this);
}

void KPPParser::S_globalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitS_global(this);
}

KPPParser::S_globalContext* KPPParser::s_global() {
  S_globalContext *_localctx = _tracker.createInstance<S_globalContext>(_ctx, getState());
  enterRule(_localctx, 14, KPPParser::RuleS_global);

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

//----------------- S_sharedContext ------------------------------------------------------------------

KPPParser::S_sharedContext::S_sharedContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t KPPParser::S_sharedContext::getRuleIndex() const {
  return KPPParser::RuleS_shared;
}

void KPPParser::S_sharedContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterS_shared(this);
}

void KPPParser::S_sharedContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KPPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitS_shared(this);
}

KPPParser::S_sharedContext* KPPParser::s_shared() {
  S_sharedContext *_localctx = _tracker.createInstance<S_sharedContext>(_ctx, getState());
  enterRule(_localctx, 16, KPPParser::RuleS_shared);

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

// Static vars and initialization.
std::vector<dfa::DFA> KPPParser::_decisionToDFA;
atn::PredictionContextCache KPPParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN KPPParser::_atn;
std::vector<uint16_t> KPPParser::_serializedATN;

std::vector<std::string> KPPParser::_ruleNames = {
  "kpp", "section", "namespace", "def_field", "s_class", "s_struct", "s_func", 
  "s_global", "s_shared"
};

std::vector<std::string> KPPParser::_literalNames = {
  "", "'>'", "'<'", "'=='", "'>='", "'<='", "'='", "'+'", "'-'", "'*'", 
  "'/'", "'**'", "'%'", "'+='", "'-='", "'*='", "'/='", "'++'", "'--'", 
  "'&&'", "'||'", "'!&'", "'!|'", "'^|'", "'^!|'", "'!'", "'&'", "'|'", 
  "'~'", "'<<'", "'>>'", "'if'", "'else'", "'while'", "'for'", "'goto'", 
  "'break'", "'skip'", "'['", "']'", "'('", "')'", "'{'", "'}'", "", "", 
  "", "", "", "';'"
};

std::vector<std::string> KPPParser::_symbolicNames = {
  "", "CM_GTR", "CM_LSS", "CM_EQU", "CM_GTR_EQU", "CM_LSS_EQU", "A_SET", 
  "A_ADD", "A_SUBTRACT", "A_MULTIPLY", "A_DIVIDE", "A_EXPONENT", "A_MODULO", 
  "A_SET_SUM", "A_SET_DIFFERENCE", "A_SET_PRODUCT", "A_SET_QUOTIENT", "A_INCREMENT", 
  "A_DECRIMENT", "L_AND", "L_OR", "L_NAND", "L_NOR", "L_XOR", "L_XNOR", 
  "L_NOT", "BL_AND", "BL_OR", "BL_INV", "BL_LEFT", "BL_RIGHT", "C_IF", "C_ELSE", 
  "C_WHILE", "C_FOR", "C_GOTO", "C_BREAK", "C_SKIP", "L_BRACKET", "R_BRACKET", 
  "L_PARANTH", "R_PARANTH", "L_BRACE", "R_BRACE", "LINE_COMMENT", "BLOCK_COMMENT", 
  "DECIMAL", "INTEGER", "IDENTIFIER", "SEMI", "WS", "T_NAMESPACE", "T_CLASS"
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
    0x3, 0x36, 0x33, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x3, 0x2, 0x6, 
    0x2, 0x16, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0x17, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x26, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x2, 0x2, 0xb, 0x2, 0x4, 0x6, 0x8, 0xa, 
    0xc, 0xe, 0x10, 0x12, 0x2, 0x2, 0x2, 0x2e, 0x2, 0x15, 0x3, 0x2, 0x2, 
    0x2, 0x4, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x6, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x8, 
    0x25, 0x3, 0x2, 0x2, 0x2, 0xa, 0x27, 0x3, 0x2, 0x2, 0x2, 0xc, 0x2a, 
    0x3, 0x2, 0x2, 0x2, 0xe, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x10, 0x2e, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0x30, 0x3, 0x2, 0x2, 0x2, 0x14, 0x16, 0x5, 0x4, 
    0x3, 0x2, 0x15, 0x14, 0x3, 0x2, 0x2, 0x2, 0x16, 0x17, 0x3, 0x2, 0x2, 
    0x2, 0x17, 0x15, 0x3, 0x2, 0x2, 0x2, 0x17, 0x18, 0x3, 0x2, 0x2, 0x2, 
    0x18, 0x19, 0x3, 0x2, 0x2, 0x2, 0x19, 0x1a, 0x7, 0x2, 0x2, 0x3, 0x1a, 
    0x3, 0x3, 0x2, 0x2, 0x2, 0x1b, 0x1c, 0x5, 0x6, 0x4, 0x2, 0x1c, 0x1d, 
    0x5, 0x8, 0x5, 0x2, 0x1d, 0x5, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x1f, 0x7, 
    0x35, 0x2, 0x2, 0x1f, 0x7, 0x3, 0x2, 0x2, 0x2, 0x20, 0x26, 0x5, 0xa, 
    0x6, 0x2, 0x21, 0x26, 0x5, 0xc, 0x7, 0x2, 0x22, 0x26, 0x5, 0xe, 0x8, 
    0x2, 0x23, 0x26, 0x5, 0x10, 0x9, 0x2, 0x24, 0x26, 0x5, 0x12, 0xa, 0x2, 
    0x25, 0x20, 0x3, 0x2, 0x2, 0x2, 0x25, 0x21, 0x3, 0x2, 0x2, 0x2, 0x25, 
    0x22, 0x3, 0x2, 0x2, 0x2, 0x25, 0x23, 0x3, 0x2, 0x2, 0x2, 0x25, 0x24, 
    0x3, 0x2, 0x2, 0x2, 0x26, 0x9, 0x3, 0x2, 0x2, 0x2, 0x27, 0x28, 0x7, 
    0x36, 0x2, 0x2, 0x28, 0x29, 0x7, 0x32, 0x2, 0x2, 0x29, 0xb, 0x3, 0x2, 
    0x2, 0x2, 0x2a, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2b, 0xd, 0x3, 0x2, 0x2, 
    0x2, 0x2c, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x2d, 0xf, 0x3, 0x2, 0x2, 0x2, 
    0x2e, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x11, 0x3, 0x2, 0x2, 0x2, 0x30, 
    0x31, 0x3, 0x2, 0x2, 0x2, 0x31, 0x13, 0x3, 0x2, 0x2, 0x2, 0x4, 0x17, 
    0x25, 
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
