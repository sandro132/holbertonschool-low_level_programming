#include "main.h"
#include <stdio.h>

/**
 * _memset - function that fills memory with i constant byte
 * @s: char pointer
 * @b: only char
 * @n: unsigned int
 * Reset: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
	{
		s[c] = b;
	}
	return (s);
}
