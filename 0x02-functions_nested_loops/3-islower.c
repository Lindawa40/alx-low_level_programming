#include "main.h"
/**
 * _islower - will check for lowercase character
 * @c:character
 *
 * Return: lowercase character
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
		}
}
