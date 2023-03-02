#include "main.h"
#include <string.h>
/**
 * reverse_array - reversing the content of an array of integers
 * @a: arrays of integers
 * @n: number of elements to reverse
 *
 * Return: reversed content
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
