#include "lists.h"

/* sum_listint - returns the sum of all the data (n) in a linked list */
/* @head: pointer to the head of the linked list */
/* Return: sum of all the data (n) in the linked list, or 0 if the list is empty */

int sum_listint(listint_t *head)

{
	int sum = 0;

	/* Traverse the linked list and add the data (n) to the sum */
	while (head != NULL)
	{
	sum += head->n;
	head = head->next;
	}

	return (sum);
}
