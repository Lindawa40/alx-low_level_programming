#include "main.h"
#include <string.h>
/**
 * string_toupper - converts lowercase to uppercase characters
 * @s: the character
 *
 * Return: uppercase characters
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
			i++;
	}
	return (s);
}
