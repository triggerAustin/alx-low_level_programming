#include "main.h"
/**
 * _strcmp - function
 * @s1: parameter
 * @s2: parameter
 * Return: 0;
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 < *s2)
			return (*s1 - *s2);
		else if (*s1 > *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}

	if (*s1 == '\0' && *s2 != '\0')
		return (*s1 - *s2);
	else if (*s1 != '\0' && *s2 == '\0')
		return (*s1 - *s2);
	else
		return (0);
}
