#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to the list to free
 *
 */

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	{
	return;
	}

	free_dlistint(head->next);
	free(head);
}
