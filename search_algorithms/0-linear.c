#include "search_algos.h"

/**
 * linear_search - linear search algorithm for linear algorithms
 *
 * @array: array of linear algorithms
 * @size: size of array
 * @value: value to search
 *
 * Return: linear search result
 */

int linear_search(int *array, size_t size, int value)
{
size_t i = 0;

if (array == NULL)
{
return (-1);
}

while (i < size)
{
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
if (array[i] == value)
{
return (i);
}
i++;
}
return (-1);
}
