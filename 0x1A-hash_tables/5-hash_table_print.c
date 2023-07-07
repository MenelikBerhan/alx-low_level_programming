#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_print - prints key value pair from hash table `ht`.
 *	If `ht` is null, nothing gets printed.
 * @ht: pointer to the hash table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i = 0, first_printed = 0;

	if (!ht || !(ht->array))
		return;
	printf("{");
	for (; i < ht->size; i++)
	{
		if (!ht->array[i])
			continue;
		temp = ht->array[i];
		while (temp)
		{
			if (first_printed)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			if (!first_printed)
				first_printed = 1;
			temp = temp->next;
		}
	}
	printf("}\n");
}
