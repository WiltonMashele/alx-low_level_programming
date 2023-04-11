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
	int bit_count = sizeof(unsigned long int) * 8;
	int i;

	for (i = bit_count - 1; i >= 0; i--)
	{
		unsigned long int mask = 1UL << i;

		if (n & mask)
			putchar('1');
		else
			putchar('0');
	}
	putchar('\n');
}
