#include "main.h"
/**
 * swap_int - swaps integer values
 * @a: first value
 * @b: second value
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
