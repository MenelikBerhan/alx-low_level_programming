#include "main.h"
#include <stdio.h>

/**
 * main - prints its name, followed by a new line.
 * @argc: The size of array of arguments.
 * @argv: An array of argument strings passed to the program.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", *argv);
	return (0);
}
