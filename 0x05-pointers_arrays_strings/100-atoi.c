#include "main.h"

/**
 * _atoi - Will convert a string into an integer
 *
 * @s: The string to be converted
 *
 * Return: The int converted from string
 */
int _atoi(char *s)

{
	int f, g, h, lnt, i, dig;

	f = 0;
	g = 0;
	h = 0;
	lnt = 0;
	i = 0;
	dig = 0;

	while (s[lnt] != '\0')
		lnt++;

	while (f < lnt && i == 0)
	{
		if (s[f] == '-')
			++g;

		if (s[f] >= '0' && s[f] <= '9')
		{
			dig = s[f] - '0';
			if (g % 2)
				dig = -dig;
			h = h * 10 + dig;
			i = 1;
			if (s[f + 1] < '0' || s[f + 1] > '9')
				break;
			i = 0;
		}
		f++;
	}
	if (i == 0)
		return (0);

	return (h);
}
