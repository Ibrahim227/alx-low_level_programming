#include "main.h"

/**
  * print_binary - prints the binary representation of a number
  * @n: the integer
  *
  * Return: return nothing
  */
void print_binary(unsigned long int n)
{
	int k, next = 0;
	unsigned long int val;

	for (k = 63; k >= 0; k--)
	{
		val = n >> k;

		if (val & 1)
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
