#include "search_algos.h"
/**
 * jump_list - Search for an element in a sorted singly linked list of integers
 *             using the jump search algorithm.
 * @list: A pointer to the head of the linked list to be searched.
 * @size: The number of nodes in the list.
 * @value: The value to be searched for.
 *
 * Return: If the value is not present or the head of the list is NULL, return NULL.
 *         Otherwise, return a pointer to the first node where the value is found.
 *
 * Description: This function prints the value every time it is compared in the list.
 *              It uses the square root of the list size as the jump step.
 */
int jump_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return -1;

	int m = (int)sqrt((double)size);
	int k = 0;
	int prev = 0;
	int index = 0;

	while (index < (int)size && array[index] < value)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		prev = index;
		index = k * m;
		k++;
	}

	printf("Value found between indexes [%d] and [%d]\n", prev, index);

	for (; prev <= index && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return prev;
	}

	return -1;
}
