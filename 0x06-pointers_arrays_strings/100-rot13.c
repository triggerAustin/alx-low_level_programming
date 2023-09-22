#include "main.h"
#include "stdio.h"

/**
 * leet - prints leet value of char
 * Description: converts a,A,E,e,o,O,T,t,L,l into let counterparts
 * @str: string to convert to 1337
 * Return: the new string
 */
char *rot13(char *str)
{
	int i;
	char *org_str = str;
	char rotmap[128] = {0};

	rotmap['a'] = 'n';
	rotmap['b'] = 'o';
	rotmap['c'] = 'p';
	rotmap['d'] = 'q';
	rotmap['e'] = 'r';
	rotmap['f'] = 's';
	rotmap['g'] = 't';
	rotmap['h'] = 'u';
	rotmap['i'] = 'v';
	rotmap['j'] = 'w';
	rotmap['k'] = 'x';
	rotmap['l'] = 'y';
	rotmap['m'] = 'z';
	rotmap['n'] = 'a';
	rotmap['o'] = 'b';
	rotmap['p'] = 'c';
	rotmap['q'] = 'd';
	rotmap['r'] = 'e';
	rotmap['s'] = 'f';
	rotmap['t'] = 'g';
	rotmap['u'] = 'h';
	rotmap['v'] = 'i';
	rotmap['w'] = 'j';
	rotmap['x'] = 'k';
	rotmap['y'] = 'l';
	rotmap['z'] = 'm';
	rotmap['A'] = 'N';
	rotmap['B'] = 'O';
	rotmap['C'] = 'P';
	rotmap['D'] = 'Q';
	rotmap['E'] = 'R';
	rotmap['F'] = 'S';
	rotmap['G'] = 'T';
	rotmap['H'] = 'U';
	rotmap['I'] = 'V';
	rotmap['J'] = 'W';
	rotmap['K'] = 'X';
	rotmap['L'] = 'Y';
	rotmap['M'] = 'Z';
	rotmap['N'] = 'A';
	rotmap['O'] = 'B';
	rotmap['P'] = 'C';
	rotmap['Q'] = 'D';
	rotmap['R'] = 'E';
	rotmap['S'] = 'F';
	rotmap['T'] = 'G';
	rotmap['U'] = 'H';
	rotmap['V'] = 'I';
	rotmap['W'] = 'J';
	rotmap['X'] = 'K';
	rotmap['Y'] = 'L';
	rotmap['Z'] = 'M';
	
	for (i = 0; str[i] != '\0'; i++)
	{
		if (rotmap[(unsigned char) str[i]] != '\0')
		{
			str[i] = rotmap[(unsigned char) str[i]];
		}
	}

	return (org_str);
}
