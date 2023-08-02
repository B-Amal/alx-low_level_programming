#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to first node
 * @idx: index of new_node
 * @n: value of new_node
 *
 * Return: address of new_node, NULL on failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current_node;
	unsigned int count;

	if (head == NULL)
		return (NULL);
	current_node = *head;
	count = 0;
	if (current_node == NULL && idx != 0)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (count != idx - 1)
	{
		current_node = current_node->next;
		if (current_node == NULL)
		{
			free(new_node);
			return (NULL);
		}
		count++;
	}
	new_node->next = current_node->next;
	current_node->next = new_node;
	return (new_node);
}
