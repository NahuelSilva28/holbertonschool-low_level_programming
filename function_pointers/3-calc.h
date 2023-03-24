#ifndef CALC
#define CALC
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;

int (*get_op_func(char *s))(int, int);

#endif /* CALC */
