#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile - Reads file and prints to POSIX standard output.
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 * @filename: the name of the file to be read
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)

{
	if (filename == NULL)
	{
		return (0);
	}

	FILE *file = fopen(filename, "r")
		if (file == NULL)
		{
			return (0);
		}

	char *buffer = (char *)malloc(letters * sizeof(char);

	if (buffer == NULL)
	{
	fclose(file);
	return (0);

	ssize_t bytes_read = fread(buffer, sizeof(char), letters, file);

	if (bytes_read < 0)
	{
	fclose(file);
	free(buffer)
	return (0);

	ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (bytes_written < 0 || bytes_written != bytes_read)
	{
	fclose(file);
	free(buffer);
	return (0);
	}

	fclose(file);
	free(bufeer);
	return (bytes_written);
}
