#include "hash_tables.h"

/**
 * hash_table_get - function that returns the value associated with a key
 * @ht: pointer to the hash table
 * @key: key to be hashed
 * Return: pointer to the value associated with the key or NULL if not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *node;
unsigned long int index;

if (ht == NULL || key == NULL)
return (NULL);

index = key_index((const unsigned char *)key, ht->size);
node = ht->array[index];
while (node)
{
if (strcmp(node->key, key) == 0)
return (node->value);
node = node->next;
}
return (NULL);
}
