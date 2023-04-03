#include "main.h"
#include <stdio.h>

/**
 * set_string - Sets the value of the string pointed
 *				by a pointer pointed by s to string pointed by to.
 * @s: A pointer to a pointer to string.
 * @to: A pointer to a string.
 *
 */

void set_string(char **s, char *to)
{
	*s = to;
}
