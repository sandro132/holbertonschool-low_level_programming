#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 * @n: szs
 * Return: 0
 */
void print_line(int n)
{
	int c;

	if (n > 0)
	{
		for (c = 0; c < n; c++)
		{
		_putchar('_');
		}
	_putchar('\n');
	}
}
