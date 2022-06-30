#include "hash_tables.h"

/**
 * hash_table_delete  - function that deletes a hash table
 * @ht: pointer to the hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
hash_node_t *node;
unsigned long int i;
unsigned char comma_flag = 0;

if (ht == NULL)
return;

for (i = 0; i < ht->size; i++)
{
if (ht->array[i] != NULL)
{
if (comma_flag == 1)
printf(", ");

node = ht->array[i];
while (node != NULL)
{
printf("'%s': '%s'", node->key, node->value);
node = node->next;
if (node != NULL)
printf(", ");
}
comma_flag = 1;
}
}
printf("}\n");
}
