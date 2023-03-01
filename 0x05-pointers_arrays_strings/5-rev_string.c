#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * rev_string- Revrses a string
 *
 * @s: Member of parameter
 *
 * Return: 0
 */
void rev_string(char *s)
{
	int g, stlen, hldr, prtstr;

	g = 0;

	while (s[g] != '\0')
	{
		g++;
	}
	stlen = g - 1;
	prtstr = stlen / 2;
	
	for(g = 0; g <= prtstr; g++)
	{
		hldr = s[g];
		s[g] = s[stlen];
		s[stlen] = hldr;
		stlen--;
	}

}
