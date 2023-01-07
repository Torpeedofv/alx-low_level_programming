#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/*
 *hash_table_get: a function that retrieves the value of a key
 *@ht - a hash table
 *@key - the key to a value
 *
 * Return - the value of the specified key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || strlen(key) == 0)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (node->value);
}
