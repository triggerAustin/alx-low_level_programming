#include "hash_tables.h"

/**
 * hash_table_get - gets the value at key in ht
 * @ht: pointer to hash table
 * @key: key in hash
 *
 * Return: value at key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *hs_node;
	unsigned long int index;

	if (!ht || !key || *key == '\0')
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	hs_node = ht->array[index];

	while (hs_node)
	{
		if(strcmp(hs_node->key, key) == 0)
			return (hs_node->value);
		hs_node = hs_node->next;
	}
	return (NULL);
}
