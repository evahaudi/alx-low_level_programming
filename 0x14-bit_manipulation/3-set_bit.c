#include "main.h"

/**
 * set_bit - Sets a bit at a given index to 1
 * @n: Pointer to the number to change
 * @index: Index of the bit to set to 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index) {
    unsigned long int mask = 0;
    
    if (index >= sizeof(unsigned long int) * 8) {
      return (-1); /* Invalid index */
    }

     mask = 1UL << index;
    *n |= mask;

    return (1);
}
