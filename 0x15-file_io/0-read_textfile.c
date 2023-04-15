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
	if (filename == NULL)
	return (0);

	int file = open(filename, O_RDONLY)
	
	if (file == -1)
	{
	return (0);
	}

	char *text = malloc(letters + 1);
	
	if (text == NULL)
	{
	close(file);
	return (0);
	}

	ssize_t bytesRead = read(file, text, letters)

	if (bytesRand == -1)
	{
	free(text);
	close(file);
	return (0);
	}

	text[bytesRead] = '\0';

	ssize_t bytesWritten = write(STDOUT_FILENO, text, bytesRead);

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
