#include "main.h"

/**
*flip_bits - return number of bits that be flipped to get from n to m
*@n: first number
*@m: final number
*
*Return: the number of bits flipped
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorval = n ^ m;
	int count = 0;

	while (xorval)
	{
		if (xorval & 1)
			count++;
		xorval >>= 1;
	}
	return (count);
}
