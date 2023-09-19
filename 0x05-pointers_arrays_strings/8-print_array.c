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
		printf(" ");
	}

	for (i = 0; i < n; i++)
	{
		if (i < n)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}
