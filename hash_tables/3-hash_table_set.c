#include "hash_tables.h"
/**
* hash_table_set - adds an element to the hash table
* @ht: hash table to add
* @key: key
* @value: value
* Return: 1 if succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *new_node;
char *value_copy;
unsigned long int index, curr_index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
	return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
	return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (curr_index = index; ht->array[curr_index]; curr_index++)
	{
		if (strcmp(ht->array[curr_index]->key, key) == 0)
		{
			free(ht->array[curr_index]->value);
			ht->array[curr_index]->value = value_copy;
			return (1);
		}
	}

		new_node = malloc(sizeof(hash_node_t));
		if (new_node == NULL)
	{
		free(value_copy);
		return (0);
	}
		new_node->key = strdup(key);
		if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = value_copy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

return (1);
}
