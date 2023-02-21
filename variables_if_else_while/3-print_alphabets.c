#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * description - alphabet
 * Return: 0 (success);
 */

int main(void)
{
	char abc, ABC;

	for (abc = 'a'; abc <= 'z'; abc++)
	for (ABC = 'A'; ABC <= 'Z'; ABC++)
	putchar(abc);
	putchar(ABC);
	putchar('\n');
	return (0);
}
