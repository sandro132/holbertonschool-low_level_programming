#include "main.h"

/**
 * _puts - unction that prints a string, followed by a new line
 * @str: string
 * Return: 0
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		_putchar(str[i]);
	_putchar('\n');
}
