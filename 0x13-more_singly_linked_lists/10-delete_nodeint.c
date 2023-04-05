#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index
 * of a listint_t linked list
 * @head: pointer to the head node of the linked list
 * @index: index of the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 *
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)

{
	listint_t *current, *temp;

	unsigned int i;

	if (*head == NULL)
	{
	return (-1); /*linked list is empty*/
	}

	if (index == 0)
	{
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (1);
	}

	current = *head;

	for (i = 0; current != NULL && i < index - 1; i++)
	{
	current = current->next;
	}

	if (current == NULL || current->next == NULL)
	{
	return (-1); /*index out of range*/
	}

	temp = current->next;

	current->next = temp->next;
	free(temp);
	return (1);
}
