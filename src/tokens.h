#ifndef  GLUG_TOKENS_H
#define  GLUG_TOKENS_H

typedef enum tokentype {
    TOK_NULL = 0,
    TOK_EXIT = 1,
    TOK_INT_LIT,
    TOK_SEMICOLON
} TokenType;


typedef struct token {
    TokenType type;
    char* value;
} Token;



#endif //GLUG_TOKENS_H