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
	char lwr;
	char uppr;

	for (lwr = 'a'; lwr <= 'z'; lwr++)
	{
		putchar(lwr);
	}
	for (uppr = 'A'; uppr <= 'Z'; uppr++)
	{
		putchar(uppr);
	}
	putchar('\n');
	return (0);
}
