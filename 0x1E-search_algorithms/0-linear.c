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
int linear_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
