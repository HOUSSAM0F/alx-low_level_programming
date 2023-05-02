#include <stdio.h>

/**
* struct listint_s - singly linked list
* @n: integer
* @next: points to the next node
*
* Description: singly linked list node structure
* 
*/
typedef struct listint_s
{
int n;
struct listint_s *next;
} listint_t;

/**
* print_listint - prints all the elements of a listint_t list
* @h: pointer to the head of the list
*
* Return: the number of nodes in the list
*/
size_t print_listint(const listint_t *h)
{
size_t count = 0;
while (h != NULL) {
printf("%d\n", h->n);
h = h->next;
count++;
}
return count;
}

int main(void)
{
listint_t *head = NULL;

/* Add some nodes to the list */
head = add_node(head, 1);
head = add_node(head, 2);
head = add_node(head, 3);

/* Print the list */
size_t count = print_listint(head);

/* Print the number of nodes */
printf("The list has %zu nodes\n", count);

return 0;
}
