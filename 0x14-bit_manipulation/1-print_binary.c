#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number.
 * num_bits - calculates the number of bits
 * @n : input number
 * 
 */

/*helper function to print a single character*/
void _putchar(char c)
{
	putchar(c)
}

void print_binary(unsigned long int n)

{
	int num_bits = sizeof(unsigned long int) * 8;

	for (int i = num_bits - 1; i >= 0; i--)
	{
		_putchar(((n >> i) & 1) + '0');
	}
}
