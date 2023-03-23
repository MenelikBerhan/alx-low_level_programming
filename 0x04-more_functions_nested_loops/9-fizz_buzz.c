#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100 separated by space,
 *		followed by a new line. But for multiples of three print "Fizz",
 *		for the multiples of 5 print "Buzz"
 *		& "FizzBuzz" for multiples of both 3 & 5.
 *
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 5 == 0 && num % 3 == 0)
			printf("FizzBuzz");
		else if (num % 3 == 0)
			printf("Fizz");
		else if (num % 5 == 0)
			printf("Buzz");
		else
			printf("%d", num);
		if (num != 100)
			putchar(' ');
		else
			putchar('\n');
	}
	return (0);
}
