#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: The number of nodes in the list_t list.
 */

size_t print_listint(const listint_t *h)

{
	const listint_t *current = h;
	size_t nodes = 0;

	for (current = h; current != NULL; current = current->next)
	{
	printf("%d\n", current->n);
	nodes++;
	}

	return (nodes);
}
