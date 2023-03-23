#include "3-calc.h"
#include <stdio.h>


/**
 * op_add - function for sum
 * @a: int the number
 * @b: int the number
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that remaining
 * @a: int the number
 * @b: int the number
 * Return: diference of a and b
 */
int  op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that return the product
 * @a: int the number
 * @b: int the number
 * Return: diference of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that return a division
 * @a: int the number
 * @b: int the number
 * Return: division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function that return a division
 * @a: int the number
 * @b: int the number
 * Return: division of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
