#include "main.h"
#include <stdio.h>

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: int pointer
 * @n: int pointer
 * Retunr: 0
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i;

	n--;
	for (i = 0;  i < n ; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		n--;
	}
}
