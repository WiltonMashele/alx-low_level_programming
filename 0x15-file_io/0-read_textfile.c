#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
	ssize_t bytesRead, bytesWritten;
	char *text;

	if (filename == NULL)
	return (0);

	file = open(filename, O_RDONLY)
	if (file == -1)
	{
	return (0);
	}

	tetx = malloc(letters + 1);
	if (text == NULL)
	{
	close(file);
	return (0);
	}

	bytesRead = read(file, text, letters)
	if (bytesRand == -1)
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
