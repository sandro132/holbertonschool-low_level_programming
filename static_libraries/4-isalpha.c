#include "main.h"
#include <stdio.h>

/**
 * _isalpha - function that prints the alphabet, in lowercase
 * @c:print letter in lowercase
 * Return: 0.
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
