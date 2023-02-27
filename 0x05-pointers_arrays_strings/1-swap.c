/*
 * swap_int - swap the value of two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
}
