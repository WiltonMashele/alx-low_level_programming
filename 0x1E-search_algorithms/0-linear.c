#include "search_algos.h"
/**
 * linear_search - Searches for a value in an array
 *	using the linear search algorithm.
 * @array: Pointer to the array to search.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is found, return the index where it's located.
 * If not found, return -1.
 *
 * Description: This function iterates through the array,
 *	printing each compared value.
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (size == 0 || array == NULL)
		return (-1);
	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
