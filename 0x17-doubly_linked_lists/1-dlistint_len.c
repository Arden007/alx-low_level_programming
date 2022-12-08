#include "lists.h"
/**
 * dlistint_len - counts and returns number of elements of a dlistint_t list.
 * @h: pointer to head of the list
 * Return: number of nodes in the list
 **/

size_t dlistint_len(const dlistint_t *h)
{
int size = 0;

if (h == NULL)
return (size);

while (h->prev != NULL)
h = h->prev;

while (h != NULL)
{
size++;
h = h->next;
}

return (size);
}
