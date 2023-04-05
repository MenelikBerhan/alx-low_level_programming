#include "main.h"

/**
 * is_palindrome - checks if string s is a palindrome.
 * @s: string to be checked.
 *
 * Return: 1 s is palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	int len;

	if (s[0] == 0 || s[1] == 0)
		return (1);

	len = null_index(s, 0);

	return (is_palindrome_helper(s, 0, --len));
}

/**
 * null_index - finds the index of null ('\0') character.
 * @s: string for which null index is to be found.
 * @n: index of the string to be checked for null ('\0').
 *
 * Return: index of null character.
 */

int null_index(char *s, int n)
{
	if (s[n] == 0)
		return (n);

	return (null_index(s, ++n));
}

/**
 * is_palindrome_helper - checks if string s is palindrome by comparing
 *						start and end indexes repeatedly.
 * @s: string to be checked.
 * @start: first index of the character to be checked.
 * @end: second index of the character to be checked.
 *
 * Return: 1 if s is a palindrome or 0 otherwise.
 */

int is_palindrome_helper(char *s, int start, int end)
{
	if (s[start] == s[end])
	{
		if (end - start <= 2)
			return (1);
		return (is_palindrome_helper(s, ++start, --end));
	}

	return (0);
}
