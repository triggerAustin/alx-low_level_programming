#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * malloc_checked - returns a pointer to the alloc mem
 * @b: int
 * Return: pointer to alloc mem
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
