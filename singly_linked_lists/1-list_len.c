#include "lists.h"

/**
 * list_len - function that return the number of elements
 * @h: the header
 * Return: 0
 */
size_t list_len(const list_t *h)
{
	size_t in;

	while (h != NULL)
	{
	in++;
	h = h->next;
	}

	return (in);
}
