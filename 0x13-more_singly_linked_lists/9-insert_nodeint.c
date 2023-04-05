#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 *
 * @head: pointer to the head of the list.
 * @idx: index of the list where the new node should be added.
 * @n: integer to be included in the new node.
 *
 * Return: the address of the new node, or NULL if it fails.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)

{
	listint_t *new_node, *tmp;
	unsigned int i = 0;

	if (!head)
	return (NULL);

	tmp = *head;

	if (idx == 0)
	{
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
	}

	while (i < idx - 1 && tmp)
	{
	tmp = tmp->next;
	i++;
	}

	if (i != idx - 1 || !tmp)
	return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	return (NULL);

	new_node->n = n;
	new_node->next = tmp->next;
	tmp->next = new_node;

	return (new_node);
}
