#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
#include <math.h>
/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: a pointer to the first element of the array
 * @size: is the number of elements in array
 * @value: the targent number searched for in the array
 * Return: the first index where value is located or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump_size = sqrt(size),  jump = 0, i = 0;

	for (i = previous = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += jumpsize;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);
	return (-1)
}

