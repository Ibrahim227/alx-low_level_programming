#include "main.h"

/**
  * set_bit - set the value of a bit
  * @n: a pointer of int
  * @index: the bit's index
  *
  * Return: 1 if worked and 0 if not
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
