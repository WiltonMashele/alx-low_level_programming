#include "main.h"

/**
 * is_prime_number - checks whether a positive integer is prime.
 *
 * @n: The positive integer to check.
 *
 * Return: 1 if n is prime, otherwise return 0.
 */

int is_prime_number(int n)
{
	int i = 5;
	if (n <= 1)
	{
	return (0);	/*1 and any number less than 1 are not prime*/
	}
	/*2 and 3 are prime*/
	else if (n <= 3)
	{
	return (1);
	}
	/*Numbers divisible by 2 or 3 are not prime*/
	else if (n % 2 == 0 || n % 3 == 0)
	{
	return (0);
	}

	/*Check if n is divisible by any number of the form 6k ± 1*/
	while (i * i <= n)
	{
	if (n % i == 0 || n % (i + 2) == 0)
	{
	return (0);
	}
	i += 6;
	}

	/*If n is not divisible by any of these numbers, it is prime*/
	return (1);
}
