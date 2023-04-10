#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number.
 * mask - used to extract number of n.
 * @n : input number
 * Shift the mask to the right by 1 bit
 */

void print_binary(unsigned long int n)

{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (mask)
	{
	printf("%d", (n & mask) ? 1 : 0);
	mask >>= 1;
	}
}
