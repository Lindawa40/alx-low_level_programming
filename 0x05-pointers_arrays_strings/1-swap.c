/*
 * swap_int - swap the value of two integers *a and *b
 * @a: integer one
 * @b: integer two
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
}
