#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @s: pointer to the string operand.
 *
 * Return: the string encoded by rot13.
 */

char *rot13(char *s)
{
	int i, j;
	char *c_i = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *c_o = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (*(s + i) == c_i[j])
			{
				*(s + i) = c_o[j];
				break;
			}
		}
	}

	return (s);
}
