#include "lists.h"

/**
 * free_list - function that frees a list_t
 * @head: the header
 */
void  free_list(list_t *head)
{
	list_t *frees;

	while (head != NULL)
	{
		frees = head;
		head = head->next;
		free(frees->str);
		free(frees);
	}
}
