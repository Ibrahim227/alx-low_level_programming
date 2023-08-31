#include "main.h"

/**
  * get_bit - return a value of a bit
  * @n: long int
  *@index: index of bit you want to get
  *
  * Return: returns the bit at index
  */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_var;

	if (index > 63)
		return (-1);

	bit_var = (n >> index) & 1;

	return (bit_var);
}

