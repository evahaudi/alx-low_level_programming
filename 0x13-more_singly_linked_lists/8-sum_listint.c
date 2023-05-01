#include "lists.h"

/**
 * sum_listint - Determines the addition of all the data in a listint_t list
 * @head: First node in the linked list
 *
 * Return: resulting addition
 */
int sum_listint(listint_t *head)
{
	int add = 0;
	listint_t *temp;

	for (temp = head; temp != NULL; temp = temp->next)
	{
		add += temp->n;
	}

	return (add);
}
