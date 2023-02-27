/*
 * swap_int - swap the value of two integers *a and *b
 *
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
}
