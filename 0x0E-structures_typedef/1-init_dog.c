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
	struct dog ptr;

	ptr.name = name;
	ptr.age = age;
	ptr.owner = owner;

	*d = ptr;
}
