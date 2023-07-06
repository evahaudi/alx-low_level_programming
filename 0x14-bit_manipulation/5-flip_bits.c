#include "main.h"

/**
 * flip_bits - Counts the number of bits to change
 * to get from one number to another
 * @n: First number
 * @m: Second number
 *
 * Return: Number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m) {
    unsigned long int xorResult = n ^ m;
    unsigned int count = 0;

    while (xorResult != 0) {
        if (xorResult & 1)
            count++;

        xorResult >>= 1;
    }

    return (count);
}
