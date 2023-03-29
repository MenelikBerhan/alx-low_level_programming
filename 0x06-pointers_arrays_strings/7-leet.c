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
		*(s + i) = tr(temp);
		i++;
	}

	return (s);
}

/**
 * tr - translates a character based on 1337
 * @c: the character to be translated
 *
 * Return: the translated character
*/

char tr(char c)
{
	switch (c)
	{
	case 'a':
	case 'A':
		c = '4';
		break;
	case 'e':
	case 'E':
		c = '3';
		break;
	case 'l':
	case 'L':
		c = '1';
		break;
	case 'o':
	case 'O':
		c = '0';
		break;
	case 't':
	case 'T':
		c = '7';
		break;
	default:
		break;
	}
	return (c);
}
