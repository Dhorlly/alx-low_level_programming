#include "main.h"

/*
 * void swap_int(int *a, int *b) : function that swaps the values of two integers
 * @a : this is a pointer
 * @b: this is a pointer
 *
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
