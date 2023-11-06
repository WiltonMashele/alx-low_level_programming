#include "search_algos.h"
/**
 * linear_skip - Searches for a value in a sorted singly linked list of integers
 *               using the linear skip algorithm.
 * @list: A pointer to the head of the linked list to search.
 * @value: The value to search for.
 *
 * Return: If the value is not found or the head of the list is NULL, return NULL.
 *         Otherwise, return a pointer to the first node where the value is found.
 *
 * Description: This function prints the value every time it is compared in the list
 *              and uses the square root of the list size as the jump step.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	if (list == NULL || size == 0)
		return NULL;

	size_t step = 0;
	size_t step_size = sqrt(size);
	listint_t *node = list;
	listint_t *jump = list;

	while (jump->index + 1 < size && jump->n < value)
	{
		node = jump;
		for (step += step_size; jump->index < step; jump = jump->next)
		{
			if (jump->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
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
