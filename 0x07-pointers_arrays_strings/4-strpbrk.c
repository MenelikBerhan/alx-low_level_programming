#include "main.h"

/**
 * _strpbrk - locates the first occurance in the string s
 *			of any of the bytes in the string accept.
 * @s : The string to be searched for any of the bytes from the string accept.
 * @accept : A string from which the bytes from s are to be checked against.
 *
 * Return: A pointer to the first occurance of a byte in s that matches any
 *			one of the bytes in accept or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i) != 0; i++)
	{
		for (j = 0; *(accept + j) != 0; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}

	}

	return (0);
}
