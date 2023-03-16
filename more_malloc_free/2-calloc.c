#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - that allocates memory for an array
 * @nmemb: element of array
 * @size: elemnet of array
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *c;
	unsigned int i;

	if (nmemb == 0 || size == 0)

		return (NULL);

	c = malloc(nmemb * size);

	if (c == NULL)

		return (NULL);
	for (i = 0 ; i < (nmemb * size) ; i++)

		c[i] = 0;

	return (c);
}
