#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: The number of data inside the,
 * elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num_of_data;

	if (!head || !*head)
		return (0);

	num_of_data = (*head)->n;
	temp = (*head)->next;

	while (temp)
	{
		free(*head);
		*head = temp;
		temp = temp->next;
	}

	free(*head);
	*head = NULL;

	return (num_of_data);
}
