#include "lists.h"

/**
 * free_listint2 - frees a listint_t and sets the head to NULL
 * @head: pointer to first node
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *node, *current_node;

	if (head != NULL)
	{
		current_node = *head;
		while (current_node != NULL)
		{
			node = current_node;
			current_node = current_node->next;
			free(node);
		}
		*head = NULL;
	}
}
