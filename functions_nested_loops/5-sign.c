#include "main.h"

/**
 * print_sing - function that prints the sign of a number
 * @n:print letter in number
 * Return: 0.
 */
int print_sing(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
