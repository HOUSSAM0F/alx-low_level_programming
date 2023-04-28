#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node_end - adds a new node at the end of a linked list
* @head: double pointer to the list_t list
* @str: string to put in the new node
*
* Return: address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new; // declare a new node pointer
list_t *temp = *head; // use a temporary pointer to traverse the list
size_t len = strlen(str); // get the length of the string

new = malloc(sizeof(list_t)); // allocate memory for the new node
if (new == NULL) // check if allocation failed
return (NULL);

new->str = strdup(str); // copy the string to the new node
new->len = len; // assign the length to the new node
new->next = NULL; // make the new node point to NULL

if (*head == NULL) // check if the list is empty
{
*head = new; // make the new node the head of the list
return (new); // return the new node
}

while (temp->next != NULL) // loop until the last node
temp = temp->next; // move to the next node

temp->next = new; // link the last node to the new node

return (new); // return the new node
}
