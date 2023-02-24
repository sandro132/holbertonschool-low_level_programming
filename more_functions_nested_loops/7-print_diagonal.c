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
		for (c = 1; c <= n; c++)
		{
			if (c > 1)
			{
				for (d = 1; d <= c - 1; d++)
				{
				_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
