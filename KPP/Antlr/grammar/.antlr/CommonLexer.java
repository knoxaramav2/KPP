// Generated from c:\Users\MMI\Documents\tmpdev\KPP\KPP\Antlr\grammar\Common.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class CommonLexer extends Lexer {
	static { RuntimeMetaData.checkVersion("4.7.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, S_SET=3, S_SUM_SET=4, S_DIF_SET=5, S_MULT_SET=6, S_INC_OR_SET=7, 
		S_EXC_OR_SET=8, S_LSHIFT_SET=9, S_RSHIFT_SET=10, L_NOT=11, L_AND=12, L_OR=13, 
		L_NAND=14, L_NOR=15, L_XOR=16, L_XNOR=17, B_AND=18, B_OR=19, B_XOR=20, 
		B_INVERT=21, B_LSHIFT=22, B_RSHIFT=23, L_EQUALS=24, L_NOT_EQUALS=25, L_GREATER_EQU=26, 
		L_LESS_EQU=27, L_GREATER=28, L_LESS=29, M_ADD=30, M_SUB=31, M_MULT=32, 
		M_DIV=33, M_POW=34, C_OBK=35, C_CBK=36, C_OBC=37, C_CBC=38, C_OPR=39, 
		C_CPR=40, C_OC=41, C_CC=42, T_STATEMENT=43, INTEGER=44, LINE_COMMENT=45, 
		BLOCK_COMMENT=46, DECIMAL=47, IDENTIFIER=48, WS=49;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	public static final String[] ruleNames = {
		"T__0", "T__1", "S_SET", "S_SUM_SET", "S_DIF_SET", "S_MULT_SET", "S_INC_OR_SET", 
		"S_EXC_OR_SET", "S_LSHIFT_SET", "S_RSHIFT_SET", "L_NOT", "L_AND", "L_OR", 
		"L_NAND", "L_NOR", "L_XOR", "L_XNOR", "B_AND", "B_OR", "B_XOR", "B_INVERT", 
		"B_LSHIFT", "B_RSHIFT", "L_EQUALS", "L_NOT_EQUALS", "L_GREATER_EQU", "L_LESS_EQU", 
		"L_GREATER", "L_LESS", "M_ADD", "M_SUB", "M_MULT", "M_DIV", "M_POW", "C_OBK", 
		"C_CBK", "C_OBC", "C_CBC", "C_OPR", "C_CPR", "C_OC", "C_CC", "ALPHA", 
		"T_STATEMENT", "INTEGER", "LINE_COMMENT", "BLOCK_COMMENT", "DECIMAL", 
		"IDENTIFIER", "WS"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "'('", "')'", "'='", "'+='", "'-='", "'*='", "'|='", "'^='", "'<<='", 
		"'>>='", "'!'", "'&&'", "'||'", "'!&'", "'!|'", "'^|'", "'|^'", "'&'", 
		"'|'", "'^'", "'~'", "'<<'", "'>>'", "'=='", "'!='", "'>='", "'<='", null, 
		null, "'+'", "'-'", "'*'", "'/'", "'^^'", null, null, null, null, null, 
		null, null, null, "';'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, null, null, "S_SET", "S_SUM_SET", "S_DIF_SET", "S_MULT_SET", "S_INC_OR_SET", 
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


	public CommonLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "Common.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getChannelNames() { return channelNames; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\63\u0113\b\1\4\2"+
		"\t\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4"+
		"\13\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22"+
		"\t\22\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31"+
		"\t\31\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t"+
		" \4!\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t"+
		"+\4,\t,\4-\t-\4.\t.\4/\t/\4\60\t\60\4\61\t\61\4\62\t\62\4\63\t\63\3\2"+
		"\3\2\3\3\3\3\3\4\3\4\3\5\3\5\3\5\3\6\3\6\3\6\3\7\3\7\3\7\3\b\3\b\3\b\3"+
		"\t\3\t\3\t\3\n\3\n\3\n\3\n\3\13\3\13\3\13\3\13\3\f\3\f\3\r\3\r\3\r\3\16"+
		"\3\16\3\16\3\17\3\17\3\17\3\20\3\20\3\20\3\21\3\21\3\21\3\22\3\22\3\22"+
		"\3\23\3\23\3\24\3\24\3\25\3\25\3\26\3\26\3\27\3\27\3\27\3\30\3\30\3\30"+
		"\3\31\3\31\3\31\3\32\3\32\3\32\3\33\3\33\3\33\3\34\3\34\3\34\3\35\3\35"+
		"\3\36\3\36\3\37\3\37\3 \3 \3!\3!\3\"\3\"\3#\3#\3#\3$\3$\3%\3%\3&\3&\3"+
		"\'\3\'\3(\3(\3)\3)\3*\3*\3+\3+\3,\3,\3-\3-\3.\5.\u00d7\n.\3.\6.\u00da"+
		"\n.\r.\16.\u00db\3/\3/\7/\u00e0\n/\f/\16/\u00e3\13/\3/\3/\3\60\3\60\3"+
		"\60\3\60\7\60\u00eb\n\60\f\60\16\60\u00ee\13\60\3\60\3\60\3\60\3\60\3"+
		"\60\3\61\5\61\u00f6\n\61\3\61\6\61\u00f9\n\61\r\61\16\61\u00fa\3\61\3"+
		"\61\5\61\u00ff\n\61\3\62\6\62\u0102\n\62\r\62\16\62\u0103\3\62\6\62\u0107"+
		"\n\62\r\62\16\62\u0108\5\62\u010b\n\62\3\63\6\63\u010e\n\63\r\63\16\63"+
		"\u010f\3\63\3\63\3\u00ec\2\64\3\3\5\4\7\5\t\6\13\7\r\b\17\t\21\n\23\13"+
		"\25\f\27\r\31\16\33\17\35\20\37\21!\22#\23%\24\'\25)\26+\27-\30/\31\61"+
		"\32\63\33\65\34\67\359\36;\37= ?!A\"C#E$G%I&K\'M(O)Q*S+U,W\2Y-[.]/_\60"+
		"a\61c\62e\63\3\2\6\5\2C\\aac|\3\2\62;\4\2\f\f\17\17\5\2\13\f\16\17\"\""+
		"\2\u011c\2\3\3\2\2\2\2\5\3\2\2\2\2\7\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2"+
		"\2\r\3\2\2\2\2\17\3\2\2\2\2\21\3\2\2\2\2\23\3\2\2\2\2\25\3\2\2\2\2\27"+
		"\3\2\2\2\2\31\3\2\2\2\2\33\3\2\2\2\2\35\3\2\2\2\2\37\3\2\2\2\2!\3\2\2"+
		"\2\2#\3\2\2\2\2%\3\2\2\2\2\'\3\2\2\2\2)\3\2\2\2\2+\3\2\2\2\2-\3\2\2\2"+
		"\2/\3\2\2\2\2\61\3\2\2\2\2\63\3\2\2\2\2\65\3\2\2\2\2\67\3\2\2\2\29\3\2"+
		"\2\2\2;\3\2\2\2\2=\3\2\2\2\2?\3\2\2\2\2A\3\2\2\2\2C\3\2\2\2\2E\3\2\2\2"+
		"\2G\3\2\2\2\2I\3\2\2\2\2K\3\2\2\2\2M\3\2\2\2\2O\3\2\2\2\2Q\3\2\2\2\2S"+
		"\3\2\2\2\2U\3\2\2\2\2Y\3\2\2\2\2[\3\2\2\2\2]\3\2\2\2\2_\3\2\2\2\2a\3\2"+
		"\2\2\2c\3\2\2\2\2e\3\2\2\2\3g\3\2\2\2\5i\3\2\2\2\7k\3\2\2\2\tm\3\2\2\2"+
		"\13p\3\2\2\2\rs\3\2\2\2\17v\3\2\2\2\21y\3\2\2\2\23|\3\2\2\2\25\u0080\3"+
		"\2\2\2\27\u0084\3\2\2\2\31\u0086\3\2\2\2\33\u0089\3\2\2\2\35\u008c\3\2"+
		"\2\2\37\u008f\3\2\2\2!\u0092\3\2\2\2#\u0095\3\2\2\2%\u0098\3\2\2\2\'\u009a"+
		"\3\2\2\2)\u009c\3\2\2\2+\u009e\3\2\2\2-\u00a0\3\2\2\2/\u00a3\3\2\2\2\61"+
		"\u00a6\3\2\2\2\63\u00a9\3\2\2\2\65\u00ac\3\2\2\2\67\u00af\3\2\2\29\u00b2"+
		"\3\2\2\2;\u00b4\3\2\2\2=\u00b6\3\2\2\2?\u00b8\3\2\2\2A\u00ba\3\2\2\2C"+
		"\u00bc\3\2\2\2E\u00be\3\2\2\2G\u00c1\3\2\2\2I\u00c3\3\2\2\2K\u00c5\3\2"+
		"\2\2M\u00c7\3\2\2\2O\u00c9\3\2\2\2Q\u00cb\3\2\2\2S\u00cd\3\2\2\2U\u00cf"+
		"\3\2\2\2W\u00d1\3\2\2\2Y\u00d3\3\2\2\2[\u00d6\3\2\2\2]\u00dd\3\2\2\2_"+
		"\u00e6\3\2\2\2a\u00f5\3\2\2\2c\u0101\3\2\2\2e\u010d\3\2\2\2gh\7*\2\2h"+
		"\4\3\2\2\2ij\7+\2\2j\6\3\2\2\2kl\7?\2\2l\b\3\2\2\2mn\7-\2\2no\7?\2\2o"+
		"\n\3\2\2\2pq\7/\2\2qr\7?\2\2r\f\3\2\2\2st\7,\2\2tu\7?\2\2u\16\3\2\2\2"+
		"vw\7~\2\2wx\7?\2\2x\20\3\2\2\2yz\7`\2\2z{\7?\2\2{\22\3\2\2\2|}\7>\2\2"+
		"}~\7>\2\2~\177\7?\2\2\177\24\3\2\2\2\u0080\u0081\7@\2\2\u0081\u0082\7"+
		"@\2\2\u0082\u0083\7?\2\2\u0083\26\3\2\2\2\u0084\u0085\7#\2\2\u0085\30"+
		"\3\2\2\2\u0086\u0087\7(\2\2\u0087\u0088\7(\2\2\u0088\32\3\2\2\2\u0089"+
		"\u008a\7~\2\2\u008a\u008b\7~\2\2\u008b\34\3\2\2\2\u008c\u008d\7#\2\2\u008d"+
		"\u008e\7(\2\2\u008e\36\3\2\2\2\u008f\u0090\7#\2\2\u0090\u0091\7~\2\2\u0091"+
		" \3\2\2\2\u0092\u0093\7`\2\2\u0093\u0094\7~\2\2\u0094\"\3\2\2\2\u0095"+
		"\u0096\7~\2\2\u0096\u0097\7`\2\2\u0097$\3\2\2\2\u0098\u0099\7(\2\2\u0099"+
		"&\3\2\2\2\u009a\u009b\7~\2\2\u009b(\3\2\2\2\u009c\u009d\7`\2\2\u009d*"+
		"\3\2\2\2\u009e\u009f\7\u0080\2\2\u009f,\3\2\2\2\u00a0\u00a1\7>\2\2\u00a1"+
		"\u00a2\7>\2\2\u00a2.\3\2\2\2\u00a3\u00a4\7@\2\2\u00a4\u00a5\7@\2\2\u00a5"+
		"\60\3\2\2\2\u00a6\u00a7\7?\2\2\u00a7\u00a8\7?\2\2\u00a8\62\3\2\2\2\u00a9"+
		"\u00aa\7#\2\2\u00aa\u00ab\7?\2\2\u00ab\64\3\2\2\2\u00ac\u00ad\7@\2\2\u00ad"+
		"\u00ae\7?\2\2\u00ae\66\3\2\2\2\u00af\u00b0\7>\2\2\u00b0\u00b1\7?\2\2\u00b1"+
		"8\3\2\2\2\u00b2\u00b3\7@\2\2\u00b3:\3\2\2\2\u00b4\u00b5\7>\2\2\u00b5<"+
		"\3\2\2\2\u00b6\u00b7\7-\2\2\u00b7>\3\2\2\2\u00b8\u00b9\7/\2\2\u00b9@\3"+
		"\2\2\2\u00ba\u00bb\7,\2\2\u00bbB\3\2\2\2\u00bc\u00bd\7\61\2\2\u00bdD\3"+
		"\2\2\2\u00be\u00bf\7`\2\2\u00bf\u00c0\7`\2\2\u00c0F\3\2\2\2\u00c1\u00c2"+
		"\7}\2\2\u00c2H\3\2\2\2\u00c3\u00c4\7\177\2\2\u00c4J\3\2\2\2\u00c5\u00c6"+
		"\7}\2\2\u00c6L\3\2\2\2\u00c7\u00c8\7\177\2\2\u00c8N\3\2\2\2\u00c9\u00ca"+
		"\7}\2\2\u00caP\3\2\2\2\u00cb\u00cc\7\177\2\2\u00ccR\3\2\2\2\u00cd\u00ce"+
		"\7>\2\2\u00ceT\3\2\2\2\u00cf\u00d0\7@\2\2\u00d0V\3\2\2\2\u00d1\u00d2\t"+
		"\2\2\2\u00d2X\3\2\2\2\u00d3\u00d4\7=\2\2\u00d4Z\3\2\2\2\u00d5\u00d7\7"+
		"/\2\2\u00d6\u00d5\3\2\2\2\u00d6\u00d7\3\2\2\2\u00d7\u00d9\3\2\2\2\u00d8"+
		"\u00da\t\3\2\2\u00d9\u00d8\3\2\2\2\u00da\u00db\3\2\2\2\u00db\u00d9\3\2"+
		"\2\2\u00db\u00dc\3\2\2\2\u00dc\\\3\2\2\2\u00dd\u00e1\7%\2\2\u00de\u00e0"+
		"\n\4\2\2\u00df\u00de\3\2\2\2\u00e0\u00e3\3\2\2\2\u00e1\u00df\3\2\2\2\u00e1"+
		"\u00e2\3\2\2\2\u00e2\u00e4\3\2\2\2\u00e3\u00e1\3\2\2\2\u00e4\u00e5\b/"+
		"\2\2\u00e5^\3\2\2\2\u00e6\u00e7\7%\2\2\u00e7\u00e8\7,\2\2\u00e8\u00ec"+
		"\3\2\2\2\u00e9\u00eb\13\2\2\2\u00ea\u00e9\3\2\2\2\u00eb\u00ee\3\2\2\2"+
		"\u00ec\u00ed\3\2\2\2\u00ec\u00ea\3\2\2\2\u00ed\u00ef\3\2\2\2\u00ee\u00ec"+
		"\3\2\2\2\u00ef\u00f0\7,\2\2\u00f0\u00f1\7%\2\2\u00f1\u00f2\3\2\2\2\u00f2"+
		"\u00f3\b\60\2\2\u00f3`\3\2\2\2\u00f4\u00f6\7/\2\2\u00f5\u00f4\3\2\2\2"+
		"\u00f5\u00f6\3\2\2\2\u00f6\u00f8\3\2\2\2\u00f7\u00f9\t\3\2\2\u00f8\u00f7"+
		"\3\2\2\2\u00f9\u00fa\3\2\2\2\u00fa\u00f8\3\2\2\2\u00fa\u00fb\3\2\2\2\u00fb"+
		"\u00fe\3\2\2\2\u00fc\u00fd\7\60\2\2\u00fd\u00ff\t\3\2\2\u00fe\u00fc\3"+
		"\2\2\2\u00fe\u00ff\3\2\2\2\u00ffb\3\2\2\2\u0100\u0102\5W,\2\u0101\u0100"+
		"\3\2\2\2\u0102\u0103\3\2\2\2\u0103\u0101\3\2\2\2\u0103\u0104\3\2\2\2\u0104"+
		"\u010a\3\2\2\2\u0105\u0107\5a\61\2\u0106\u0105\3\2\2\2\u0107\u0108\3\2"+
		"\2\2\u0108\u0106\3\2\2\2\u0108\u0109\3\2\2\2\u0109\u010b\3\2\2\2\u010a"+
		"\u0106\3\2\2\2\u010a\u010b\3\2\2\2\u010bd\3\2\2\2\u010c\u010e\t\5\2\2"+
		"\u010d\u010c\3\2\2\2\u010e\u010f\3\2\2\2\u010f\u010d\3\2\2\2\u010f\u0110"+
		"\3\2\2\2\u0110\u0111\3\2\2\2\u0111\u0112\b\63\3\2\u0112f\3\2\2\2\16\2"+
		"\u00d6\u00db\u00e1\u00ec\u00f5\u00fa\u00fe\u0103\u0108\u010a\u010f\4\2"+
		"\3\2\b\2\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}