#include "function_pointer.h"
#include <stidio.h>

/**
 * int_index - function that searches a integer
 * @array: pointer
 * @size: size of the array
 * @cmp: pointer searching
 * Return: first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!(array) || size <= 0 || !(cmp))
		return (-1);

	else
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			};
		}
		return (-1);
	}
}
