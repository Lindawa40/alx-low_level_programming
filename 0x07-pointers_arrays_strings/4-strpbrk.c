#include "main.h"
/**
 * _strpbrk - search for any set of bytes
 * @s: string to be searched
 * @accept: where bytes are searched for
 *
 * Return: any set of bytes
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
