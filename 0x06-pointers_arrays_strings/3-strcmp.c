#include "main.h"
#include <string.h>
/**
 * _strcmp - should compare two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: comparison of the strings
 */
int _strcmp(char *s1, char *s2)
{
	if (s1 < s2)
	{
		return (-1);
	}
	else if (s1 == s2)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
