#include "main.h"

/**
 * _puts - prints out a given string
 * @str: string to be printed
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
