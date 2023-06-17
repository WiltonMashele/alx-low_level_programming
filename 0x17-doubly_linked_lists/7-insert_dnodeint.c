#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */



dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
        dlistint_t *current = *h;

	dlistint_t *new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return NULL;

	new->n = n;

	if (*h == NULL)
	{
		*h = new;
		new->prev = NULL;
		new->next = NULL;
		return new;
	}

	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		(*h)->prev = new;
		*h = new;
		return new;
	}

	while (current != NULL && i < idx - 1)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
	{
		free(new);
		return NULL;
	}

	new->next = current->next;
	new->prev = current;

	if (current->next != NULL)
		current->next->prev = new;

	current->next = new;

	return new;
}
