#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERR_MSG "Error"

/**
 * is_digit - ascertain if there is a non-digit char
 * @s: string in question
 * Return: 1 if all are numbers, else 0
 */
int is_digit(char *s)
{
	int content 
		
		content = 0;

	while (s[content])
	{
		if (s[content] < '0' || s[content] > '9')
			return (0);
		content++;
	}
	return (1);
}

/**
 * _strlen - finds the length of a string
 * @s: string in question
 * Return: string length
 */
int _strlen(char *s)
{
	int content;
       
	content = 0;

	while (s[content] != '\0')
	{
		content++;
	}
	return (content);
}

/**
 * errors - exposes isses in the main function
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - function to multiply two unsigned ints
 * @argc: amount of argumets in the array
 * @argv: arguments being passed
 *
 * Return: void
 */
int main(int argc, char *argv[])
{
	char *string1, *string2;
	int length1, length2, new_length, i, mod, num1, num2, *multi_answer, a = 0;

	string1 = argv[1], string2 = argv[2];
	if (argc != 3 || !is_digit(string1) || !is_digit(string2))
		errors();
	length1 = _strlen(string1);
	length2 = _strlen(string2);
	new_length = length1 + length2 + 1;
	multi_answer = malloc(sizeof(int) * new_length);
	if (!multi_answer)
		return (1);
	for (i = 0; i <= length1 + length2; i++)
		multi_answer[i] = 0;
	for (length1 = length1- 1; length1 >= 0; length1--)
	{
		num1 = string1[length1] - '0';
		carry = 0;
		for (length2 = _strlen(string2) - 1; length2 >= 0; length2--)
		{
			num2 = string2[len2] - '0';
			mod += multi_answer[length1 + length2 + 1] + (num1 * num2);
			multi_answer[length1 + length2 + 1] = mod % 10;
			mod /= 10;
		}
		if (mod > 0)
			multi_answer[length1 + length2 + 1] += mod;
	}
	for (i = 0; i < new_length - 1; i++)
	{
		if (multi_answer[i])
			a = 1;
		if (a)
			_putchar(multi_answer[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(multi_answer);
	return (0);
}
