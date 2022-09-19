#include "main.h"

/**
 **swap_int - swaps the value of two integers
 **@a: pointer to an int
 **@b: pointer to an int
 **return: void that means our answer is correct
 **/
void swap_int(int *a, int *b)
{
	int f;

	f = *a;
	*a = *b;
	*b = f;
}
