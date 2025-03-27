#ifndef CALC_H
#define CALC_H

#include <stdlib.h>
#include <string.h>

/**
 * struct op - Struct for operators and their associated functions
 * @op: The operator as a string
 * @f: Function pointer to the corresponding operation
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;

/* Function prototypes */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int num1, int num2);

#endif /* CALC_H */
