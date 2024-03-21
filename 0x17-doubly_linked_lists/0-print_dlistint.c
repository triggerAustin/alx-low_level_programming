#include "lists.h"

/**
 * print_dlistint - prints elements of the list
 * @h: pointer to head of list
 * Return: number of elements in the dlist
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t i = 0;

	if (h == NULL)
		return (i);
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		i++;
	}
	return (i);
}
