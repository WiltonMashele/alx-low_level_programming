#include "search_algos.h"

/**
 * interpolation_search - Interpolation search for a value in a sorted array.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: Index of the found value, or -1 if not found or the array is NULL.
 *
 * Description: Performs an interpolation search on the sorted array of integers.
 *              Prints values compared during the search.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t left, right, position;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		position = left + (((double)(right - left) / (array[right] - array[left])) * (value - array[left]));

		if (position < size)
			printf("Value checked array[%ld] = [%d]\n", position, array[position]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", position);
			break;
		}

		if (array[position] == value)
			return (position);
		if (array[position] > value)
			right = position - 1;
		else
			left = position + 1;
	}

	return (-1);
}
