#include "main.h"

/**
 * _memset - fills memory area apointed by s with n bytes of b
 * @s: pointer to memory area
 * @b: constant byte
 * @n: number of bytes to fill in s
 * Return: value of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
