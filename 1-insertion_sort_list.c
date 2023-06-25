#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly linked list of integer
 * in ascending order using the Insertion sort algorithm
 *
 * @list: double linked list list
 *
 * Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current_node, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	current_node = (*list)->next;

	while (current_node != NULL)
	{
		tmp = current_node;

		while (tmp->prev != NULL && tmp->n < tmp->prev->n)
		{
			tmp->prev->next = tmp->next;

			if (tmp->next != NULL)
				tmp->next->prev = tmp->prev;

			tmp->next = tmp->prev;
			tmp->prev = tmp->prev->prev;
			tmp->next->prev = tmp;

			if (tmp->prev == NULL)
				*list = tmp;
			print_list(*list);
		}
		current_node = current_node->next;
	}
}
