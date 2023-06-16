#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer
 * @index: index of the node, starting from 0.
 *
 * Return: NULL if the node does not exist
 *
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
        dlistint_t *current = head;
        unsigned int i = 0;

	if (!head)
	return (NULL);

	while (current)
	{
	if (i == index)
	return (current);

	current = current->next;
	i++;
	}
    
	return (NULL);
}
