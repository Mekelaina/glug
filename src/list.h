#ifndef GLUG_LIST_H
#define GLUG_LIST_H

#include <stddef.h>
#include "tokens.h"



typedef struct tokenList {
    Token *tokens;
    size_t used;
    size_t size;
} TokenList;

void initList(TokenList *l, size_t initialSize);

void insertList(TokenList *l, Token element);

void freeList(TokenList *l);


#endif //GLUG_LIST_H