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
	int j, row = 0, i = 0, *dim;
	char **ans, *word;

	if (str == NULL || str[0] == 0)
		return (NULL);

	dim = find_dimn(str);

	ans = (char **) malloc((dim[0] + 1) * (dim[1] + 1) * sizeof(int));
	if (ans == NULL)
		return (NULL);

	while (i < dim[2])
	{
		if (str[i] != 32)
		{
			word = malloc((dim[0] + 1) * sizeof(int));
			if (word == NULL)
				return (NULL);

			for (j = 0; str[i + j] != 32 && str[i + j]; j++)
			{
				word[j] = str[i + j];
			}

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
 * find_dimn - finds the number of words and maximum length of word after
 * string str is splitted into words using space as a delimiter.
 * @str: the string to be splitted.
 *
 * Return: A pointer to an array of integer of size three with
 * maximum word length as first element,
 * number of words as second element and
 * length of string str as third element.
 */

int *find_dimn(char *str)
{
	int i, j, len = 0;
	int word_count = 0, char_count, char_count_max = 0;
	int *res = malloc(3 * sizeof(int));

	for (i = 0; str[i]; i++)
		len++;
	for (i = 0; i < len; i++)
	{
		if (str[i] != 32)
		{
			j = char_count = 1;

			while (str[i + j] != 32 && i + j < len)
			{
				char_count++;
				j++;
			}
			word_count++;
			i += j;
			if (char_count_max < char_count)
				char_count_max = char_count;
		}
	}
	res[0] = char_count_max;
	res[1] = word_count;
	res[2] = len;
	return (res);
}
