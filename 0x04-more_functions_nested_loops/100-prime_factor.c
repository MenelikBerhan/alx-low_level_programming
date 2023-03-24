#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of a number.
 *
 * Return: 0
 */

int main(void)
{
	int i;
	long num = 612852475143;

	int is_prime(long num);

	for (i = 2; i < (sqrt(num)); i++)
	{
		if (num % i == 0 && is_prime(num / i))
		{
			printf("%ld\n", (num / i));
			break;
		}
	}
	return (0);
}

/**
 * is_prime - checks if number is prime.
 * @num: number to be checked.
 *
 * Return: 1 if number is prime. 0 otherwise.
 */

int is_prime(long num)
{
	int i;

	for (i = 2; i <= (sqrt(num)); i++)
	{
		if (num % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
