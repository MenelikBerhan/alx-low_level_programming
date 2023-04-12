#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - allocated space in memory, which contains s1,
 * followed by the first n bytes of s2, and null terminated.
 * @s1: First string operand.
 * @s2: Second string operand.
 * @n: Number of bytes from s2 copied to new memory address.
 *
 * Return: a pointer to the newly allocated memory (Success) or
 * NULL (Failure).
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i = 0;
	char *ptr;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	if (ptr == NULL)
		return (NULL);

	for (; i < len1; i++)
		ptr[i] = s1[i];

	for (; (i < len1 + n) && (i < len1 + len2); i++)
		ptr[i] = s2[i - len1];
	ptr[i] = 0;

	return (ptr);
}

/**
 * _strlen - returns length of a String.
 * @s : String operand.
 *
 * Return: Integer length of string.
 */

int _strlen(char *s)
{
	int i, len = 0;

	if (s == NULL)
		return (0);

	for (i = 0; s[i]; i++)
		len++;

	return (len);
}
