#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to a pointer to the head of the list
 * @n: integer value to be stored in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *current_node;

	/* allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	return (NULL);

	/* initialize the new node */
	new_node->n = n;
	new_node->next = NULL;

	/* if the list is empty, set the new node as the head */
	if (*head == NULL)
	{
	*head = new_node;
	return (new_node);
	}

	/* traverse the list to find the last node */
	current_node = *head;
	while (current_node->next != NULL)
	{
	current_node = current_node->next;
	}

	/* link the last node to the new node */
	current_node->next = new_node;

	return (new_node);
}
