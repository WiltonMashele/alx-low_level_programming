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
	char *text;
	ssize_t let, w;
	int file;

	text = malloc(letters);
	if (!text)
	{
	return (0);
	}

	if (!filename)
	{
	return (0);
	}

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
	free(text);
	return (0);
	}

	let = read(file, text, letters);
	w = write(STDOUT_FILENO, text, let);
	close(file);

	free(text);
	return (w);
}
