#include <stdio.h>
#include "main.h"

/**
 *_strcpy - copies the string pointed to by src
 *	including the terminating null byte (\0),
 *	to the buffer pointed to by dest.
 * @dest: buffer
 * @src: string to be copied
 * Return: return value
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';


	return (dest_start);
}

