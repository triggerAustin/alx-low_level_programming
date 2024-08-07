#include "search_algos.h"

/**
 * jump_search - finds value in array using jump search algo
 * @array: array to look through
 * @size: size of array
 * @value: target value
 *
 * Return: -1 if unseccessful index of value if found
 */
int jump_search(int *array, size_t size, int value)
{
	int step = (int) sqrt((double)size);
	int prev = 0, index = 0;

	if (!array || size == 0)
		return (-1);
	/**find range where value might be*/
	do {
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		index = prev;
		prev = step;
		step += (int) sqrt((double) size);

		if (prev > (int) size)
			break;
	} while (array[((step < (int) size ? step : (int) size) - 1)] < value);

	printf("Value found between indexes [%d] and [%d]\n", index, prev);

	/**linear search to find possible index of value*/
	for (; index < (int) size && index <= prev; index++)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		/**compare value in arr at index with value*/
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
