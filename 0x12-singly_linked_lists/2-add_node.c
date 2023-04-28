#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node - adds a new node at the beginning of a linked list
* @head: double pointer to the list_t list
* @str: new string to add in the node
*
* Return: the address of the new element, or NULL if it fails
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new; // declare a new node pointer
size_t len = strlen(str); // get the length of the string

new = malloc(sizeof(list_t)); // allocate memory for the new node
if (new == NULL) // check if allocation failed
return (NULL);

new->str = strdup(str); // copy the string to the new node
new->len = len; // assign the length to the new node
new->next = *head; // link the new node to the existing list
*head = new; // make the new node the head of the list

return (new); // return the new node
}
