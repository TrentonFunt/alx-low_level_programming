#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL-terminated string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fileDescriptor, write_cont, close_cont;

	/* Check if filename is NULL */
	if (filename == NULL)
		return (-1);

	/* Opening the file with required flags and permissions */
	fileDescriptor = open(filename, O_WRONLY | O_APPEND);
	if (fileDescriptor == -1)
		return (-1);

	/* If text_content is not NULL, and append to the file */
	if (text_content != NULL)
	{
		write_cont = write(fileDescriptor, text_content, strlen(text_content));
		if (write_cont == -1)
		{
			perror("Error when writing to file");
			close_cont = close(fileDescriptor);

			if (close_cont == -1)
				perror("Error when closing file");
			return (-1);
		}
	}
	close_cont = close(fileDescriptor);
	if (close_cont == -1)
	{
		perror("Error when closing file");
		return (-1);
	}

	return (1);
}
