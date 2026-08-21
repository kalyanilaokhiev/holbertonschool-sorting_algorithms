#include <stdio.h>
#include "sort.h"

/**
 * bubble_sort - sorts array of ints in ascending order using Bubble sort
 * @array: array given
 * @size: number of ints
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	for (i = 0; i < size; i++)
	{
		/* not comparing the last element to anything */
		for (j = 0; j < (size - 1); j++)
		{
			/* numbers out of order */
			if (array[j] > array[j + 1])
			{
				/* swap numbers using temp */
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;

				/* print array at each step */
				print_array(array, size);
			}
		}
	}
}
