#include <stdio.h>

void start(void) __attribute__ ((constructor));

/**
 * start - prints a sentence before the main
 * function is executed
 */
void start(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
