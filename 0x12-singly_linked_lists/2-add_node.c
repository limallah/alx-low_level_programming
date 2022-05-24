#include "lists.h"

int _strlen_recursion(char *s);

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to the first element of the list.
 * @str: string to set in the new node.
 * Return: address of the new element, or NULL if it failed
 **/
list_t *add_node(list_t **head, const char *str)
{
	list_t *mynew;

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
	nmyew->len = _strlen_recursion(new->str);
	mynew->next = *head;
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
