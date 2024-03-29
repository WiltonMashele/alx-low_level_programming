#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the head of the linked list
 * @index: index of the node to retrieve
 *
 * Return: pointer to the nth node of the linked list,
 * or NULL if it doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)

{
	unsigned int i = 0;
	listint_t *current = head;

	while (current != NULL)
	{
	if (i == index)
	return (current);
	i++;
	current = current->next;
	}

	return (NULL);
}
