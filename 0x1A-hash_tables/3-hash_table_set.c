#include "hash_tables.h"

/**
 *  hash_table_set -This adds an element to the hash table
 *  @ht: The hash table
 *  @key: The key of the new element
 *  @value: The value of the new element
 *
 *  Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0, i;
	hash_node_t *new_hash_node = NULL;

	if (!ht || !key || !(*key) || !value)
		return (0);

	index = key_index((const unsigned char *) key, ht->size);
	if (value == NULL)
		return (0);

	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = strdup(value);
			return (1);
		}
	}

	new_hash_node = malloc(sizeof(hash_node_t));
	if (!new_hash_node)
		return (0);

	new_hash_node->key = strdup(key);
	new_hash_node->value = strdup(value);
	new_hash_node->next = ht->array[index];
	ht->array[index] = new_hash_node;
	return (1);
}
