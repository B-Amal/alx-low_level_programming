#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: pointer to first node
 * @index: index of node
 *
 * Return: 1 on success, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *pre_node, *current_node;
	unsigned int count;

	if (head == NULL)
		return (-1);
	current_node = *head;
	count = 0;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current_node->next;
		free(current_node);
		return (1);
	}
	while (count != index)
	{
		pre_node = current_node;
		current_node = current_node->next;
		if (current_node == NULL)
			return (-1);
		count++;
	}
	pre_node->next = current_node->next;
	free(current_node);
	return (1);
}
