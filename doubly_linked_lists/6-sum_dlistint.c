#include "lists.h"

/**
 * sum_dlistint - function that return the sum of all data
 * @head: the header
 * Return: sum of all
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
