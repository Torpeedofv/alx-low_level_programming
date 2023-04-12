#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * linear_search - Searches for a value in an array
 * @array: a pointer to the first element of the array
 * @size: the numver of elements in array
 * @value: the value to search for
 * Return: The first index where value is located
 * Description: Prints a value everytime there is comparison
 */
int linear_search(int *array, size_t size, int value)
{
	int index;
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			index = i;
		        return (index);
		};
	};
	return (-1);
}
