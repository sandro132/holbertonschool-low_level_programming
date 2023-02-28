#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
	int i, j;
int count = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	
	for (j = count; s[j]  >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}

