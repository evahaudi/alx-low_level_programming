#include "lists.h"

/**
 * print_listint - Prints all the elements of a linked list
 * @h: Linked list of type listint_t to print
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num_of_nodes = 0;

	for (; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		num_of_nodes++;
	}

	return (num_of_nodes);
}
