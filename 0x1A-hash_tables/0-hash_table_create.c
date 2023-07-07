#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of hash table to create (no. of nodes in table array)
 *
 * Return: pointer to `hash_table_t` type hash table, or NULL if it failed
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int i = 0;

	new_table = malloc(sizeof(hash_table_t) * 1);
	if (!new_table)
		return (NULL);
	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (!new_table->array)
		return (NULL);
	for (; i < size; i++)
		new_table->array[i] = NULL;

	return (new_table);
}
