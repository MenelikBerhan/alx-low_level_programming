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
		j = '0';
		while (j <= '9')
		{
			for (int k = i; k <= '9'; k++)
			{
				for (int l = '0'; l <= '9'; l++)
				{
					if (i == k && j >= l)
						continue;
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (i == '9' && j == '8')
						continue;
					putchar(',');
					putchar(' ');
				}

			}
			j++;
		}
	}
	putchar('\n');
	return (0);
}
