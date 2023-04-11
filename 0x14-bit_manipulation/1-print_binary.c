#include "main.h"
#include <stdio.h>

 /**
  * _putchar - helper function to print a single character.
  * @c: character to be printed.
  *  Return: On success, the character printed as an unsigned char
  */
int _putchar(char c)
{
	putchar(c);
}

/**
 * print_binary - prints the binary representation of a number.
 * num_bits - the number of bits in unsigned long int
 * @ >> i: shift right and AND with 1 to get the value bit
 * and prints as '0' or '1'.
 * @n: unsigned long int number to be printed in binary.
 * this function takes an unsigned long int number and prints.
 */
void print_binary(unsigned long int n)

{
	int num_bits = sizeof(unsigned long int) * 8;

	/*start from the most significant bit and print each bit*/
	for (int i = num_bits - 1; i >= 0; i--)
	{
		_putchar(((n >> i) & 1) + '0');
	}
}
