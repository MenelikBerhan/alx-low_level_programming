#include<stdio.h>
/**
 * main - prints the size of various types on the computer it is compiled and
 * run on.
 *
 * Return: 0
*/
int main(void)
{
	char c;
	int i;
	long lngint;
	long long lnglngint;
	float f;

	printf("Size of a char: %i byte(s)\n", sizeof(c));
	printf("Size of an int: %i byte(s)\n", sizeof(i));
	printf("Size of a long int: %i byte(s)\n", sizeof(lngint));
	printf("Size of a long long int: %i byte(s)\n", sizeof(lnglngint));
	printf("Size of a float: %i byte(s)\n", sizeof(f));

	return (0);
}
