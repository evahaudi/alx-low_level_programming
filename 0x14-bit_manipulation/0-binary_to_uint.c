#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if there is an error
 */
unsigned int binary_to_uint(const char *b) {
    unsigned int result = 0;

    if (b == NULL)
        return (0);

    while (*b) {
        if (*b != '0' && *b != '1')
	  return 0; /* Invalid character encountered*/

        result = (result << 1) + (*b - '0');
        b++;
    }

    return (result);
}
