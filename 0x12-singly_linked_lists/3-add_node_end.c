#include "lists.h"

int _strlen_recursion(char *s);

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to the first element of the list.
 * @str: string to set in the new node.
 * Return: address of the new element, or NULL if it failed
 **/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *mynew, *aux = *head;

	mynew = malloc(sizeof(list_t));
	if (mynew == NULL)
	{
		return (NULL);
	}
	mynew->str = strdup(str);
	if (!mynew->str)
	{
		free(mynew);
		return (NULL);
	}
	mynew->len = _strlen_recursion(mynew->str);
	mynew->next = NULL;

	if (aux)
	{
		while (aux->next)
			aux = aux->next;
		aux->next = mynew;
	}
	else
		*head = mynew;

	return (mynew);
}

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string.
 * Return: length of @s.
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
