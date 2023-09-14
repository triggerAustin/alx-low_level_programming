#include "main.h"

/**
 * _isdigit - checks whether a value is a digit
 * @c: value to be checked
 *
 * Return: 1 if digit 0 if not
 */
int _isdigit(int c)
{
	int i;

	if (c >= '0' && c <= '9')
	{
		i = 1;
	}
	else
	{
		i = 0;
	}
	return (i);
}
