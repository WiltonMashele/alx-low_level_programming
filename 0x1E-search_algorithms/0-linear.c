/*
 * File: 0-linear.c
 * Auth: Wilton Mashele
 */

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
	if (array == NULL)
	return (-1);

	for (size_t i = 0; i < size; i++)
	{
	if (array[i] == value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		return (i);
	}
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	return (-1);
}
