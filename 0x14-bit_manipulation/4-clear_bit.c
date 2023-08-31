#include "main.h"

/**
  * clear_bit - sets the value of abit to 0
  * @n: a poointer to int
  * @index: the start index
  *
  * Return: 1 if it worked and 0 if not
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) & *n);
	return (1);
}
