#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *f, *r;

	if (*head == NULL || (*head)->next == NULL)
		return (*head);

	f = *head;
	r = (*head)->next;

	r = reverse_listint(&r);
	f->next->next = f;
	f->next = NULL;
	*head = r;

	return (r);
}
