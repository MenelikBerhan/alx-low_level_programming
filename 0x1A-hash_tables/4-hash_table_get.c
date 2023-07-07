#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - retrives value assosiated with `key` from hash table `ht`
 * @ht: pointer to the hash table
 * @key: key string, can not be empty
 *
 * Return: value associated with `key`, or NULL if key not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int index;

	if (!ht || !(ht->array) || !key || strlen(key) == 0)
		return (NULL);
	index = key_index((const unsigned char *) key, ht->size);

	if (!(ht->array[index]))
		return (NULL);
	temp = ht->array[index];
	while (temp)
	{
		if (temp->key == key)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
