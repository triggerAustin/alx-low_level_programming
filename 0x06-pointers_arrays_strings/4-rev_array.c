#include "main.h"

/**
 * reverse_array - reverses an array
 * Description: uses atemp int to store values and swapvalues at index i with
 * at index j
 * @a: array
 * @n: array size
 */
void reverse_array(int *a, int n)
{
	int temp, j, i;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
