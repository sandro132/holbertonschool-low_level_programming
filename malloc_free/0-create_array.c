#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - function that creates an array of chars
 * @size: size of char
 * @c: c
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size <= 0)
		return (0);
	str = malloc(size);
	if (str == 0)
		return (0);
	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
