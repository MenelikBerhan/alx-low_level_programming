#include "main.h"
#include <stdio.h>
/**
 * main - copies the contents of file named in the first argument passed to the
 * program in command line, to the second file named in the second argument.
 * If file_to already exists, will be truncated. If not will be created with
 * permission rw-rw-r--.
 * @argc: number of command line arguments.
 * @argv: pointer to argument cahracter strings.
 *
 * Usage: cp file_from file_to  //main compiled to excutable "cp"
 *
 * Exit: with status of 97 if not appropraite number of arguments,
 * with status of 98 if file_from doesn't exist or can not be read,
 * with stauts of 99 if file_to can not be either created or wrote on,
 * with stauts of 100 if any file descriptor can not be closed.
 *
 * Return: 0 (SUccess) or else exits with status for failure.
*/

int main(int argc, char **argv)
{
	int fd_from, fd_to, len_read = 0;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 00660);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	buffer = malloc(sizeof(char) * 1024);
	while ((len_read = read(fd_from, buffer, 1024)) == 1024)
		write(fd_to, buffer, 1024);

	if (len_read > 0)
		write(fd_to, buffer, len_read);
	free(buffer);
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(99);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(99);
	}
	return (0);
}
