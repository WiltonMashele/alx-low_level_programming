#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL.
 * @head: Pointer to the first node of the list.
 */

void free_listint2(listint_t **head)

{
	listint_t *current;

	if (head == NULL)
	return;

	while (*head != NULL)
	{
	current = *head;
	*head = (*head)->next;
	free(current);
	}

	/* Set the head to NULL */
	*head = NULL;
}
