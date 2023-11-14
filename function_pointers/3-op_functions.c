#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - calls op_add
 * @a: num1
 * @b: numb
 * 
 * Context:  sum of a and b
 * Return:  returns the sum of a and b
 */

/**
 * op_sub - calls op_sub
 * @a: num1
 * @b: numb
 * 
 * Context:  difference of a and b
 * Return:  returns the difference of a and b
 */

/**
 * op_mul - calls op_mul
 * @a: num1
 * @b: numb
 * 
 * Context: product of a and b
 * Return:  returns the product of a and b
 */

/**
 * op_div - calls op_div
 * @a: num1
 * @b: numb
 * 
 * Context: division of a by b
 * Return:  returns the result of the division of a and b
 */

/**
 * op_mod - calls op_mod
 * @a: num1
 * @b: numb
 * 
 * Context: division of a by b
 * Return:  returns the remainder of the division of a by b
 */

int op_add(int a, int b)
{
	return (a + b);
}
int op_sub(int a, int b)
{
	return (a - b);
}
int op_mul(int a, int b)
{
	return (a * b);
}
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}