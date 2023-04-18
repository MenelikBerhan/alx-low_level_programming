#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog - A Data structure with name, age and owner of a dog.
 * @name: Name of a dog.
 * @age: Age of adog.
 * @owner: Owner of a dog.
 *
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *s);
void _strcpy(char *dest, char *src);
void free_dog(dog_t *d);

#endif
