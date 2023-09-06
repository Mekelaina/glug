#ifndef GLUG_LIST_H
#define GLUG_LIST_H

#include <stddef.h>

typedef struct array {
    char *array;
    size_t used;
    size_t size;
} Array;

void initArray(Array *a, size_t initialSize);

void insertArray(Array *a, int element);

void freeArray(Array *a);


#endif //GLUG_LIST_H