#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of hash table to create
 *
 * Return: pointer to `hash_table_t` type hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;

	new_table = malloc(sizeof(hash_table_t) * 1);
	if (!new_table)
		return (NULL);
	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (!new_table->array)
		return (NULL);

	return (new_table);
}
