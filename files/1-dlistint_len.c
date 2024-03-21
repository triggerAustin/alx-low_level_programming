#include "lists.h"

/**
 * dlistint_len - return the length of a dlist
 * @h: pointer to the head of a node
 * Return: length of dlist
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t i;

	i = 0;

	if (current == NULL)
		return (i);

	while (current != NULL)
	{
		i++;
		current = current->next;
	}
	return (i);
}
