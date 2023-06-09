#include "lists.h"

/**
 * free_listint_safe - Frees a linked list safely
 *
 * @head_ptr: A pointer to a pointer to the head of the list
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **head_ptr)
{
	size_t count = 0;
	listint_t *current_node, *next_node;

	if (head_ptr == NULL || *head_ptr == NULL)
		return (0);

	current_node = *head_ptr;

	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node);
		count++;

		if (next_node >= current_node)
			break;

		current_node = next_node;
	}

	*head_ptr = NULL;
	return (count);
}
