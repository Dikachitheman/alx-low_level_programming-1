#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: file to read from
 * @letters: numbers of letters it should read and print
 *
 * Return: actual number of letters printed it could read and print.
 * It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd; /* file descriptor */
	ssize_t n_read, n_wrote;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDWR);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	n_read = read(fd, buffer, letters);
	if (n_read == -1)
		return (0);

	n_wrote = write(STDOUT_FILENO, buffer, n_read);

	if (n_wrote == -1 || n_read != n_wrote)
		return (0);

	free(buffer);

	close(fd);

	return (n_wrote);
}
