#include "main.h"

/**
  * flip_bits - returns the number of bit you'd need to get
  * @n: integer
  * @m: integer
  *
  * Return: retune integer
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, next = 0;
	unsigned long int actual;
	unsigned long int exclusive_val = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		actual = exclusive_val >> j;
		if (actual & 1)
			next++;
	}

	return (next);
}
