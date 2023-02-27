/*
 * swap the value of two integers
 *
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
}
