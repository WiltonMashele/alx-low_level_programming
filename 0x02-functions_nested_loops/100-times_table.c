#include "main.h"

/* Prints the n times table, starting with 0. */

void print_times_table(int n)

{
	/* Check if n is in the valid range. */
	if (n < 0 || n > 15)
	{
        return;
	}

	/* Print the table. */
	for (int i = 0; i <= n; i++)
	{
	for (int j = 0; j <= n; j++)
	{
	/* Calculate the product of i and j. */
	int product = i * j;

	/* Print the product. */
	if (product < 10)
	{
	 _putchar(product + '0');  /* Single-digit number. */
	_putchar(' ');
	} 
	else if (product < 100) 
	{
	_putchar(product / 10 + '0');  /* Tens digit. */
	_putchar(product % 10 + '0');  /* Ones digit. */
	} 
	else
	{
 	/* Product is too large to fit on one line. */
	return;
	}
        }

        /* Move to the next line. */
	_putchar('\n');
	}
}
