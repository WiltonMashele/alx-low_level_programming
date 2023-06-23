#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int _strlen(char *s)
{
	char *ptr = s;

	while (*ptr)
	{
		ptr++;
	}
	return (ptr - s);
}
