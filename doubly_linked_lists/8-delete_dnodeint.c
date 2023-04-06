#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at index
 * @head: the header
 * @index: index of the node
 * Return: 0
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *tmp;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
		(*head)->prev = NULL;
		free(current);
		return (1);
	}

	while (i < index - 1)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
		i++;
	}

	tmp = current->next;
	if (tmp == NULL)
		return (-1)
	current->next = temp->next
	if (current->next != NULL)
	current->next->prev = current;
	free(tmp);
	return (1);
}
