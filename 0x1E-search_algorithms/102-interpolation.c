#include "search_algos.h"

/**
 * interpolation_search - finds target value index in arr using
 * interpolation algo
 * @array: arr to look through
 * @size: size of array
 * @value: target value
 *
 * Return: index or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t H, L, P;/**high low pos*/

	if (!array || size == 0)
		return (-1);

	H = size - 1;
	L = 0;

	while (array[H] != array[L])
	{
		P = L + ((value - array[L]) * (H - L)) / (array[H] - array[L]);

		if (P < 1 || P > H)
		{
			printf("Value checked array[%lu] is out of range\n", P);
			break;
		}

		printf("Value checked array[%lu] = [%d]\n", P, array[P]);

		if (array[P] == value)
			return (P);

		if (array[P] < value)
			L = P + 1;
		else
			H = P - 1;
	}


	if (value == array[L])
		return (L);

	return (-1);
}
