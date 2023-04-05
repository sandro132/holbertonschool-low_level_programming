#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end
 * @head: the header
 * @str: char
 * Return: 0
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nn, *cn;

	nn = malloc(sizeof(list_t));
	if (nn == NULL)
		return (NULL);

	nn->str = strdup(str);
	nn->len = strlen(str);
	nn->next = NULL;

	if  (*head == NULL)
		*head = nn;

	else
	{
		cn = *head;
		while (cn->next != NULL)
		{
			cn = cn->next;
		}
		cn->next = nn;
	}

	return (nn);
}
