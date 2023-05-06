#include "hash_tables.h"

/**
* hash_table_get - Retrieves a value associated with a key
* @ht: The hash table to look
* @key: The key to search
* Return: The value associed with the key or NULL if not found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *current_node;
unsigned long int index;

if (ht == NULL || key == NULL || *key == '\0')
return (NULL);

index = key_index((const unsigned char *)key, ht->size);
if (index >= ht->size)
return (NULL);

current_node = ht->array[index];
while (current_node && strcmp(current_node->key, key) != 0)
current_node = current_node->next;

return (current_node == NULL ? NULL : current_node->value);
}
