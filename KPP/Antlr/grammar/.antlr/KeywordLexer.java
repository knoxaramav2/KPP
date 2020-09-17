// Generated from c:\Users\MMI\Documents\tmpdev\KPP\KPP\Antlr\grammar\Keyword.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class KeywordLexer extends Lexer {
	static { RuntimeMetaData.checkVersion("4.7.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		M_ENTRY=1, T_INTERFACE=2, T_CLASS=3, C_FOR=4, C_EACH=5, C_WHILE=6, C_CONTINUE=7, 
		C_BREAK=8, C_GOTO=9, C_LABEL=10, A_VIRTUAL=11, A_STATIC=12, A_PRIVATE=13, 
		A_PUBLIC=14, P_GENERIC=15, P_S_INTEGER=16, P_U_INTEGER=17, P_S_FLOAT32=18, 
		P_U_FLOAT32=19, P_S_FLOAT64=20, P_U_FLOAT64=21, P_STRING=22, P_S_CHAR=23, 
		P_U_CHAR=24, P_DAEMON=25, L_TRUE=26, L_FALSE=27;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	public static final String[] ruleNames = {
		"M_ENTRY", "T_INTERFACE", "T_CLASS", "C_FOR", "C_EACH", "C_WHILE", "C_CONTINUE", 
		"C_BREAK", "C_GOTO", "C_LABEL", "A_VIRTUAL", "A_STATIC", "A_PRIVATE", 
		"A_PUBLIC", "P_GENERIC", "P_S_INTEGER", "P_U_INTEGER", "P_S_FLOAT32", 
		"P_U_FLOAT32", "P_S_FLOAT64", "P_U_FLOAT64", "P_STRING", "P_S_CHAR", "P_U_CHAR", 
		"P_DAEMON", "L_TRUE", "L_FALSE"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "'__entry__'", "'interface'", "'class'", "'for'", "'each'", "'while'", 
		"'continue'", "'break'", "'goto'", "'label'", "'/'", "'!'", "'-'", "'+'", 
		"'any'", "'int'", "'uint'", "'float32'", "'ufloat32'", "'float64'", "'ufloat64'", 
		"'string'", "'char'", "'uchar'", "'daemon'", "'true'", "'false'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, "M_ENTRY", "T_INTERFACE", "T_CLASS", "C_FOR", "C_EACH", "C_WHILE", 
		"C_CONTINUE", "C_BREAK", "C_GOTO", "C_LABEL", "A_VIRTUAL", "A_STATIC", 
		"A_PRIVATE", "A_PUBLIC", "P_GENERIC", "P_S_INTEGER", "P_U_INTEGER", "P_S_FLOAT32", 
		"P_U_FLOAT32", "P_S_FLOAT64", "P_U_FLOAT64", "P_STRING", "P_S_CHAR", "P_U_CHAR", 
		"P_DAEMON", "L_TRUE", "L_FALSE"
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


	public KeywordLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "Keyword.g4"; }

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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\35\u00d7\b\1\4\2"+
		"\t\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4"+
		"\13\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22"+
		"\t\22\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31"+
		"\t\31\4\32\t\32\4\33\t\33\4\34\t\34\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3"+
		"\2\3\2\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\4\3\4\3\4\3\4\3\4\3\4"+
		"\3\5\3\5\3\5\3\5\3\6\3\6\3\6\3\6\3\6\3\7\3\7\3\7\3\7\3\7\3\7\3\b\3\b\3"+
		"\b\3\b\3\b\3\b\3\b\3\b\3\b\3\t\3\t\3\t\3\t\3\t\3\t\3\n\3\n\3\n\3\n\3\n"+
		"\3\13\3\13\3\13\3\13\3\13\3\13\3\f\3\f\3\r\3\r\3\16\3\16\3\17\3\17\3\20"+
		"\3\20\3\20\3\20\3\21\3\21\3\21\3\21\3\22\3\22\3\22\3\22\3\22\3\23\3\23"+
		"\3\23\3\23\3\23\3\23\3\23\3\23\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24"+
		"\3\24\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\26\3\26\3\26\3\26\3\26"+
		"\3\26\3\26\3\26\3\26\3\27\3\27\3\27\3\27\3\27\3\27\3\27\3\30\3\30\3\30"+
		"\3\30\3\30\3\31\3\31\3\31\3\31\3\31\3\31\3\32\3\32\3\32\3\32\3\32\3\32"+
		"\3\32\3\33\3\33\3\33\3\33\3\33\3\34\3\34\3\34\3\34\3\34\3\34\2\2\35\3"+
		"\3\5\4\7\5\t\6\13\7\r\b\17\t\21\n\23\13\25\f\27\r\31\16\33\17\35\20\37"+
		"\21!\22#\23%\24\'\25)\26+\27-\30/\31\61\32\63\33\65\34\67\35\3\2\2\2\u00d6"+
		"\2\3\3\2\2\2\2\5\3\2\2\2\2\7\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2"+
		"\2\2\2\17\3\2\2\2\2\21\3\2\2\2\2\23\3\2\2\2\2\25\3\2\2\2\2\27\3\2\2\2"+
		"\2\31\3\2\2\2\2\33\3\2\2\2\2\35\3\2\2\2\2\37\3\2\2\2\2!\3\2\2\2\2#\3\2"+
		"\2\2\2%\3\2\2\2\2\'\3\2\2\2\2)\3\2\2\2\2+\3\2\2\2\2-\3\2\2\2\2/\3\2\2"+
		"\2\2\61\3\2\2\2\2\63\3\2\2\2\2\65\3\2\2\2\2\67\3\2\2\2\39\3\2\2\2\5C\3"+
		"\2\2\2\7M\3\2\2\2\tS\3\2\2\2\13W\3\2\2\2\r\\\3\2\2\2\17b\3\2\2\2\21k\3"+
		"\2\2\2\23q\3\2\2\2\25v\3\2\2\2\27|\3\2\2\2\31~\3\2\2\2\33\u0080\3\2\2"+
		"\2\35\u0082\3\2\2\2\37\u0084\3\2\2\2!\u0088\3\2\2\2#\u008c\3\2\2\2%\u0091"+
		"\3\2\2\2\'\u0099\3\2\2\2)\u00a2\3\2\2\2+\u00aa\3\2\2\2-\u00b3\3\2\2\2"+
		"/\u00ba\3\2\2\2\61\u00bf\3\2\2\2\63\u00c5\3\2\2\2\65\u00cc\3\2\2\2\67"+
		"\u00d1\3\2\2\29:\7a\2\2:;\7a\2\2;<\7g\2\2<=\7p\2\2=>\7v\2\2>?\7t\2\2?"+
		"@\7{\2\2@A\7a\2\2AB\7a\2\2B\4\3\2\2\2CD\7k\2\2DE\7p\2\2EF\7v\2\2FG\7g"+
		"\2\2GH\7t\2\2HI\7h\2\2IJ\7c\2\2JK\7e\2\2KL\7g\2\2L\6\3\2\2\2MN\7e\2\2"+
		"NO\7n\2\2OP\7c\2\2PQ\7u\2\2QR\7u\2\2R\b\3\2\2\2ST\7h\2\2TU\7q\2\2UV\7"+
		"t\2\2V\n\3\2\2\2WX\7g\2\2XY\7c\2\2YZ\7e\2\2Z[\7j\2\2[\f\3\2\2\2\\]\7y"+
		"\2\2]^\7j\2\2^_\7k\2\2_`\7n\2\2`a\7g\2\2a\16\3\2\2\2bc\7e\2\2cd\7q\2\2"+
		"de\7p\2\2ef\7v\2\2fg\7k\2\2gh\7p\2\2hi\7w\2\2ij\7g\2\2j\20\3\2\2\2kl\7"+
		"d\2\2lm\7t\2\2mn\7g\2\2no\7c\2\2op\7m\2\2p\22\3\2\2\2qr\7i\2\2rs\7q\2"+
		"\2st\7v\2\2tu\7q\2\2u\24\3\2\2\2vw\7n\2\2wx\7c\2\2xy\7d\2\2yz\7g\2\2z"+
		"{\7n\2\2{\26\3\2\2\2|}\7\61\2\2}\30\3\2\2\2~\177\7#\2\2\177\32\3\2\2\2"+
		"\u0080\u0081\7/\2\2\u0081\34\3\2\2\2\u0082\u0083\7-\2\2\u0083\36\3\2\2"+
		"\2\u0084\u0085\7c\2\2\u0085\u0086\7p\2\2\u0086\u0087\7{\2\2\u0087 \3\2"+
		"\2\2\u0088\u0089\7k\2\2\u0089\u008a\7p\2\2\u008a\u008b\7v\2\2\u008b\""+
		"\3\2\2\2\u008c\u008d\7w\2\2\u008d\u008e\7k\2\2\u008e\u008f\7p\2\2\u008f"+
		"\u0090\7v\2\2\u0090$\3\2\2\2\u0091\u0092\7h\2\2\u0092\u0093\7n\2\2\u0093"+
		"\u0094\7q\2\2\u0094\u0095\7c\2\2\u0095\u0096\7v\2\2\u0096\u0097\7\65\2"+
		"\2\u0097\u0098\7\64\2\2\u0098&\3\2\2\2\u0099\u009a\7w\2\2\u009a\u009b"+
		"\7h\2\2\u009b\u009c\7n\2\2\u009c\u009d\7q\2\2\u009d\u009e\7c\2\2\u009e"+
		"\u009f\7v\2\2\u009f\u00a0\7\65\2\2\u00a0\u00a1\7\64\2\2\u00a1(\3\2\2\2"+
		"\u00a2\u00a3\7h\2\2\u00a3\u00a4\7n\2\2\u00a4\u00a5\7q\2\2\u00a5\u00a6"+
		"\7c\2\2\u00a6\u00a7\7v\2\2\u00a7\u00a8\78\2\2\u00a8\u00a9\7\66\2\2\u00a9"+
		"*\3\2\2\2\u00aa\u00ab\7w\2\2\u00ab\u00ac\7h\2\2\u00ac\u00ad\7n\2\2\u00ad"+
		"\u00ae\7q\2\2\u00ae\u00af\7c\2\2\u00af\u00b0\7v\2\2\u00b0\u00b1\78\2\2"+
		"\u00b1\u00b2\7\66\2\2\u00b2,\3\2\2\2\u00b3\u00b4\7u\2\2\u00b4\u00b5\7"+
		"v\2\2\u00b5\u00b6\7t\2\2\u00b6\u00b7\7k\2\2\u00b7\u00b8\7p\2\2\u00b8\u00b9"+
		"\7i\2\2\u00b9.\3\2\2\2\u00ba\u00bb\7e\2\2\u00bb\u00bc\7j\2\2\u00bc\u00bd"+
		"\7c\2\2\u00bd\u00be\7t\2\2\u00be\60\3\2\2\2\u00bf\u00c0\7w\2\2\u00c0\u00c1"+
		"\7e\2\2\u00c1\u00c2\7j\2\2\u00c2\u00c3\7c\2\2\u00c3\u00c4\7t\2\2\u00c4"+
		"\62\3\2\2\2\u00c5\u00c6\7f\2\2\u00c6\u00c7\7c\2\2\u00c7\u00c8\7g\2\2\u00c8"+
		"\u00c9\7o\2\2\u00c9\u00ca\7q\2\2\u00ca\u00cb\7p\2\2\u00cb\64\3\2\2\2\u00cc"+
		"\u00cd\7v\2\2\u00cd\u00ce\7t\2\2\u00ce\u00cf\7w\2\2\u00cf\u00d0\7g\2\2"+
		"\u00d0\66\3\2\2\2\u00d1\u00d2\7h\2\2\u00d2\u00d3\7c\2\2\u00d3\u00d4\7"+
		"n\2\2\u00d4\u00d5\7u\2\2\u00d5\u00d6\7g\2\2\u00d68\3\2\2\2\3\2\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}