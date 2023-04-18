#include "dog.h"

/**
 * print_dog - prints a struct dog.
 * @d: Pointer to struct dog type.
 *
 * Description: If d is NULL nothing gets printed and function exits with
 * status 0, if an element of d is NULL, (nil) gets printed instead.
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(1);
	if (d->name == NULL || d->name[0] == 1)
		d->name = "(nil)";
	if (d->owner == NULL || d->owner[0] == 1)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
