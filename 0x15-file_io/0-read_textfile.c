#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: Number of letters read and printed. 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileDescriptor, letterRead, letterWritten;
	char *buffer;

	if (filename == NULL)
		return (0);

	/* Open the file for reading */
	fileDescriptor = open(filename, O_RDONLY);
	if (fileDescriptor == -1)
		return (0);

	buffer = malloc(letters); /* Allocate memory for the buffer */
	if (buffer == NULL)
	{
		close(fileDescriptor);
		return (0);
	}

	letterRead = read(fileDescriptor, buffer, letters); /* Read file to  buffer */
	if (letterRead == -1)
	{
		free(buffer);
		close(fileDescriptor);
		return (0);
	}

	/* Write the buffer to the standard output */
	letterWritten = write(STDOUT_FILENO, buffer, letterRead);
	if (letterWritten == -1 || (size_t)letterWritten != (size_t)letterRead)
	{
		free(buffer);
		close(fileDescriptor);
		return (0);
	}
	free(buffer);
	close(fileDescriptor);

	return (letterRead);
}
