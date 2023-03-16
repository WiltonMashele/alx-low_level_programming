#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc
 *
 * @b: number of bytes to allocate
 *
 * Return: pointer to the allocated memory
 *         exit with status value of 98 if malloc fails
 */

void *malloc_checked(unsigned int b)

{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
	exit(98);
	}
	return (ptr);
}
