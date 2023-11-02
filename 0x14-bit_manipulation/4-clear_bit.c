#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - This prog sets the value of a bit.
 * @num : parameter
 * @index: index
 * Return: 1 if success, -1 if error
 */
int clear_bit(unsigned long int *num, unsigned int index)
{
	if (index > sizeof(num) * 8)
		return (-1);
	*num &= ~(1 << index);
	return (1);
}

