#include "hash_tables.h"

/**
 *
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0, i;
	hash_node_t *new_hash_node = NULL;
	hash_node_t *tmp = NULL;

	if (!ht || !key || !(*key) || !value)
		return (0);

	index = key_index((unsigned char *) key, ht->size);

	/* check if key exists*/
	for (i = 0; ht->array[i]; i++)
	{
		/* add value to array if key exists*/
		if (strcmp(ht->array[key], key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value;
			return (1);
		}
	}
	
	/*add new node with node->value as value*/
	new_hash_node = malloc(sizeof(hash_node_t));
	if (!new_hash_node)
		return (0)

	new_hash_node->key = strdup(key);
	if (!new_hash_node->)
	{
		free(new_hash_node);
		return(0);
	}
	
	new_hash_node->value = value;
	new_hash_node->next = ht->array[index];
	ht->array[index] = new_hash_node;

	return (1);
}
