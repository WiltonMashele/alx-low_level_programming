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

	for (int i = size - 1; i >= 0; i--)
	{
	unsigned long int mask = 1UL << i;
	unsigned long bit = (n & mask) ? 1UL : OUL;

	if (bit)
	{
	write(1, "1", 1);
	}
	else
	{
	write(1, "0", 1);
	}
	}
}
