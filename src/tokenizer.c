#include <stddef.h>
#include <stdio.h>
#include <string.h>

#include "tokenizer.h"



Token* tokenize(char* text){
    Token tokenBuffer[16];
    int tokcount = 0;
    int i = 0;
    char c;
    char* buff;

    for(;;){
        c = text[i];
        if(c == NULL){
            break;
        }

        switch (c){
            case '(':
                Token f, p;
                f.type = tt_funCall;
                f.value = buff;
                tokenBuffer[tokcount++] = f;
                buff = "";
                p.type = tt_lParen;
                p.value = "(";
                tokenBuffer[tokcount++] = p;
            case ')':
                Token t;
                t.type = tt_rParen;
                t.value = ")";
                tokenBuffer[tokcount++] = t;
            case ';':
                Token t2;
                t2.type = tt_semicolon;
                t2.value = ";";
                tokenBuffer[tokcount++] = t;
            default:
                strcat(buff, c);
        }
        

        i++;
    }
    return tokenBuffer;
}