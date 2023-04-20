#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints the opcode of its own main function in hexadecimal. Second
 * command line argument specifies the number of bytes of opcodes to print.
 * @argc: number of arguments passed to the command line.
 * @argv: a string array containing the two numbers and the operator.
 *
 * Return: 0 (Success), exits with status 1 and prints Error if argc is not
 * equal to 2, exits with status 2 and prints Error if no. of bytes is less
 * than 0.
 * Usage: ./main number_of_bytes
 */

int main(int argc, char *argv[])
{
	int n, i;
	char *opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	opcode = (char *) main;
	for (i = 0; i < n; i++)
	{
		printf("%02hhx", opcode[i]);
		if (i != n - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
