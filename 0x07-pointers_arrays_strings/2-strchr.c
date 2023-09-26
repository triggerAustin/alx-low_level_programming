#include "main.h"
#include <stddef.h>

/**
 * _strchr - returnsa pointer to the first occurrence
 *  of the character c in the string s.
 *  @s: pointer s
 *  @c: character to be checked
 *  Return: the character found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (NULL);
	}
	return (s);
}
