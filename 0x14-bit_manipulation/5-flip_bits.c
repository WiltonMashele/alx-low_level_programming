#include "main.h"
#include <stdio.h>

/**
 * flip_bits - returns the number of bits.
 * bits you would need to flip to get from one number to another.
 * @n: first number
 * @m: second number
 * Return: num_bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result != 0)
	{
	xor_result >>= 1;
	count += (xor_result & 1) == 1;
	xor_result = xor_result >> 1;
	}

	return (count);
}
