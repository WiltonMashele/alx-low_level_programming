#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: Pointer to the head of the doubly linked list.
 * Return: the number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t num_of_nodes = 0;

	while (current != NULL)
	{
	printf("%d\n", current->n);
	current = current->next;
	num_of_nodes++;
	}

	return	(num_of_nodes);
}
