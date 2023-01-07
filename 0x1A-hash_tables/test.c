#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"


int main(void)
{
unsigned long int i;
hash_table_t *ht;
ht = hash_table_create(1024);

/*Add the strings that collide using the djb2 algorithm to the hash table
 */
hash_table_set(ht, "hetairas", "cool");
hash_table_set(ht, "mentioner", "cool");
hash_table_set(ht, "heliotropes", "cool");
hash_table_set(ht, "neurospora", "cool");
hash_table_set(ht, "depravement", "cool");
hash_table_set(ht, "serafins", "cool");
hash_table_set(ht, "stylist", "cool");
hash_table_set(ht, "subgenera", "cool");
hash_table_set(ht, "joyful", "cool");
hash_table_set(ht, "synaphea", "cool");
hash_table_set(ht, "redescribed", "cool");
hash_table_set(ht, "urites", "cool");
hash_table_set(ht, "dram", "cool");
hash_table_set(ht, "vivency", "cool");

/* Check if there is a collision by checking if the strings are being stored in the same index
 * If they are, it means there is a collision
 * You can implement a function to print out the keys and values stored in each index of the hash table to check for collisions
 */
for (i = 0; i < ht->size; i++)
{
    hash_node_t *node = ht->array[i];
    printf("Index %lu:\n", i);
    while (node)
    {
        printf("Key: %s, Value: %s\n", node->key, node->value);
        node = node->next;
    }
}
return (EXIT_SUCCESS);
}
