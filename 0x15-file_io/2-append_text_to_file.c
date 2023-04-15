#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file  - append text at the end of a life.
 * @filename: The name of the file to append text to.
 * @text_content: The text content to append to the file.
 *
 * Return: 1 on success and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)

{
	int i = 0;
	int bytes_written;
	int file;

	if (filename == NULL)
	{
	return (-1);
	}

	if (text_content == NULL)
	{
	text_content = "";
	}

	while (text_content[i] != '\0')
	{
	i++;
	}

	file = open(filename, O_WRONLY | O_APPEND | O_CREAT, 0644);

	if (file == -1)
	{
	return (-1);
	}

	bytes_written = write(file, text_content, i);

	if (bytes_written != i)
	{
	return (-1);
	}

	close(file);

	return (1);

}
