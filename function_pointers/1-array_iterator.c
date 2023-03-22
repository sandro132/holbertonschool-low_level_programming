#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function that executes a other function
 * @array: input array
 * @size: size of the array
 * @action: pointer of the function
 * return: pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL)
	{
		if (size && action)
		{
			for (i = 0; i < size; i++)
				action(array[i]);

		}
	}
}
