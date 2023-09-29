#include "main.h"

/**
*get_bit - gets the bit at the given index
*@n: the number
*@index: the bit to get
*
*Return: The bit state or -1 on error

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
