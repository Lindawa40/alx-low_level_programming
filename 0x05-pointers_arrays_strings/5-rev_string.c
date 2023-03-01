#include <stdio.h>
#include <string.h>
/*
 * rev_string - Reverses a string
 * @s: string to be reversed
 *
 * Return: reverse string
 */

void rev_string(char *s)
{
	int i, j, size;
	char tmp;

	if (!s)
		return;
	size = strlen(s);
	j = size - 1;
	for (i = 0; size / 2 > 1; i++)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		j--;
	}
}
