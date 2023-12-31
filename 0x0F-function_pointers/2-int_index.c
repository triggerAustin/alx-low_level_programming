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
		if (size <= 0)
		{
			return (-1);
		}
		else
		{
			ans = -1;

			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]))
				{
					ans = i;
					break;
				}
			}
		}
	}
	else
	{
		return (-1);
	}
	return (ans);
}
