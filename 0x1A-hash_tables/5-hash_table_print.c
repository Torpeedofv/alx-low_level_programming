#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table to print.
 *
 * Description: Key/value pairs are printed in the order
 *              they appear in the array of the hash table.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, lastKey;
	hash_node_t *node;

	if (ht == NULL)
	{
		return;
	}
	lastKey = ht->size - 1;
	while (!ht->array[lastKey] && lastKey != 0)
		lastKey--;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			if (i != lastKey)
				printf(", ");
		}
	}
	printf("}\n");
}
