#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: character
 *
 * Return: 1 if c is letter, upper or lower
 * 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
