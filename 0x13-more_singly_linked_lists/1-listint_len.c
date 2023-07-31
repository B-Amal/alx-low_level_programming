#include "lists.h"

/**
 * listint_len - returns the number of elements in listint_t
 * @h: pointer to first node
 *
 * Return: Number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes_count;

	nodes_count = 0;
	while (h != NULL)
	{
		h = h->next;
		nodes_count++;
	}
	return (nodes_count);
}
