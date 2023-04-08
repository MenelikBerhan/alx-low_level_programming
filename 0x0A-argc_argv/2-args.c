#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives, one argument per line.
 * @argc: The size of array of arguments passed to the command line.
 * @argv: An array of argument strings passed to the command line.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
