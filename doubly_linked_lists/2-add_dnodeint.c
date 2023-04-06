#include "lists.h"

/**
 * add_dnodeint - function that adds a new node
 * @head: the header
 * @n: int
 * Return: 0.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nn = malloc(sizeof(dlistint_t));

	if (nn == NULL)
		return (NULL);

	nn->n = n;
	nn->prev = NULL;
	nn->next = *head;

	if (*head != NULL)
		(*head)->prev = nn;

	*head = nn;
	return (nn);
}
