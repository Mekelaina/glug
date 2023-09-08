#include <stdio.h>
//#include "tokens.h"
#include "tokenizer.h"

char* input = "exit(0);";


int main(){


    Token *tokens = tokenize(input);

    for(int i = 0; i < LIST_LENGTH; i++){
        printf("TokenType: %d, TokenValueP: %s", tokens[i].type, tokens[i].value);
    }

    return 0;
}