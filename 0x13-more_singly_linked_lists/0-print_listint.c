#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list
 * @h: Pointer to the first element in the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t no_of_elements = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		no_of_elements++;
	}

	return (no_of_elements);
}
