#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: number
 * Return: 0
 */
void print_diagonal(int n)
{
	int c, d;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c <= n ; c++)
		{
			d = c;
			while (d > 0)
			{
				_putchar(' ');
				d--;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
