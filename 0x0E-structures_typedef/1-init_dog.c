#include "dog.h"

/**
 * init_dog - initializes d, a pointer to variable of type struct dog.
 * @d: Pointer to assign the initialized struct dog type.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;

}
