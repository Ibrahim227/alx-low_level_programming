#include "main.h"

/**
 *  binary_to_uint - converts a binary number to an int
 *  * @b: pointing to a string of 0 and 1 chars
 *  *
 *  * Return: the cinverted number
*/
unsigned int binary_to_uint(const char *b)
{
	int s;
	unsigned int k = 0;

	if (!b)
		return (0);

	for (s = 0; b[s]; s++)
	{
		if (b[s] < '0' || b[s] > '1')
			return (0);
		k = 2 * k + (b[s] - '0');
	}

	return (k);
}
