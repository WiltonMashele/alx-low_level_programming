#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the listint_t list.
 */

size_t print_listint(const listint_t *h)

{
	size_t count = 0; /*Renamed 'nodes' to 'count' for clarity*/

	/*Changed the while loop to a for loop for simplicity*/
	for (; h != NULL; h = h->next)
	{
	printf("%d\n", h->n);
	count++;
	}

	return (count);
}
