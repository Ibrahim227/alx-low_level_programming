#include<stdio.h>
#include "main.h"

/**
  * main - prints the program
  * @argc: print
  * @argv: print the
  *
  * Return: Always 0(Success)
  */
int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
