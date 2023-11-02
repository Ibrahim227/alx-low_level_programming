#include "main.h"

/**
 * get_endianness - prog checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int ab;
	char *bc;

	ab = 1;
	bc = (char *)&ab;
	return (*bc);
}

