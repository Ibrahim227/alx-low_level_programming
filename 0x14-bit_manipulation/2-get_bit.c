#include"main.h"

/**
 * get_bit - prog returns the value of a bit at an index.
 * @num: number to check bits in
 * @index: index at which to check bit
 *
 * Return: value of the bit, or -1 if there is an error
 */
int get_bit(unsigned long int num, unsigned int index)
{
	unsigned long int divop, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divop = 1 << index;
	check = num & divop;
	if (check == divop)
		return (1);
	return (0);
}

