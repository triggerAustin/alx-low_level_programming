#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *po;
	int i, max2;

	if (min > max)
	{
		return (NULL);
	}
	max2 = max - min + 1;

	po = malloc(sizeof(int) * max2);

	if (po == NULL)
	{
		return (NULL);
	}
	i = 0;
	do {
		po[i] = min++;
		i++;
	} while (min <= max);

	return (po);
}
