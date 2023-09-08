#ifndef  GLUG_TOKENS_H
#define  GLUG_TOKENS_H

typedef enum tokentype {
    tt_none,
    tt_funCall,
    tt_lParen,
    tt_rParen,
    tt_intLit,
    tt_semicolon
} TokenType;


typedef struct Token {
    TokenType type;
    char* value;
} Token;



#endif //GLUG_TOKENS_H