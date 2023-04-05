#include "main.h"

/**
 * _strlen_recursion - calculates the length of the string pointed to
 *						by s, excluding the terminating null byte ('\0').
 * @s: A pointer to a string which length to be caluculated.
 *
 * Return: the length of the string s.
 */

int _strlen_recursion(char *s)
{
	if (s[0] == 0)
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
