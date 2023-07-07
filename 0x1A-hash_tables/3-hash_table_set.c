#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - adds or updates `key` `value` pair to hash table
 *		In case of collison the node is added at the start of the list
 * @ht: pointer to the hash table
 * @key: key string, can not be empty
 * @value: value string, can be empty
 *
 * Return: 1 if it successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *temp;
	unsigned long int index;

	if (!ht || !(ht->array) || !key || !value || len(key) == 0)
		return (0);
	index = key_index((const unsigned char *) key, ht->size);

	if (!(ht->array[index]))
	{
		new_node = malloc(sizeof(hash_node_t));
		if (!new_node)
			return (0);
		new_node->key = strdup(key);
		new_node->value = strdup(value);
		new_node->next = NULL;
		ht->array[index] = new_node;
		return (1);
	}
	temp = ht->array[index];
	while (temp)
	{
		if (temp->key == key)
		{
			if (temp->value)
				free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
