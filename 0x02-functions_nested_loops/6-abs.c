#include "main.h"
/**
 * _abs - to get absolute value of integer
 * @t: give value
 *
 * Return: absolute value
 */
int _abs(int t)
{
	if (t < 0)
	{
	int r;

	r = t * -1;
	return (r);
	}
	else
	{
		return (t);
	}
}
