#include "main.h"

/**
 * *_strcat: This function appends the src string to the dest string
 * and overwriting the terminating null byte (\0) at the end of dest
 * then adds a terminating null byte
 * 
 * Returns a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)

{
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
