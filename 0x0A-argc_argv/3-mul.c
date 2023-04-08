#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers and prints the result followed by newline.
 *		If it does not receive two arguments, it will print "Error".
 * @argc: The size of array of arguments passed to the command line.
 * @argv: An array of argument strings passed to the command line.
 *
 * Return: 0 if two arguments are received or 1 otherwise.
 */

int main(int argc, char *argv[])
{
	int ans;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}

	ans = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", ans);

	return (0);
}
