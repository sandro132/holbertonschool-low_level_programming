#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: fist string
 * @s2: second string
 * Return: NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *c;
	unsigned int i, f;
	int s;

	if (*s1 == '\0' && *s2 == '\0')
	{
		for (i = 0; s1[i] != '\0'; i++)
			;
		for (f = 0; s2[f] != '\0'; f++)
		;
	}
	c = malloc((i + f) + 1 * sizeof(char));

	if (c == NULL)
	{
		for (s = 0; c[s] != '\0'; s++)
		{
			if (c[s] == '\0')

				c[s] = ' ';

			c[s] = s1[s];
		}

		for (s = 0; c[s] != '\0'; s++)

			c[s] = s2[s];
	}
	return (c);
}
