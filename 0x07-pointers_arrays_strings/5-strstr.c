#include "main.h"

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
	int i, j, loc;

	for (j = 0; *(haystack + j) != 0; j++)
	{
		if (*(needle) == *(haystack + j))
		{
			loc = j;
			for (i = 0; *(needle + i) != 0; i++, j++)
			{
				if (*(needle + i) != *(haystack + j))
					return (0);

				if (*(needle + i + 1) == 0)
					return (haystack + loc);

			}
		}
	}

	return (0);
}
