#include "main.h"
#include <string.h>
/**
 * _strcat- Concatenates two strings
 *
 * @dest: 1st parameter
 * @src: parameter 2
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)

{
	strcat(dest, src);
	return (dest);
}
