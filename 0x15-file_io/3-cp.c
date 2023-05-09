#include "main.h"
#include <stdio.h>

/**
 * print_error - prints error message and exits.
 * @error: 0 for read, 1 for write, 2 for incorrect argc, 3 for close fd,
 * and 4 for malloc.
 * @argv: file name.
 * @fd: file descriptor
 *
*/
void print_error(int error, char *argv, int fd)
{
	if (error == 2)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	if (error == 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv);
		exit(98);
	}
	if (error == 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv);
		exit(99);
	}
	if (error == 3)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	if (error == 4)
	{
		dprintf(STDERR_FILENO, "Error: malloc failure\n");
		exit(96);
	}

}
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
	int fd_from, fd_to, len_read = 0, len_write;
	char *buffer;

	if (argc != 3)
		print_error(2, NULL, 0);
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		print_error(0, argv[1], 0);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		print_error(1, argv[2], 0);

	buffer = malloc(sizeof(char) * 1024);
	if (!buffer)
		print_error(4, NULL, 0);

	while ((len_read = read(fd_from, buffer, 1024)) > 0)
	{
		len_write = write(fd_to, buffer, len_read);
		if (len_write != len_read)
		{
			free(buffer);
			print_error(1, argv[2], 0);
		}
		fd_to = open(argv[2], O_WRONLY | O_APPEND);
		if (fd_to == -1)
			print_error(1, argv[2], 0);
	}

	if (len_read == -1)
		write(fd_to, buffer, len_read);
	free(buffer);
	if (close(fd_from) == -1)
		print_error(3, NULL, fd_from);
	if (close(fd_to) == -1)
		print_error(3, NULL, fd_to);
	return (0);
}
