#include "main.h"

/**
 * get_endianness - checks if the machine is little or big endian
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int k = 1;
	char *a = (char *) &k;

	if (*a)
		return (1); /* Little endian */
	else
		return (0); /* Big endian */
}
