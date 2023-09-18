#include "main.h"

/**
 * _puts - prints out a given string
 * @str: string to be printed the length
 */
void _puts(char *str)
{
	int c;
	int len;

	len = _strlen(str);

	for (c = 0; c <= len; c++)
	{
		while (*str != '\0')
		{
			_putchar(*str);
			str++;
		}
	}
	_putchar('\n');
}

/**
 * _strlen - prints length of a string
 * @s: Pointer ref to the string
 * Return: string length
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
