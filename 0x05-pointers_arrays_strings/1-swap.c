#include "main.h"

/*
 * swap_int(int *a, int *b) : function that swaps the values of two integers
 * @a :pointer
 * @b: pointer
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
