#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * main - Displays information from the ELF header of a given file
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 on success, otherwise 98 for error
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot read file %s\n", argv[1]);
		exit(98);
	}

	if (read(fd, &header, sizeof(header)) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot read file %s\n", argv[1]);
		close(fd);
		exit(98);
	}

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (int i = 0; i < 16; i++)
		printf("%02x ", header.e_ident[i]);
	printf("\n");
	printf("  Class:                             ");
	if (header.e_ident[EI_CLASS] == ELFCLASS64)
		printf("ELF64\n");
	else if (header.e_ident[EI_CLASS] == ELFCLASS32)
		printf("ELF32\n");

	close(fd);
	return (0);
}
