#include "main.h"

/**
 * flip_bits - Counts the numbr of bits to change
 * to get from one number to another
 * @n: First numbe
 * @m: Second numbr
 *
 * Return: Number bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int j, cnt = 0;
unsigned long int cur;
unsigned long int e = n ^ m;

for (j = 63; j >= 0; j--)
{
cur = e >> j;
if (cur & 1)
cnt++;
}
