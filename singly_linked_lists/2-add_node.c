#include "lists.h"

/**
 * add_node - function that adds a new nodo
 * @head: the header
 * @str: string
 * Return: 0
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nn = malloc(sizeof(list_t));

	if (nn == NULL)
		return (NULL);

	nn->str = strdup(str);
	nn->len = strlen(str);
	nn->next = *head;
	*head = nn;
	return (nn);
}
