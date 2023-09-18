#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n array lements
 * @a: array data
 * @n: number of elements to be printed
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		printf("\n");
	}

	for (i = 0; i < n; i++)
	{
		printf(", %d", a[i]);
	}
	printf("\n");
}
