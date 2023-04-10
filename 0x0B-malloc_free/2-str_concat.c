#include "main.h"
#include <stdlib.h>

/**
 * str_concat - allocates a new space in memory containing contents of s1
 * followed by contents of s2 and null terminated.
 * @s1: First operand string.
 * @s2: Second operand string.
 *
 * Return: a pointer to the new memory containing the concatenated string,
 * or NUll on failure. If NULL is passed it is treated as empty string.
 */

char *str_concat(char *s1, char *s2)
{
	char *arr;
	unsigned int i, j, size1 = 0, size2 = 0;

	size1 = _strlen(s1);
	size2 = _strlen(s2);

	arr = malloc(size1 + size2 + 1);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
	{
		arr[i] = s1[i];
	}

	for (j = 0; j < size2; j++)
	{
		arr[i + j] = s2[j];
	}
	arr[i + j] = 0;

	return (arr);
}

/**
 * _strlen - returns length of a String s excluding terminating null.
 * @s : String operand.
 *
 * Return: Integer length of string s or 0 if s is NULL.
 */

int _strlen(char *s)
{
	int i, len = 0;

	if (s != NULL)
	{
		for (i = 0; s[i]; i++)
			len++;
	}

	return (len);
}
