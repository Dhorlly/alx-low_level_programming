#include "main.h"

/**
 *  * swap_int - check the code for AlX students.
 *   * @a: variable.
 *    * @b: variable
 *     */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
