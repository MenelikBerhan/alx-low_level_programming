#include "main.h"

/**
 * _strspn - calculates the length (in bytes) of the initial segment
 *			of s which consists entirely of bytes in accept.
 * @s : The string from which an initial segment is to be checked.
 * @accept : A string from which the segment from s is to be checked against.
 *
 * Return: The number of bytes in  the initial segment of s
 *			which consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, found;
	unsigned int n = 0;

	for (i = 0; *(s + i) != 0; i++)
	{
		found = 0;
		for (j = 0; *(accept + j) != 0; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				n++;
				found = 1;
				break;
			}
		}
		if (!found)
			return (n);
	}

	return (n);
}
