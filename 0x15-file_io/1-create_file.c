#include "main.h"

/**
 * create_file - creates a file named filename with read and write permission
 * for file owner, or truncates the file if it exists, and write the contents
 * of text_content to the file.
 * @filename: name of the file.
 * @text_content: text to be written to file.
 *
 * Return: 1 if Successful or , -1 if failure or if filename is NULL.
*/
int create_file(const char *filename, char *text_content)
{
	int fd, len_write = 0, i;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	for (i = 0; text_content && text_content[i]; i++)
		len_write++;
	if (write(fd, text_content, len_write) != len_write)
	{
		close(fd);
		return (0);
	}

	close(fd);
	return (1);

}
