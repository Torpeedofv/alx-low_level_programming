#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
#include <math.h>
/**
 * min - finds the smallest of its arguments
 * @a: one of the arguments to compare
 * @b: of the arguments to compare
 * Return: the smallest argument
 */
size_t min(size_t a, size_t b)
{
	if (a < b)
	{
		return (a);
	}
	return (b);
}

/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: a pointer to the first element of the array
 * @size: is the number of elements in array
 * @value: the targent number searched for in the array
 * Return: the first index where value is located or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size), previous = 0, i = 0;

	while (array[min(jump, size) - 1] < value)
	{
		previous = jump;
		jump += sqrt(size);
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (previous >= size)
		{
			return (-1);
		}
	}
	while (array[previous] < value)
	{
		previous++;
		if (previous == min(jump, size))
		{
			return (-1);
		}
	}
	if (array[previous] == value)
	{
		printf("Found %d at index: %ld\n", array[i], i);
		return (previous);
	}
	return (-1);
}
