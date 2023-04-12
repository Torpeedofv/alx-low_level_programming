#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: a pointer to the first element of the array to search
 * @size: number of elements in arrray
 * @value: the value to search for
 * Return: value or -1 if value is not in array
 */

int binary_search(int *array, size_t size, int value)
{
	size_t start = 0, end = size - 1, mid, i;

	while (start <= end)
	{
		mid = (start + end) / 2;
		printf("Searching in array: ");
		for (i = start; i < end; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);
		if (array[mid] == value)
		{
			return (mid);
		} else if (array[mid] < value)
		{
			start = mid + 1;
		} else if (array[mid] > value)
		{
			end = mid - 1;
		}
	}
	return (-1);
}
