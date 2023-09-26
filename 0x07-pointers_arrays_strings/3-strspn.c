#include "main.h"

/**
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	char *acc = accept;
	int flag, j, k;

	i = 0;
	flag = 0;

	while (*acc != '\0')
	{
		flag ++;
		acc++;
	}

	while (*s != '\0')
	{
		k = 0;

		for (j = 0; j < flag && *accept != '\0'; j++)
		{
			if (*s == accept[j])
			{
				i++;
				k = 1;
				break;
			}
		}
		if (k == 0)
		{
			break;
		}
		s++;
	}

	return (i);
}
