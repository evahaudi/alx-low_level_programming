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
	int result;

	if (index > 63)
		return (-1);

	result = (n >> index) & 1;

	return (result);
}
