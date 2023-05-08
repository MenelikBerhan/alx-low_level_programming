#include "main.h"

/**
 * read_textfile - reads and prints a file to the POSIX standard output.
 * @filename: name of the file.
 * @letters: no of bytes to be read amd printed from file.
 *
 * Return: number of letters actualy read and printed, or
 * 0 if filename is NULL or if file could not be opened or read or if
 * write failes or if the expected number of bytes are not written.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, len_read;
	char *text = malloc(sizeof(char) * (letters));

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(text);
		return (0);
	}
	len_read = read(fd, text, letters);
	if (len_read == -1)
	{
		close(fd);
		free(text);
		return (0);
	}

	if (write(STDOUT_FILENO, text, len_read) != len_read)
	{
		close(fd);
		free(text);
		return (0);
	}

	free(text);
	close(fd);
	return (len_read);

}
