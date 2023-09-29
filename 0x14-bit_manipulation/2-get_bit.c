#include "main.h"

/**
*get_bit - get the value of a bit at the given index
*@n: The number to get the bit from.
*@index: The index of the bit to get.
*
*Return: The value of the bit at index index or -1 if an error occured.
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index < 0 or index >= 32)
		return (-1);

    return ((n >> index) & 1);
}
