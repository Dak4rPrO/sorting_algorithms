#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly linked list of
 * integers in ascending order using the Insertion sort algorithm.
 * @list: doubly linked list.
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *nodeCurren = NULL, *nodeNext = NULL;

	if (!(*list) || list == NULL || (*list)->next == NULL)
		return;

	nodeCurren = (*list)->next;
	while (nodeCurren)
	{
		nodeNext = nodeCurren->next;
		while (nodeCurren->prev && nodeCurren->n < nodeCurren->prev->n)
		{
			nodeCurren->prev->next = nodeCurren->next;
			if (nodeCurren->next)
				nodeCurren->next->prev = nodeCurren->prev;
			nodeCurren->next = nodeCurren->prev;
			if (nodeCurren->next)
			{
				nodeCurren->prev = nodeCurren->next->prev;
				nodeCurren->next->prev = nodeCurren;
			}
			if (nodeCurren->prev)
				nodeCurren->prev->next = nodeCurren;
			else
				(*list) = nodeCurren;
			print_list(*list);
		}
		nodeCurren = nodeNext;
	}
}
