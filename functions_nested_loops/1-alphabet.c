#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - function that prints the alphabet, in lowercase.
 *
 */
void print_alphabet(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
		_putchar(abc);
	_putchar('\n');
}
