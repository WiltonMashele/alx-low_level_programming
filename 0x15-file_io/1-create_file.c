#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * create_file - a function that creates a file.
 * @filename: the name of the file to be created.
 * @text_content: to be written in the file.
 *
 * Return: 1 on success or -1 on failure.
 */

int create_file(const char *filename, char *text_content)

{
	int file, i = 0;

	if (filename == NULL)
	{
	return (-1);
	}

	if (text_content == NULL)
	text_content = "";

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
	return (-1);

	while (text_content[i] != '\0')
	i++;

	write(file, text_content, i);
	close(file);

	return (1);
}
