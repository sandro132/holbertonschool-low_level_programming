#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - sums all arguments
 * @n: number of arguments
 * @...: variable list of arguments
 * Return: sum of all arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, less;
	va_list parametros;

	if (n == 0)
	return (0);
	va_start(parametros, n);
	for (i = less = 0; i < n; i++)
	{
		less += va_arg(parametros, int);
	}
	va_end(parametros);
	return (less);
}
