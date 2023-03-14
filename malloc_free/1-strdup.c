#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - function that returns a pointer to a newl allocated.
 * @str: parameter the string
 * Return: pointer.
 */
char *_strdup(char *str)
{
	unsigned int i;
	int oi;
	char *ns;

	if (str == NULL)
	{
		return (NULL);
	}
	for (oi = 0; str[oi] != '\0'; oi++)
	{
		;
	}
	ns = malloc(oi * sizeof(char));

	if (ns != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
			ns[i] = str[i];
	}
	else
		return (NULL);

	ns[i] = '\0';
	return (ns);
}
