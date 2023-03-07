#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Write a function that copies a string
 * @dest: pointer char
 * @src: pointer char
 * @n: integral
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i]	= src[i];
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
