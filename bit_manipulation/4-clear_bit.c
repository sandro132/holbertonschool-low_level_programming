#include "main.h"

/**
 * clear_bit - function that sets value of a bit
 * @n: int value
 * @index: index of n
 * Return: 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(*n) * 8))
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
