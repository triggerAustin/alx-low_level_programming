#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from second string
 * Return: pointer to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *po;
	unsigned int i, j, s1_len, s2_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1_len = 0;
	while (s1[s1_len] != '\0')
	{
		s1_len++;
	}
	s2_len = 0;
	while (s2[s2_len] != '\0')
	{
		s2_len++;
	}
	po = malloc(s1_len + n + 1);
	if (po == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s1[i] != '\0')
	{
		po[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < n)
	{
		po[i] = s2[j];
		i++;
		j++;
	}
	po[i] = '\0';
	return (po);
}
