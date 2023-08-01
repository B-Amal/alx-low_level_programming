#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of listint_t
 * @head: pointer to first node
 * @index: index of node
 *
 * Return: pointer to node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (count != index)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
		count++;
	}
	return (head);
}
