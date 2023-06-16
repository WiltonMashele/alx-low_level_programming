#include "lists.h"
#include <stdlib.h>

/**
 * dlistint_t *add_dnodeint(dlistint_t **head, const int n); - adds
 * a new node at the beginning of a dlistint_t list.
 * @head: pointer to the head of the list
 * @n: integer value to be stored in the new node
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t* temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
	{
	return (NULL);
	}

	temp->prev = NULL;
	temp->n = n;
	temp->next = *head;

	if (*head != NULL)
        {
        (*head)->prev = temp;
        }

	*head = temp;
	return (temp);
}
