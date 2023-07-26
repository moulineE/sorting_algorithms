#include "sort.h"

/**
 * selection_sort - a function that sorts an array of integers in
 * ascending order using the Selection sort algorithm
 * @array: the array to sort
 * @size: the size of the array
 */

void selection_sort(int *array, size_t size)
{
	int tmp;
	int tmp_index;
	unsigned long int i, y;
	int flag = 0;

	if (size < 2)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		tmp = array[i];
		for (y = i; y < size; y++)
		{
			if (tmp > array[y])
			{
				tmp = array[y];
				tmp_index = y;
				flag++;
			}
		}
		if (flag > 0)
		{
			array[tmp_index] = array[i];
			array[i] = tmp;
			print_array(array, size);
			flag = 0;
		}
	}
}
