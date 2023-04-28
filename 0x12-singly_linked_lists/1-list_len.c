#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the num of elements in a linked list
 * @h: pointer to d list_t list
 *
 * Return: num of elements in h
 */
size_t list_len(const list_t *h);
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
