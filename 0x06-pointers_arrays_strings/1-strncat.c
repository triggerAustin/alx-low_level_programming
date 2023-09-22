#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatanates two strings
 * @dest: destination string
 * @src: string to be concatanated
 * @n: number of bytes to concatanate
 * Return: final string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *org_dest = dest;
	int i;

	i = 0;

	while (*dest != '\0')
	{
		++dest;
	}

	while (*src != '\0')
	{
		size_t j = n;

		if (j > sizeof(src))
		{
			*dest = *src;
		}
		else
		{
			if (i < n)
			{
				*dest = *src;
			}
		}
		
		i++;
		src++;
		dest++;
	}
	*dest = '\0';

	return (org_dest);
}
