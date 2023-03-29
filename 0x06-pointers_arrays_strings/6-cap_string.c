#include "main.h"

/**
 * cap_string - makes all words in a string to start with uppercase char.
 * @s: pointer to the string operand.
 *
 * Return: the string with all words starting with uppercase letter.
 */

char *cap_string(char *s)
{
	int i = 1;

	if (*s >= 97 && *s <= 122)
		*s -= 32;

	while (*(s + i))
	{
		switch (*(s + i - 1))
		{
		case 9:
		case 10:
		case 11:
		case 32:
		case 33:
		case 34:
		case 40:
		case 41:
		case 44:
		case 46:
		case 59:
		case 63:
		case 123:
		case 125:
			if (*(s + i) >= 97 && *(s + i) <= 122)
			*(s + i) -= 32;
		default:
			break;
		}

		i++;
	}

	return (s);
}
