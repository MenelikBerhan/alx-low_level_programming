#include "3-calc.h"

/**
 * op_add - Adds two integers.
 * @a: First operand.
 * @b: Second operand.
 *
 * Return: The sum of the numbers.
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts b from a.
 * @a: First operand.
 * @b: Second operand.
 *
 * Return: The difference of the numbers.
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies a by b.
 * @a: First operand.
 * @b: Second operand.
 *
 * Return: The product of a & b.
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides a by b.
 * @a: First operand.
 * @b: Second operand.
 *
 * Return: The integer division of a by b (Success)
 * or exits with status of 100 if b equals 0 (Failure).
*/

int op_div(int a, int b)
{
	if (b == 0)
	{
		puts("Error");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Finds the remainder of the division of a by b.
 * @a: First operand.
 * @b: Second operand.
 *
 * Return: The remainder of the division of a by b(Success)
 * or exits with status of 100 if b equals 0 (Failure).
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		puts("Error");
		exit(100);
	}
	return (a % b);
}
