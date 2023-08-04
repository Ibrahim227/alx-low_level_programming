#include "main.h"

/**
  * get_endianness - get a value
  * @void: return nothing
  *
  * Return: return nothing
  */
int get_endianness(void)
{
	unsigned int g = 1;
	char *c = (char *)&g;

	return (*c);
}
