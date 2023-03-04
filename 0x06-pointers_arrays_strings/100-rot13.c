#include "main.h"
/**
 * rot13 - will be encoding a string
 * @str: string to encode
 *
 * Return: result of encoded string
 */
char *rot13(char *str)
{
	char *result = str;
	int shift = 13;
	int i;
	char *p;

	for (p = str; *p != '\0'; p++)
{
	for (i = 0; i < 2; i++)
	{
		if ((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z'))
		{
			*p += shift;

			if ((*p > 'z') || (*p > 'Z' && *(p - 1) <= 'Z'))
			{
				*p -= 26;
			}
		}
		shift = -shift;
	}
}
return (result);
}
