#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * display_error_message - Displays an error message.
 * Display an error message and exit with status code 98.
 * @message: The error message to be display
 * Display information about the ELF header of an ELF file
 * Open an ELF file and read its header
 * open_elf_file - opens an ELF file
 */

void display_error_message(char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(98);
}


/**
 * open_elf_file - opens an ELF file
 * Open an ELF file and read its header.
 * @filename: The name of the ELF file to open
 * Return: The file descriptor of the opened file, or -1 on error
 */

int open_elf_file(char *filename)
{
	int fd = open(filename, O_RDONLY);
	Elf32_Ehdr elf_header;
	int bytes_read;

	if (fd < 0)
	{
	display_error_message("Unable to open the ELF file");
	}

	bytes_read = read(fd, &elf_header, sizeof(elf_header));

	if (bytes_read < 0)
	{
	display_error_message("Unable to read the ELF header");
	}

	if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
	elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
	elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
	elf_header.e_ident[EI_MAG3] != ELFMAG3)
	{
	display_error_message("The file is not an ELF file");
	}

	return (fd);
}

/**
 * display_elf_header_info - Displays information about the file.
 * Display information about the ELF header of an ELF file
 * @filename: The name of the file to analyze.
 */

void display_elf_header_info(char *filename)
{
	int fd = open_elf_file(filename);

	Elf32_Ehdr elf_header;
	int i;

	lseek(fd, 0, SEEK_SET);
	read(fd, &elf_header, sizeof(elf_header));

	printf("Magic:");
	for (i = 0; i < EI_NIDENT; i++)
	{
	printf(" %02x", elf_header.e_ident[i]);
	}
	printf("\n");

	printf("Class: %s\n", elf_header.e_ident[EI_CLASS] ==
		ELFCLASS32 ? "ELF32" : "ELF64");
	printf("Data: %s\n", elf_header.e_ident[EI_DATA] ==
		ELFDATA2MSB ? "big endian" : "little endian");
	printf("Version: %d\n", elf_header.e_ident[EI_VERSION]);
	printf("OS/ABI: %d\n", elf_header.e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", elf_header.e_ident[EI_ABIVERSION]);
	printf("Type: %d\n", elf_header.e_type);
	printf("Entry point address: %x\n", elf_header.e_entry);

	close(fd);
}

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the arguments passed to the program.
 * Return: 0 on success, 98 on failure
 */

int main(int argc, char **argv)
{
	if (argc != 2)
	{
	display_error_message("Usage: elf_header elf_filename");
	}

	display_elf_header_info(argv[1]);
	return (0);
}
