#include <stdio.h>

/**
 * swap_int - function that swaps the values of two integers
 * @a: The first interger to be swaped.
 * @b: The second integer to be swaped.
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
/* the fuction that swaps the value of twa intergers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
