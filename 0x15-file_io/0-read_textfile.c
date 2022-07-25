#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: file to read from
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd; /* file descriptor */
	ssize_t n_read, n_wrote;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, 0_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	n_read = read(fd, buffer, letters);
	n_wrote = write(STDOUT_FILENO, buffer, n_read);

	close(fd);

	free(buffer);

	return (n_wrote);
}
