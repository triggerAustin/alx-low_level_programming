#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * _strdup - cp a string to another location
 * @str: string to be copied
 * Return: pointer to string or null if fail
 */
char *_strdup(char *str)
{
	char *cp_str, *org_str;
	int i, len;

	org_str = str;
	len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*str != '\0')
	{
		len++;
		str++;
	}

	cp_str = malloc((len + 1) * sizeof(char));

	if (cp_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		cp_str[i] = org_str[i];
	}
	cp_str[len] = '\0';

	return (cp_str);
}
