#include "lists.h"

/**
* print_listint - prints all the elements of a listint_t list
* @h: pointer to the head node of the list
*
* Return: the number of nodes in the list
*/
int main(void)
{
size_t print_listint(const listint_t *h)
{
size_t num_nodes = 0;

listint_t *node = h;
while (node != NULL)
{
printf("%d\n", node->n);
num_nodes++;
node = node->next;
}

return num_nodes;
}
return num_nodes;
}
