#include "main.h"

/**
 * swap_int - swaps ttwo integers values
 * @a: first integer
 * @b: second integer
 * Retrun: Nothing
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
