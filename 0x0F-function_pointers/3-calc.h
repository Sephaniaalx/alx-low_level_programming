#ifndef CALCULATE
#define CALCULATE

#include <stdlib.h>
#include <stdio.h>
/**
 * struct op - The Struct op
 *
 * @op: The operator
 * @f: The function associated with the prog
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

#endif
