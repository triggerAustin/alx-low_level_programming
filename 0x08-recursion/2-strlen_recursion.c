#include "main.h"

/**
 * _strlen_recursion - prints the length of a string recursively
 * @s: string
 * Description: each recursive call adds the output of the fn to i
 * Return: value of i
 */
int _strlen_recursion(char *s)
{
	int i;

	i = 0;

	if (*s != '\0')
	{
		i++;
		return (i + _strlen_recursion(s + 1));
	}
	else
	{
		return (i);
	}

	return (i);
}
