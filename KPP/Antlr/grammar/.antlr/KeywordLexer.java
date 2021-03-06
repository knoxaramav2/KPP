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
		M_ENTRY=1, T_INTERFACE=2, T_CLASS=3, T_STRUCT=4, C_FOR=5, C_EACH=6, C_WHILE=7, 
		C_CONTINUE=8, C_BREAK=9, C_GOTO=10, C_LABEL=11, A_VIRTUAL=12, A_STATIC=13, 
		A_PRIVATE=14, A_PUBLIC=15, P_GENERIC=16, P_S_INTEGER=17, P_U_INTEGER=18, 
		P_S_FLOAT32=19, P_U_FLOAT32=20, P_S_FLOAT64=21, P_U_FLOAT64=22, P_STRING=23, 
		P_S_CHAR=24, P_U_CHAR=25, P_DAEMON=26, L_TRUE=27, L_FALSE=28;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	public static final String[] ruleNames = {
		"M_ENTRY", "T_INTERFACE", "T_CLASS", "T_STRUCT", "C_FOR", "C_EACH", "C_WHILE", 
		"C_CONTINUE", "C_BREAK", "C_GOTO", "C_LABEL", "A_VIRTUAL", "A_STATIC", 
		"A_PRIVATE", "A_PUBLIC", "P_GENERIC", "P_S_INTEGER", "P_U_INTEGER", "P_S_FLOAT32", 
		"P_U_FLOAT32", "P_S_FLOAT64", "P_U_FLOAT64", "P_STRING", "P_S_CHAR", "P_U_CHAR", 
		"P_DAEMON", "L_TRUE", "L_FALSE"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "'__entry__'", "'interface'", "'class'", "'struct'", "'for'", "'each'", 
		"'while'", "'continue'", "'break'", "'goto'", "'label'", "'/'", "'!'", 
		"'-'", "'+'", "'any'", "'int'", "'uint'", "'float32'", "'ufloat32'", "'float64'", 
		"'ufloat64'", "'string'", "'char'", "'uchar'", "'daemon'", "'true'", "'false'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, "M_ENTRY", "T_INTERFACE", "T_CLASS", "T_STRUCT", "C_FOR", "C_EACH", 
		"C_WHILE", "C_CONTINUE", "C_BREAK", "C_GOTO", "C_LABEL", "A_VIRTUAL", 
		"A_STATIC", "A_PRIVATE", "A_PUBLIC", "P_GENERIC", "P_S_INTEGER", "P_U_INTEGER", 
		"P_S_FLOAT32", "P_U_FLOAT32", "P_S_FLOAT64", "P_U_FLOAT64", "P_STRING", 
		"P_S_CHAR", "P_U_CHAR", "P_DAEMON", "L_TRUE", "L_FALSE"
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\36\u00e0\b\1\4\2"+
		"\t\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4"+
		"\13\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22"+
		"\t\22\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31"+
		"\t\31\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\3\2\3\2\3\2\3\2\3\2\3\2"+
		"\3\2\3\2\3\2\3\2\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\4\3\4\3\4\3"+
		"\4\3\4\3\4\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\6\3\6\3\6\3\6\3\7\3\7\3\7\3\7"+
		"\3\7\3\b\3\b\3\b\3\b\3\b\3\b\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\n\3"+
		"\n\3\n\3\n\3\n\3\n\3\13\3\13\3\13\3\13\3\13\3\f\3\f\3\f\3\f\3\f\3\f\3"+
		"\r\3\r\3\16\3\16\3\17\3\17\3\20\3\20\3\21\3\21\3\21\3\21\3\22\3\22\3\22"+
		"\3\22\3\23\3\23\3\23\3\23\3\23\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24"+
		"\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\26\3\26\3\26\3\26\3\26"+
		"\3\26\3\26\3\26\3\27\3\27\3\27\3\27\3\27\3\27\3\27\3\27\3\27\3\30\3\30"+
		"\3\30\3\30\3\30\3\30\3\30\3\31\3\31\3\31\3\31\3\31\3\32\3\32\3\32\3\32"+
		"\3\32\3\32\3\33\3\33\3\33\3\33\3\33\3\33\3\33\3\34\3\34\3\34\3\34\3\34"+
		"\3\35\3\35\3\35\3\35\3\35\3\35\2\2\36\3\3\5\4\7\5\t\6\13\7\r\b\17\t\21"+
		"\n\23\13\25\f\27\r\31\16\33\17\35\20\37\21!\22#\23%\24\'\25)\26+\27-\30"+
		"/\31\61\32\63\33\65\34\67\359\36\3\2\2\2\u00df\2\3\3\2\2\2\2\5\3\2\2\2"+
		"\2\7\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2\2\2\2\17\3\2\2\2\2\21\3"+
		"\2\2\2\2\23\3\2\2\2\2\25\3\2\2\2\2\27\3\2\2\2\2\31\3\2\2\2\2\33\3\2\2"+
		"\2\2\35\3\2\2\2\2\37\3\2\2\2\2!\3\2\2\2\2#\3\2\2\2\2%\3\2\2\2\2\'\3\2"+
		"\2\2\2)\3\2\2\2\2+\3\2\2\2\2-\3\2\2\2\2/\3\2\2\2\2\61\3\2\2\2\2\63\3\2"+
		"\2\2\2\65\3\2\2\2\2\67\3\2\2\2\29\3\2\2\2\3;\3\2\2\2\5E\3\2\2\2\7O\3\2"+
		"\2\2\tU\3\2\2\2\13\\\3\2\2\2\r`\3\2\2\2\17e\3\2\2\2\21k\3\2\2\2\23t\3"+
		"\2\2\2\25z\3\2\2\2\27\177\3\2\2\2\31\u0085\3\2\2\2\33\u0087\3\2\2\2\35"+
		"\u0089\3\2\2\2\37\u008b\3\2\2\2!\u008d\3\2\2\2#\u0091\3\2\2\2%\u0095\3"+
		"\2\2\2\'\u009a\3\2\2\2)\u00a2\3\2\2\2+\u00ab\3\2\2\2-\u00b3\3\2\2\2/\u00bc"+
		"\3\2\2\2\61\u00c3\3\2\2\2\63\u00c8\3\2\2\2\65\u00ce\3\2\2\2\67\u00d5\3"+
		"\2\2\29\u00da\3\2\2\2;<\7a\2\2<=\7a\2\2=>\7g\2\2>?\7p\2\2?@\7v\2\2@A\7"+
		"t\2\2AB\7{\2\2BC\7a\2\2CD\7a\2\2D\4\3\2\2\2EF\7k\2\2FG\7p\2\2GH\7v\2\2"+
		"HI\7g\2\2IJ\7t\2\2JK\7h\2\2KL\7c\2\2LM\7e\2\2MN\7g\2\2N\6\3\2\2\2OP\7"+
		"e\2\2PQ\7n\2\2QR\7c\2\2RS\7u\2\2ST\7u\2\2T\b\3\2\2\2UV\7u\2\2VW\7v\2\2"+
		"WX\7t\2\2XY\7w\2\2YZ\7e\2\2Z[\7v\2\2[\n\3\2\2\2\\]\7h\2\2]^\7q\2\2^_\7"+
		"t\2\2_\f\3\2\2\2`a\7g\2\2ab\7c\2\2bc\7e\2\2cd\7j\2\2d\16\3\2\2\2ef\7y"+
		"\2\2fg\7j\2\2gh\7k\2\2hi\7n\2\2ij\7g\2\2j\20\3\2\2\2kl\7e\2\2lm\7q\2\2"+
		"mn\7p\2\2no\7v\2\2op\7k\2\2pq\7p\2\2qr\7w\2\2rs\7g\2\2s\22\3\2\2\2tu\7"+
		"d\2\2uv\7t\2\2vw\7g\2\2wx\7c\2\2xy\7m\2\2y\24\3\2\2\2z{\7i\2\2{|\7q\2"+
		"\2|}\7v\2\2}~\7q\2\2~\26\3\2\2\2\177\u0080\7n\2\2\u0080\u0081\7c\2\2\u0081"+
		"\u0082\7d\2\2\u0082\u0083\7g\2\2\u0083\u0084\7n\2\2\u0084\30\3\2\2\2\u0085"+
		"\u0086\7\61\2\2\u0086\32\3\2\2\2\u0087\u0088\7#\2\2\u0088\34\3\2\2\2\u0089"+
		"\u008a\7/\2\2\u008a\36\3\2\2\2\u008b\u008c\7-\2\2\u008c \3\2\2\2\u008d"+
		"\u008e\7c\2\2\u008e\u008f\7p\2\2\u008f\u0090\7{\2\2\u0090\"\3\2\2\2\u0091"+
		"\u0092\7k\2\2\u0092\u0093\7p\2\2\u0093\u0094\7v\2\2\u0094$\3\2\2\2\u0095"+
		"\u0096\7w\2\2\u0096\u0097\7k\2\2\u0097\u0098\7p\2\2\u0098\u0099\7v\2\2"+
		"\u0099&\3\2\2\2\u009a\u009b\7h\2\2\u009b\u009c\7n\2\2\u009c\u009d\7q\2"+
		"\2\u009d\u009e\7c\2\2\u009e\u009f\7v\2\2\u009f\u00a0\7\65\2\2\u00a0\u00a1"+
		"\7\64\2\2\u00a1(\3\2\2\2\u00a2\u00a3\7w\2\2\u00a3\u00a4\7h\2\2\u00a4\u00a5"+
		"\7n\2\2\u00a5\u00a6\7q\2\2\u00a6\u00a7\7c\2\2\u00a7\u00a8\7v\2\2\u00a8"+
		"\u00a9\7\65\2\2\u00a9\u00aa\7\64\2\2\u00aa*\3\2\2\2\u00ab\u00ac\7h\2\2"+
		"\u00ac\u00ad\7n\2\2\u00ad\u00ae\7q\2\2\u00ae\u00af\7c\2\2\u00af\u00b0"+
		"\7v\2\2\u00b0\u00b1\78\2\2\u00b1\u00b2\7\66\2\2\u00b2,\3\2\2\2\u00b3\u00b4"+
		"\7w\2\2\u00b4\u00b5\7h\2\2\u00b5\u00b6\7n\2\2\u00b6\u00b7\7q\2\2\u00b7"+
		"\u00b8\7c\2\2\u00b8\u00b9\7v\2\2\u00b9\u00ba\78\2\2\u00ba\u00bb\7\66\2"+
		"\2\u00bb.\3\2\2\2\u00bc\u00bd\7u\2\2\u00bd\u00be\7v\2\2\u00be\u00bf\7"+
		"t\2\2\u00bf\u00c0\7k\2\2\u00c0\u00c1\7p\2\2\u00c1\u00c2\7i\2\2\u00c2\60"+
		"\3\2\2\2\u00c3\u00c4\7e\2\2\u00c4\u00c5\7j\2\2\u00c5\u00c6\7c\2\2\u00c6"+
		"\u00c7\7t\2\2\u00c7\62\3\2\2\2\u00c8\u00c9\7w\2\2\u00c9\u00ca\7e\2\2\u00ca"+
		"\u00cb\7j\2\2\u00cb\u00cc\7c\2\2\u00cc\u00cd\7t\2\2\u00cd\64\3\2\2\2\u00ce"+
		"\u00cf\7f\2\2\u00cf\u00d0\7c\2\2\u00d0\u00d1\7g\2\2\u00d1\u00d2\7o\2\2"+
		"\u00d2\u00d3\7q\2\2\u00d3\u00d4\7p\2\2\u00d4\66\3\2\2\2\u00d5\u00d6\7"+
		"v\2\2\u00d6\u00d7\7t\2\2\u00d7\u00d8\7w\2\2\u00d8\u00d9\7g\2\2\u00d98"+
		"\3\2\2\2\u00da\u00db\7h\2\2\u00db\u00dc\7c\2\2\u00dc\u00dd\7n\2\2\u00dd"+
		"\u00de\7u\2\2\u00de\u00df\7g\2\2\u00df:\3\2\2\2\3\2\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}