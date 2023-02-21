#include <stdio.h>
/**
 * main - function
 * description -  if for positive or negative
 *Return: 0 (Success);
 */

int main(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
	if (abc != 'e' && abc != 'q')
	putchar(abc);
	putchar('\n');
	return (0);
}
