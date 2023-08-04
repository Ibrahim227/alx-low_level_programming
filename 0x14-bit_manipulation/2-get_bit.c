#include "main.h"

/**
  * get_bit - returns the value of a bit at a given index
  * @n: integer
  * @index: index, starting from 0 of the bit ou want to get
  *
  * Return: return the value of the bit at index or -1 if an error occured
  */
int get_bit(unsigned long int n, unsigned int index)
{
	int ret_bit;

	if (index > 63)
		return (-1);

	ret_bit = (n >> index) & 1;

	return (ret_bit);
}
