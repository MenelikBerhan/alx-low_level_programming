#include "main.h"

/**
 * _strchr - locates first occurance of character c in string s.
 * @s : The string to be searched.
 * @c : A character to search in string s.
 *
 * Return: a pointer to the first location of c or null if c is not found in s.
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; *(s + i) != 0; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	if (c == 0)
		return (s + i);

	return (0);
}
