#include <stddef.h>
#include <stdlib.h>

/**
 * concate - concatanates two strings
 * @str1: first string
 * @str2: second string
 * @i: length of first string
 * @j: length of second string
 * Return: concatanated string
 */
char *concate(char *str1, char *str2, int i, int j)
{
	int k, l;
	char *concate_str;

	concate_str = malloc((i + j + 1) * sizeof(char));

	if (concate_str == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		concate_str[k] = str1[k];
	}

	for (l = 0; l < j; l++)
	{
		concate_str[i + l] = str2[l];
	}
	concate_str[i + j] = '\0';

	return (concate_str);
}

/**
 * str_concat - concatanates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to concate string
 */
char *str_concat(char *s1, char *s2)
{
	int len, len2;
	char *org_s2, *org_s1;
	char *con_str;

	org_s1 = s1;
	org_s2 = s2;
	len = 0;
	len2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s2[len] != '\0')
	{
		len++;
	}

	while (s1[len2] != '\0')
	{
		len2++;
	}

	con_str = malloc((sizeof(s1)) * sizeof(char));

	if (con_str == NULL)
	{
		return (NULL);
	}
	con_str = concate(org_s1, org_s2, len2, len);

	return (con_str);
}
