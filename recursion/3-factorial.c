#include "main.h"
#include <stdio.h>

/**
 * factorial - function that returns the factorial of a given number
 * @n: factorial
 * Return: 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		n = -1;
	}
	else if (n == 0)
	{
		n = 1;
	}
	else
	{
		n = n * factorial(n - 1);
	}
	return (n);
}
