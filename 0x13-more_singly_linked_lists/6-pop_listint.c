#include "lists.h"

/**
 * pop_listint - deletes the head node of listint_t
 * @head: pointer to first node
 *
 * Return: value of popped node
 */
int pop_listint(listint_t **head)
{
	listint_t *current_node;
	int n;

	current_node = *head;
	if (current_node == NULL)
		return (0);
	n = current_node->n;
	*head = current_node->next;
	free(current_node);
	return (n);
}
