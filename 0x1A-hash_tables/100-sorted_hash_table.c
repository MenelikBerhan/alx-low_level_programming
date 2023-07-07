#include "hash_tables.h"
#include <string.h>

/**
 * shash_table_create - creates a sorted hash table
 * @size: size of hash table to create (no. of nodes in table array)
 *
 * Return: pointer to `hash_table_t` type hash table, or NULL if it failed
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table;
	unsigned long int i = 0;

	new_table = malloc(sizeof(shash_table_t) * 1);
	if (!new_table)
		return (NULL);
	new_table->size = size;
	new_table->shead = NULL;
	new_table->stail = NULL;
	new_table->array = malloc(sizeof(shash_node_t *) * size);
	if (!new_table->array)
		return (NULL);
	for (; i < size; i++)
		new_table->array[i] = NULL;

	return (new_table);
}

/**
 * shash_add_node - inserts node to a sorted linked list in hash table
 * @ht: pointer to the sorted hash table
 * @new_node: node to be added
 * @key: key of new node
 *
 * Return: 1 (always Successful)
*/
int shash_add_node(shash_table_t *ht, shash_node_t *new_node, const char *key)
{
	shash_node_t *temp;

	temp = ht->shead;
	if (!temp)
	{
		new_node->snext = NULL;
		new_node->sprev = NULL;
		ht->shead = new_node;
		ht->stail = new_node;
		return (1);
	}

	while (temp && strcmp(temp->key, key) < 0)
		temp = temp->snext;

	if (!temp)
	{
		new_node->sprev = ht->stail;
		new_node->snext = NULL;
		(ht->stail)->snext = new_node;
		ht->stail = new_node;
		return (1);
	}

	new_node->sprev = temp->sprev;
	new_node->snext = temp;
	if (temp->sprev)
		(temp->sprev)->snext = new_node;
	else
		ht->shead = new_node;
	temp->sprev = new_node;
	return (1);
}

/**
 * shash_table_set - inserts or updates `key` `value` pair to
 *		a sorted hash table at the right place
 * @ht: pointer to the sorted hash table
 * @key: key string, can not be empty
 * @value: value string, can be empty
 *
 * Return: 1 if it successful, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *temp;
	unsigned long int index;

	if (!ht || !(ht->array) || !key || !value || *(key) == 0)
		return (0);
	index = key_index((const unsigned char *) key, ht->size);
	if (!(ht->array[index]))
	{
		new_node = malloc(sizeof(shash_node_t));
		if (!new_node)
			return (0);
		new_node->key = strdup(key);
		new_node->value = strdup(value);
		new_node->next = NULL;
		ht->array[index] = new_node;
	}
	else
	{
		temp = ht->array[index];
		while (temp)
		{
			if (strcmp(temp->key, key) == 0)
			{
				if (temp->value)
					free(temp->value);
				temp->value = strdup(value);
				return (1);
			}
			temp = temp->next;
		}
		new_node = malloc(sizeof(shash_node_t));
		if (!new_node)
			return (0);
		new_node->key = strdup(key);
		new_node->value = strdup(value);
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}

	return (shash_add_node(ht, new_node, key));
}

/**
 * shash_table_get - retrives value assosiated with `key` from hash table `ht`
 * @ht: pointer to the sorted hash table
 * @key: key string, can not be empty
 *
 * Return: value associated with `key`, or NULL if key not found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *temp;
	unsigned long int index;

	if (!ht || !(ht->array) || !key || strlen(key) == 0)
		return (NULL);
	index = key_index((const unsigned char *) key, ht->size);

	if (!(ht->array[index]))
		return (NULL);
	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}


/**
 * shash_table_print - prints key value pair from sorted hash table `ht`.
 *	If `ht` is null, nothing gets printed.
 * @ht: pointer to the hash table
 *
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;

	if (!ht || !(ht->array))
		return;

	printf("{");
	temp = ht->shead;
	while (temp)
	{
		printf("'%s': '%s'%s", temp->key, temp->value
			, temp == ht->stail ? "" : ", ");
		temp = temp->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints key value pair from sorted hash table `ht`
 *	in reverse. If `ht` is null, nothing gets printed.
 * @ht: pointer to the hash table
 *
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp;

	if (!ht || !(ht->array))
		return;

	printf("{");
	temp = ht->stail;
	while (temp)
	{
		printf("'%s': '%s'%s", temp->key, temp->value
			, temp == ht->shead ? "" : ", ");
		temp = temp->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a sorted hash table
 * @ht: pointer to the hash table
 *
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *temp, *temp2;

	if (!ht)
		return;
	temp = ht->shead;
	while (temp)
	{
		temp2 = temp;
		temp = temp->snext;
		free(temp2->key);
		if (temp2->value)
			free(temp2->value);
		free(temp2);
	}
	if (ht->array)
		free(ht->array);
	free(ht);
}
