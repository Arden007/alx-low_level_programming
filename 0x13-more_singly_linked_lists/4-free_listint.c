#include "lists.h"
/**
 * free_listint - function that frees a listint_t list.
 * @head: pointer to the first node(headnode)
 */

void free_listint(listint_t *head)
{
listint_t *tempNode;

while (head)
{
tempNode = head;
head = head->next;
free(tempNode);
}
}
