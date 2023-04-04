#include "main.h"
#include <stdio.h>

/**
 * _strstr - finds the first occurrence of the substring needle in the string
 *			haystack. The terminating null bytes ('\0') are not compared.
 * @haystack : The string to be searched for the substring needle.
 * @needle : The substring to be searched in string s.
 *
 * Return: a pointer to the beginning of the located substring,
 *			or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (j = 0; *(haystack + j) != 0; j++)
	{
		for (i = 0; *(needle + i) != 0; i++)
		{
			if (*(needle + i) != *(haystack + j + i))
			{
				break;
			}
		}

		if (*(needle + i) == 0)
			return (haystack + j);
	}

	return (NULL);
}
