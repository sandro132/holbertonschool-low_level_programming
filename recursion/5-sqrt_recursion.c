#include <stdio.h>
/**
 * tester - checks the input number from n
 * @n: number
 * @base: base number
 * Return: 0
 */
int tester(int n, int base)
{
	if (n * n == base)
		return (n);
	if (n * n > base)
		return (-1);
	return (tester(n + 1, base));
}
/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: number
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	return (tester(1, n));
}
