// Generated from c:\Users\MMI\Documents\tmpdev\KPP\KPP\Antlr\grammar\Common.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class CommonParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.7.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		S_SET=1, S_SUM_SET=2, S_DIF_SET=3, S_MULT_SET=4, S_INC_OR_SET=5, S_EXC_OR_SET=6, 
		S_LSHIFT_SET=7, S_RSHIFT_SET=8, L_NOT=9, L_AND=10, L_OR=11, L_NAND=12, 
		L_NOR=13, L_XOR=14, L_XNOR=15, B_AND=16, B_OR=17, B_XOR=18, B_INVERT=19, 
		B_LSHIFT=20, B_RSHIFT=21, L_EQUALS=22, L_NOT_EQUALS=23, L_GREATER_EQU=24, 
		L_LESS_EQU=25, L_GREATER=26, L_LESS=27, M_ADD=28, M_SUB=29, M_MULT=30, 
		M_DIV=31, M_POW=32, C_OBK=33, C_CBK=34, C_OBC=35, C_CBC=36, C_OPR=37, 
		C_CPR=38, C_OC=39, C_CC=40, T_STATEMENT=41, INTEGER=42, LINE_COMMENT=43, 
		BLOCK_COMMENT=44, DECIMAL=45, IDENTIFIER=46, WS=47;
	public static final int
		RULE_set_declare = 0, RULE_s_group = 1, RULE_l_group = 2;
	public static final String[] ruleNames = {
		"set_declare", "s_group", "l_group"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "'='", "'+='", "'-='", "'*='", "'|='", "'^='", "'<<='", "'>>='", 
		"'!'", "'&&'", "'||'", "'!&'", "'!|'", "'^|'", "'|^'", "'&'", "'|'", "'^'", 
		"'~'", "'<<'", "'>>'", "'=='", "'!='", "'>='", "'<='", null, null, "'+'", 
		"'-'", "'*'", "'/'", "'^^'", null, null, null, null, null, null, null, 
		null, "';'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, "S_SET", "S_SUM_SET", "S_DIF_SET", "S_MULT_SET", "S_INC_OR_SET", 
		"S_EXC_OR_SET", "S_LSHIFT_SET", "S_RSHIFT_SET", "L_NOT", "L_AND", "L_OR", 
		"L_NAND", "L_NOR", "L_XOR", "L_XNOR", "B_AND", "B_OR", "B_XOR", "B_INVERT", 
		"B_LSHIFT", "B_RSHIFT", "L_EQUALS", "L_NOT_EQUALS", "L_GREATER_EQU", "L_LESS_EQU", 
		"L_GREATER", "L_LESS", "M_ADD", "M_SUB", "M_MULT", "M_DIV", "M_POW", "C_OBK", 
		"C_CBK", "C_OBC", "C_CBC", "C_OPR", "C_CPR", "C_OC", "C_CC", "T_STATEMENT", 
		"INTEGER", "LINE_COMMENT", "BLOCK_COMMENT", "DECIMAL", "IDENTIFIER", "WS"
	};
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "Common.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public CommonParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}
	public static class Set_declareContext extends ParserRuleContext {
		public List<TerminalNode> IDENTIFIER() { return getTokens(CommonParser.IDENTIFIER); }
		public TerminalNode IDENTIFIER(int i) {
			return getToken(CommonParser.IDENTIFIER, i);
		}
		public S_groupContext s_group() {
			return getRuleContext(S_groupContext.class,0);
		}
		public Set_declareContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_set_declare; }
	}

	public final Set_declareContext set_declare() throws RecognitionException {
		Set_declareContext _localctx = new Set_declareContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_set_declare);
		try {
			setState(11);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,0,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(6);
				match(IDENTIFIER);
				setState(7);
				s_group();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(8);
				match(IDENTIFIER);
				setState(9);
				match(IDENTIFIER);
				setState(10);
				s_group();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class S_groupContext extends ParserRuleContext {
		public TerminalNode S_SET() { return getToken(CommonParser.S_SET, 0); }
		public TerminalNode S_SUM_SET() { return getToken(CommonParser.S_SUM_SET, 0); }
		public TerminalNode S_DIF_SET() { return getToken(CommonParser.S_DIF_SET, 0); }
		public TerminalNode S_MULT_SET() { return getToken(CommonParser.S_MULT_SET, 0); }
		public TerminalNode S_INC_OR_SET() { return getToken(CommonParser.S_INC_OR_SET, 0); }
		public TerminalNode S_EXC_OR_SET() { return getToken(CommonParser.S_EXC_OR_SET, 0); }
		public TerminalNode S_LSHIFT_SET() { return getToken(CommonParser.S_LSHIFT_SET, 0); }
		public TerminalNode S_RSHIFT_SET() { return getToken(CommonParser.S_RSHIFT_SET, 0); }
		public S_groupContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_s_group; }
	}

	public final S_groupContext s_group() throws RecognitionException {
		S_groupContext _localctx = new S_groupContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_s_group);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(13);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << S_SET) | (1L << S_SUM_SET) | (1L << S_DIF_SET) | (1L << S_MULT_SET) | (1L << S_INC_OR_SET) | (1L << S_EXC_OR_SET) | (1L << S_LSHIFT_SET) | (1L << S_RSHIFT_SET))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class L_groupContext extends ParserRuleContext {
		public TerminalNode L_NOT() { return getToken(CommonParser.L_NOT, 0); }
		public TerminalNode L_AND() { return getToken(CommonParser.L_AND, 0); }
		public L_groupContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_l_group; }
	}

	public final L_groupContext l_group() throws RecognitionException {
		L_groupContext _localctx = new L_groupContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_l_group);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(15);
			_la = _input.LA(1);
			if ( !(_la==L_NOT || _la==L_AND) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\61\24\4\2\t\2\4\3"+
		"\t\3\4\4\t\4\3\2\3\2\3\2\3\2\3\2\5\2\16\n\2\3\3\3\3\3\4\3\4\3\4\2\2\5"+
		"\2\4\6\2\4\3\2\3\n\3\2\13\f\2\21\2\r\3\2\2\2\4\17\3\2\2\2\6\21\3\2\2\2"+
		"\b\t\7\60\2\2\t\16\5\4\3\2\n\13\7\60\2\2\13\f\7\60\2\2\f\16\5\4\3\2\r"+
		"\b\3\2\2\2\r\n\3\2\2\2\16\3\3\2\2\2\17\20\t\2\2\2\20\5\3\2\2\2\21\22\t"+
		"\3\2\2\22\7\3\2\2\2\3\r";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}