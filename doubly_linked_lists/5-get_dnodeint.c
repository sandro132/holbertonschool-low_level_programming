#include "lists.h"

/**
 * get_dnodeint_at_index - function that returms the nth node
 * @head: the header
 * @index: located node
 * Return: 0
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index != 0)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
