#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: The name of the file to be created.
 * @text_content: The content of the created file.
 * Return: 1 on success or -1 on failure and an error message.
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t writeBytes, numOfChars;

	if (filename == NULL)
	{
		return (-1);
	}

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
	{
		write(STDERR_FILENO, "Error: Failed to create file.\n", 30);
		return (-1);
	}

	if (text_content != NULL)
	{
		numOfChars = 0;
		while (text_content[numOfChars] != '\0')
		{
			numOfChars++;
		}

		writeBytes = write(file, text_content, numOfChars);
		if (writeBytes == -1 || writeBytes != numOfChars)
		{
			write(STDERR_FILENO, "Error: Failed to write.\n", 24);
			close(file);
			return (-1);
		}
	}

	close(file);
	return (1);
}
