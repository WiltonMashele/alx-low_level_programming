#include "main.h"
#include <stddef.h>
#include <stdlib.h>


/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The number of arguments.
 * @av: An array of pointers to strings containing the arguments.
 *
 * Return: If ac == 0, av == NULL, or the function fails - NULL.
 * Otherwise - a pointer to the new string.
 */

char *argstostr(int ac, char **av)

{
	char *concat_str;
	int i, j, len, total_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len])
			len++;
		total_len += len + 1;
	}

	concat_str = malloc((total_len + 1) * sizeof(char));

	if (concat_str == NULL)
		return (NULL);

	for (i = 0, j = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len])
		{
			concat_str[j++] = av[i][len++];
		}
		concat_str[j++] = '\n';
	}
	concat_str[j] = '\0';

	return (concat_str);
}
