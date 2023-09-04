#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to STDOUT_FILENO.
 * @filename: The text file to be read and printed to STDOUT.
 * @letters: The number of letters it should read and printed.
 * Return: The actual number of letters that could read and printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buff;
	ssize_t bytesRead, bytesWritten;

	if (filename == NULL)
	{
		return (0);
	}
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(file);
		return (0);
	}
	bytesRead = read(file, buff, letters);
	if (bytesRead == -1)
	{
		free(buff);
		close(file);
		return (0);
	}
	bytesWritten = write(STDOUT_FILENO, buff, bytesRead);
	if (bytesWritten == -1 || bytesWritten != bytesRead)
	{
		free(buff);
		close(file);
		return (0);
	}
	free(buff);
	close(file);
	return (bytesWritten);
}
