#include "main.h"

/**
 * get_endianness - checks if the machine is little or big endian
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void) {
    unsigned int value = 1;
    unsigned char *bytePointer = (unsigned char *)&value;

    if (*bytePointer == 1) {
      return (1); /* Little endian */
    } else {
      return (0); /* Big endian */
    }
}