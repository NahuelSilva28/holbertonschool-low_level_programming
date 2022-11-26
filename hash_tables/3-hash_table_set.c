#include "hash_tables.h"
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *cp_val;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key  == '\0' || value == NULL)
		return (0);

	cp_val = strdup(value); /* Rtr pointer to a new string */
	if (cp_val == NULL)
		return (0);
