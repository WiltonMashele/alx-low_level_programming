#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: the base
 * @y: the exponent
 *
 * Return: x raised to the power of y, or -1 if y is negative
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	return (-1);	/*Error case: y is negative*/
	}
	else if (y == 0)
	{
	return (1);	/*Base case: x^0 is 1*/
	}
	else
	{
	return (x * _pow_recursion(x, y - 1));	/*Recursive case*/
	}
}
