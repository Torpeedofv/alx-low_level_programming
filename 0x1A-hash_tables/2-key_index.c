#include "hash_tables.h"

/**
 * key_index - gives the index of a key or value
 * @key: string used to generate hash value
 * @size: the size of the array of the hash table
 *
 * Return: index at which the key or value will be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *key++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash % size);
}
