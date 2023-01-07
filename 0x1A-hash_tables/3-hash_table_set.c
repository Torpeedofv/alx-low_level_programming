#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/*
 * hash_table_set - a function that adds an element to the hash table
 * @ht: pointer to a hash table
 * @key: pointer to a key
 * @value: pointer to a value of a key
 *
 * Return: 1 if successful
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newNode, *temp;
	unsigned long int index = key_index((unsigned char *)key, ht->size);

	if (ht == NULL || strlen(key) == 0 || key == NULL)
		return (0);

	temp = ht->array[index];

	while (temp)
	{
		if (strcmp(key, temp->key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
			temp = temp->next;
	}

	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
		return (0);
	newNode->key = strdup(key);
	newNode->value = strdup(value);
	newNode->next = ht->array[index];
	ht->array[index] = newNode;
	return (1);
}
