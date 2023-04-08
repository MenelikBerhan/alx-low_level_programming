#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers and prints the result, followed by a new line.
 *	   If no number is passed to the program, print 0, followed by a new line.
 *	   If one of the arguments contains symbol that is not digits, print Error.
 * @argc: The size of array of arguments passed to the command line.
 * @argv: An array of argument strings passed to the command line.
 *
 * Return: 1 if one of arguments is not digit or 0 otherwise.
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				puts("Error");
				return (1);
			}
		}
	}

	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
