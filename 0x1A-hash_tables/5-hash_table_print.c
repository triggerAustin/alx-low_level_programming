#include "hash_tables.h"

/**
 *
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *p;
	char *sep;

	if (!ht)
		return;

	printf("{");
	sep = "";
	for (i = 0; ht && i < ht->size; i++)
	{
		p = ht->array[i];
		while (p)
		{
			printf("%s'%s': '%s'", sep, p->key, p->value);
			p = p->next;
			sep = ", "
		}
	}
	printf("}\n");
}

