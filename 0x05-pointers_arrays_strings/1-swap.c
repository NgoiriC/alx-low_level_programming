#include <stdio.h>

/**
 * swap_int - Swaps the values of the two intergers
 * @a: The first integer swapped
 * @b: The second integer swapped
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
/* the function swaps values of two integers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
