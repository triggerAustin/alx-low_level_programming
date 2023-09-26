#include "main.h"
#include <stddef.h>

/**
 * comp - check whether ned is in hay
 * @hay: string to check through
 * @ned: string to check for
 * @flag: size of ned
 * Return: hay
 */
char *comp(char *hay, char *ned, int flag)
{
	int j, k, i;

	for (j = 0; hay[j] != '\0'; j++)
	{
		k = 0;

		if (flag == 0)
		{
			return (hay);
		}

		for (i = 0; ned[i] != '\0'; i++)
		{
			if (hay[j + i] == ned[i])
			{
				k++;
			}
			else
			{
				break;
			}
		}

		if (k == flag)
		{
			return (&hay[j]);
		}

	}
	if (k != flag)
	{
		return (NULL);
	}

	return (hay);
}

/**
 * _strstr - checks whether needle is in haystack
 * @haystack: string to check for needle in
 * @needle: to chek in haystuck
 * Return: haystuck
 */
char *_strstr(char *haystack, char *needle)
{
	char *org_needle = needle;
	char *ans;
	int flag;

	flag = 0;

	while (*org_needle != '\0')
	{
		flag++;
		org_needle++;
	}

	ans = comp(haystack, needle, flag);

	return (ans);
}

