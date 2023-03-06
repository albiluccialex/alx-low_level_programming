#include "main.h"
#include <string.h>
/**
 * _strcat- Concatenates two strings
 *
 * @dest: The string to append
 * @src: Te string to be added to
 *
 * Return: A parameter to the resulting string
 */

char *_strcat(char *dest, char *src)

{
	int j, k;

	j = 0;
	k = 0;

	while (dest[j] != '\0')
		j++;

	while (src[k] != '\0')
	{
		dest[j] = src[k];
		k++;
		j++;
	}
	dest[j] = '\0';

	return (dest);
}
