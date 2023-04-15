#include "main.h"
#include <stdio>

/**
 * appends_text_to_file  - appends text at the end of a life.
 * filename is the name of the file.
 *
 * Return: 1 on success and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)

{
	if (filename == NULL)
	{
		return (-1);
	}

	FILE *file = fopen(filename, "a");

	if (file == NULL)
	{
		return (-1);
	}

	if(text_content == NULL)
	{
		fclose(file);
		return (1);
	}

	int results = fputs(text_content, file)

	if (result == EOF)
	{
		fclose(file);
		return (-1);
	}

	fclose(file);
	return (1);
}
