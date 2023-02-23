#include <stdio.h>

/**
 * main - Prints the largest prime factor of the number 612852475143
 *
 * Return: always 0 (sucess)
 */

int main(void)

{
	unsigned long int num = 612852475143;
	unsigned long int prim;

	prim = 3;
	while (prim < num / 2)
	{
		if ((num % prim) == 0)
		{
			if ((prim % 3) == 2)
				printf(",%lu ", prim);
		}

		prim += 2;
	}

	putchar('\n');
	return (0);
}