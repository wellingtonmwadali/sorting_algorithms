#include "sort.h"

/**
 * swap_nodes - function that swap two nodes in a listint_t
 * doubly-linked list.
 *
 * @head: pointer to the head of the doubly-linked list.
 * @node1: first node to swap.
 * @node2: The second node to swap.
 */
void swap_nodes(listint_t **head, listint_t **node1, listint_t *node2)
{
	(*node1)->next = node2->next;
	if (node2->next != NULL)
		node2->next->prev = *node1;
	node2->prev = (*node1)->prev;
	node2->next = *node1;
	if ((*node1)->prev != NULL)
		(*node1)->prev->next = node2;
	else
		*head = node2;
	(*node1)->prev = node2;
	*node1 = node2->prev;
}

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
	listint_t *current, *insert, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	for (current = (*list)->next; current != NULL; current = tmp)
	{
		tmp = current->next;
		insert = current->prev;
		while (insert != NULL && current->n < insert->n)
		{
			swap_nodes(list, &insert, current);
			print_list((const listint_t *)*list);
		}
	}
}
