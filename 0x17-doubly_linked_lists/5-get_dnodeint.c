#include "lists.h"

/**
 * get_dnodeint_at_index - func
 * @head: head
 * @index: index of the node, starting from 0
 * Return: returns the nth node of a list, NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}
	return (NULL);
}
