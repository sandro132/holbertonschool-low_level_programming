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
	int i, f, s, o;

	if (*s1 == '\0')

		s1 = "";

	if (*s2 == '\0')

		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (f = 0; s2[f] != '\0'; f++)
		;

	c = malloc((i + f + 1) * sizeof(char));

	if (c != NULL)
	{
		for (s = 0; s <= i - 1; s++)

			c[s] = s1[s];

		for (o = 0; o <= f; o++)
		{
			c[i] = s2[o];
			i++;
		}
	}
	return (c);
}
