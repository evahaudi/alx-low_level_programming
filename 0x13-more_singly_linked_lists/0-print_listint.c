#include "lists.h"

/**
 * print_listint - Prints all  elements of a linked list
 * @h: Linked list of type listint_t to print
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	for (; h; h = h->next, num++)
		printf("%d\n", h->n);

	return (num);
}
