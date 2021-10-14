#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 *         Otherwise - the converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	while (b != NULL && *b)
		if (*b == '0' || *b == '1')
			num <<= 1, num |= *b++ == '1';
		else
			return (0);
	return (num);
}
