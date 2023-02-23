#include "main.h"

/**
 * print_last_digit - function that prints the last difit of a number
 * @c: number last digit result
 * Return: absolute value of number
 */
int print_last_digit(int c)
{
	c = (c % 10);
	if (c < 0)
	{
		c = (-1 * c);
	}
	_putchar(c + '0');
	return (c);
}
