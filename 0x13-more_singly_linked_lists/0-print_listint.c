#include<stdio.h>
#include "lists.h"

/**
  * print_listint - a function that prints all the elements of a list
  * @h: linked list type
  *
  * Return: number of nodes
  */
size_t print_listint(const listint_t *h)
{
	size_t zero = 0;

	while (h)
	{
		printf("%d\n", h->n);
		zero++;
		h = h->next;
	}

	return (zero);
}
