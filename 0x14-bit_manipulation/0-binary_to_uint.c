#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: The binary string.
 *
 * Return: The converted unsigned int, or 0 if the string contains
 *         non-binary characters or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		result = result * 2 + (*b - '0');
		b++;
	}

	return (result);
}
