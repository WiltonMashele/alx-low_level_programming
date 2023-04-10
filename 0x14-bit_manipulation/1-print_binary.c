#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number.
 * bitCount - counts the number of set bits.
 * @n : input number
 *
 */

void print_binary(unsigned long int n)

{
	int bitCount = sizeof(unsigned long int) * 8;

	while (bitCount--)
	{
		printf("%d", (n & (1UL << bitCount)) ? 1 : 0);
	}
}
