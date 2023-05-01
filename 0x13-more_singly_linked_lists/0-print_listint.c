#include "lists.h"

/**                                                                                                
 * print_listint - Prints   elements of a linked list                                           
 * @h: Linked list of type listint_t to print                                                      
 * Return: number of nodes                                                                         
 */
size_t print_listint(const listint_t *h)
{
        size_t nm = 0;

        for (; h; h = h->next, nm++)
                printf("%d\n", h->n);

        return (nm);
}

