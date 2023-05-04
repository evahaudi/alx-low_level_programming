#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if there is an error
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int a = 0, p = 0;

	if (b == NULL)
		return (0);

	/* Find the end of the string */
	while (b[a] != '\0')
		a++;

	/* Loop through the string backwards */
	a--;
	while (a >= 0)
	{
		if (b[a] == '1')
			result += 1u << p;
		else if (b[a] != '0')
			return (0);
		p++;
		a--;
	}

	return (result);
}
