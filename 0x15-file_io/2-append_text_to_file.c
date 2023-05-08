#include "main.h"

/**
 * append_text_to_file - apppends text_content to file filename.
 * @filename: name of the file.
 * @text_content: text to be appended to file filename.
 *
 * Return: 1 if the file exists and Successful  or , -1 if failure or
 * if filename is NULL or if it doesn't exist or if no permission to write to.
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len_write = 0, i;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
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
