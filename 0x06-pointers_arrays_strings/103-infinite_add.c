#include "main.h"

/**
 * infinite_add - adds two numbers and writes result to buffer.
 * @n1: First operand.
 * @n2: Second operand.
 * @r: Buffer to write the result to.
 * @size_r: pointer to the string operand.
 *
 * Return: the string encoded by rot13.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, len1, len2, val1, val2, sum, rem;

	len1 = _strlen(n1);
	len2 = _strlen(n2);

	*r = '\0';
	i = 1;
	rem = 0;

	for (; i <= len1 || i <= len2; i++)
	{
		if (i >= size_r)
			return (0);

		if (i > len1)
			val1 = 0;
		else
			val1 = *(n1 + len1 - i) - 48;

		if (i > len2)
			val2 = 0;
		else
			val2 = *(n2 + len2 - i) - 48;

		sum = val1 + val2 + rem;
		*(r + i) = (sum % 10) + 48;
		rem = sum / 10;
	}

	if (rem)
	{
		if (i >= size_r)
			return (0);
		*(r + i) = rem + 48;
		i++;
	}

	reverse_chars(r, i);

	return (r);
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

/**
 * reverse_chars - reverses the contents of a char array.
 * @a: a char array to be reversed.
 * @n: the number of elements in array a.
 *
 */

void reverse_chars(char *a, int n)
{
	char temp1;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		temp1 = *(a + n - 1 - i);

		*(a + (n - 1 - i)) = *(a + i);
		*(a + i) = temp1;
	}
}
