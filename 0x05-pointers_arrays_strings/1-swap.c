#include "main.h"
/*
 * swap_int(int *a, int *b); :function that swaps the values of two integers
 * @a : first integer
 * @b : second integer
 *
 */

void swap_int(int *a, int *b)
{
	int ope;
	ope = *b;
	*b = *a;
	*a = ope;
}
