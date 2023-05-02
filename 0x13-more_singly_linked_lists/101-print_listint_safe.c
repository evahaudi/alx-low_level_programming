#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a linked list
 *
 * @head: pointer to the start of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t no_of_nodes = 0;

	if (head == NULL)
	{
		fprintf(stderr, "Error: NULL pointer passed to print_listint_safe\n");
		exit(98);
	}

	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
                no_of_nodes++;

                if (head->next <= head)
                {
                        printf("-> [%p] %d\n", (void *)head->next, head->next->n);
                        break;
                }

                head = head->next;
	}

	return (no_of_nodes);
}
