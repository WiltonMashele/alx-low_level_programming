#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list, and returns
 * the head node's data (n).
 * @head: double pointer to the head node of the list
 *
 * Return: the data stored in the head node of the list, or 0 if the list is
 * empty
 */

int pop_listint(listint_t **head)

{
	int data;           /* variable to store the data in the head node */
	listint_t *temp;    /* temporary pointer to the head node */

	/* check if the list is empty */
	if (*head == NULL)
	{
	return (0);
	}

	/* retrieve the data stored in the head node */
	data = (*head)->n;

	/* create a temporary pointer to the head node */
	temp = *head;

	/* update the head pointer to point to the second node in the list */
	*head = (*head)->next;

	/* free the memory allocated to the original head node */
	free(temp);

	/* return the data stored in the original head node */
	return (data);
}
