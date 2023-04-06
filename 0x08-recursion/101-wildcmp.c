#include "main.h"
#include <stdio.h>
/**
 * wildcmp - Checks if two strings can be considered identical.
 *					The special char * can replace any string.
 * @s1: First operand.
 * @s2: Second operand and can contain special char *.
 *
 * Return: 1 if s1 and s2 are identical or 0 if not.
 */

int wildcmp(char *s1, char *s2)
{
	int len1, len2;

	if ((s1 && !s2) || (!s1 && s2))
		return (0);
	len1 = _strlen_recursion(s1);
	len2 = _strlen_recursion(s2);
	return (wildcmp_helper(s1, s2, 0, 0, len1, len2));
}

/**
 * wildcmp_helper - Checks if two strings can be considered identical from
 *					index i1 for s1 and i2 for s2. The special char * can
 *					replace any string.
 * @s1: First operand.
 * @s2: Second operand and can contain special char *.
 * @i1: Starting index of s1.
 * @i2: Starting index of s2.
 * @len1: Length of string s1.
 * @len2: Length of string s2.
 *
 * Return: 1 if s1 and s2 are identical or 0 if not.
 */

int wildcmp_helper(char *s1, char *s2, int i1, int i2, int len1, int len2)
{
	/*printf("i1= %d,  i2= %d,  len1=%d,  len2=%d\n", i1, i2, len1, len2);*/
	/*printf("s1[%d]= %c,  s2[%d]= %c,\n", i1, s1[i1], i2, s2[i2]);*/

	if (s2[i2] == '*')
	{
		if (len2 - 1 == i2)
			return (1);
		i2 = next_char(s2, i2);

		if (i2 < 0)
			return (1);

		i1 = _strchr(s1, s2[i2]);
		if (i1 < 0)
			return (0);
		/*printf("i1= %d,  i2= %d\n", i1, i2);*/
/*printf("_strchr(s1 + i1 + 1, s2[i2]) = %d\n",_strchr(s1 + i1 + 1, s2[i2]));*/
		if (_strchr(s1 + i1 + 1, s2[i2]) >= 0)
		{
			i1 = _strchr(s1 + i1 + 1, s2[i2]) + 1 + i1;
			/*printf("i1= %d\n", i1);*/
		}
		if (_strchr(s1 + i1 + 3, s2[i2]) > 0)
			i1 = _strchr(s1 + i1 + 3, s2[i2]) + 3 + i1;

		return (wildcmp_helper(s1, s2, i1, i2, len1, len2));
	}

	if (s1[i1] == s2[i2])
	{
		if (i1 == len1 - 1 && i2 == len2 - 1)
			return (1);
		return (wildcmp_helper(s1, s2, ++i1, ++i2, len1, len2));
	}

	return (0);
}

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


/**
 * _strchr - locates first occurance of character c in string s.
 * @s : The string to be searched.
 * @c : A character to search in string s.
 *
 * Return: the index in string s where character c is first found.
 */

int _strchr(char *s, char c)
{
	if (*s == 0)
		return (-1000);
	if (s[0] == c)
		return (0);

	return (1 + _strchr(s + 1, c));

}

/**
 * next_char - finds the index of a non '*' character in string s
 *				starting from index n.
 * @s: string to be searched.
 * @n: starting index of the search.
 *
 * Return: index of next character different from '*'.
 */

int next_char(char *s, int n)
{
	if (n >= _strlen_recursion(s))
		return (-1);

	if (s[n] != '*')
		return (n);

	return (next_char(s, ++n));
}
