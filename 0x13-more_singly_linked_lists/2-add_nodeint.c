#include "lists.h"

/**
  * add_nodeint - adds a new node at the beginning of a list
  * @head: point to a pointer type list
  * @n: node number
  *
  * Return: the address of the new elements, otherwise NULL if failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *zoro;

	zoro = malloc(sizeof(listint_t));
	if (!zoro)
		return (NULL);

	zoro->n = n;
	zoro->next =  *head;
	*head = zoro;

	return (zoro);
}
