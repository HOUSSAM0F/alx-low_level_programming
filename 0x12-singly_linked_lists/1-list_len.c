#include <stdlib.h>
#include "lists.h"

/**
* list_len - returns the number of elements in a linked list
* @h: pointer to the list_t list
*
* Return: number of elements in h
*/
size_t list_len(const list_t *h)
{
size_t n = 0; // initialize n to 0
const list_t *current = h; // use a pointer to traverse the list

while (current != NULL) // loop until the end of the list
{
n++; // increment n by 1
current = current->next; // move to the next node
}
return (n); // return the number of elements
}
