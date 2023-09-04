#include "main.h"
#include <elf.h>

/**
 * check_file - Checks if the file name is valid and can be opened.
 * @filename: The file name.
 * Return: The file descriptor, or -1 on error.
 */
int check_file(char *filename)
{
	int fd;

	if (filename == NULL || *filename == '\0')
	{
		dprintf(STDERR_FILENO, "Invalid file name\n");
		return (-1);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Cannot open file %s\n", filename);
		return (-1);
	}

	return (fd);
}

/**
 * check_elf - Checks if the file is an ELF file.
 * @fd: The file descriptor.
 * @buffer: The buffer to store the first 64 bytes of the file.
 * Return: 0 on success, or -1 on error.
 */
int check_elf(int fd, unsigned char *buffer)
{
	ssize_t bytes_read;

	bytes_read = read(fd, buffer, 64);
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Cannot read file\n");
		return (-1);
	}

	if (bytes_read < 64)
	{
		dprintf(STDERR_FILENO, "File is too short\n");
		return (-1);
	}

	if (buffer[0] != 0x7f || strncmp((char *)buffer + 1, "ELF", 3) != 0)
	{
		dprintf(STDERR_FILENO, "Not an ELF file\n");
		return (-1);
	}

	return (0);
}

/**
 * print_elf_header - Prints the information in the ELF header.
 * @buffer: The buffer containing the ELF header data.
 */
void print_elf_header(unsigned char *buffer)
{
	Elf64_Ehdr *header;

	header = (Elf64_Ehdr *)buffer;

	/* Print magic number */
	printf("Magic:   ");
	for (int i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");

	/* Print class */
	printf("Class:                             ");
	switch (header->e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", header->e_ident[EI_CLASS]);
			break;
	}

	/* Print data */
	printf("Data:                              ");
	switch (header->e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
			case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
			case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", header->e_ident[EI_CLASS]);
			break;
	}
	return (0);
}
