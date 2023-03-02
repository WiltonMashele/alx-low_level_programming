#include "main.h"

/**
 * _strncpy - Copy at most n characters from src to dest.
 * @dest: A pointer to the destination buffer.
 * @src: A pointer to the source string.
 * @n: The maximum number of characters to copy.
 *
 * Copy chars from src to dest until null or n chars copied.
 * Fill remaining chars with null if necessary.
 * Return: A pointer to the destination buffer.
 */

char *_strncpy(char *dest, char *src, int n)

{

	int index = 0, src_len = 0;

	while (src[index++])
	src_len++;

	for (index = 0; src[index] && index < n; index++)
	dest[index] = src[index];

	for (index = src_len; index < n; index++)
	dest[index] = '\0';

	return (dest);
}
