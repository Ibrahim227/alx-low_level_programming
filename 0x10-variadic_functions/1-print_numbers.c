#include "variadic_functions.h"
#include<stdarg.h>
#include<stdio.h>

/**
  * print_numbers - print numbers followed by a new line
  * @separator: separate between character
  * @n: integer
  *
  * Return: return nothing
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int k;

	va_start(ap, n);

	for (k = 0; k < n; k++)
	{
		printf("%d", va_arg(ap, int));

		if (k != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(ap);
}
