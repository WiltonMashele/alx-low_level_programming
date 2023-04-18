#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

/**
 * error - print an error message and exit the program with status 1.
 *
 * @msg: the error message to print.
 */

void error(char *msg)
{
	dprintf(STDERR_FILENO, "%s\n", msg),
		exit(1);
}

/**
 * main - a program that copies the content of a file to another file.
 *
 * @argc: the number of command-line arguments.
 * @argv: an array of command-line argument strings.
 *
 * Return: 0 on success, 1 on error.
 */

int main(int argc, char *argv[])

{
	int file_from, file_to, num1, num2;
	char buf[1024];

	if (argc != 3)
	error("Usage: cp file_from file_to");

	file_from = open(argv[1], O_RDONLY);

	if (file_from == -1)
	error("Error: Can't read from file");

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR |
			S_IRGRP | S_IWGRP | S_IROTH);

	if (file_to == -1)
	error("Error: Can't write to file");

	while ((num1 = read(file_from, buf, 1024)) > 0)
	{
	num2 = write(file_to, buf, num1);
	if (num2 != num1)
	error("Error: Can't write to file");
	}

	if (close(file_from) == -1)
	error("Error: Can't close file_from");

	if (close(file_to) == -1)
	error("Error: Can't close file_to");

	return (0);
}
