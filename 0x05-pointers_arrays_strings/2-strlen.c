#include <stdio.h>

/**
  * _strlen - return the lenth of the string as an int value
  * @s: the string to measure.
  *
  * Return: Int value of the lenth.
  */

size_t _strlen(const char *str)

{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);

}
