#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * Description: initializes tbale->array to array and
 * table->size to size
 * sets array to an array of NULL
 *
 * @size: size of hash table
 * Return: return hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **array;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = NULL;

	table->array = array;
	table->size = size;

	return (table);
}
