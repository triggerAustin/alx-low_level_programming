#include "main.h"

/**
 * _isupper - checks whether a value is upper case
 * @c: value to be checked
 *
 * Return: 1 if upper 0 if otherwise
 */
int _isupper(int c)
{
	int i;

	if (c >= 'A' && c <= 'Z')
	{
		i = 1;
	}
	else
	{
		i = 0;
	}
	return (i);
}
