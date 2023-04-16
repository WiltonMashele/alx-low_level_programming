#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - function that reads a text file and prints.
 * @filename: the name of the file.
 * @letters: the number of letters to be printed
 *
 * Return: the actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)

{
	int file;
	char *text;
	ssize_t bytesRead, bytesWritten;

	if (filename == NULL)
	return (0);

	int file;
	file = open(filename, O_RDONLY);

	if (file == -1)
	{
	return (0);
	}

	text = malloc(letters + 1);

	if (text == NULL)
	{
	close(file);
	return (0);
	}

	bytesRead = read(file, text, letters);

	if (bytesRead == -1)
	{
	free(text);
	close(file);
	return (0);
	}

	text[bytesRead] = '\0';

	bytesWritten = write(STDOUT_FILENO, text, bytesRead);

	if (bytesWritten == -1)
	{
        free(text);
        close(file);
	return (0);
	}

	free(text);
	close(file);

	return (bytesWritten);
}
