#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - iterates through an array and prints each element
 * @array: to be looped through
 * @size: size of array
 * @action: function to print each element
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
