#include "main.h"

/**
 *
 */
void reverse_array(int *a, int n)
{
	int *rev_arr[98];
	int i;

	for (i = 0; i < n; i++)
	{
		*rev_arr[-i] = a[i];
	}
}
