#include "main.h"
#include <stdio.h>

/**
 * _strncpy  copys n characters from src to dest
 * @dest: destination to copy to 
 * @src: strng to be copied
 * @n: number of characters to be copied
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *org_dest = dest;
	size_t j = n;

	while (j > 0 && *src != '\0')
	{
		*dest++ = *src++;
		j--;
	}

	while (j > 0)
	{
		*dest++ = '\0';
		j--;
	}

	return (org_dest);
}
