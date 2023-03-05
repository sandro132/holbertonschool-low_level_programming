#include "main.h"
#include <stdio.h>
/**
 * _memcpy - copies n bytes from memory area
 * @n: counter
 * @src: pointers
 * @dest: pointer sh
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c = 0;
	for (; c < n; c++)
	{
		dest[c] = src[c];
	}
	return (dest);
}
