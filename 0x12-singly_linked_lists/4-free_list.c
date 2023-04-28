#include <stdlib.h>
#include "lists.h"

/**
* free_list - frees a linked list
* @head: list_t list to be freed
*/
void free_list(list_t *head)
{
list_t *current = head; // use a pointer to traverse the list
list_t *next; // use another pointer to store the next node

while (current != NULL) // loop until the end of the list
{
next = current->next; // save the next node
free(current->str); // free the string of the current node
free(current); // free the current node
current = next; // move to the next node
}
}
