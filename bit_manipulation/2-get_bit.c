#include "main.h"

/**
 * get_bit - function that return the value of a bit
 * @n: int compare
 * @index: co mpare
 * return: 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return ((n >> index) & 1);
}
