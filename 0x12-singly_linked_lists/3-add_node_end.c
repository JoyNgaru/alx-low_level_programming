#include "lists.h"

int _strlen(const char *s);

void *_strdup(const char *src);

/**
 * add_node_end - A function to add new node to the head
 * @head: ptr to the head thats pointed by list_t
 * @str: Pt to string element of the new node struct
 * Return: ptr to head node,else NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_tail, *present_node;

	new_tail = malloc(sizeof(list_t));
	if (new_tail == NULL)
		return (NULL);

	new_tail->len = _strlen(str);
	new_tail->str = _strdup(str);
	new_tail->next = NULL;
	if (*head == NULL)
		*head = new_tail;
	else
	{
		present_node = *head;
		while (present_node->next)
			present_node = present_node->next;
		present_node->next = new_tail;
	}
	return (*head);
}


/**
 * _strlen - funct to output length of the string
 * @s: string to work with
 * Return: string length
 */
int _strlen(const char *s)
{
	int content;

	for (content = 0; s[content]; content++)
		;
	return (content);
}

/**
 * _strdup - funct to duplicate string from src to dest
 * @src: string to be duplicated is here
 * Return: destination of  copied string
 */
void *_strdup(const char *src)
{
	int length;
	int content;
	char *dest;

	length = _strlen(src);
	dest = malloc((length + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	for (content = 0; src[content]; content++)
		dest[content] = src[content];
	dest[content] = '\0';
	return (dest);
}
