#include "main.h"
#include <stdio.h>


/**
 * _strcat - concatenates two strings
 * @dest: the destination string to append to
 * @src: the source string to copy from
 *
 * Description: _strcat appends the src string to the dest string,
 * overwriting the terminating null byte at the end of dest, and then
 * adds a terminating null byte. The strings are concatenated in place.
 *
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)

{
	/* function implementation */
	char *p = dest;

	while (*p != '\0')
	{
	p++;
	}

	while (*src != '\0')
	{
	*p++ = *src++;
	}

	*p = '\0';
	return (dest);
}
