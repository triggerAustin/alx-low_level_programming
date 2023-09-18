#include "main.h"

/**
 * _streln - prints the length of a string
 * @s: pointer to the string
 *
 * Return: strlen
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
