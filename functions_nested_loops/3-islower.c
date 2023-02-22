#include "main.h"
#include <stdio.h>

/**
 * _islower - function that prints the alphabet, in lowercase
 * @c:print letter in lowercase
 * Return: 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
