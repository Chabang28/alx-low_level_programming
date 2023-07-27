#include "lists.h"

/**
*add_node - a function that adds a new node at the beginning of a list_t list
*@str: string
*@head: head
*Return: address of new element, otherwise NULL if fail
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *latest;
	size_t i;

	latest = malloc(sizeof(list_t));
	if (latest == NULL)
		return (NULL);
	latest->str = strdup(str);
	for (i = 0; str[i]; i++)
		;
	latest->len = i;
	latest->next = *head;
	*head = latest;

	return (*head);
}
