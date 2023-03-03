#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strcpy - copies the string pointed to by src
 * including the terminating null byte
 *
 * @dest: pointer to the buffer
 * @src: string to be copied
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int lnt, i;

	lnt = 0;

	while (src[lnt] != '\0')
	{
		lnt++;
	}
	for (i = 0; i < lnt; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
