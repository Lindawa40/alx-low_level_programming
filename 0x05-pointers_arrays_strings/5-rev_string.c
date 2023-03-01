#include "main.h"
#include <string.h>
/**
 * rev_string - Reverses a string
 * @s: string to be reversed
 *
 * Return: Reversed string
 */

void rev_string(char *s)
{
	int length = strlen(s);
	int i;

	for (i = 0; i < length / 2; i++)
	{
		char temp = s[i];

		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
