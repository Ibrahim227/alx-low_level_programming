#include "main.h"

/**
  * clear_bit - sets the value of a bit 0 at a given index
  * @n: integer
  * @index: starting from 0 of the bit you want to set
  *
  * Return: return 1 if it worked, or -1 if an error occured
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);

	return (1);
}