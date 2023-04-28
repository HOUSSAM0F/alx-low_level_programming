#include <stdio.h>
#include "lists.h"
/**
* print_list - prints all the elements of a list_t list.
* @h: singly linked list.
* Return: number of elements in the list.
*/

size_t print_list(const list_t *h)
{
size_t nelem = 0; // initialize nelem to 0
const list_t *current = h; // use a pointer to traverse the list

while (current != NULL) // loop until the end of the list
{
// use a ternary operator to print the string or "(nil)" if it is NULL
printf("[%d] %s\n", current->str ? current->len : 0, current->str ? current->str : "(nil)");
current = current->next; // move to the next node
nelem++; // increment the element count
}
return (nelem); // return the number of elements
}
