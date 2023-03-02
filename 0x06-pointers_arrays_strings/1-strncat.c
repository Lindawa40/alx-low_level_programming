#include "main.h"
#include <string.h>
/**
 * _strncat - to concatenate two strings
 * @dest: first string
 * @src: second string
 * @n: number of bytes
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int slen = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[slen + i] = src[i];
	}
	dest[slen + i] = '\0';
	return (dest);
}
