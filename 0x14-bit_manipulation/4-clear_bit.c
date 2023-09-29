#include "main.h"

/**
*clear_bit - clear thebit at the index.
*@n: the number to index.
*@index: the bit to be clear.
*
*Return: 1 on success, -1 on error
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
