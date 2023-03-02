#include "main.h"
#include <stdio.h>

/**
 * _strncat - check the code
 * @dest: pointer char
 * @src: pointer char
 * @n: counter
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
		i++;
	for (j = 0; j < n && src[j] != '\0'; j++, i++)
		dest[i] = src[j];
	dest[i] = '\0';
	return (dest);
}
