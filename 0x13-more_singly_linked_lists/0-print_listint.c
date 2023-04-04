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
	if (h == NULL)
	{
	return (0);
	}

	printf("%d\n", h->n);

	return 1 + print_listint(h->next);
}
