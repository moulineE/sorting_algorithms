#include "sort.h"

/**
 * bubble_sort - a function that sorts an array of integers in
 * ascending order using the Bubble sort algorithm
 * @array: the array to sort
 * @size: the size of the array
 */

void bubble_sort(int *array, size_t size)
{
	int tmp;
	unsigned long int i;
	int flag = 0;
	unsigned long int fin = 0;

	if (size < 2)
	{
		return;
	}
	while (fin <= size - 1)
	{
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
				flag++;
			}
		}
		if (flag == 0)
		{
			return;
		}
		else
		{
			flag = 0;
		}
	}
}
