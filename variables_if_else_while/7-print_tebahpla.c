#include <stdio.h>
/**
 * main - function
 * description -  if for positive or negative
 *Return: 0 (Success);
 */

int main(void)
{
	char abc;

	for (abc = 'z'; abc >= 'a'; abc--)
	putchar(abc);
	putchar('\n');
	return (0);
}
