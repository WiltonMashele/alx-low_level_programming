#include "search_algos.h"
/**
 * linear_search - Perform a linear search for a value in an integer array.
 *
 * @array: Pointer to the first element of the array to search.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: Index of the first occurrence of 'value' if found, or -1 if not found.
 *
 * Description: This function prints each value compared during the search.
 */
int linear_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	for (int i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		return i;
	}

	return (-1);
}
