#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - function
 * description -  if for positive or negative
 *Return: 0 (Success);
 */

int main(void)
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
	printf( n "is positive");
	}
	else
	{
		if (n == 0)
		{
		printf("is zero");
		}
		else
		{
		printf("is negative");
		}
	}
	return (0);
}
