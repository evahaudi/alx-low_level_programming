#include "lists.h"

/**
 * free_listint2 - Frees a linked list
 * @head: Double pointer to the head of the linked list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	if (head == NULL || *head == NULL)
		return;

	free_listint2(&(*head)->next);
	free(*head);
	*head = NULL;
}
