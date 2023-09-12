#include "main.h"
/**
 *_islower - checks whether a value is lowercase
 * @int c: takes in an integer value to work on
 * 
 * Return: the value of a
 */
int _islower(int c)
{
	int a;

	if (c >= 'a' && c <= 'z')
	{
		a = 1;
	}
	else
	{
		a = 0;
	}
	return (a);
}
