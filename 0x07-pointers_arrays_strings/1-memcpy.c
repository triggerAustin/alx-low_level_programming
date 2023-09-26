#include "main.h"

/**
 * _memcpy - copies n bytes of src to dest
 * @dest: destination to copy to
 * @src: source to copy from
 * @n: number of bytes to copy
 * Return: value of dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *org_dest = dest;

	for (i = 0; *src != '\0' && i < n; i++)
	{
		dest = src;
		src++;
	}

	return (org_dest);
}
