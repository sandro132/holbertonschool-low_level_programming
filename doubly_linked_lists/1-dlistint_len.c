#include "lists.h"

/**
 * dlistint_len - function that return number of elements
 * @h: the header
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
