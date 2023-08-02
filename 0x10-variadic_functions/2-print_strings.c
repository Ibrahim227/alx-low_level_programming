#include "variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>

/**
  * print_strings - print string, followed by a new line
  * @separator: to be printed between string
  * @n: number of string passed tp a function
  *
  * Return: return nothing
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list letter;
	char *z;
	unsigned int j;

	va_start(letter, n);

	for (j = 0; j < n; j++)
	{
		z = va_arg(letter, char *);

		if (z == NULL)
			printf("(nil)");
		else
			printf("%s", z);

		if (j != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(letter);
}
