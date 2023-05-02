#include "lists.h"

/**
 * free_listint_safe - Frees a linked list
 * @h: Pointer to the first node in the linked list
 *
 * Return: Number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t l = 0;
	int d;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	for (; *h; l++)
	{
		d = *h - (*h)->next;
		if (d > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
		else
		{
			free(*h);
			*h = NULL;
			break;
		}
	}

	*h = NULL;

	return (l);
}
