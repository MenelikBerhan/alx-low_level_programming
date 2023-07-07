#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to the hash table
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *temp2;
	unsigned long int i = 0;

	if (!ht)
		return;
	for (; i < ht->size; i++)
	{
		if (!ht->array[i])
			continue;
		temp = ht->array[i];
		while (temp)
		{
			temp2 = temp;
			temp = temp->next;
			if (temp2->value)
				free(temp2->value);
			free(temp2);
		}
	}
	if (ht->array)
		free(ht->array);
	free(ht);
}
