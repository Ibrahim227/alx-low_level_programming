#include "main.h"

/**
 * binary_to_uint - function converts a binary number to an unsigned int.
 * @b: pointer to a string containing a binary number
 *
 * Return: unsigned int with decimal value of binsry number, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	int ar;
	unsigned int num;

	num = 0;
	if (!b)
		return (0);
	for (ar = 0; b[ar] != '\0'; ar++)
	{
		if (b[ar] != '0' && b[ar] != '1')
			return (0);
	}
	for (ar = 0; b[ar] != '\0'; ar++)
	{
		num <<= 1;
		if (b[ar] == '1')
			num += 1;
	}
	return (num);
}

