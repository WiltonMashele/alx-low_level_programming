#include "search_algos.h"

/**
 * binary_search_recursive - Recursively searches for a value in a sorted array
 * using binary search.
 *
 * @array: A pointer to the first element of the array to search.
 * @left: The starting index of the subarray.
 * @right: The ending index of the subarray.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 * Otherwise, the index where the value is located.
 *
 * Description: Prints the subarray being searched after each change.
 */
int binary_search_recursive(int *array, size_t left, size_t right, int value)
{
	if (array == NULL)
		return (-1);

	if (left <= right)
	{
		size_t mid = left + (right - left) / 2;

		printf("Searching in array: %d", array[left]);
		for (size_t i = left + 1; i <= right; i++)
			printf(", %d", array[i]);
		printf("\n");

		if (array[mid] == value)
			return mid;
		if (array[mid] > value)
			return binary_search_recursive(array, left, mid - 1, value);
		return binary_search_recursive(array, mid + 1, right, value);
	}

	return (-1);
}

/**
 * advanced_binary - Searches for a value in a sorted array using advanced
 * binary search.
 *
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 * Otherwise, the index where the value is located.
 *
 * Description: Calls the recursive binary search function.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return binary_search_recursive(array, 0, size - 1, value);
}
