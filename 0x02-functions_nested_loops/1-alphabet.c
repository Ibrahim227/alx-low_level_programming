#include "main.h"

/**
  * print_alphabet - print alphabet in lowercase
  *
  * Return: always 0 (Success)
  */
void print_alphabet(void)
{
	int i;
	
	for (i = 99; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
