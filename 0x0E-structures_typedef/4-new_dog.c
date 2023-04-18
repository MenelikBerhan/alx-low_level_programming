#include "dog.h"

/**
 * new_dog - Creates a new dog and assign it to a pointer to type dog_t.
 * @name: Name of the dog. A local copy of it is used.
 * @age: Age of the dog.
 * @owner: Owner of the dog. A local copy of it is used.
 *
 * Return: A pointer to the newly created dog (Success) or NULL (Failure).
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	if (name == NULL || owner == NULL)
		return (NULL);
	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);

	ptr->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (ptr->name == NULL)
	{
		free(ptr);
		free(ptr->name);
		return (NULL);
	}

	_strcpy(ptr->name, name);
	_strcpy(ptr->owner, owner);

	ptr->age = age;

	return (ptr);
}


/**
 * _strcpy - copies string pointed by src (including '\0') to pointer dest.
 * @dest: The destination pointer to copy the string to.
 * @src: The pointer for the sctring to copy.
 *
 */

void _strcpy(char *dest, char *src)
{
	int i, len;

	int _strlen(char *s);
	len = _strlen(src);

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

}

/**
 * _strlen - returns length of a String s.
 * @s : String operand.
 *
 * Return: Integer length of string.
 */

int _strlen(char *s)
{
	int len = 0;

	for (; s[len]; len++)
		continue;

	return (len);
}
