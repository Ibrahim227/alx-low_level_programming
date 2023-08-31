#include "main.h"

/**
  * flip_bits - retunrs a number of bitneed to flip
  * @n: long int
  * @m: long int
  *
  * Return: the flipped number
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k, n_val = 0;
	unsigned long int act_val;
	unsigned long int prior_val = n ^ m;

	for (k = 63; k >= 0; k--)
	{
		act_val = prior_val >> k;
		if (act_val & 1)
			n_vall++;

	}

	return (n_val);
}

