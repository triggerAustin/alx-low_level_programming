#include "hash_tables.h"

/**
 *
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *p;

	if (!ht)
		return;

	printf("{");
	for (i = 0; ht && i < ht->size; i++)
	{
		p = ht->array[i];
		while (p)
		{
			if (i == (ht->size - 1))
			{
				printf("%ld'%s': '%s'", i, p->key, p->value);
			}
			else
			{
				printf("%ld'%s': '%s', ", i, p->key, p->value);
			}
			p = p->next;
		}
	}
	printf("}\n");
}

