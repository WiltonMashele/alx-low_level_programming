#include "search_algos.h"

/**
  * jump_search - Locates a value in a sorted integer array
  *              using the jump search algorithm.
  * @array: Pointer to the first element of the array.
  * @size: Number of elements in the array.
  * @value: The value to find.
  *
  * Return: If not found or array is NULL, return -1.
  *         Otherwise, return the index of the first occurrence.
  *
  * Description: It prints the compared values and employs the square root
  *              of the array size as the jumping step.
  */
int jump_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return -1;

	size_t jump = sqrt(size);
	size_t prev = 0;

	printf("Value checked array[0] = [%d]\n", array[0]);
	while (array[jump] < value && jump < size)
	{
		printf("Value checked array[%lu] = [%d]\n", jump, array[jump]);
		prev = jump;
		jump += sqrt(size);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, jump);

	for (; prev < jump && prev < size; prev++)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (int)prev;
	}

	return -1;
}
