#include <stdio.h>
/**
 * main - function
 * description -  if for positive or negative
 *Return: 0 (Success);
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	putchar((n % 10) + '0');
	putchar('\n');
	return (0);
}
