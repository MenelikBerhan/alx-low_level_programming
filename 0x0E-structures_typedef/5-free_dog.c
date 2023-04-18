#include "dog.h"

/**
 * free_dog -Frees the memory allocated to d.
 * @d: a pointer to type dog_t.
 *
*/

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
