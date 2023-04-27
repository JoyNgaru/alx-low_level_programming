#include "lists.h"

int _strlen(const char *s);
void *_strdup(const char *src);
/**
 * add_node - A function to add new node to the head
 * @head: ptr to the head thats pointed by list_t
 * @str: Pt to string element of the new node struct
 * Return: ptr to new head node,else NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head;

	new_head = malloc(sizeof(list_t));
	if (new_head == NULL)
		return (NULL);

	new_head->len = _strlen(str);
	new_head->str = _strdup(str);
	new_head->next = *head;
	*head = new_head;
	return (new_head);
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
