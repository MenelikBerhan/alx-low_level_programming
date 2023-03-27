#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s : String to be reversed.
 *
 */

void rev_string(char *s)
{
	int i, len;
	char temp;

	int _strlen(char *s);
	len = _strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}


/**
 * _strlen - returns length of a String.
 * @s : String operand.
 *
 * Return: Integer length of string.
 */

int _strlen(char *s)
{
	int len = 0;

	while (1)
	{
		if (s[len] == 0)
			break;
		len++;
	}

	return (len);
}

