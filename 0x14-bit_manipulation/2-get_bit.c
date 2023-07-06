#include "main.h"

/**
 * get_bit - Returns the value of a bit at an index in a decimal number
 * @n: The number to search
 * @index: Index of the bit
 *
 * Return: The value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 0;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1); /* Invalid index */
	}

	mask = 1UL << index;
	return ((n & mask) ? 1 : 0);
}

