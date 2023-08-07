#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 * @b: Pointer to the binary string.
 *
 * Return: The unsigned integer representation of the binary string,
 *         or 0 if the string is not a valid binary.
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	int slen = strlen(b);
	int decimal = 1;
	int sum = 0;

	for (i = (slen - 1); i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (NULL);
		}
		sum = sum + (b[i] - '0') * decimal;
		decimal = decimal * 2;
	}

	return (sum);
}

