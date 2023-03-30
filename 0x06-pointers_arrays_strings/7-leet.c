#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @s: pointer to the string operand.
 *
 * Return: the string encoded by 1337.
 */

char *leet(char *s)
{
	int i, j;
	char *c = "aAeElLoOtT";
	char *n = "4433110077";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; c[j]; j++)
		{
			if (*(s + i) == c[j])
				*(s + i) = n[j];
		}
	}

	return (s);
}
