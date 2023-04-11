#include "main.h"
#include <stdlib.h>

/**
 * strtow - splits string s into words using space as a delimiter b/n words
 * @str: the string to be splitted.
 *
 * Return: A pointer to array of splitted words with the last element
 * being NULL. Returns NULL if str == NULL or str == "" or failure occurs.
 */

char **strtow(char *str)
{
	int j, k, words, len = 0, row = 0, i = 0;
	char **ans, *word;

	if (str == NULL || str[0] == 0)
		return (NULL);

	for (k = 0; str[k]; k++)
		len++;

	words = word_count(str, len);
	if (words == 0)
		return (NULL);
	ans = (char **) malloc(sizeof(char *) * (words + 1));

	if (ans == NULL)
		return (NULL);

	while (i < len)
	{
		if (str[i] != 32)
		{
			for (k = 0; (str[i + k] != 32) && (str[i + k] != 0); k++)
				continue;

			word = malloc(sizeof(char) * (k + 1));
			if (word == NULL)
				return (NULL);

			for (j = 0; str[i + j] != 32 && str[i + j]; j++)
				word[j] = str[i + j];

			word[j] = 0;
			ans[row] = word;
			row++;
			i += j;
		}
		i++;
	}
	ans[row] = NULL;
	return (ans);
}

/**
 * word_count - finds the the number of words after string str is
 * splitted into words using space as a delimiter.
 * @str: the string to be splitted.
 * @len: length of string str.
 *
 * Return: Number of words.
 */

int word_count(char *str, int len)
{
	int i, j, word_count = 0;

	for (i = 0; i < len; i++)
	{
		if (str[i] != 32)
		{
			j = 1;
			while (str[i + j] != 32 && i + j < len)
				j++;

			word_count++;
			i += j;
		}
	}

	return (word_count);
}
