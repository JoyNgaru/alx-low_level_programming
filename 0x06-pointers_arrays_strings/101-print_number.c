#include "main.h"

/**
  * print_number - Prints any integer with putchar
  * @n: Number to be printed
  *
  * Return: 0
  */
void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		_putchar('-');
		x = -n;
	}

	x = n;

	if (x / 10 != 0)
		print_number(x / 10);

	_putchar(x % 10 + '0');
}
