#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns the value of a bit at a given index.
 * @index: the index of a bit you want to get, starting from 0
 * @n: The unsigned long integer whose bit value is to be determined
 * Return: the bit value at the given index, or -1 if there was an error.
 *
 */

int get_bit(unsigned long int n, unsigned int index)

{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
