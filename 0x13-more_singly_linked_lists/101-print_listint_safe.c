#include "lists.h"
#include <stdio.h>

size_t lpd_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * lpd_listint_len - Count the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped it returns 0.
 * Otherwise - The number of unique nodes in the list.
 */
size_t lpd_listint_len(const listint_t *head)
{
	const listint_t *t, *h;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	t = head->next;
	h = (head->next)->next;

	for (; h != NULL; nodes++)
	{
		if (t == h)
		{
			t = h;
			for (; t != h; nodes++)
			{
				t = t->next;
				h = h->next;
			}

			t = t->next;
			for (; t != h; nodes++)
			{
				t = t->next;
			}

			return (nodes);
		}

		t = t->next;
		h = (h->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - prints a listint_t list safely.
 * @head: Pointer to the head of the listint_t list.
 *
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, idx = 0;

	nodes = lpd_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (idx = 0; idx < nodes; idx++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
