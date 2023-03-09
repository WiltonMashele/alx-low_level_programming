#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 * sqrt: square root
 *
 * Return: the natural sqrt of n, or -1 if n does not have a natural sqrt
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
	return (-1);	/*Error case: n is negative*/
	}
	else if (n <= 1)
	{
	return (n);	/*Base case: n is 0 or 1*/
	}
	else
	{
	return (_sqrt_helper(n, 1, n));	/*Recursive case*/
	}
}

/**
 * _sqrt_helper - helper function for _sqrt_recursion
 * sqrt: square root
 * @n: the number to find the square root of
 * @low: the lowest possible square root for n
 * @high: the highest possible square root for n
 *
 * Return: the natural sqrt of n, or -1 if n does not have a natural sqrt
 */

int _sqrt_helper(int n, int low, int high)
{
	int mid = (low + high) / 2;

	if (mid * mid == n)
	{
	return (mid);	/*Base case: mid is the square root of n*/
	}
	else if (mid * mid > n)
	{
	return (_sqrt_helper(n, low, mid - 1));	/*Recursive: search the lower half*/
	}
	else
	{
	if ((mid + 1) * (mid + 1) > n)
	{
	return (mid);	/*Base case: mid+1 is greater than the square root of n*/
	}
	else
	{
	return (_sqrt_helper(n, mid + 1, high));	/*Recursive: search the upper half*/
	}
	}
}
