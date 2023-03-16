#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - function that allocates memory using
 * @b: iterador
 * Return: 98
 */
void *malloc_checked(unsigned int b)
{
	char *c;

	c = malloc(b);

	if (!c)

		exit(98);

	return (c);
}
