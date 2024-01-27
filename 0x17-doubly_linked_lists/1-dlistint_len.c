#include "lists.h"

/**
 *
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_len *current = h;
	size_t i = 0;

	if (current == NULL)
		return (i);

	while (current != NULL)
	{
		i++;
		current = current->next;
	}
	return (i);
}
