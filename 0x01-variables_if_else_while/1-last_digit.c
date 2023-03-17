#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - generates a random no. and prints wheather the no. is -=0, >5 or <6.
 *
 * Return: 1
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	digit = n % 10;
	printf("Last digit of %i is %i and is ", n, digit);
	if (digit == 0)
		printf("0\n");
	else if (digit < 6)
		printf("less than 6 and not 0\n");
	else
		printf("greater than 5\n");
	return (0);
}
