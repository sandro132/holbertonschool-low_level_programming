#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - function
 * description -  greater than and less than
 *Return: 0 (Success);
 */

int main(void)
{
	int n, numb;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	numb = n % 10;
	if (numb > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, numb);
	else
		if (numb == 0)
		printf("Las digit of %d is %d and is 0\n", n, numb);
		else if (n < 6 && numb != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, numb);
	return (0);
}
