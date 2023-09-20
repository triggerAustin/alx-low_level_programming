#include "main.h"
#include <stdio.h>

/**
 *
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
			while (i < n)
			{
				*dest = *src;
				i++;
			}
		}

		src++;
		dest++;
	}
	*dest = '\0';

	return (org_dest);
}
