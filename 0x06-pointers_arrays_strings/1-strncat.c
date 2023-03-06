#include "main.h"

/**
 * _strncat - Concatenates two strings but will not
 * need to null-terminate
 * @dest: destination string
 * @src: Source string
 * @n: number of bytes of str to concatenate
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int j, k;

	j = 0;
	k = 0;

	while (dest[j] != '\0')
		j++;

	while (src[k] != '\0' && k < n)
	{
		dest[j] = src[k];
		j++;
		k++;
	}
	dest[j] = '\0';

	return (dest);
}
