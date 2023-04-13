#include "main.h"
#include <stdlib.h>

/**
 * main - multiplies two numbers it receives from command line and print
 * the result.
 * @argc: Number of command line arguments.
 * @argv: An array of pointers to argument strings.
 *
 * Return: 0 (Success). Exits with status of 98 if number of arguments
 * is incorrect or if either of the arguments contains a non digit character.
 */

int main(int argc, char *argv[])
{
	int i, j = 1, len1 = 0, len2 = 0, ln, index, loc = 1, rem = 0, temp;
	int n1, n2;
	char *a;

	if (argc != 3 || check_digits(argv))
	{
		_puts("Error");
		exit(98);
	}
	for (i = 0; argv[1][i]; i++)
		len1++;
	for (i = 0; argv[2][i]; i++)
		len2++;

	ln = len1 + len2 + 1;
	a = alloc(ln);

	for (i = len1 - 1; i >= 0; i--)
	{
		for (index = 0, j = len2 - 1; j >= 0; j--, index++)
		{
			n1 = (argv[1][i]) - '0';
			n2 = (argv[2][j]) - '0';
			temp = (a[loc + index] - '0') + n1 * n2 + rem;
			a[loc + index] = (temp % 10) + '0';
			rem = temp / 10;
		}

		while (rem)
		{
			a[loc + index] = (rem % 10) + '0';
			rem /= 10;
			index++;
		}
		loc++;
	}
	reverse_chars(a, loc + index -  1);
	_puts(a);
	free(a);
	return (0);
}

/**
 * reverse_chars - reverses the contents of a char array.
 * @a: a char array to be reversed.
 * @n: the number of elements in array a.
 *
 */

void reverse_chars(char *a, int n)
{
	char temp1;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		temp1 = *(a + n - 1 - i);

		*(a + (n - 1 - i)) = *(a + i);
		*(a + i) = temp1;
	}
}

/**
 * _puts - Prints a String followed by a newline.
 * @str : String to be printed.
 *
 */

void _puts(char *str)
{
	int i = 0;

	while (1)
	{
		if (str[i] == 0)
		{
			_putchar('\n');
			break;
		}
		_putchar(str[i]);
		i++;
	}

}

/**
 * alloc - allocates ln size byte and set first member as
 * '\0' and the rest members '0'.
 * @ln: size of memory to allocate to a.
 *
 * Return: a pointer to the allocated and initialized memory block.
 * Exits with status of 98 if malloc fails.
*/

char *alloc(int ln)
{
	int i;
	char *a;

	a = malloc(ln * sizeof(char));
	if (a == NULL)
	{
		_puts("Error");
		exit(98);
	}

	for (i = 0 ; i < ln; i++)
		a[i] = '0';
	a[0] = 0;

	return (a);
}

/**
 * check_digits - checks if arguments in argv contains non-digit characters.
 * @argv: Array containing argv[1] and argv[2] strings to be checked.
 *
 * Return: 0 if characters in strings argv[1] and argv[2] are all digit,
 * or 1 if not.
*/

int check_digits(char *argv[])
{
	int i, j = 1;

	while (j < 3)
	{
		for (i = 0; argv[j][i]; i++)
		{
			if (argv[j][i] < 48 || argv[j][i] > 57)
			{
				return (1);
			}
		}
		j++;
	}

	return (0);
}
