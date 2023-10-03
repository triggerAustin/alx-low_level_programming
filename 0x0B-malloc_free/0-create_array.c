#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - creates an array of size size and fills with c
 * @size: size of array
 * @c: character to fill array with
 * Return: null if fail, str if success
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size > 0)
	{
		str = malloc(sizeof(char) * size);

		for (i = 0; i < size; i++)
		{
			str[i] = c;
		}
		str[size] = '\0';
	}
	else
	{
		return (NULL);
	}

	return (str);
}
