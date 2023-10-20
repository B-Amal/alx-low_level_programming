#include "lists.h"

/**
 * insert_dnodeint_at_index - func
 * @h: head
 * @idx: index
 * @n: val
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current = *h;
	unsigned int count = 0;

	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (idx == 0)
	{
		if (*h)
		{
			new_node->next = *h;
			(*h)->prev = new_node;
		}
		*h = new_node;
		return (new_node);
	}
	while (current)
	{
		if (count == idx - 1)
		{
			new_node->next = current->next;
			new_node->prev = current;
			if (current->next)
				current->next->prev = new_node;
			current->next = new_node;
			return (new_node);
		}
		current = current->next;
		count++;
	}
	free(new_node);
	return (NULL);
}
