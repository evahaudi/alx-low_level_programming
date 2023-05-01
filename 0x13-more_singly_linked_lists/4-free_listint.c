#include "lists.h"

/**
 * free_listint - Frees a linked list
 * @head: Pointer to the head of the list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *current_node, *next_node;

	current_node = head;

	while (current_node)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}
}
