#include "main.h"
#include "stdio.h"

/**
 * rot13 - prints str according to rot13 encryption
 * Description: encodes str into rot13 counterparts
 * @str: string to convert to EBG13
 * Return: the new string
 */
char *rot13(char *str)
{
	int i;
	char *org_str = str;
	char rotmap[128] = {['a'] = 'n', ['b'] = 'o', ['c'] = 'p',
	['d'] = 'q', ['e'] = 'r', ['f'] = 's', ['g'] = 't', ['h'] = 'u',
	['i'] = 'v', ['j'] = 'w', ['k'] = 'x', ['l'] = 'y', ['m'] = 'z',
	['n'] = 'a', ['o'] = 'b', ['p'] = 'c', ['q'] = 'd', ['r'] = 'e',
	['s'] = 'f', ['t'] = 'g', ['u'] = 'h', ['v'] = 'i', ['w'] = 'j',
	['x'] = 'k', ['y'] = 'l', ['z'] = 'm', ['A'] = 'N', ['B'] = 'O',
	['C'] = 'P', ['D'] = 'Q', ['E'] = 'R', ['F'] = 'S', ['G'] = 'T',
	['H'] = 'U', ['I'] = 'V', ['J'] = 'W', ['K'] = 'X', ['L'] = 'Y',
	['M'] = 'Z', ['N'] = 'A', ['O'] = 'B', ['P'] = 'C', ['Q'] = 'D',
	['R'] = 'E', ['S'] = 'F', ['T'] = 'G', ['U'] = 'H', ['V'] = 'I',
	['W'] = 'J', ['X'] = 'K', ['Y'] = 'L', ['Z'] = 'M'};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (rotmap[(unsigned char) str[i]] != '\0')
		{
			str[i] = rotmap[(unsigned char) str[i]];
		}
	}

	return (org_str);
}
