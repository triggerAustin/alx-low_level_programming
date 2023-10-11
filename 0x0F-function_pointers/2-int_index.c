#include "function_pointers.h"

/**
 * int_index - performs an action on array elem based on function param
 * @array: array to be worked on
 * @size:size of array
 * @cmp: function to work on array
 * Return: the integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int ans;

	ans = 0;
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			ans = cmp(array[i]);
		}
	}
	return (ans);
}
