// Generated from c:\Users\MMI\Documents\tmpdev\KPP\KPP\Antlr\grammar/Common.g4 by ANTLR 4.7.1
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
		T_STATEMENT=1, LINE_COMMENT=2, BLOCK_COMMENT=3, DECIMAL=4, IDENTIFIER=5, 
		WS=6;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	public static final String[] ruleNames = {
		"ALPHA", "T_STATEMENT", "LINE_COMMENT", "BLOCK_COMMENT", "DECIMAL", "IDENTIFIER", 
		"WS"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "';'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, "T_STATEMENT", "LINE_COMMENT", "BLOCK_COMMENT", "DECIMAL", "IDENTIFIER", 
		"WS"
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\bK\b\1\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\3\2\3\2\3\3\3\3\3\4\3\4"+
		"\7\4\30\n\4\f\4\16\4\33\13\4\3\4\3\4\3\5\3\5\3\5\3\5\7\5#\n\5\f\5\16\5"+
		"&\13\5\3\5\3\5\3\5\3\5\3\5\3\6\5\6.\n\6\3\6\6\6\61\n\6\r\6\16\6\62\3\6"+
		"\3\6\5\6\67\n\6\3\7\6\7:\n\7\r\7\16\7;\3\7\6\7?\n\7\r\7\16\7@\5\7C\n\7"+
		"\3\b\6\bF\n\b\r\b\16\bG\3\b\3\b\3$\2\t\3\2\5\3\7\4\t\5\13\6\r\7\17\b\3"+
		"\2\6\5\2C\\aac|\4\2\f\f\17\17\3\2\62;\5\2\13\f\16\17\"\"\2R\2\5\3\2\2"+
		"\2\2\7\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2\2\2\2\17\3\2\2\2\3\21"+
		"\3\2\2\2\5\23\3\2\2\2\7\25\3\2\2\2\t\36\3\2\2\2\13-\3\2\2\2\r9\3\2\2\2"+
		"\17E\3\2\2\2\21\22\t\2\2\2\22\4\3\2\2\2\23\24\7=\2\2\24\6\3\2\2\2\25\31"+
		"\7%\2\2\26\30\n\3\2\2\27\26\3\2\2\2\30\33\3\2\2\2\31\27\3\2\2\2\31\32"+
		"\3\2\2\2\32\34\3\2\2\2\33\31\3\2\2\2\34\35\b\4\2\2\35\b\3\2\2\2\36\37"+
		"\7%\2\2\37 \7,\2\2 $\3\2\2\2!#\13\2\2\2\"!\3\2\2\2#&\3\2\2\2$%\3\2\2\2"+
		"$\"\3\2\2\2%\'\3\2\2\2&$\3\2\2\2\'(\7,\2\2()\7%\2\2)*\3\2\2\2*+\b\5\2"+
		"\2+\n\3\2\2\2,.\7/\2\2-,\3\2\2\2-.\3\2\2\2.\60\3\2\2\2/\61\t\4\2\2\60"+
		"/\3\2\2\2\61\62\3\2\2\2\62\60\3\2\2\2\62\63\3\2\2\2\63\66\3\2\2\2\64\65"+
		"\7\60\2\2\65\67\t\4\2\2\66\64\3\2\2\2\66\67\3\2\2\2\67\f\3\2\2\28:\5\3"+
		"\2\298\3\2\2\2:;\3\2\2\2;9\3\2\2\2;<\3\2\2\2<B\3\2\2\2=?\5\13\6\2>=\3"+
		"\2\2\2?@\3\2\2\2@>\3\2\2\2@A\3\2\2\2AC\3\2\2\2B>\3\2\2\2BC\3\2\2\2C\16"+
		"\3\2\2\2DF\t\5\2\2ED\3\2\2\2FG\3\2\2\2GE\3\2\2\2GH\3\2\2\2HI\3\2\2\2I"+
		"J\b\b\3\2J\20\3\2\2\2\f\2\31$-\62\66;@BG\4\2\3\2\b\2\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}