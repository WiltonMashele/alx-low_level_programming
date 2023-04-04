#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list
 * @head: Pointer to a pointer to the head node of the list
 * @n: Integer value to be stored in the new node
 *
 * Return: Address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)

{
	listint_t *new_node;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	return (NULL);

	/* Initialize the new node */
	new_node->n = n;
	new_node->next = *head;

	/* Set the new node as the head node */
	*head = new_node;

	/* Return the address of the new node */
	return (new_node);
}
