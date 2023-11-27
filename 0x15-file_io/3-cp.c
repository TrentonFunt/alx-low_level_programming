#include "main.h"

/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of strings containing the command-line arguments.
 *
 * Return: 0 on success, or exit with appropriate error codes on failure.
 */
int main(int argc, char *argv[])
{
	int from_fl, to_fl;

	/* Check if the correct number of arguments is provided */
	if (argc != 3)
	{
		handle_error(97, "Usage: cp file_from file_to");
	}

	/* Open the source and destination files */
	from_fl = open_source_file(argv[1]);
	to_fl = open_destination_file(argv[2]);

	/* Copy the content from the source file to the destination file */
	copy_file(from_fl, to_fl);

	/* Close the file descriptors */
	close(from_fl);
	close(to_fl);

	return (0);
}

/**
 * handle_error - Handles errors by printing an error message and exiting.
 * @exit_code: The exit code to use when exiting the program.
 * @message: The error message to print.
 */
void handle_error(int exit_code, const char *message)
{
	dprintf(2, "%s\n", message);
	exit(exit_code);
}

/**
 * open_source_file - Opens the source file for reading.
 * @filename: The name of the source file.
 *
 * Return: The file descriptor of the opened file.
 */
int open_source_file(const char *filename)
{
	int fl = open(filename, O_RDONLY);

	/* Check if the file can be opened */
	if (fl == -1)
	{
		handle_error(98, "Error: Can't read from file");
	}

	return (fl);
}

/**
 * open_destination_file - Opens the destination file for writing.
 * @filename: The name of the destination file.
 *
 * Return: The file descriptor of the opened file.
 */
int open_destination_file(const char *filename)
{
	int fl = open(
		      filename, O_WRONLY | O_CREAT | O_TRUNC,
		      S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	/* Check if the file can be opened or created */
	if (fl == -1)
	{
		handle_error(99, "Error: Can't write to file");
	}

	return (fl);
}

/**
 * copy_file - Copies the content from the source file to the destination file.
 * @origin_fl: The file descriptor of the source file.
 * @dest_fl: The file descriptor of the destination file.
 */
void copy_file(int origin_fl, int dest_fl)
{
	ssize_t content_read, content_written;
	char buffer[BUFFER_SIZE];

	/* Read from origin file and write to the dest file using a buffer */
	while ((content_read = read(origin_fl, buffer, BUFFER_SIZE)) > 0)
	{
		content_written = write(dest_fl, buffer, content_read);

		/* Checking if writing to the file fails */
		if (content_written == -1)
		{
			handle_error(99, "Error: Can't write to file");
		}
	}

	/* Checking for read errors */
	if (content_read == -1)
	{
		handle_error(98, "Error: Can't read from file");
	}
}
