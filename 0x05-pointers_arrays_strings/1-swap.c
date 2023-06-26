#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: first integer to use.
 * @b: second integer to use.
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
