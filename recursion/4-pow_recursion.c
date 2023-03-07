#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - function that return value x and Y
 * @x: function
 * @y: szs
 * Return: 0
 */
int _pow_recursion(int x, int y)
{
	int o;

	if (y < 0)
	{
		o = -1;
	}
	else if (y == 0)
	{
		o = 1;
	}
	else
	{
		o = x * _pow_recursion(x, y - 1);
	}
	return (o);
}
