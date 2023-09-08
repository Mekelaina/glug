#include "list.h"
#include <malloc.h>

//TODO: add propper error handling

void initList(TokenList *l, size_t initialSize){
    l->tokens = malloc(initialSize * sizeof(Token));
    l->used = 0;
    l->size = initialSize;
}

void insertList(TokenList *l, Token element){
    if(l->used == l->size){
        l->size *= 2;
        l->tokens = realloc(l->tokens, l->size * sizeof(Token));
    }
    l->tokens[l->used++] = element;
}

void freeList(TokenList *l){
    free(l->tokens);
    l->tokens = NULL;
    l->used = l->size = 0;
}