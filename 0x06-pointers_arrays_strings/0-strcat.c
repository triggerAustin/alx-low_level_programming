#include "main.h"
#include <stdio.h>

/**
 *
 */
char *_strcat(char *dest, char *src)
{
	char *org_dest = dest;
	
	while (*dest != '\0')
	{
		++dest;
	}

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';

	return (org_dest);
}
