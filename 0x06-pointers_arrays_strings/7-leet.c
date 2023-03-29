#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @s: pointer to the string operand.
 *
 * Return: the string encoded by 1337.
 */

char *leet(char *s)
{
	int i = 0;
	char temp;

	while (*(s + i))
	{
		temp = *(s + i);
		if (temp == 'a' || temp == 'A' || temp == 'e' || temp == 'E' ||
		    temp == 'o' || temp == 'O' || temp == 'l' || temp == 'L' ||
		    temp == 't' || temp == 'T')
			*(s + i) = tr_a(temp);
		i++;
	}

	return (s);
}

/**
 * tr_a - translates a character based on 1337
 * @c: the character to be translated
 *
 * Return: the translated character
*/

char tr_a(char c)
{
	if (c == 'e' || c == 'E' || c == 'o' || c == 'O' ||
	c == 'l' || c == 'L' || c == 't' || c == 'T')
		return (tr_e(c));
	else
		return ('4');
}
/**
 * tr_e - translates a character based on 1337
 * @c: the character to be translated
 *
 * Return: the translated character
*/

char tr_e(char c)
{
	if (c == 'o' || c == 'O' || c == 'l' || c == 'L' || c == 't' || c == 'T')
		return (tr_o(c));
	else
		return ('3');
}
/**
 * tr_o - translates a character based on 1337
 * @c: the character to be translated
 *
 * Return: the translated character
*/

char tr_o(char c)
{
	if (c == 'l' || c == 'L' || c == 't' || c == 'T')
		return (tr_l(c));
	else
		return ('0');
}
/**
 * tr_l - translates a character based on 1337
 * @c: the character to be translated
 *
 * Return: the translated character
*/

char tr_l(char c)
{
	if (c == 'l' || c == 'L')
		return ('1');
	else
		return ('7');
}
