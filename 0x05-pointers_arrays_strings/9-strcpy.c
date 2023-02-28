#include "main.h"

/**
 * _strcpy - Copies a string from src to dest.
 *
 * @dest: Destination string.
 * @src: Source string.
 *
 * Return: Pointer to dest.
 */

char *_strcpy(char *dest, char *src)

{
	int index = 0;

	while (*src != '\0')
	{
		dest[index] = *src;
		index++;
		src++;
	}
	return (dest);
}
