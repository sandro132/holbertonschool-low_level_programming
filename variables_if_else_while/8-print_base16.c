#include <stdio.h>
/**
 * main - function
 * description -  if for positive or negative
 *Return: 0 (Success);
 */

int main(void)
{
	int n;
	char af;

	for (n = 0; n <= 9; n++)
	putchar((n % 10) + '0');
	for (af = 'a'; af <= 'f'; af++)
	putchar(af);
	putchar('\n');
	return (0);
}
