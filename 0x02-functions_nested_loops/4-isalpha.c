#include "main.h"

/**
 * _isalpha - checks whether a value is an alphabet
 * @c: integer value to be worked on
 *
 * Return: the value of a 0 if not alphabet 1 if alphabet
 */
int _isalpha(int c)
{
	int a;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		a = 1;
	}
	else
	{
		a = 0;
	}
	return (a);
}
