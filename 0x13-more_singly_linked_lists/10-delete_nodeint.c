#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node in a linked list at a certain index
 * @head: Pointer to the first element in the list
 * @index: Index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *c = NULL;
	unsigned int a;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (a = 0; a < index - 1; a++)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
	}

	c = temp->next;
	temp->next = c->next;
	free(c);

	return (1);
}
