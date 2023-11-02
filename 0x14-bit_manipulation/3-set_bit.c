#include "main.h"

/**
 * set_bit - prog sets the value of a bit to 1.
 * @num: number to set
 * @index: index at which to set bit
 *
 * Return: 1 if success, or -1 if an error occurred
 */
int set_bit(unsigned long int *num, unsigned int index)
{
	unsigned long int setbitvalue;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	setbitvalue = 1 << index;
	*num = *num | setbitvalue;
	return (1);
}

