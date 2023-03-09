#include "main.h"
#include <stdio.h>

/**
 * _strstr - function that locates a substring
 * @needle:  substring
 * @haystack: string
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{

		while (*haystack == *needle && *needle != '\0')
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
			return (haystack);
	}
	return (NULL);
}
