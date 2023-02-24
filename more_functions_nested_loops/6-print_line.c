#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 * @n: szs
 * Return: 0
 */
void print_line(int n)
{
	int c;

	while (!(n <= 0))
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
