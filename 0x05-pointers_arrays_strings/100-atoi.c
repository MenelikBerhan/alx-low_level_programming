#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer. The string may contain other
 *			characters before or after the number. All '+' & '-' signs
 *			before the no. are taken into the final sign of the no.
 * @s: The string to be converted.
 *
 * Return: The converted integer. 0 if no numbers in the string.
 */

int _atoi(char *s)
{
	int i, len, start, end, neg_count;
	unsigned int ans;

	int _strlen(char *s);
	int pow_10(int n);
	len = _strlen(s);
	if (len == 0)
		return (0);
	/* first find the start and end point of numbers (non zero starter)*/
	for (i = 0; i < len; i++)
	{
		if (s[i] > 48 && s[i] <= 57)
		{
		start = end = i++;
		while (s[i] >= 48 && s[i] <= 57)
			end = i++;
		break;
		}
		start = -1;
	}
	/* If there are no numbers return 0*/
	if (start == -1)
		return (0);
	/* Next count the number of -ve '-' signs*/
	neg_count = 0;
	for (i = 0; i < start && start != -1; i++)
	{
		if (s[i] == 45)
		neg_count++;
	}
	/* Convert the digits from 'start' to 'end' into decimal number*/
	ans = 0;
	for (i = start; i <= end; i++)
		ans += (s[i] - 48) * (pow_10(end - i));
	/* If there are odd no. of -ve signs '-' number is -ve*/
	if (neg_count % 2 != 0)
		ans *= -1;

	return (ans);
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
 * pow_10 - calculates 10 the power of given int.
 * @n: exponent of 10.
 *
 * Return: 10 the power of n
 */
int pow_10(int n)
{
	int i;
	int ans = 1;

	for (i = 0; i < n; i++)
		ans *= 10;
	return (ans);
}
