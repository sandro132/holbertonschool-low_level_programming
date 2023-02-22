#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - function that prints the alphabet, in lowercase.
 *
 */
void print_alphabet_x10(void)
{
	char abc;
	int r;

	for (r = 0; r <= 9; r++)
	{
		for (abc = 'a'; abc <= 'z'; abc++)
			_putchar(abc);
		_putchar('\n');
	}
}
