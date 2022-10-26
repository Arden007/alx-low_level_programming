#include "lists.h"
/**
 * add_nodeint_end - a function that adds a new node
 *            at the end of the node
 *
 * @head: pointer to the first node of the list(headnode)
 * @n: int element value for the new node.
 *
 * Return: address of the new element or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newNode;
listint_t *tempNode;

tempNode = *head;
newNode = malloc(sizeof(listint_t));
if (newNode == NULL)
{
return (NULL);
}
newNode->n = n;
newNode->next = NULL;

if (*head == NULL)
{
*head = newNode;
return (newNode);
}

while (tempNode->next != NULL)
{
tempNode = tempNode->next;
}
tempNode->next = newNode;

return (newNode);
}
