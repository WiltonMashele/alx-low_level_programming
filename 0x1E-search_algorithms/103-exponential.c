#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array
 *                 using binary search.
 * @array: A pointer to the first element of the array.
 * @left: The start index of the subarray.
 * @right: The end index of the subarray.
 * @value: The value to search for.
 *
 * Return: If the value is not found or the array is NULL, return -1.
 * Otherwise, return the index where the value is located.
 *
 * Description: Prints the subarray being searched after each iteration.
 */
int binary_search(int *array, size_t left, size_t right, int value)
{
	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		size_t mid = left + (right - left) / 2;
		printf("Searching in array: ");
		for (size_t i = left; i < right; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[right]);

		if (array[mid] == value)
			return mid;
		if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}

	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array
 *                      using exponential search.
 * @array: A pointer to the first element of the array.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not found or the array is NULL, return -1.
 * Otherwise, return the index where the value is located.
 *
 * Description: Prints values in the array that are checked.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		while (i < size && array[i] <= value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			i *= 2;
		}
	}

	right = (i < size) ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return binary_search(array, i / 2, right, value);
}
