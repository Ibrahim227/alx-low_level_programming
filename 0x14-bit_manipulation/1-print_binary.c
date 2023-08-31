#include "main.h"

/**
  * print_binary - prints the binary representations
  * @n: a long int
  *
  * Return: void
  */
void print_binary(unsigned long int n)
{
	int z, next = 0;
	unsigned long int actual_val;

	for (z = 63; z >= 0; z--)
	{
		actual_val = n >> z;

		if (actual_val & 1)
		{
			_putchar('1');
			next++;
		}
		else if (next)
			_putchar('0');
	}

	if (!next)
		_putchar('0');
}

