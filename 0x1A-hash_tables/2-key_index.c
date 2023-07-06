#include "hash_tables.h"

/**
 * key_index - gives the index for `key` in the hash table
 *		using a function that implements the djb2 algorithm
 * @key: string key used to generate hash value
 * @size: size of the hash table
 *
 * Return: index for key in the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, hash;

	hash = hash_djb2(key);
	index = hash % size;
	return (index);
}
