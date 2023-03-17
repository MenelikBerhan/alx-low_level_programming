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
	int i;
	int j;

	for (i = '0'; i <= '9'; i++)
	{
		j = i + 1;
		while (j <= '9')
		{
			putchar(i);
			putchar(j);
			if (i < '8' || j < '9')
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
	}
	putchar('\n');
	return (0);
}
