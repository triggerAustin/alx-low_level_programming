#include "hash_tables.h"

/**
 *
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0, i;
	hash_node_t *new_hash_node = NULL;
	char *value_cp;

	if (!ht || !key || !(*key) || !value)
		return (0);

	index = key_index((const unsigned char *) key, ht->size);
	value_cp = strdup(value);
	if (value == NULL)
		return (0);

	/* check if key exists*/
	for (i = index; ht->array[i]; i++)
	{
		/* add value to array if key exists*/
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_cp;
			return (1);
		}
	}
	
	/*add new node with node->value as value*/
	new_hash_node = malloc(sizeof(hash_node_t));
	if (!new_hash_node)
	{
		free(value_cp);
		return (0);
	}

	new_hash_node->key = strdup(key);
	if (!new_hash_node->key)
	{
		free(new_hash_node);
		return(0);
	}
	
	new_hash_node->value = value_cp;
	new_hash_node->next = ht->array[index];
	ht->array[index] = new_hash_node;
	return (1);
}
