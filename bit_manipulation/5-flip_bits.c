#include "main.h"

/**
 * flip_bits - function that return the numbers of bits
 * @n: int value
 * @m: int value
 * Return: 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int value;
	unsigned int i = 0;

	value = n ^ m;

	while (value != 0)
	{
		if ((value & 1) == 1)
			i++;

		value = value >> 1;
	}

	return (i);
}
