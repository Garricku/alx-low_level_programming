#include "main.h"

/**
 * main - Entry point.
 * @ac: The argument count.
 * @av: The arguments vector.
 * Return: 0 (Success).
 */

int main(int ac, char **av)
{
	int file_from, file_to;
	ssize_t readBytes, writeBytes;
	char buff[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	file_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2])
		close(file_to);
		exit(99);
	}
	while ((readBytes = read(file_from, buff, 1024)) > 0)
	{
		writeBytes = write(file_to, buff, readBytes);
		if (writeBytes == -1 || writeBytes != readBytes)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			close(file_from);
			close(file_to);
			exit(99);
		}
	}
	if (readBytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		close(file_from);
		close(file_to);
		exit(98);
	}
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		close(file_to);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
