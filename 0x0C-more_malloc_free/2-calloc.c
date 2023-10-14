#include <stdlib.h>
#include "main.h"

/**
 *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: number of elements
 * @size: size of an element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *po;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	po = malloc(size * nmemb);

	if (po == NULL)
	{
		return (NULL);
	}
	_memset(po, 0, nmemb * size);

	return (po);
}
