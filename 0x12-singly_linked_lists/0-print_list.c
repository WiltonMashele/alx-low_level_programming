#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the start of the list
 *
 * Return: the number of nodes in the list
 */

size_t print_list(const list_t *h)

{
	const list_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
	printf("[%u] %s\n", current->len, current->str != NULL ? current->str : "(nil)");
	count++;
	current = current->next;
	}

	return count;
}
