#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies string pointed by src (including '\0') to pointer dest.
 * @dest: The destination pointer to copy the string to.
 * @src: The pointer for the sctring to copy.
 *
 * Return: The pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i, len;

	int _strlen(char *s);
	len = _strlen(src);

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[len] = '\0';

	return (dest);
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
