#include <stddef.h>
#include <stdio.h>

#include "tokenizer.h"

Token TokenBuffer[16];

Token* tokenize(char* text){
    int i = 0;
    char c;
    for(;;){
        c = text[i];
        if(c == NULL){
            break;
        }
        printf("%c", c);        
        i++;
    }
    return NULL;
}