#include "lists.h"
/**
* get_nodeint_at_index - returns the nth node of linked list
* @head:points to head of the life
* @index: index of the node
*
* Return: address of the node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int b = 0;
listint_t *temp = head;

while (temp && b < index)
{
temp = temp->next;
b++;
}

return (temp ? temp : NULL);
}


