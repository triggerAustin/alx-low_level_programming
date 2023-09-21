#include "main.h"
#include <stddef.h>

/**
 * _strcmp - compares two strings whether they are equal
 * @s1: first string
 * @s2: second string
 * Return: the diff between ascii of similar values
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return ((*(unsigned char *)s1) - (*(unsigned char *)s2));
}
