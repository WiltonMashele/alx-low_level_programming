#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the string to be duplicated
 * Return: a pointer to the newly allocated space in memory
 * containing the duplicated string or NULL if str is NULL
 */
char *_strdup(char *str)
{
	char *dup_str;
	unsigned int len = 0, i = 0;

	if (str == NULL)
		return (NULL);

	/* Determine length of the string */
	while (str[len] != '\0')
		len++;

	/* Allocate memory for the duplicate string */
	dup_str = malloc(sizeof(char) * (len + 1));

	if (dup_str == NULL)
		return (NULL);

	/* Copy the string */
	for (i = 0; i < len; i++)
		dup_str[i] = str[i];

	/* Add null-terminating character */
	dup_str[len] = '\0';

	return (dup_str);
}
