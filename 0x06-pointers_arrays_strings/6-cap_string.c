#include "main.h"

/**
 * cap_string - Will capitalise every word of a string
 * @s: The string to be modified
 *
 * Return: The result
 */
char *cap_string(char *s)

{
	int j, k;

	char str[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (j = 0; s[j] != '\0'; j++)
	{
		if (j == 0 && s[j] >= 'a' && s[j] <= 'z')
			s[j] -= 32;
		for (k = 0; k < 13; k++)
		{
			if (s[j] == str[k])
			{
				if (s[j + 1] >= 'a' && s[j + 1] <= 'z')
					s[j + 1] -= 32;
			}
		}
	}
	return (s);
}
