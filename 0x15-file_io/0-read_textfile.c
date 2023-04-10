#include "main.h"

/**
 * a function that reads a text file 
 * and prints it to the POSIX standard output.
 * where letters is the number of letters it should read and print
 * returns the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
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

}
