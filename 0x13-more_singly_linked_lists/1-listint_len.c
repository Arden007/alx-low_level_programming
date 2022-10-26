#include "lists.h"
/**
 * listint_len - a function that returns the number of elements.
 *
 * @h: pointer to the first node(headnode)
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
const listint_t *temp;
size_t i;

temp = h;
for (i = 0; temp; i++)
{
temp = temp->next;
}
return (i);
}
