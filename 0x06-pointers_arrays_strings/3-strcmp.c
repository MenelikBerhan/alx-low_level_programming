#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1 : First operand
 * @s2 : Second operand
 *
 * Return: an integer < 0 if s1 is less than s2, 0 if they match
 *			and > 1 if s1 is greater than s2.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (; *(s1 + i) && *(s2 + i); i++)
	{
		if (*(s1 + i) - *(s2 + i))
			return (*(s1 + i) - *(s2 + i));
	}

	return (0);
}
