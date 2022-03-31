#include "main.h"
/**
 * swap_int - swaps the value of two integers
 *@a: pointer to be updated
 *@b: also pointer to be updated
 *
 * Description: the function swaps two integers
 *
 * Return; The value of the swap
 */
void swap_int(int *a, int *b)
{
	int y;

	y = *a;
	*a = *b;
	*b = y;
}
