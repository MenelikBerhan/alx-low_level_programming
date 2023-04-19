#include "3-calc.h"

/**
 * main - Prints the result of arthemetic operation on two numbers using
 * a given operator.
 * @argc: number of arguments passed to the command line.
 * @argv: a string array containing the two numbers and the operator.
 *
 * Exit: Prints "Error" and exits; with status of 98 if argc is not equal to 4,
 * with status of 99 if operator dose not match any of (+, -, *, /, %), or
 * with status of 100 if either / or % are used while second operand is zero.
 *
 * Usage: If the source code is compiled to an executable named "calc";
 *      calc num1 operator num2
 * Example: calc 1 + 1  -> prints 2
 *
 * Return: Always 0 if not exited.
 */

int main(int argc, char *argv[])
{
	int ans, a, b;
	int (*func)(int, int);

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}

	if (argv[2][1])
	{
		puts("Error");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (func == NULL)
	{
		puts("Error");
		exit(99);
	}

	ans = func(a, b);
	printf("%d\n", ans);

	return (0);
}
