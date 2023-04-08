#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount of
 *       money. If number of arguments passed to program is not exactly one
 *		print "Error", followed by a new line. If the argument is less than
 *		zero prints "0" followed by a new line.
 * @argc: The size of array of arguments passed to the command line.
 * @argv: An array of argument strings passed to the command line.
 *
 * Usage: ./change cents
 *			where cents is the amount of cents you need to give back
 * Return: 1 if no. of arguments is not exactly one or returns 0 otherwise.
 */

int main(int argc, char *argv[])
{
	int rem, cent, change = 0;

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}

	rem = atoi(argv[1]);
	if (rem < 0)
		rem = 0;

	while (rem)
	{
		if (rem >= 25)
			cent = 25;
		else if (rem >= 10)
			cent = 10;
		else if (rem >= 5)
			cent = 5;
		else if (rem >= 2)
			cent = 2;
		else
			cent = 1;
		while (rem >= cent)
		{
			change += rem / cent;
			rem %= cent;
		}
	}

	printf("%d\n", change);

	return (0);
}
