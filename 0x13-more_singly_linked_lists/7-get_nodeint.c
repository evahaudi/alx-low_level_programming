#include "lists.h"

/**
 * get_nodeint_at_index - Returns the node at a certain index in a linked list
 * @head: First node in the linked list
 * @index: Index of the node to return
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k;
	listint_t *current_node = head;

	for (k = 0; current_node && k < index; k++)
	{
		current_node = current_node->next;
	}

	return (current_node);
}
