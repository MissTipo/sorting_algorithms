#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * using the Insertion sort algorithm
 * @**list: the list to sort
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *new, *current, *temp;

	if (!list || !*list)
		return;
	current = *list;
	while (current = current->next)
	{
		new = current;
		while (current->prev && current->prev->data > current->data)
			temp = new->prev;
		if (new->next)
			new->next->prev = temp;
		if(temp->prev)
			temp->prev->next = new;
		else
			new = *list;
		temp->next = new->next;
		new->prev = temp->prev;
		new->next = temp;
		temp->prev = new;

		print_list(list)
	}
}
