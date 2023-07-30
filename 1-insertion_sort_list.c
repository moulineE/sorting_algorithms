#include "sort.h"
/**
 * insertion_sort_list - a function that sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: a doubly linked list of integers
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current = *list;
	listint_t *tmp;

	if (list == NULL || current->next == NULL)
	{
		return;
	}
	while (current != NULL)
	{
		while ((current->prev != NULL) && (current->prev->n > current->n))
		{
			tmp = current->prev;
			current->prev = tmp->prev;
			tmp->next = current->next;
			if (current->next)
			{
				current->next->prev = tmp;
			}
			current->next = tmp;
			tmp->prev = current;
			if (current->prev != NULL)
			{
				current->prev->next = current;
			}
			else
			{
				*list = current;
			}
			print_list(*list);
		}
		current = current->next;

	}
}
