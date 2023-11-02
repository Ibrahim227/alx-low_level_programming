#include "main.h"

/**
 * _pow - func calculates (base ^ power)
 * @baseint: base of the exponent
 * @power: power of the exponent
 *
 * Return: value of (base ^ power)
 */
unsigned long int _pow(unsigned int baseint, unsigned int power)
{
	unsigned long int num;
	unsigned int a;

	num = 1;
	for (a = 1; a <= power; a++)
		num *= baseint;
	return (num);
}

/**
 * print_binary - prints a number in binary notation
 * @let: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int let)
{
	unsigned long int divop, check;
	char flag;

	flag = 0;
	divop = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divop != 0)
	{
		check = let & divop;
		if (check == divop)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divop == 1)
		{
			_putchar('0');
		}
		divop >>= 1;
	}
}

