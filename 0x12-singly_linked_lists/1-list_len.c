#include <stdlib.h>
#include "lists.h"

/**
* list_len - number of elements list
* @h: pointer to structure
* Return: length.
*/

size_t list_len(const list_t *h)
{

unsigned int i = 0;

while (h != NULL)
{
i++;
h = h->next;
}
return (i);
}

vi 2-add_node.c
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node - add new node begining of list_t
* @head: pointer to structure
* @str: string
* Return: the adrres of new element
*/

list_t *add_node(list_t **head, const char *str)
{
list_t *newNode;
unsigned int length = 0;

newNode = malloc(sizeof(list_t));
if (newNode == NULL)
{
free(newNode);
return (NULL);
}
newNode->str = strdup(str);
while (str[length] != '\0')
{
length++;
}
newNode->len = length;
if (*head != NULL)
newNode->next = *head;
if (*head == NULL)
newNode->next = NULL;
*head = newNode;
return (*head);
}
