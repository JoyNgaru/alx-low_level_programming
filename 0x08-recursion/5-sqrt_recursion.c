#include "main.h"
/**
 * _sqrt_recursion - output the squareroot of a recursion
 * natural_sqrt_recursion - natural sqrt
 * @n: number to squareroot
 *
 * Return: -1 if n has no natural root else, root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else (n == 0)
	{
		return (0);
