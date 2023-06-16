#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * main - prints a string for crackme5 ELF file
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (always success)
*/
int main(int argc, char *argv[])
{
	char pass[7], *cipher;
	int len = strlen(argv[1]), i, temp;

	if (argc != 2)
	{
		dprintf(2, "Correct usage: ./keygen5 username\n");
		exit(EXIT_FAILURE);
	}
	cipher = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	temp = (len ^ 59) & 63;
	pass[0] = cipher[temp];

	for (i = 0, temp = 0; i < len; i++)
		temp += argv[1][i];
	pass[1] = cipher[(temp ^ 79) & 63];

	for (i = 0, temp = 1; i < len; i++)
		temp *= argv[1][i];
	pass[2] = cipher[(temp ^ 85) & 63];


	for (i = 0, temp = 0; i < len; i++)
		temp = argv[1][i] > temp ? argv[1][i] : temp;

	srand(temp ^ 14);
	pass[3] = cipher[rand() & 63];

	for (i = 0, temp = 0; i < len; i++)
		temp += (argv[1][i] * argv[1][i]);
	pass[4] = cipher[(temp ^ 239) & 63];

	for (i = 0; i < argv[1][0]; i++)
		temp = rand();
	pass[5] = cipher[(temp ^ 229) & 63];

	pass[6] = '\0';
	printf("%s", pass);
	return (0);
}
