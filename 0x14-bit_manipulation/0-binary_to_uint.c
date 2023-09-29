#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to the binary string.
 *
 * Return: The converted number,
 * or 0 if there is an invalid character or b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int bit_value = 1;
	int index = 0;

	if (b == NULL)
		return (0);

	while (b[index] != '\0')
	{
	if (b[index] != '0' && b[index] != '1')
		return (0);

	index++;
	}

	index--;

	while (index >= 0)
	{
	if (b[index] == '1')
		result += bit_value;

	bit_value *= 2;
	index--;
	}

	return (result);
}
