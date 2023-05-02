#include "lists.h"

/**
* print_listint - prints all the elements of a listint_t list
* @h: pointer to the head node of the list
*
* Return: the number of nodes in the list
*/
size_t print_listint(const listint_t *h)
{
size_t num_nodes = 0;

for (const listint_t *node = h; node != NULL; node = node->next)
{
printf("%d\n", node->n);
num_nodes++;
}

return num_nodes;
}
