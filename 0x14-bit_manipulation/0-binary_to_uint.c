#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - converts a binary number to an unsined int type.
 * @b: pointer to binary number characters.
 *
 * Return: converted unsigned int number, or 0 if there is one or more
 * chars in the string b that is not 0 or 1 and if b is NULL.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int ans = 0, i, len;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	len = i;

	for (i = 0; i < len; i++)
		ans += (1 << (len - i - 1)) * (b[i] - 48);

	return (ans);
}
