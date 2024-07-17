#include "search_algos.h"

/**
 * binary_search - finds target value in array of size size using
 * binary search
 *
 * @array: array to look through
 * @size: size of array
 * @value: target value
 *
 * Return: return -1 if unsuccesful, target in array if found
 */
int binary_search(int *array, size_t size, int value)
{
	int L = 0;
	int R = size - 1;
	int m, i;

	if (!array)
		return (-1);

	while (L <= R)
	{
		m  = floor((L + R) / 2);

		printf("Searching in array:");
		for (i = L; i <= R; i++)
		{
			if (i == R)
				printf(" %d\n", array[i]);
			else
				printf(" %d,", array[i]);
		}
		if (array[m] < value)
			L = (m + 1);
		else if (array[m] > value)
			R = (m - 1);
		else
			return (m);
	}
	return (-1);
}
