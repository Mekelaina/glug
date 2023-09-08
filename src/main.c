#include <stdio.h>
#include "tokens.h"
#include "list.h"

const char* input = "exit 0;";


//test
int main(){
    Array a;

    initArray(&a, 5);
    for(int i = 0; i < 10; i++){
        insertArray(&a, i);
    }
    printf("%d\n", a.array[5]);

    return 0;
}