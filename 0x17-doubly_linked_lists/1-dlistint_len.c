#include "lists.h"

/**
 * dlistint_len - prints the elements of a dlistint_t list
 * @h: pointer to head of the dlistint_t list
 *
 * Return: the number of elements in a linked dlistint_t list.
 *
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current_node = h;
	size_t num_of_nodes = 0;

	if (h == NULL)
	return (0);

	while (current_node != NULL)
	{
	num_of_nodes++;
	current_node = current_node->next;
	}

	return (num_of_nodes);
}
