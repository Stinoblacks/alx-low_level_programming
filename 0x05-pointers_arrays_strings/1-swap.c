/**
 * swap_int -Swaps the values  of two integer variables
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 *
 * Return 0
 */

void swap_int(int *a, int *b)
{
	int temp;

		temp = *a;
		*a = *b;
		*b = temp;
}
