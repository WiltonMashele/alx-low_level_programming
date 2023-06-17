#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of 
 * a dlistint_t linked list.
 * @head: pointer to the list
 * Return: 0 if the list is empty, or sum if not.
 */

int sum_dlistint(dlistint_t *head)
{

	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
	sum += current->n;
	current = current->prev;
	}

	return (sum);
}
