#include "sort.h"
/**
 * bubble_sort - a function that sorts an array of integers
 * using the Bubble sort algorithm
 * @*array: the array to sort
 * @size: size of the array
 * Return - no return
 */

void bubble_sort(int *array, size_t size)
{
	size_t temp, i, j, swap;

	if (!array || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		swap = 0;
		for (j = 0; j < size -i-1; j++)
		{
			if (array[j] > array[j+1])
			{
				temp = array[j+1];
				array[j+1] = array[j];
				array[j] = temp;

				swap = 1;
			}
			print_array(array, size);
		}
		if (swap == 0)
		break;
	}
}
