#include "main.h"
#include <stdlib.h>

/**
 * _strdup - allocates a new space in memory and copies contents of string str.
 * @str: The string to be copied to the newly allocated space.
 *
 * Return: a pointer to the new memory containing copy of string str.
 */

char *_strdup(char *str)
{
	char *arr;
	unsigned int i, size = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		size++;

	arr = malloc(size + 1);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= size; i++)
	{
		arr[i] = str[i];
	}

	return (arr);
}
