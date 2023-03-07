#include "main.h"
/**
 * _strspn - find length of substring
 * @s: character
 * @accept: second character
 *
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int n;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
		}
		if (!accept[j])
		{
			return (n);
		}
	}
	return (n);
}
