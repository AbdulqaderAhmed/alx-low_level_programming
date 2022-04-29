#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointing to the binary number to be converted
 * Return: the converted number or
 * 0 if b is NULL or b is not 0 or 1.
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		dec = (2 * dec) + (b[i] - '0');
	}
	return (dec);
}
