#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it followed by a newline.
 * @argc: The size of array of arguments passed to the command line.
 * @argv: An array of argument strings passed to the command line.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
