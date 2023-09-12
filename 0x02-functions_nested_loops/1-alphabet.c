#include "main.h"
/**
 * print_alphabet - prints alphabets in lower case
 * @void: return type
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');

}
