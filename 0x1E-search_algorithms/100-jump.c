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

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += jump_size;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);
	for (; array[i] <= value && i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (array[i]);
		}
	}
	if (i < size)
	{
		printf("Found %d at index: %ld\n", array[i], i);
	}
	return (-1);
}

