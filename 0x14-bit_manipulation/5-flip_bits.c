#include "main.h"

/**
 * flip_bits - Counts the number of bits to change
 * to get from one number to another
 * @n: First number
 * @m: Second number
 *
 * Return: Number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int k, cnt = 0;
unsigned long int curr;
unsigned long int e = n ^ m;

for (k = 63; k >= 0; k--)
{
curr = e >> k;
if (curr & 1)
cnt++;
}

return (cnt);
}
