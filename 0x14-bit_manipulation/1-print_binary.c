#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number.
 * bit - to store value of a single bit
 * @n : input number
 * Shift the mask to the right by 1 bit
 */

void print_binary(unsigned long int n)

{
	int size = sizeof(unsigned long int) * 8;

	for (int i = size - 1; i >= 0; i--)
	{
	unsigned long bit = (n >> 1) & 1;

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
