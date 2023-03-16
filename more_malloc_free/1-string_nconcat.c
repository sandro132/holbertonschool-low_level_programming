#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - that concatenates two strings
 * @s1: string
 * @s2: string
 * @n: is greater or equal to the length
 * Return: Always 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, l;
	char *c;

	if (s1 == NULL)

		i = 0;
	else
		for (i = 0 ; s1[i] ; i++)
			;
	if (s2 == NULL)
		j = 0;
	else
		for (j = 0 ;  s2[j]; j++)
			;
	if (n >= j)
		n = j;
	k = i + n + 1;
	c = malloc(k * sizeof(char));
	if (c == NULL)
		return (NULL);
	for (l = 0; l < i ; l++)
		c[l] = s1[l];
	for (l = 0; l < n; l++)
		c[l + i] = s2[l];
	c[i + n] = '\0';
	return (c);
}
