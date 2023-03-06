#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @s: string to be encoded
 *
 * Return: the resulting string
 */

char *leet(char *s)

{
	int a, b;

	char *j = "aAeEoOtTlL";
	char *k = "4433007711";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (s[a] == j[b])
			{
				s[a] = k[b];
			}
		}
	}
	return (s);
}
