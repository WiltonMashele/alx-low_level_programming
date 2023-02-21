#include "main.h"

/*
*Computes the absolute_value of an integer.
*@param num The integer to compute the absolute value of.
*@return The absolute value of the input integer.
 */

int _abs(int num)

{
	if (num < 0)
	{
	num = -num;
	}
	return (num);
}
