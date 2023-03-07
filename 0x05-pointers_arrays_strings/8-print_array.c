#include "main.h"
/**
 * print_array - print elements of an array
 * @a: array of integers
 * @n: number of elements
 *
 * Return: elements of an array
 */
void print_array(int *a, int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		printf("%d", a[k]);

		if (k != (n - 1))
		{
			printf(",");
		}
	}
	printf("\n");
}
