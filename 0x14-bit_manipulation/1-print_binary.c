#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number.
 * and prints as '0' or '1'.
 * @n: unsigned long int number to be printed in binary.
 * This function takes an unsigned long int number and prints.
 */

void print_binary(unsigned long int n)

{
	if (n > 1)
	{
	print_binary(n >> 1);
	}
	 _putchar((n & 1) + '0');
}
