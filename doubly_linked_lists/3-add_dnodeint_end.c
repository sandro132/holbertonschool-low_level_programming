#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end
 * @head: the header
 * @n: int
 * Return: 0
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nn, *cn;

	nn = malloc(sizeof(dlistint_t));
	if (nn == NULL)
		return (NULL);

	nn->n = n;
	nn->next = NULL;

	if (*head == NULL)
	{
		nn->prev = NULL;
		*head = nn;
		return (nn);
	}

	cn = *head;

	while (cn->next != NULL)
	
		cn = cn->next;
	cn->next = nn;
	nn->prev = cn;

	return (nn);
}
