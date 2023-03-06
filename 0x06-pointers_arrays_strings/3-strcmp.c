#include "main.h"

/**
 * _strcmp - Will compatre two strings
 * @s1: 1st String to be compared
 * @s2: 2nd string to be compared
 *
 * Return: < 0 if s1 is < s2, 0 if both are =, > 0 if s1 is greater s2
 */

int _strcmp(char *s, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
