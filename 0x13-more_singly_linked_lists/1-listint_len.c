#include "lists.h"

/**
  * listint_len - retun the number of elements in a linked list
  * @h: linked lit type
  *
  * Return: nodes number
  */
size_t listint_len(const listint_t *h)
{
	size_t one = 0;

	while (h)
	{
		one++;
		h = h->next;
	}

	return (one);
}
