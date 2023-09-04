#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The file for text to be added to.
 * @text_content: The text to be added to the file.
 * Return: 1 on success or -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t writeBytes, chars;

	if (filename == NULL)
	{
		return (-1);
	}

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		chars = 0;
		while (text_content[chars] != '\0')
		{
			chars++;
		}

		writeBytes = write(file, text_content, chars);
		if (writeBytes == -1 || writeBytes != chars)
		{
			close(file);
			return (-1);
		}
	}

	close(file);
	return (1);
}
