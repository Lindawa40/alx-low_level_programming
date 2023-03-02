#include "main.h"
#include <string.h>
/**
 * _strncpy - will copy a string
 * @dest: first string
 * @src: second string
 * @n: number of bytes
 *
 * Return: copies string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		for (; i < n; i++)
		{
			dest[i] = '\0';
		}
		dest[i] = src[i];
}

	return (dest);
}
