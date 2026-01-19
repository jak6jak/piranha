// Stub implementation for FlexLexer base class methods
// The generated scanner.auto.cpp derives from yyFlexLexer but doesn't define
// these virtual methods, so we provide default implementations here.

#include <FlexLexer.h>

// Provide default implementations for the base class virtual methods
// that the generated scanner expects but doesn't define.
int yyFlexLexer::LexerInput(char* buf, int max_size) {
    if (yyin.eof() || yyin.fail())
        return 0;

    yyin.read(buf, max_size);

    if (yyin.bad())
        return -1;
    else
        return yyin.gcount();
}

void yyFlexLexer::LexerOutput(const char* buf, int size) {
    yyout.write(buf, size);
}
