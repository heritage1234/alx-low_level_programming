#include "lists.h"

/**
 * listint_len - returns the number in a linked lists
 * @h: list
 * Return: of nodes in list
 */

size_t listint_len(const listint_len *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		num_nodes += 1;
		h = h->next;
}
	return (num_nodes);
}
