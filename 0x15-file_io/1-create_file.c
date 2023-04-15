#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * create_file - a function that creates a file.
 * filename the name of the file to be created.
 * @text_content: to be written in the file.
 * 
 *
 * Return: 1 on success or -1 on failure.
 */

int create_file(const char *filename, char *text_content)

{
	if (filename == NULL)
	{
		return (-1);
	}

	FILE *file = fopen(filename, "w");

	if (file == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		size_t bytes_written = fwrite(text_content, 1, strlen(text_content), file);

		if (bytes_written != strlen(text_content))
		{
			fclose(file);
			return (-1);
		}
	}

	fclose(file);
	return (1);
}
