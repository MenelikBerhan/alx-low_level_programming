#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the strings in av, adding newline after each.
 * @ac: Number of arguments in av.
 * @av: A pointer to a pointer to char containing the arguments.
 *
 * Return: A pointer to a new string or NULL if failure.
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			len++;
		}
	}

	len = len + 1 + ac;
	str = malloc(len);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, k++)
			str[k] = av[i][j];

		str[k] = '\n';
		k++;
	}

	str[k] = 0;
	return (str);
}
