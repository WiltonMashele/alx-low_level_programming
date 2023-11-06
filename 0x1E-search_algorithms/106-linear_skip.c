#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted singly linked list
 * of integers using the linear skip algorithm.
 * @list: A pointer to the head of the linked list to search.
 * @value: The value to search for.
 *
 * Return: If the value is not found or the head of the list is NULL, 
 * return NULL. Otherwise, return a pointer to the first node where
 * the value is found.
 *
 * Description: This function prints the value every time
 * it is compared in the list and uses the square root of the list size as the jump step.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *jump;

	if (list == NULL)
		return (NULL);

	for (node = jump = list; jump->next != NULL && jump->n < value;)
	{
		node = jump;
		if (jump->express != NULL)
		{
			jump = jump->express;
			printf("Value checked at index [%ld] = [%d]\n",
					jump->index, jump->n);
		}
		else
		{
			while (jump->next != NULL)
				jump = jump->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, jump->index);

	while (node->index < jump->index && node->n < value)
	{
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
		node = node->next;
	}

	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
