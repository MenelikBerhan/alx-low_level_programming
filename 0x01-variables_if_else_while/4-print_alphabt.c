#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - prints the alphabet in lowercase.
 *
 * Return: 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	char str[27] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		if (str[i] == 'q' || str[i] == 'e')
			continue;
		putchar(str[i]);

	}
	putchar('\n');
	return (0);
}
