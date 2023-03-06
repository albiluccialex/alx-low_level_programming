#include "main.h"

/**
 * rot13 - Will encode a string in rot13
 * @s: string to be encoded
 *
 * Return: the resulting string
 */

char *rot13(char *s)
{
	int a, b;

	char j[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char k[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; j[b] != '\0'; b++)
		{
			if (s[a] == j[b])
			{
				s[a] = k[b];
				break;
			}
		}
	}
	return (s);
}
