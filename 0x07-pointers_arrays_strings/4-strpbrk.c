#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - returns first occurence of acept in s
 * @s: string to check
 * @accept: occurence to look for
 * Return: a pointer to the byte in s that matches
 * one of the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int j, flag;
	char *org_accept = accept;

	flag = 0;

	while (*org_accept != '\0')
	{
		flag++;
		org_accept++;
	}

	while (*s != '\0')
	{
		for (j = 0; j < flag; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);

}
